#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfPlusEqualExpressionInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak (const class GALGAS_selfPlusEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_selfPlusEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfPlusEqualExpressionInstructionAST bang_selfPlusEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfMinusEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfMinusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfMinusEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selfMinusEqualExpressionInstructionAST (const class cPtr_selfMinusEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfMinusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfMinusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_semanticExpressionAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfMinusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfMinusEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfMinusEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfMinusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_selfMinusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_semanticExpressionAST & in_mExpression
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfMinusEqualExpressionInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak (const class GALGAS_selfMinusEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_selfMinusEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfMinusEqualExpressionInstructionAST bang_selfMinusEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfMulEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfMulEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfMulEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selfMulEqualExpressionInstructionAST (const class cPtr_selfMulEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfMulEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfMulEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_semanticExpressionAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfMulEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfMulEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfMulEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfMulEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_selfMulEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_semanticExpressionAST & in_mExpression
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfMulEqualExpressionInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfMulEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfMulEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfMulEqualExpressionInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfMulEqualExpressionInstructionAST_2D_weak (const class GALGAS_selfMulEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_selfMulEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_selfMulEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfMulEqualExpressionInstructionAST bang_selfMulEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfMulEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfMulEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfMulEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfMulEqualExpressionInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfDivEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfDivEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfDivEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selfDivEqualExpressionInstructionAST (const class cPtr_selfDivEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfDivEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfDivEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_semanticExpressionAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfDivEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfDivEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfDivEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfDivEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_selfDivEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_semanticExpressionAST & in_mExpression
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfDivEqualExpressionInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfDivEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfDivEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfDivEqualExpressionInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfDivEqualExpressionInstructionAST_2D_weak (const class GALGAS_selfDivEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_selfDivEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_selfDivEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfDivEqualExpressionInstructionAST bang_selfDivEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfDivEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfDivEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfDivEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfDivEqualExpressionInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @setterCallInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterCallInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_setterCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_setterCallInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_setterCallInstructionAST (const class cPtr_setterCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mReceiverStructProperties (void) const ;

  public: class GALGAS_lstring readProperty_mTypeNameForCasting (void) const ;

  public: class GALGAS_lstring readProperty_mSetterName (void) const ;

  public: class GALGAS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_setterCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_lstringlist & inOperand3,
                                                                        const class GALGAS_lstring & inOperand4,
                                                                        const class GALGAS_lstring & inOperand5,
                                                                        const class GALGAS_actualParameterListAST & inOperand6
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @setterCallInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_setterCallInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mReceiverStructProperties ;
  public: GALGAS_lstring mProperty_mTypeNameForCasting ;
  public: GALGAS_lstring mProperty_mSetterName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public: cPtr_setterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                         const GALGAS_bool & in_mPrefixedBySelf,
                                         const GALGAS_lstring & in_mReceiverName,
                                         const GALGAS_lstringlist & in_mReceiverStructProperties,
                                         const GALGAS_lstring & in_mTypeNameForCasting,
                                         const GALGAS_lstring & in_mSetterName,
                                         const GALGAS_actualParameterListAST & in_mActualParameterList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @setterCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterCallInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_setterCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_setterCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_setterCallInstructionAST_2D_weak (const class GALGAS_setterCallInstructionAST & inSource) ;

  public: GALGAS_setterCallInstructionAST_2D_weak & operator = (const class GALGAS_setterCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_setterCallInstructionAST bang_setterCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_setterCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfSetterCallInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfSetterCallInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfSetterCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfSetterCallInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selfSetterCallInstructionAST (const class cPtr_selfSetterCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mSetterName (void) const ;

  public: class GALGAS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfSetterCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfSetterCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_actualParameterListAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfSetterCallInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfSetterCallInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mSetterName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public: cPtr_selfSetterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mSetterName,
                                             const GALGAS_actualParameterListAST & in_mActualParameterList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfSetterCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfSetterCallInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfSetterCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfSetterCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfSetterCallInstructionAST_2D_weak (const class GALGAS_selfSetterCallInstructionAST & inSource) ;

  public: GALGAS_selfSetterCallInstructionAST_2D_weak & operator = (const class GALGAS_selfSetterCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfSetterCallInstructionAST bang_selfSetterCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfSetterCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfSetterCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @setterCallInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_setterCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_setterCallInstructionForGeneration (const class cPtr_setterCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mReceiverCppName (void) const ;

  public: class GALGAS_string readProperty_mReceiverBaseName (void) const ;

  public: class GALGAS_lstringlist readProperty_mReceiverStructAttributes (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mCastType (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstring readProperty_mSetterName (void) const ;

  public: class GALGAS_methodKind readProperty_mKind (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mMethodBaseType (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_setterCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterCallInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                  const class GALGAS_lstring & inOperand6,
                                                                                  const class GALGAS_methodKind & inOperand7,
                                                                                  const class GALGAS_actualParameterListForGeneration & inOperand8,
                                                                                  const class GALGAS_bool & inOperand9,
                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand10
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @setterCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_setterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mReceiverCppName ;
  public: GALGAS_string mProperty_mReceiverBaseName ;
  public: GALGAS_lstringlist mProperty_mReceiverStructAttributes ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mCastType ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_lstring mProperty_mSetterName ;
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mMethodBaseType ;

//--- Constructor
  public: cPtr_setterCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_string & in_mReceiverCppName,
                                                   const GALGAS_string & in_mReceiverBaseName,
                                                   const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                   const GALGAS_unifiedTypeMapEntry & in_mCastType,
                                                   const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                   const GALGAS_lstring & in_mSetterName,
                                                   const GALGAS_methodKind & in_mKind,
                                                   const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                   const GALGAS_bool & in_mHasCompilerArgument,
                                                   const GALGAS_unifiedTypeMapEntry & in_mMethodBaseType
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @setterCallInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterCallInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_setterCallInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_setterCallInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_setterCallInstructionForGeneration_2D_weak (const class GALGAS_setterCallInstructionForGeneration & inSource) ;

  public: GALGAS_setterCallInstructionForGeneration_2D_weak & operator = (const class GALGAS_setterCallInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_setterCallInstructionForGeneration bang_setterCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_setterCallInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterCallInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterCallInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfSetterCallInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfSetterCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_selfSetterCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selfSetterCallInstructionForGeneration (const class cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mSelfCppName (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstring readProperty_mSetterName (void) const ;

  public: class GALGAS_methodKind readProperty_mKind (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfSetterCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfSetterCallInstructionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_methodKind & inOperand3,
                                                                                      const class GALGAS_actualParameterListForGeneration & inOperand4,
                                                                                      const class GALGAS_bool & inOperand5
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfSetterCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfSetterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mSelfCppName ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_lstring mProperty_mSetterName ;
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public: cPtr_selfSetterCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                       const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                       const GALGAS_lstring & in_mSetterName,
                                                       const GALGAS_methodKind & in_mKind,
                                                       const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                       const GALGAS_bool & in_mHasCompilerArgument
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfSetterCallInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfSetterCallInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfSetterCallInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfSetterCallInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfSetterCallInstructionForGeneration_2D_weak (const class GALGAS_selfSetterCallInstructionForGeneration & inSource) ;

  public: GALGAS_selfSetterCallInstructionForGeneration_2D_weak & operator = (const class GALGAS_selfSetterCallInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfSetterCallInstructionForGeneration bang_selfSetterCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfSetterCallInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfSetterCallInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchBranchesAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchBranchesAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_switchBranchesAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_switchBranchesAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstringlist & in_mSwitchConstantList,
                                                 const class GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                 const class GALGAS_semanticInstructionListAST & in_mInstructions,
                                                 const class GALGAS_location & in_mEndOfBranch
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchBranchesAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchBranchesAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_switchBranchesAST constructor_listWithValue (const class GALGAS_lstringlist & inOperand0,
                                                                           const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                           const class GALGAS_semanticInstructionListAST & inOperand2,
                                                                           const class GALGAS_location & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchBranchesAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstringlist & inOperand0,
                                                     const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                     const class GALGAS_semanticInstructionListAST & inOperand2,
                                                     const class GALGAS_location & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_switchBranchesAST add_operation (const GALGAS_switchBranchesAST & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_switchBranchesAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstringlist constinArgument0,
                                                      class GALGAS_switchExtractedValuesListAST constinArgument1,
                                                      class GALGAS_semanticInstructionListAST constinArgument2,
                                                      class GALGAS_location constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstringlist & outArgument0,
                                                 class GALGAS_switchExtractedValuesListAST & outArgument1,
                                                 class GALGAS_semanticInstructionListAST & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstringlist & outArgument0,
                                                class GALGAS_switchExtractedValuesListAST & outArgument1,
                                                class GALGAS_semanticInstructionListAST & outArgument2,
                                                class GALGAS_location & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstringlist & outArgument0,
                                                      class GALGAS_switchExtractedValuesListAST & outArgument1,
                                                      class GALGAS_semanticInstructionListAST & outArgument2,
                                                      class GALGAS_location & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedValuesExtractionAtIndex (class GALGAS_switchExtractedValuesListAST constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBranchAtIndex (class GALGAS_location constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionsAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSwitchConstantListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class GALGAS_semanticInstructionListAST & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstringlist & outArgument0,
                                             class GALGAS_switchExtractedValuesListAST & outArgument1,
                                             class GALGAS_semanticInstructionListAST & outArgument2,
                                             class GALGAS_location & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_switchExtractedValuesListAST getter_mAssociatedValuesExtractionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBranchAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mSwitchConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchBranchesAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchBranchesAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchBranchesAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_switchBranchesAST ;
 
} ; // End of GALGAS_switchBranchesAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_switchBranchesAST : public cGenericAbstractEnumerator {
  public: cEnumerator_switchBranchesAST (const GALGAS_switchBranchesAST & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstringlist current_mSwitchConstantList (LOCATION_ARGS) const ;
  public: class GALGAS_switchExtractedValuesListAST current_mAssociatedValuesExtraction (LOCATION_ARGS) const ;
  public: class GALGAS_semanticInstructionListAST current_mInstructions (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfBranch (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_switchBranchesAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchBranchesAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchBranchesAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstringlist mProperty_mSwitchConstantList ;
  public: inline GALGAS_lstringlist readProperty_mSwitchConstantList (void) const {
    return mProperty_mSwitchConstantList ;
  }

  public: GALGAS_switchExtractedValuesListAST mProperty_mAssociatedValuesExtraction ;
  public: inline GALGAS_switchExtractedValuesListAST readProperty_mAssociatedValuesExtraction (void) const {
    return mProperty_mAssociatedValuesExtraction ;
  }

  public: GALGAS_semanticInstructionListAST mProperty_mInstructions ;
  public: inline GALGAS_semanticInstructionListAST readProperty_mInstructions (void) const {
    return mProperty_mInstructions ;
  }

  public: GALGAS_location mProperty_mEndOfBranch ;
  public: inline GALGAS_location readProperty_mEndOfBranch (void) const {
    return mProperty_mEndOfBranch ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_switchBranchesAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_switchBranchesAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSwitchConstantList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSwitchConstantList = inValue ;
  }

  public: inline void setter_setMAssociatedValuesExtraction (const GALGAS_switchExtractedValuesListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedValuesExtraction = inValue ;
  }

  public: inline void setter_setMInstructions (const GALGAS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructions = inValue ;
  }

  public: inline void setter_setMEndOfBranch (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranch = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_switchBranchesAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_switchBranchesAST_2D_element (const GALGAS_lstringlist & in_mSwitchConstantList,
                                               const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                               const GALGAS_semanticInstructionListAST & in_mInstructions,
                                               const GALGAS_location & in_mEndOfBranch) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchBranchesAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchBranchesAST_2D_element constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                            const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand2,
                                                                            const class GALGAS_location & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_switchBranchesAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchBranchesAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_switchInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_switchInstructionAST (const class cPtr_switchInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mSwitchExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfSwitchExpression (void) const ;

  public: class GALGAS_switchBranchesAST readProperty_mBranches (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_switch_5F_instruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                    const class GALGAS_location & inOperand2,
                                                                    const class GALGAS_switchBranchesAST & inOperand3,
                                                                    const class GALGAS_location & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_switchInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @switchInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_switchInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mSwitchExpression ;
  public: GALGAS_location mProperty_mEndOfSwitchExpression ;
  public: GALGAS_switchBranchesAST mProperty_mBranches ;
  public: GALGAS_location mProperty_mEndOf_5F_switch_5F_instruction ;

//--- Constructor
  public: cPtr_switchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_semanticExpressionAST & in_mSwitchExpression,
                                     const GALGAS_location & in_mEndOfSwitchExpression,
                                     const GALGAS_switchBranchesAST & in_mBranches,
                                     const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_switchInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_switchInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_switchInstructionAST_2D_weak (const class GALGAS_switchInstructionAST & inSource) ;

  public: GALGAS_switchInstructionAST_2D_weak & operator = (const class GALGAS_switchInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_switchInstructionAST bang_switchInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_switchInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchBranchesForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchBranchesForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_switchBranchesForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_switchBranchesForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstringlist & in_mSwitchConstantList,
                                                 const class GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                 const class GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                 const class GALGAS_semanticInstructionListForGeneration & in_mInstructions
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchBranchesForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchBranchesForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_switchBranchesForGeneration constructor_listWithValue (const class GALGAS_lstringlist & inOperand0,
                                                                                     const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                     const class GALGAS_uint & inOperand2,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchBranchesForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstringlist & inOperand0,
                                                     const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_switchBranchesForGeneration add_operation (const GALGAS_switchBranchesForGeneration & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_switchBranchesForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstringlist constinArgument0,
                                                      class GALGAS_extractedAssociatedValuesForGeneration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_semanticInstructionListForGeneration constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstringlist & outArgument0,
                                                 class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstringlist & outArgument0,
                                                class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstringlist & outArgument0,
                                                      class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBranchLocationIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtractedAssociatedValuesForGenerationAtIndex (class GALGAS_extractedAssociatedValuesForGeneration constinArgument0,
                                                                                          class GALGAS_uint constinArgument1,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionsAtIndex (class GALGAS_semanticInstructionListForGeneration constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSwitchConstantListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstringlist & outArgument0,
                                             class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mEndOfBranchLocationIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extractedAssociatedValuesForGeneration getter_mExtractedAssociatedValuesForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mSwitchConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchBranchesForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchBranchesForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchBranchesForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_switchBranchesForGeneration ;
 
} ; // End of GALGAS_switchBranchesForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_switchBranchesForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_switchBranchesForGeneration (const GALGAS_switchBranchesForGeneration & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstringlist current_mSwitchConstantList (LOCATION_ARGS) const ;
  public: class GALGAS_extractedAssociatedValuesForGeneration current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mEndOfBranchLocationIndex (LOCATION_ARGS) const ;
  public: class GALGAS_semanticInstructionListForGeneration current_mInstructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_switchBranchesForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchBranchesForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchBranchesForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstringlist mProperty_mSwitchConstantList ;
  public: inline GALGAS_lstringlist readProperty_mSwitchConstantList (void) const {
    return mProperty_mSwitchConstantList ;
  }

  public: GALGAS_extractedAssociatedValuesForGeneration mProperty_mExtractedAssociatedValuesForGeneration ;
  public: inline GALGAS_extractedAssociatedValuesForGeneration readProperty_mExtractedAssociatedValuesForGeneration (void) const {
    return mProperty_mExtractedAssociatedValuesForGeneration ;
  }

  public: GALGAS_uint mProperty_mEndOfBranchLocationIndex ;
  public: inline GALGAS_uint readProperty_mEndOfBranchLocationIndex (void) const {
    return mProperty_mEndOfBranchLocationIndex ;
  }

  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructions ;
  public: inline GALGAS_semanticInstructionListForGeneration readProperty_mInstructions (void) const {
    return mProperty_mInstructions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_switchBranchesForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_switchBranchesForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSwitchConstantList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSwitchConstantList = inValue ;
  }

  public: inline void setter_setMExtractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedAssociatedValuesForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfBranchLocationIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranchLocationIndex = inValue ;
  }

  public: inline void setter_setMInstructions (const GALGAS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructions = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_switchBranchesForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_switchBranchesForGeneration_2D_element (const GALGAS_lstringlist & in_mSwitchConstantList,
                                                         const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                         const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                         const GALGAS_semanticInstructionListForGeneration & in_mInstructions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchBranchesForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchBranchesForGeneration_2D_element constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                                      const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                      const class GALGAS_uint & inOperand2,
                                                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_switchBranchesForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchBranchesForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_switchInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_switchInstructionForGeneration (const class cPtr_switchInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mEnumType (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSwitchExpression (void) const ;

  public: class GALGAS_switchBranchesForGeneration readProperty_mBranches (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchInstructionForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                              const class GALGAS_switchBranchesForGeneration & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_switchInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @switchInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_switchInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mEnumType ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSwitchExpression ;
  public: GALGAS_switchBranchesForGeneration mProperty_mBranches ;

//--- Constructor
  public: cPtr_switchInstructionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mEnumType,
                                               const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                               const GALGAS_switchBranchesForGeneration & in_mBranches
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_switchInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_switchInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_switchInstructionForGeneration_2D_weak (const class GALGAS_switchInstructionForGeneration & inSource) ;

  public: GALGAS_switchInstructionForGeneration_2D_weak & operator = (const class GALGAS_switchInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_switchInstructionForGeneration bang_switchInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_switchInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeMethodCallInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeMethodCallInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_typeMethodCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeMethodCallInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_typeMethodCallInstructionAST (const class cPtr_typeMethodCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mMethodName (void) const ;

  public: class GALGAS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeMethodCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeMethodCallInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_actualParameterListAST & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @typeMethodCallInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_typeMethodCallInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mMethodName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;

//--- Constructor
  public: cPtr_typeMethodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mTypeName,
                                             const GALGAS_lstring & in_mMethodName,
                                             const GALGAS_actualParameterListAST & in_mActualParameterList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeMethodCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeMethodCallInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typeMethodCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeMethodCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typeMethodCallInstructionAST_2D_weak (const class GALGAS_typeMethodCallInstructionAST & inSource) ;

  public: GALGAS_typeMethodCallInstructionAST_2D_weak & operator = (const class GALGAS_typeMethodCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typeMethodCallInstructionAST bang_typeMethodCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeMethodCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeMethodCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeMethodCallInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeMethodCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_typeMethodCallInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeMethodCallInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_typeMethodCallInstructionForGeneration (const class cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mMethodName (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeMethodCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeMethodCallInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_actualParameterListForGeneration & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @typeMethodCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_typeMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mMethodName ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public: cPtr_typeMethodCallInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                       const GALGAS_lstring & in_mMethodName,
                                                       const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                       const GALGAS_bool & in_mHasCompilerArgument
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeMethodCallInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeMethodCallInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typeMethodCallInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeMethodCallInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typeMethodCallInstructionForGeneration_2D_weak (const class GALGAS_typeMethodCallInstructionForGeneration & inSource) ;

  public: GALGAS_typeMethodCallInstructionForGeneration_2D_weak & operator = (const class GALGAS_typeMethodCallInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typeMethodCallInstructionForGeneration bang_typeMethodCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeMethodCallInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeMethodCallInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableDeclarationAST (const class cPtr_localVariableDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mVariableName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mVariableName ;

//--- Constructor
  public: cPtr_localVariableDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_lstring & in_mVariableName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localVariableDeclarationAST_2D_weak (const class GALGAS_localVariableDeclarationAST & inSource) ;

  public: GALGAS_localVariableDeclarationAST_2D_weak & operator = (const class GALGAS_localVariableDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localVariableDeclarationAST bang_localVariableDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableDeclarationForGeneration (const class cPtr_localVariableDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mVariableType (void) const ;

  public: class GALGAS_string readProperty_mCppVariableName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_string & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mVariableType ;
  public: GALGAS_string mProperty_mCppVariableName ;

//--- Constructor
  public: cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mVariableType,
                                                      const GALGAS_string & in_mCppVariableName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localVariableDeclarationForGeneration_2D_weak (const class GALGAS_localVariableDeclarationForGeneration & inSource) ;

  public: GALGAS_localVariableDeclarationForGeneration_2D_weak & operator = (const class GALGAS_localVariableDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localVariableDeclarationForGeneration bang_localVariableDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationWithAssignmentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationWithAssignmentAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableDeclarationWithAssignmentAST (const class cPtr_localVariableDeclarationWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mVariableName (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationWithAssignmentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationWithAssignmentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableDeclarationWithAssignmentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mVariableName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_localVariableDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_lstring & in_mVariableName,
                                                          const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationWithAssignmentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (const class GALGAS_localVariableDeclarationWithAssignmentAST & inSource) ;

  public: GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak & operator = (const class GALGAS_localVariableDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localVariableDeclarationWithAssignmentAST bang_localVariableDeclarationWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @warningInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_warningInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_warningInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_warningInstructionAST (const class cPtr_warningInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mLocationExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mMessageExpression (void) const ;

  public: class GALGAS_fixitListAST readProperty_mFixitListAST (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_warningInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_warningInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2,
                                                                     const class GALGAS_fixitListAST & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_warningInstructionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFixitListAST (class GALGAS_fixitListAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocationExpression (class GALGAS_semanticExpressionAST inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMessageExpression (class GALGAS_semanticExpressionAST inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_warningInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @warningInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_warningInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mLocationExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mMessageExpression ;
  public: GALGAS_fixitListAST mProperty_mFixitListAST ;

//--- Constructor
  public: cPtr_warningInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                      const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                      const GALGAS_fixitListAST & in_mFixitListAST
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @warningInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_warningInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_warningInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_warningInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_warningInstructionAST_2D_weak (const class GALGAS_warningInstructionAST & inSource) ;

  public: GALGAS_warningInstructionAST_2D_weak & operator = (const class GALGAS_warningInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_warningInstructionAST bang_warningInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_warningInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_warningInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_warningInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_warningInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @warningInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_warningInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_warningInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_warningInstructionForGeneration (const class cPtr_warningInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mWarningExpression (void) const ;

  public: class GALGAS_fixitListForGeneration readProperty_mFixitListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_warningInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_warningInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                               const class GALGAS_fixitListForGeneration & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_warningInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFixitListForGeneration (class GALGAS_fixitListForGeneration inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWarningExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_warningInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @warningInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_warningInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mWarningExpression ;
  public: GALGAS_fixitListForGeneration mProperty_mFixitListForGeneration ;

//--- Constructor
  public: cPtr_warningInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                const GALGAS_semanticExpressionForGeneration & in_mWarningExpression,
                                                const GALGAS_fixitListForGeneration & in_mFixitListForGeneration
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @warningInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_warningInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_warningInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_warningInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_warningInstructionForGeneration_2D_weak (const class GALGAS_warningInstructionForGeneration & inSource) ;

  public: GALGAS_warningInstructionForGeneration_2D_weak & operator = (const class GALGAS_warningInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_warningInstructionForGeneration bang_warningInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_warningInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_warningInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_warningInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_warningInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readAccessWithInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readAccessWithInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_readAccessWithInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_readAccessWithInstructionAST (const class cPtr_readAccessWithInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mPrefix (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mKeyExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfKeyExpression (void) const ;

  public: class GALGAS_lstring readProperty_mSearchMethodNameForErrorSignaling (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mDoBranchInstructions (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_do_5F_instructions (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mElseBranchInstructions (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_else_5F_instructions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readAccessWithInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readAccessWithInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_semanticExpressionAST & inOperand2,
                                                                            const class GALGAS_location & inOperand3,
                                                                            const class GALGAS_semanticExpressionAST & inOperand4,
                                                                            const class GALGAS_location & inOperand5,
                                                                            const class GALGAS_lstring & inOperand6,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                            const class GALGAS_location & inOperand8,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                            const class GALGAS_location & inOperand10
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readAccessWithInstructionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDoBranchInstructions (class GALGAS_semanticInstructionListAST inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElseBranchInstructions (class GALGAS_semanticInstructionListAST inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfKeyExpression (class GALGAS_location inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfReceiverExpression (class GALGAS_location inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_do_5F_instructions (class GALGAS_location inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_else_5F_instructions (class GALGAS_location inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyExpression (class GALGAS_semanticExpressionAST inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPrefix (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_semanticExpressionAST inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameForErrorSignaling (class GALGAS_lstring inArgument0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readAccessWithInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @readAccessWithInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_readAccessWithInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mPrefix ;
  public: GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mKeyExpression ;
  public: GALGAS_location mProperty_mEndOfKeyExpression ;
  public: GALGAS_lstring mProperty_mSearchMethodNameForErrorSignaling ;
  public: GALGAS_semanticInstructionListAST mProperty_mDoBranchInstructions ;
  public: GALGAS_location mProperty_mEndOf_5F_do_5F_instructions ;
  public: GALGAS_semanticInstructionListAST mProperty_mElseBranchInstructions ;
  public: GALGAS_location mProperty_mEndOf_5F_else_5F_instructions ;

//--- Constructor
  public: cPtr_readAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_lstring & in_mPrefix,
                                             const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                             const GALGAS_location & in_mEndOfReceiverExpression,
                                             const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                             const GALGAS_location & in_mEndOfKeyExpression,
                                             const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                             const GALGAS_semanticInstructionListAST & in_mDoBranchInstructions,
                                             const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                             const GALGAS_semanticInstructionListAST & in_mElseBranchInstructions,
                                             const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readAccessWithInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readAccessWithInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_readAccessWithInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_readAccessWithInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_readAccessWithInstructionAST_2D_weak (const class GALGAS_readAccessWithInstructionAST & inSource) ;

  public: GALGAS_readAccessWithInstructionAST_2D_weak & operator = (const class GALGAS_readAccessWithInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_readAccessWithInstructionAST bang_readAccessWithInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readAccessWithInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readAccessWithInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readAccessWithInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readAccessWithInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readWriteAccessWithInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readWriteAccessWithInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_readWriteAccessWithInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_readWriteAccessWithInstructionAST (const class cPtr_readWriteAccessWithInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mPrefix (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_bool readProperty_mReceiverIsPrefixedBySelf (void) const ;

  public: class GALGAS_lstringlist readProperty_mFieldList (void) const ;

  public: class GALGAS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mKeyExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfKeyExpression (void) const ;

  public: class GALGAS_lstring readProperty_mSearchMethodNameForErrorSignaling (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_m_5F_do_5F_Instructions (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_do_5F_instructions (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_m_5F_else_5F_Instructions (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_else_5F_instructions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readWriteAccessWithInstructionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readWriteAccessWithInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 const class GALGAS_lstringlist & inOperand4,
                                                                                 const class GALGAS_location & inOperand5,
                                                                                 const class GALGAS_semanticExpressionAST & inOperand6,
                                                                                 const class GALGAS_location & inOperand7,
                                                                                 const class GALGAS_lstring & inOperand8,
                                                                                 const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                                 const class GALGAS_location & inOperand10,
                                                                                 const class GALGAS_semanticInstructionListAST & inOperand11,
                                                                                 const class GALGAS_location & inOperand12
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readWriteAccessWithInstructionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfKeyExpression (class GALGAS_location inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfReceiverExpression (class GALGAS_location inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_do_5F_instructions (class GALGAS_location inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_else_5F_instructions (class GALGAS_location inArgument0
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldList (class GALGAS_lstringlist inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyExpression (class GALGAS_semanticExpressionAST inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPrefix (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverIsPrefixedBySelf (class GALGAS_bool inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameForErrorSignaling (class GALGAS_lstring inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_do_5F_Instructions (class GALGAS_semanticInstructionListAST inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_else_5F_Instructions (class GALGAS_semanticInstructionListAST inArgument0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteAccessWithInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @readWriteAccessWithInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_readWriteAccessWithInstructionAST : public cPtr_semanticInstructionAST {

//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GALGAS_unifiedTypeMap & ioTypeMap,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mPrefix ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_bool mProperty_mReceiverIsPrefixedBySelf ;
  public: GALGAS_lstringlist mProperty_mFieldList ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mKeyExpression ;
  public: GALGAS_location mProperty_mEndOfKeyExpression ;
  public: GALGAS_lstring mProperty_mSearchMethodNameForErrorSignaling ;
  public: GALGAS_semanticInstructionListAST mProperty_m_5F_do_5F_Instructions ;
  public: GALGAS_location mProperty_mEndOf_5F_do_5F_instructions ;
  public: GALGAS_semanticInstructionListAST mProperty_m_5F_else_5F_Instructions ;
  public: GALGAS_location mProperty_mEndOf_5F_else_5F_instructions ;

//--- Constructor
  public: cPtr_readWriteAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mPrefix,
                                                  const GALGAS_lstring & in_mReceiverName,
                                                  const GALGAS_bool & in_mReceiverIsPrefixedBySelf,
                                                  const GALGAS_lstringlist & in_mFieldList,
                                                  const GALGAS_location & in_mEndOfReceiverExpression,
                                                  const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                  const GALGAS_location & in_mEndOfKeyExpression,
                                                  const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                  const GALGAS_semanticInstructionListAST & in_m_5F_do_5F_Instructions,
                                                  const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                  const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_Instructions,
                                                  const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readWriteAccessWithInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readWriteAccessWithInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_readWriteAccessWithInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_readWriteAccessWithInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_readWriteAccessWithInstructionAST_2D_weak (const class GALGAS_readWriteAccessWithInstructionAST & inSource) ;

  public: GALGAS_readWriteAccessWithInstructionAST_2D_weak & operator = (const class GALGAS_readWriteAccessWithInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_readWriteAccessWithInstructionAST bang_readWriteAccessWithInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readWriteAccessWithInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readWriteAccessWithInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readWriteAccessWithInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteAccessWithInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readOnlyWithInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readOnlyWithInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_readOnlyWithInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_readOnlyWithInstructionForGeneration (const class cPtr_readOnlyWithInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_string readProperty_mObjectArrayCppName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mKeyExpression (void) const ;

  public: class GALGAS_string readProperty_mSearchMethodNameForErrorSignaling (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mDoBranchInstructions (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mElseBranchInstructions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readOnlyWithInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readOnlyWithInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                    const class GALGAS_string & inOperand2,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                                    const class GALGAS_string & inOperand4,
                                                                                    const class GALGAS_semanticInstructionListForGeneration & inOperand5,
                                                                                    const class GALGAS_semanticInstructionListForGeneration & inOperand6
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readOnlyWithInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDoBranchInstructions (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElseBranchInstructions (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectArrayCppName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameForErrorSignaling (class GALGAS_string inArgument0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readOnlyWithInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @readOnlyWithInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_readOnlyWithInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_string mProperty_mObjectArrayCppName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mKeyExpression ;
  public: GALGAS_string mProperty_mSearchMethodNameForErrorSignaling ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mDoBranchInstructions ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mElseBranchInstructions ;

//--- Constructor
  public: cPtr_readOnlyWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                     const GALGAS_string & in_mObjectArrayCppName,
                                                     const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                     const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readOnlyWithInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readOnlyWithInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_readOnlyWithInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_readOnlyWithInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_readOnlyWithInstructionForGeneration_2D_weak (const class GALGAS_readOnlyWithInstructionForGeneration & inSource) ;

  public: GALGAS_readOnlyWithInstructionForGeneration_2D_weak & operator = (const class GALGAS_readOnlyWithInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_readOnlyWithInstructionForGeneration bang_readOnlyWithInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readOnlyWithInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readOnlyWithInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readOnlyWithInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readOnlyWithInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readWriteWithInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readWriteWithInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_readWriteWithInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_readWriteWithInstructionForGeneration (const class cPtr_readWriteWithInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mReceiverVariableCppName (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_string readProperty_mObjectArrayCppName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mKeyExpression (void) const ;

  public: class GALGAS_string readProperty_mSearchMethodNameForErrorSignaling (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mDoBranchInstructions (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mElseBranchInstructions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readWriteWithInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readWriteWithInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                     const class GALGAS_lstringlist & inOperand3,
                                                                                     const class GALGAS_string & inOperand4,
                                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand5,
                                                                                     const class GALGAS_string & inOperand6,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand7,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand8
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readWriteWithInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDoBranchInstructions (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElseBranchInstructions (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectArrayCppName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMapEntry inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverVariableCppName (class GALGAS_string inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameForErrorSignaling (class GALGAS_string inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteWithInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @readWriteWithInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_readWriteWithInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mReceiverVariableCppName ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_string mProperty_mObjectArrayCppName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mKeyExpression ;
  public: GALGAS_string mProperty_mSearchMethodNameForErrorSignaling ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mDoBranchInstructions ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mElseBranchInstructions ;

//--- Constructor
  public: cPtr_readWriteWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_string & in_mReceiverVariableCppName,
                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                      const GALGAS_lstringlist & in_mStructAttributeList,
                                                      const GALGAS_string & in_mObjectArrayCppName,
                                                      const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                      const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                      const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                      const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readWriteWithInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readWriteWithInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_readWriteWithInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_readWriteWithInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_readWriteWithInstructionForGeneration_2D_weak (const class GALGAS_readWriteWithInstructionForGeneration & inSource) ;

  public: GALGAS_readWriteWithInstructionForGeneration_2D_weak & operator = (const class GALGAS_readWriteWithInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_readWriteWithInstructionForGeneration bang_readWriteWithInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readWriteWithInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readWriteWithInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readWriteWithInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteWithInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalCallInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonterminalCallInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalCallInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_nonterminalCallInstruction (const class cPtr_nonterminalCallInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mNonterminalName (void) const ;

  public: class GALGAS_lstring readProperty_mLabelName (void) const ;

  public: class GALGAS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalCallInstruction extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalCallInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_actualParameterListAST & inOperand3,
                                                                          const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalCallInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalCallInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @nonterminalCallInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_nonterminalCallInstruction : public cPtr_syntaxInstructionAST {

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_terminalMap inTerminalMap,
           const class GALGAS_string inLexiqueName,
           const class GALGAS_nonterminalMap inNonterminalMap,
           const class GALGAS_string inComponentName,
           const class GALGAS_stringset inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_uint & ioSelectMethodCount,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inNonTerminalSymbolMap,
           class GALGAS_uint & ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & ioSyntaxInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mNonterminalName ;
  public: GALGAS_lstring mProperty_mLabelName ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public: cPtr_nonterminalCallInstruction (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_lstring & in_mNonterminalName,
                                           const GALGAS_lstring & in_mLabelName,
                                           const GALGAS_actualParameterListAST & in_mActualParameterList,
                                           const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalCallInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonterminalCallInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalCallInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonterminalCallInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_nonterminalCallInstruction_2D_weak (const class GALGAS_nonterminalCallInstruction & inSource) ;

  public: GALGAS_nonterminalCallInstruction_2D_weak & operator = (const class GALGAS_nonterminalCallInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_nonterminalCallInstruction bang_nonterminalCallInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalCallInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalCallInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalCallInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalCallInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonterminalInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_nonterminalInstructionForGeneration (const class cPtr_nonterminalInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mNonterminalName (void) const ;

  public: class GALGAS_string readProperty_mLabelName (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_actualParameterListForGeneration & inOperand3,
                                                                                   const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @nonterminalInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_nonterminalInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GALGAS_bool getter_compareInstructionSyntaxSignature (const class GALGAS_semanticInstructionForGeneration inTestedInstruction,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GALGAS_string inPosfix,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mNonterminalName ;
  public: GALGAS_string mProperty_mLabelName ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public: cPtr_nonterminalInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_string & in_mNonterminalName,
                                                    const GALGAS_string & in_mLabelName,
                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                    const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonterminalInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonterminalInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_nonterminalInstructionForGeneration_2D_weak (const class GALGAS_nonterminalInstructionForGeneration & inSource) ;

  public: GALGAS_nonterminalInstructionForGeneration_2D_weak & operator = (const class GALGAS_nonterminalInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_nonterminalInstructionForGeneration bang_nonterminalInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_repeatInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_repeatInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_repeatInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_repeatInstruction (const class cPtr_repeatInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_syntaxInstructionList readProperty_mRepeatedInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (void) const ;

  public: class GALGAS_listOfSyntaxInstructionList readProperty_mRepeatBranchList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_repeat_5F_instruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_repeatInstruction extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_repeatInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_syntaxInstructionList & inOperand1,
                                                                 const class GALGAS_location & inOperand2,
                                                                 const class GALGAS_listOfSyntaxInstructionList & inOperand3,
                                                                 const class GALGAS_location & inOperand4
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_repeatInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @repeatInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_repeatInstruction : public cPtr_syntaxInstructionAST {

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_terminalMap inTerminalMap,
           const class GALGAS_string inLexiqueName,
           const class GALGAS_nonterminalMap inNonterminalMap,
           const class GALGAS_string inComponentName,
           const class GALGAS_stringset inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_uint & ioSelectMethodCount,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inNonTerminalSymbolMap,
           class GALGAS_uint & ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & ioSyntaxInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_syntaxInstructionList mProperty_mRepeatedInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  public: GALGAS_listOfSyntaxInstructionList mProperty_mRepeatBranchList ;
  public: GALGAS_location mProperty_mEndOf_5F_repeat_5F_instruction ;

//--- Constructor
  public: cPtr_repeatInstruction (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_syntaxInstructionList & in_mRepeatedInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                  const GALGAS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                  const GALGAS_location & in_mEndOf_5F_repeat_5F_instruction
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_repeatInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_repeatInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_repeatInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_repeatInstruction_2D_weak (const class GALGAS_repeatInstruction & inSource) ;

  public: GALGAS_repeatInstruction_2D_weak & operator = (const class GALGAS_repeatInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_repeatInstruction bang_repeatInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_repeatInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_repeatInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_repeatInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_repeatInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_repeatInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_repeatInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_repeatInstructionForGeneration (const class cPtr_repeatInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mSyntaxComponentName (void) const ;

  public: class GALGAS_uint readProperty_mChoiceIndex (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_m_5F_repeated_5F_instructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfRepeatedInstructions (void) const ;

  public: class GALGAS_listOfSemanticInstructionListForGeneration readProperty_mListOfSemanticInstructionListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_repeatInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_repeatInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_uint & inOperand2,
                                                                              const class GALGAS_semanticInstructionListForGeneration & inOperand3,
                                                                              const class GALGAS_location & inOperand4,
                                                                              const class GALGAS_listOfSemanticInstructionListForGeneration & inOperand5
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_repeatInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @repeatInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_repeatInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GALGAS_bool getter_compareInstructionSyntaxSignature (const class GALGAS_semanticInstructionForGeneration inTestedInstruction,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GALGAS_string inPosfix,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mSyntaxComponentName ;
  public: GALGAS_uint mProperty_mChoiceIndex ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_m_5F_repeated_5F_instructionList ;
  public: GALGAS_location mProperty_mEndOfRepeatedInstructions ;
  public: GALGAS_listOfSemanticInstructionListForGeneration mProperty_mListOfSemanticInstructionListForGeneration ;

//--- Constructor
  public: cPtr_repeatInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_string & in_mSyntaxComponentName,
                                               const GALGAS_uint & in_mChoiceIndex,
                                               const GALGAS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                               const GALGAS_location & in_mEndOfRepeatedInstructions,
                                               const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_repeatInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_repeatInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_repeatInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_repeatInstructionForGeneration_2D_weak (const class GALGAS_repeatInstructionForGeneration & inSource) ;

  public: GALGAS_repeatInstructionForGeneration_2D_weak & operator = (const class GALGAS_repeatInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_repeatInstructionForGeneration bang_repeatInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_repeatInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_repeatInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_repeatInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selectInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selectInstruction (const class cPtr_selectInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_listOfSyntaxInstructionList readProperty_mSelectBranchList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_select_5F_instruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstruction extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_listOfSyntaxInstructionList & inOperand1,
                                                                 const class GALGAS_location & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_select_5F_instruction (class GALGAS_location inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectBranchList (class GALGAS_listOfSyntaxInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selectInstruction : public cPtr_syntaxInstructionAST {

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_terminalMap inTerminalMap,
           const class GALGAS_string inLexiqueName,
           const class GALGAS_nonterminalMap inNonterminalMap,
           const class GALGAS_string inComponentName,
           const class GALGAS_stringset inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_uint & ioSelectMethodCount,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inNonTerminalSymbolMap,
           class GALGAS_uint & ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & ioSyntaxInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_listOfSyntaxInstructionList mProperty_mSelectBranchList ;
  public: GALGAS_location mProperty_mEndOf_5F_select_5F_instruction ;

//--- Constructor
  public: cPtr_selectInstruction (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                  const GALGAS_location & in_mEndOf_5F_select_5F_instruction
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selectInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selectInstruction_2D_weak (const class GALGAS_selectInstruction & inSource) ;

  public: GALGAS_selectInstruction_2D_weak & operator = (const class GALGAS_selectInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selectInstruction bang_selectInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_selectInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selectInstructionForGeneration (const class cPtr_selectInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mSyntaxComponentName (void) const ;

  public: class GALGAS_uint readProperty_mChoiceIndex (void) const ;

  public: class GALGAS_listOfSemanticInstructionListForGeneration readProperty_mListOfSemanticInstructionListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_uint & inOperand2,
                                                                              const class GALGAS_listOfSemanticInstructionListForGeneration & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMChoiceIndex (class GALGAS_uint inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMListOfSemanticInstructionListForGeneration (class GALGAS_listOfSemanticInstructionListForGeneration inArgument0
                                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selectInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GALGAS_bool getter_compareInstructionSyntaxSignature (const class GALGAS_semanticInstructionForGeneration inTestedInstruction,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GALGAS_string inPosfix,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mSyntaxComponentName ;
  public: GALGAS_uint mProperty_mChoiceIndex ;
  public: GALGAS_listOfSemanticInstructionListForGeneration mProperty_mListOfSemanticInstructionListForGeneration ;

//--- Constructor
  public: cPtr_selectInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_string & in_mSyntaxComponentName,
                                               const GALGAS_uint & in_mChoiceIndex,
                                               const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selectInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selectInstructionForGeneration_2D_weak (const class GALGAS_selectInstructionForGeneration & inSource) ;

  public: GALGAS_selectInstructionForGeneration_2D_weak & operator = (const class GALGAS_selectInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selectInstructionForGeneration bang_selectInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_terminalCheckInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_terminalCheckInstruction (const class cPtr_terminalCheckInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTerminalName (void) const ;

  public: class GALGAS_actualInputParameterListAST readProperty_mActualInputParameterList (void) const ;

  public: class GALGAS__32_lstringlist readProperty_mIndexingKeyList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckInstruction extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalCheckInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_actualInputParameterListAST & inOperand2,
                                                                        const class GALGAS__32_lstringlist & inOperand3,
                                                                        const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand4,
                                                                        const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalCheckInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @terminalCheckInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_terminalCheckInstruction : public cPtr_syntaxInstructionAST {

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_terminalMap inTerminalMap,
           const class GALGAS_string inLexiqueName,
           const class GALGAS_nonterminalMap inNonterminalMap,
           const class GALGAS_string inComponentName,
           const class GALGAS_stringset inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_uint & ioSelectMethodCount,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inNonTerminalSymbolMap,
           class GALGAS_uint & ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & ioSyntaxInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTerminalName ;
  public: GALGAS_actualInputParameterListAST mProperty_mActualInputParameterList ;
  public: GALGAS__32_lstringlist mProperty_mIndexingKeyList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public: cPtr_terminalCheckInstruction (const GALGAS_location & in_mInstructionLocation,
                                         const GALGAS_lstring & in_mTerminalName,
                                         const GALGAS_actualInputParameterListAST & in_mActualInputParameterList,
                                         const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                         const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                         const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_terminalCheckInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalCheckInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_terminalCheckInstruction_2D_weak (const class GALGAS_terminalCheckInstruction & inSource) ;

  public: GALGAS_terminalCheckInstruction_2D_weak & operator = (const class GALGAS_terminalCheckInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_terminalCheckInstruction bang_terminalCheckInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalCheckInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalCheckInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_terminalCheckInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_terminalCheckInstructionForGeneration (const class cPtr_terminalCheckInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTerminalName (void) const ;

  public: class GALGAS_string readProperty_mLexiqueIdentifier (void) const ;

  public: class GALGAS_terminalCheckAssignementList readProperty_mTerminalCheckAssignementList (void) const ;

  public: class GALGAS__32_lstringlist readProperty_mIndexingKeyList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalCheckInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_string & inOperand2,
                                                                                     const class GALGAS_terminalCheckAssignementList & inOperand3,
                                                                                     const class GALGAS__32_lstringlist & inOperand4,
                                                                                     const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                     const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalCheckInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @terminalCheckInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_terminalCheckInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GALGAS_bool getter_compareInstructionSyntaxSignature (const class GALGAS_semanticInstructionForGeneration inTestedInstruction,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GALGAS_string inPosfix,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTerminalName ;
  public: GALGAS_string mProperty_mLexiqueIdentifier ;
  public: GALGAS_terminalCheckAssignementList mProperty_mTerminalCheckAssignementList ;
  public: GALGAS__32_lstringlist mProperty_mIndexingKeyList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public: cPtr_terminalCheckInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mTerminalName,
                                                      const GALGAS_string & in_mLexiqueIdentifier,
                                                      const GALGAS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                      const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                                      const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                      const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_terminalCheckInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalCheckInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_terminalCheckInstructionForGeneration_2D_weak (const class GALGAS_terminalCheckInstructionForGeneration & inSource) ;

  public: GALGAS_terminalCheckInstructionForGeneration_2D_weak & operator = (const class GALGAS_terminalCheckInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_terminalCheckInstructionForGeneration bang_terminalCheckInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalCheckInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalCheckInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseLoopInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseLoopInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_parseLoopInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_parseLoopInstruction (const class cPtr_parseLoopInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mVariantExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfVariantExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mWhileExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfWhileExpression (void) const ;

  public: class GALGAS_syntaxInstructionList readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseLoopInstruction extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseLoopInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                    const class GALGAS_location & inOperand2,
                                                                    const class GALGAS_semanticExpressionAST & inOperand3,
                                                                    const class GALGAS_location & inOperand4,
                                                                    const class GALGAS_syntaxInstructionList & inOperand5,
                                                                    const class GALGAS_location & inOperand6
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseLoopInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseLoopInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @parseLoopInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_parseLoopInstruction : public cPtr_syntaxInstructionAST {

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_terminalMap inTerminalMap,
           const class GALGAS_string inLexiqueName,
           const class GALGAS_nonterminalMap inNonterminalMap,
           const class GALGAS_string inComponentName,
           const class GALGAS_stringset inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_uint & ioSelectMethodCount,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inNonTerminalSymbolMap,
           class GALGAS_uint & ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & ioSyntaxInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mVariantExpression ;
  public: GALGAS_location mProperty_mEndOfVariantExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mWhileExpression ;
  public: GALGAS_location mProperty_mEndOfWhileExpression ;
  public: GALGAS_syntaxInstructionList mProperty_mDoInstructionList ;
  public: GALGAS_location mProperty_mEndOfInstructionList ;

//--- Constructor
  public: cPtr_parseLoopInstruction (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                     const GALGAS_location & in_mEndOfVariantExpression,
                                     const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                     const GALGAS_location & in_mEndOfWhileExpression,
                                     const GALGAS_syntaxInstructionList & in_mDoInstructionList,
                                     const GALGAS_location & in_mEndOfInstructionList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseLoopInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseLoopInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_parseLoopInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseLoopInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_parseLoopInstruction_2D_weak (const class GALGAS_parseLoopInstruction & inSource) ;

  public: GALGAS_parseLoopInstruction_2D_weak & operator = (const class GALGAS_parseLoopInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_parseLoopInstruction bang_parseLoopInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseLoopInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseLoopInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseLoopInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseLoopInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseLoopInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseLoopInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_parseLoopInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_parseLoopInstructionForGeneration (const class cPtr_parseLoopInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mVariantExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mWhileExpression (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseLoopInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseLoopInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseLoopInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseLoopInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @parseLoopInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_parseLoopInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GALGAS_string inPosfix,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mVariantExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mWhileExpression ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_parseLoopInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_semanticExpressionForGeneration & in_mVariantExpression,
                                                  const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                                  const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseLoopInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseLoopInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_parseLoopInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseLoopInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_parseLoopInstructionForGeneration_2D_weak (const class GALGAS_parseLoopInstructionForGeneration & inSource) ;

  public: GALGAS_parseLoopInstructionForGeneration_2D_weak & operator = (const class GALGAS_parseLoopInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_parseLoopInstructionForGeneration bang_parseLoopInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseLoopInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseLoopInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseLoopInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseLoopInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseRewindInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseRewindInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_parseRewindInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseRewindInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_parseRewindInstruction (const class cPtr_parseRewindInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_listOfSyntaxInstructionList readProperty_mParseRewindBranchList (void) const ;

  public: class GALGAS_location readProperty_mEndOfParseDoInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseRewindInstruction extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseRewindInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_listOfSyntaxInstructionList & inOperand1,
                                                                      const class GALGAS_location & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseRewindInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfParseDoInstruction (class GALGAS_location inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParseRewindBranchList (class GALGAS_listOfSyntaxInstructionList inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseRewindInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @parseRewindInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_parseRewindInstruction : public cPtr_syntaxInstructionAST {

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_terminalMap inTerminalMap,
           const class GALGAS_string inLexiqueName,
           const class GALGAS_nonterminalMap inNonterminalMap,
           const class GALGAS_string inComponentName,
           const class GALGAS_stringset inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_uint & ioSelectMethodCount,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inNonTerminalSymbolMap,
           class GALGAS_uint & ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & ioSyntaxInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_listOfSyntaxInstructionList mProperty_mParseRewindBranchList ;
  public: GALGAS_location mProperty_mEndOfParseDoInstruction ;

//--- Constructor
  public: cPtr_parseRewindInstruction (const GALGAS_location & in_mInstructionLocation,
                                       const GALGAS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                       const GALGAS_location & in_mEndOfParseDoInstruction
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseRewindInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseRewindInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_parseRewindInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseRewindInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_parseRewindInstruction_2D_weak (const class GALGAS_parseRewindInstruction & inSource) ;

  public: GALGAS_parseRewindInstruction_2D_weak & operator = (const class GALGAS_parseRewindInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_parseRewindInstruction bang_parseRewindInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseRewindInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseRewindInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseRewindInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseRewindInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseRewindInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseRewindInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_parseRewindInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseRewindInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_parseRewindInstructionForGeneration (const class cPtr_parseRewindInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_listOfSemanticInstructionListForGeneration readProperty_mListOfSemanticInstructionListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseRewindInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseRewindInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_listOfSemanticInstructionListForGeneration & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseRewindInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMListOfSemanticInstructionListForGeneration (class GALGAS_listOfSemanticInstructionListForGeneration inArgument0
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseRewindInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @parseRewindInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_parseRewindInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GALGAS_string inPosfix,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_listOfSemanticInstructionListForGeneration mProperty_mListOfSemanticInstructionListForGeneration ;

//--- Constructor
  public: cPtr_parseRewindInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseRewindInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseRewindInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_parseRewindInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseRewindInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_parseRewindInstructionForGeneration_2D_weak (const class GALGAS_parseRewindInstructionForGeneration & inSource) ;

  public: GALGAS_parseRewindInstructionForGeneration_2D_weak & operator = (const class GALGAS_parseRewindInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_parseRewindInstructionForGeneration bang_parseRewindInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseRewindInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseRewindInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseRewindInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseRewindInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseWhenInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseWhenInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_parseWhenInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_parseWhenInstruction (const class cPtr_parseWhenInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mWhenExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfWhenExpression (void) const ;

  public: class GALGAS_syntaxInstructionList readProperty_mWhenInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfWhenInstructionList (void) const ;

  public: class GALGAS_syntaxInstructionList readProperty_mElseInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseWhenInstruction extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseWhenInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                    const class GALGAS_location & inOperand2,
                                                                    const class GALGAS_syntaxInstructionList & inOperand3,
                                                                    const class GALGAS_location & inOperand4,
                                                                    const class GALGAS_syntaxInstructionList & inOperand5,
                                                                    const class GALGAS_location & inOperand6
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseWhenInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseWhenInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @parseWhenInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_parseWhenInstruction : public cPtr_syntaxInstructionAST {

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_terminalMap inTerminalMap,
           const class GALGAS_string inLexiqueName,
           const class GALGAS_nonterminalMap inNonterminalMap,
           const class GALGAS_string inComponentName,
           const class GALGAS_stringset inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_uint & ioSelectMethodCount,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inNonTerminalSymbolMap,
           class GALGAS_uint & ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & ioSyntaxInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mWhenExpression ;
  public: GALGAS_location mProperty_mEndOfWhenExpression ;
  public: GALGAS_syntaxInstructionList mProperty_mWhenInstructionList ;
  public: GALGAS_location mProperty_mEndOfWhenInstructionList ;
  public: GALGAS_syntaxInstructionList mProperty_mElseInstructionList ;
  public: GALGAS_location mProperty_mEndOfElseInstructionList ;

//--- Constructor
  public: cPtr_parseWhenInstruction (const GALGAS_location & in_mInstructionLocation,
                                     const GALGAS_semanticExpressionAST & in_mWhenExpression,
                                     const GALGAS_location & in_mEndOfWhenExpression,
                                     const GALGAS_syntaxInstructionList & in_mWhenInstructionList,
                                     const GALGAS_location & in_mEndOfWhenInstructionList,
                                     const GALGAS_syntaxInstructionList & in_mElseInstructionList,
                                     const GALGAS_location & in_mEndOfElseInstructionList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseWhenInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseWhenInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_parseWhenInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseWhenInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_parseWhenInstruction_2D_weak (const class GALGAS_parseWhenInstruction & inSource) ;

  public: GALGAS_parseWhenInstruction_2D_weak & operator = (const class GALGAS_parseWhenInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_parseWhenInstruction bang_parseWhenInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseWhenInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseWhenInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseWhenInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseWhenInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseWhenInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseWhenInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_parseWhenInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_parseWhenInstructionForGeneration (const class cPtr_parseWhenInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mWhenExpression (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseWhenInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseWhenInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand2,
                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseWhenInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseWhenInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @parseWhenInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_parseWhenInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GALGAS_string inPosfix,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mWhenExpression ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mElseInstructionList ;

//--- Constructor
  public: cPtr_parseWhenInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_semanticExpressionForGeneration & in_mWhenExpression,
                                                  const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                  const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseWhenInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseWhenInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_parseWhenInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseWhenInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_parseWhenInstructionForGeneration_2D_weak (const class GALGAS_parseWhenInstructionForGeneration & inSource) ;

  public: GALGAS_parseWhenInstructionForGeneration_2D_weak & operator = (const class GALGAS_parseWhenInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_parseWhenInstructionForGeneration bang_parseWhenInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseWhenInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseWhenInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseWhenInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseWhenInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxSendInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxSendInstruction : public GALGAS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_syntaxSendInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_syntaxSendInstruction (const class cPtr_syntaxSendInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxSendInstruction extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxSendInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxSendInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxSendInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxSendInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_syntaxSendInstruction : public cPtr_syntaxInstructionAST {

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GALGAS_lstring inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & ioUsefulEntitiesGraph,
           const class GALGAS_analysisContext inAnalysisContext,
           class GALGAS_unifiedTypeMap & ioTypeMap,
           const class GALGAS_bool inHasTranslateFeature,
           const class GALGAS_terminalMap inTerminalMap,
           const class GALGAS_string inLexiqueName,
           const class GALGAS_nonterminalMap inNonterminalMap,
           const class GALGAS_string inComponentName,
           const class GALGAS_stringset inIndexNameSet,
           class GALGAS_semanticInstructionListForGeneration & ioInstructionListForGeneration,
           class GALGAS_localVarManager & ioVariableMap,
           class GALGAS_uint & ioSelectMethodCount,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method transformInstruction
  public: virtual void method_transformInstruction (class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioActuallyUsedTerminalSymbolMap,
           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inNonTerminalSymbolMap,
           class GALGAS_uint & ioAddedNonTerminalIndex,
           class GALGAS_syntaxInstructionListForGrammarAnalysis & ioSyntaxInstructionList,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_syntaxSendInstruction (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_semanticExpressionAST & in_mExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxSendInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxSendInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syntaxSendInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_syntaxSendInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syntaxSendInstruction_2D_weak (const class GALGAS_syntaxSendInstruction & inSource) ;

  public: GALGAS_syntaxSendInstruction_2D_weak & operator = (const class GALGAS_syntaxSendInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syntaxSendInstruction bang_syntaxSendInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxSendInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxSendInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxSendInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxSendInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxSendInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxSendInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_syntaxSendInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_syntaxSendInstructionForGeneration (const class cPtr_syntaxSendInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxSendInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxSendInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxSendInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxSendInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxSendInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_syntaxSendInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           const class GALGAS_bool inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & ioGeneratedCode,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_syntaxSendInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxSendInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxSendInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syntaxSendInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_syntaxSendInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syntaxSendInstructionForGeneration_2D_weak (const class GALGAS_syntaxSendInstructionForGeneration & inSource) ;

  public: GALGAS_syntaxSendInstructionForGeneration_2D_weak & operator = (const class GALGAS_syntaxSendInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syntaxSendInstructionForGeneration bang_syntaxSendInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxSendInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxSendInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxSendInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxSendInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSyntaxSignature (class cPtr_semanticInstructionForGeneration * inObject,
                                                const class GALGAS_string constin_inPosfix,
                                                class GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                         const class GALGAS_semanticInstructionForGeneration constin_inTestedInstruction,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractSyntaxInstructionForGrammarAnalysis reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractSyntaxInstructionForGrammarAnalysis : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractSyntaxInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractSyntaxInstructionForGrammarAnalysis (const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mStartLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractSyntaxInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMStartLocation (class GALGAS_location inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractSyntaxInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;

#include "separateHeaderFor_abstractSyntaxInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractSyntaxInstructionForGrammarAnalysis_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractSyntaxInstructionForGrammarAnalysis bang_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionListForGrammarAnalysis list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syntaxInstructionListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxInstructionListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxInstructionListForGrammarAnalysis constructor_listWithValue (const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionListForGrammarAnalysis add_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractSyntaxInstructionForGrammarAnalysis getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxInstructionListForGrammarAnalysis ;
 
} ; // End of GALGAS_syntaxInstructionListForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_syntaxInstructionListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxInstructionListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractSyntaxInstructionForGrammarAnalysis current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionListForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractSyntaxInstructionForGrammarAnalysis mProperty_mInstruction ;
  public: inline GALGAS_abstractSyntaxInstructionForGrammarAnalysis readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @productionRuleListForGrammarAnalysis list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_productionRuleListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_productionRuleListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_productionRuleListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                 const class GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                 const class GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                 const class GALGAS_uint & in_mProductionIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_productionRuleListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_productionRuleListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_productionRuleListForGrammarAnalysis constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_uint & inOperand1,
                                                                                              const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                              const class GALGAS_uint & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_productionRuleListForGrammarAnalysis inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                     const class GALGAS_uint & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_productionRuleListForGrammarAnalysis add_operation (const GALGAS_productionRuleListForGrammarAnalysis & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_productionRuleListForGrammarAnalysis_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_syntaxInstructionListForGrammarAnalysis constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                 class GALGAS_uint & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                class GALGAS_uint & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                      class GALGAS_uint & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftNonterminalSymbolAtIndex (class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftNonterminalSymbolIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductionIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                              class GALGAS_uint & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                             class GALGAS_uint & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLeftNonterminalSymbolAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLeftNonterminalSymbolIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mProductionIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_productionRuleListForGrammarAnalysis getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_productionRuleListForGrammarAnalysis getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_productionRuleListForGrammarAnalysis getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_productionRuleListForGrammarAnalysis ;
 
} ; // End of GALGAS_productionRuleListForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_productionRuleListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_productionRuleListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLeftNonterminalSymbol (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxInstructionListForGrammarAnalysis current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mProductionIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_productionRuleListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @productionRuleListForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_productionRuleListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLeftNonterminalSymbol ;
  public: inline GALGAS_lstring readProperty_mLeftNonterminalSymbol (void) const {
    return mProperty_mLeftNonterminalSymbol ;
  }

  public: GALGAS_uint mProperty_mLeftNonterminalSymbolIndex ;
  public: inline GALGAS_uint readProperty_mLeftNonterminalSymbolIndex (void) const {
    return mProperty_mLeftNonterminalSymbolIndex ;
  }

  public: GALGAS_syntaxInstructionListForGrammarAnalysis mProperty_mInstructionList ;
  public: inline GALGAS_syntaxInstructionListForGrammarAnalysis readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_uint mProperty_mProductionIndex ;
  public: inline GALGAS_uint readProperty_mProductionIndex (void) const {
    return mProperty_mProductionIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_productionRuleListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_productionRuleListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLeftNonterminalSymbol (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeftNonterminalSymbol = inValue ;
  }

  public: inline void setter_setMLeftNonterminalSymbolIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeftNonterminalSymbolIndex = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMProductionIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_productionRuleListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_productionRuleListForGrammarAnalysis_2D_element (const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                  const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                  const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                  const GALGAS_uint & in_mProductionIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_productionRuleListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_productionRuleListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1,
                                                                                               const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                               const class GALGAS_uint & inOperand3
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_productionRuleListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_productionRuleListForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalIndexForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalIndexForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
 
} ; // End of GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@unusedNonTerminalSymbolMapForGrammarAnalysis' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mNonTerminalIndex ;

//--- Constructor
  public: cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                    const GALGAS_uint & in_mNonTerminalIndex
                                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mNonTerminalIndex ;
  public: inline GALGAS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                          const GALGAS_uint & in_mNonTerminalIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                       const class GALGAS_uint & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constructor_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constructor_sortedListWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                             const class GALGAS_uint & inOperand1,
                                                                                                             const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
 
} ; // End of GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject,
                                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mNonTerminalSymbol ;
  public: inline GALGAS_lstring readProperty_mNonTerminalSymbol (void) const {
    return mProperty_mNonTerminalSymbol ;
  }

  public: GALGAS_uint mProperty_mNonTerminalIndex ;
  public: inline GALGAS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;
  public: inline GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis readProperty_mNonterminalSymbolParametersMap (void) const {
    return mProperty_mNonterminalSymbolParametersMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonTerminalSymbol (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalSymbol = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                           const GALGAS_uint & in_mNonTerminalIndex,
                                                                           const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                        const class GALGAS_uint & inOperand1,
                                                                                                        const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_terminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_terminalInstructionForGrammarAnalysis (const class cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTerminalSymbolName (void) const ;

  public: class GALGAS_uint readProperty_mTerminalSymbolIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_uint & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTerminalSymbolIndex (class GALGAS_uint inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalSymbolName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalInstructionForGrammarAnalysis_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_terminalInstructionForGrammarAnalysis bang_terminalInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalInstructionForGrammarAnalysis_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalInstructionForGrammarAnalysis reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonTerminalInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis (const class cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mNonterminalSymbolName (void) const ;

  public: class GALGAS_uint readProperty_mNonterminalSymbolIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_uint & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonTerminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolIndex (class GALGAS_uint inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_nonTerminalInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalInstructionForGrammarAnalysis_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak (const class GALGAS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_nonTerminalInstructionForGrammarAnalysis bang_nonTerminalInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @branchListForGrammarAnalysis list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_branchListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_branchListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_branchListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_branchListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_branchListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_branchListForGrammarAnalysis constructor_listWithValue (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_branchListForGrammarAnalysis inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_branchListForGrammarAnalysis add_operation (const GALGAS_branchListForGrammarAnalysis & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_branchListForGrammarAnalysis_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GALGAS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionListForGrammarAnalysis getter_mSyntaxInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_branchListForGrammarAnalysis getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_branchListForGrammarAnalysis ;
 
} ; // End of GALGAS_branchListForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_branchListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_branchListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @branchListForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_branchListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_syntaxInstructionListForGrammarAnalysis mProperty_mSyntaxInstructionList ;
  public: inline GALGAS_syntaxInstructionListForGrammarAnalysis readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_branchListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_branchListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GALGAS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_branchListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_branchListForGrammarAnalysis_2D_element (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_branchListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_branchListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_branchListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_branchListForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionForGrammarAnalysis reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_selectInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selectInstructionForGrammarAnalysis (const class cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_branchListForGrammarAnalysis readProperty_mSelectBranchList (void) const ;

  public: class GALGAS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_branchListForGrammarAnalysis & inOperand1,
                                                                                   const class GALGAS_uint & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAddedNonTerminalSymbolIndex (class GALGAS_uint inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectBranchList (class GALGAS_branchListForGrammarAnalysis inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;

#include "separateHeaderFor_selectInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionForGrammarAnalysis_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selectInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selectInstructionForGrammarAnalysis_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selectInstructionForGrammarAnalysis_2D_weak (const class GALGAS_selectInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_selectInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_selectInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selectInstructionForGrammarAnalysis bang_selectInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selectInstructionForGrammarAnalysis_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selectInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionForGrammarAnalysis_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstructionForGrammarAnalysis reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_repeatInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_repeatInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_repeatInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_repeatInstructionForGrammarAnalysis (const class cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_branchListForGrammarAnalysis readProperty_mRepeatBranchList (void) const ;

  public: class GALGAS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_repeatInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_repeatInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_branchListForGrammarAnalysis & inOperand1,
                                                                                   const class GALGAS_uint & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAddedNonTerminalSymbolIndex (class GALGAS_uint inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRepeatBranchList (class GALGAS_branchListForGrammarAnalysis inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstructionForGrammarAnalysis class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;

#include "separateHeaderFor_repeatInstructionForGrammarAnalysis.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @repeatInstructionForGrammarAnalysis_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_repeatInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_repeatInstructionForGrammarAnalysis_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (const class GALGAS_repeatInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_repeatInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_repeatInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_repeatInstructionForGrammarAnalysis bang_repeatInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_repeatInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_repeatInstructionForGrammarAnalysis_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_repeatInstructionForGrammarAnalysis_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxComponentListForGrammarAnalysis list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxComponentListForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syntaxComponentListForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syntaxComponentListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                 const class GALGAS_lstring & in_mSyntaxComponentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxComponentListForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxComponentListForGrammarAnalysis constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxComponentListForGrammarAnalysis constructor_listWithValue (const class GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxComponentListForGrammarAnalysis inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxComponentListForGrammarAnalysis add_operation (const GALGAS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_productionRuleListForGrammarAnalysis constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductionRulesListAtIndex (class GALGAS_productionRuleListForGrammarAnalysis constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_productionRuleListForGrammarAnalysis & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_productionRuleListForGrammarAnalysis getter_mProductionRulesListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentListForGrammarAnalysis getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentListForGrammarAnalysis getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentListForGrammarAnalysis getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syntaxComponentListForGrammarAnalysis ;
 
} ; // End of GALGAS_syntaxComponentListForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_syntaxComponentListForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxComponentListForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_productionRuleListForGrammarAnalysis mProperty_mProductionRulesList ;
  public: inline GALGAS_productionRuleListForGrammarAnalysis readProperty_mProductionRulesList (void) const {
    return mProperty_mProductionRulesList ;
  }

  public: GALGAS_lstring mProperty_mSyntaxComponentName ;
  public: inline GALGAS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_syntaxComponentListForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProductionRulesList (const GALGAS_productionRuleListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionRulesList = inValue ;
  }

  public: inline void setter_setMSyntaxComponentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxComponentListForGrammarAnalysis_2D_element (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                   const GALGAS_lstring & in_mSyntaxComponentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxComponentListForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxComponentListForGrammarAnalysis_2D_element constructor_new (const class GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxComponentListForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalSymbolsMapForGrammarAnalysis map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_terminalSymbolsMapForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_terminalSymbolsMapForGrammarAnalysis_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalSymbolsMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis & operator = (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalSymbolsMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalSymbolsMapForGrammarAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_terminalSymbolsMapForGrammarAnalysis constructor_mapWithMapToOverride (const class GALGAS_terminalSymbolsMapForGrammarAnalysis & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalIndexForKey (class GALGAS_uint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminalIndexForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalSymbolsMapForGrammarAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_terminalSymbolsMapForGrammarAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_terminalSymbolsMapForGrammarAnalysis ;
 
} ; // End of GALGAS_terminalSymbolsMapForGrammarAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_terminalSymbolsMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mTerminalIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@terminalSymbolsMapForGrammarAnalysis' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_terminalSymbolsMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mTerminalIndex ;

//--- Constructor
  public: cMapElement_terminalSymbolsMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mTerminalIndex
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalSymbolsMapForGrammarAnalysis_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mTerminalIndex ;
  public: inline GALGAS_uint readProperty_mTerminalIndex (void) const {
    return mProperty_mTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminalIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                  const GALGAS_uint & in_mTerminalIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstruction (class cPtr_syntaxInstructionAST * inObject,
                                               class GALGAS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                               const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                               class GALGAS_uint & io_ioAddedNonTerminalIndex,
                                               class GALGAS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @rowList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_rowList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_rowList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_rowList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS__32_stringlist & in_columns
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_rowList extractObject (const GALGAS_object & inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_rowList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_rowList constructor_listWithValue (const class GALGAS__32_stringlist & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_rowList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS__32_stringlist & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_rowList add_operation (const GALGAS_rowList & inOperand,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_rowList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS__32_stringlist constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS__32_stringlist & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS__32_stringlist & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS__32_stringlist & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setColumnsAtIndex (class GALGAS__32_stringlist constinArgument0,
                                                          class GALGAS_uint constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS__32_stringlist & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS__32_stringlist & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_columnsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_rowList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_rowList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_rowList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_rowList ;
 
} ; // End of GALGAS_rowList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_rowList : public cGenericAbstractEnumerator {
  public: cEnumerator_rowList (const GALGAS_rowList & inEnumeratedObject,
                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS__32_stringlist current_columns (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_rowList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rowList ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@rowList appendRow'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendRow (class GALGAS_rowList & ioObject,
                                const class GALGAS_string constin_inNodeDefinition,
                                const class GALGAS_uint constin_inRow,
                                const class GALGAS_uint constin_inColumn,
                                class GALGAS_string & out_outNodeName,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @rowList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_rowList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS__32_stringlist mProperty_columns ;
  public: inline GALGAS__32_stringlist readProperty_columns (void) const {
    return mProperty_columns ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_rowList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_rowList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setColumns (const GALGAS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_columns = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_rowList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_rowList_2D_element (const GALGAS__32_stringlist & in_columns) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_rowList_2D_element extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_rowList_2D_element constructor_new (const class GALGAS__32_stringlist & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_rowList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_rowList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rowList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@syntaxInstructionListForGrammarAnalysis displayVertically' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_displayVertically (const class GALGAS_syntaxInstructionListForGrammarAnalysis & inObject,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractSyntaxInstructionForGrammarAnalysis isLinear'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isLinear (const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @programListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_programListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_programListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_programListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_programListForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_programListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_programListForGeneration constructor_listWithValue (const class GALGAS_semanticDeclarationForGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_programListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticDeclarationForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_programListForGeneration add_operation (const GALGAS_programListForGeneration & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_programListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticDeclarationForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GALGAS_semanticDeclarationForGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticDeclarationForGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationForGeneration getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_programListForGeneration ;
 
} ; // End of GALGAS_programListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_programListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_programListForGeneration (const GALGAS_programListForGeneration & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_programListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @programListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_programListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticDeclarationForGeneration mProperty_mDeclaration ;
  public: inline GALGAS_semanticDeclarationForGeneration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_programListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GALGAS_semanticDeclarationForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_programListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_programListForGeneration_2D_element (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_programListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_programListForGeneration_2D_element constructor_new (const class GALGAS_semanticDeclarationForGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_programListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @genericExtensionMethodListMap list map
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_genericExtensionMethodListMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public: GALGAS_genericExtensionMethodListMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_genericExtensionMethodListMap extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_genericExtensionMethodListMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_listForKey (const class GALGAS_string & constinOperand0
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_genericExtensionMethodListMap ;
 
} ; // End of GALGAS_genericExtensionMethodListMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_genericExtensionMethodListMap : public cGenericAbstractEnumerator {
  public: cEnumerator_genericExtensionMethodListMap (const GALGAS_genericExtensionMethodListMap & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_key (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_genericExtensionMethodListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @genericExtensionMethodListMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_genericExtensionMethodListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_lstringlist mProperty_mList ;
  public: inline GALGAS_lstringlist readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_genericExtensionMethodListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_genericExtensionMethodListMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_genericExtensionMethodListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_genericExtensionMethodListMap_2D_element (const GALGAS_string & in_key,
                                                           const GALGAS_lstringlist & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_genericExtensionMethodListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_genericExtensionMethodListMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_lstringlist & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_genericExtensionMethodListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_genericExtensionMethodListMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildExtensionListMaps (class cPtr_semanticDeclarationAST * inObject,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionSetterListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioExtensionSetterListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionSetterListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionSetterListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionMethodListMapAST,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioExtensionMethodListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionMethodListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionMethodListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionGetterListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioExtensionGetterListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionGetterListMap,
                                                 class GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionGetterListMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @descendantClassListMap list map
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_descendantClassListMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public: GALGAS_descendantClassListMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_descendantClassListMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_descendantClassListMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_listForKey (const class GALGAS_string & constinOperand0
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_descendantClassListMap ;
 
} ; // End of GALGAS_descendantClassListMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_descendantClassListMap : public cGenericAbstractEnumerator {
  public: cEnumerator_descendantClassListMap (const GALGAS_descendantClassListMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_key (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntryList current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_descendantClassListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @descendantClassListMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_descendantClassListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_unifiedTypeMapEntryList mProperty_mList ;
  public: inline GALGAS_unifiedTypeMapEntryList readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_descendantClassListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_descendantClassListMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GALGAS_unifiedTypeMapEntryList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_descendantClassListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_descendantClassListMap_2D_element (const GALGAS_string & in_key,
                                                    const GALGAS_unifiedTypeMapEntryList & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_descendantClassListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_descendantClassListMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_unifiedTypeMapEntryList & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_descendantClassListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_descendantClassListMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodMapForGlobalCheckings map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) ;
  public: GALGAS_extensionMethodMapForGlobalCheckings & operator = (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMethodMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionMethodMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_extensionMethodMapForGlobalCheckings & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForGlobalCheckings getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionMethodMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionMethodMapForGlobalCheckings ;
 
} ; // End of GALGAS_extensionMethodMapForGlobalCheckings class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_extensionMethodMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionMethodMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionMethodMapForGlobalCheckings' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_extensionMethodMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodMapForGlobalCheckings_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForGlobalCheckings_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionMethodMapForGlobalCheckings_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_extensionMethodMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionMethodMapForGlobalCheckings_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodMapForGlobalCheckings_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMethodMapForGlobalCheckings_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionMethodMapForGlobalCheckings_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodMapForGlobalCheckings_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterMapForGlobalCheckings map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) ;
  public: GALGAS_extensionSetterMapForGlobalCheckings & operator = (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionSetterMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionSetterMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_extensionSetterMapForGlobalCheckings & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionSetterMapForGlobalCheckings getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionSetterMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionSetterMapForGlobalCheckings ;
 
} ; // End of GALGAS_extensionSetterMapForGlobalCheckings class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_extensionSetterMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionSetterMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionSetterMapForGlobalCheckings' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_extensionSetterMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterMapForGlobalCheckings_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForGlobalCheckings_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionSetterMapForGlobalCheckings_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_extensionSetterMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionSetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterMapForGlobalCheckings_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionSetterMapForGlobalCheckings_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionSetterMapForGlobalCheckings_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionSetterMapForGlobalCheckings_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterMapForGlobalCheckings map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) ;
  public: GALGAS_extensionGetterMapForGlobalCheckings & operator = (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionGetterMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionGetterMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_extensionGetterMapForGlobalCheckings & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForGlobalCheckings getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionGetterMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionGetterMapForGlobalCheckings ;
 
} ; // End of GALGAS_extensionGetterMapForGlobalCheckings class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_extensionGetterMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionGetterMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionGetterMapForGlobalCheckings' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForGlobalCheckings : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_extensionGetterMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterMapForGlobalCheckings_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForGlobalCheckings_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionGetterMapForGlobalCheckings_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_extensionGetterMapForGlobalCheckings_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionGetterMapForGlobalCheckings_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterMapForGlobalCheckings_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionGetterMapForGlobalCheckings_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionGetterMapForGlobalCheckings_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterMapForGlobalCheckings_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3QualifiedFeatureList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_QualifiedFeatureList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_QualifiedFeatureList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFeatureName,
                                                 const class GALGAS_lstring & in_mFeatureValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_QualifiedFeatureList extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_QualifiedFeatureList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_galgas_33_QualifiedFeatureList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_QualifiedFeatureList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_galgas_33_QualifiedFeatureList add_operation (const GALGAS_galgas_33_QualifiedFeatureList & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_galgas_33_QualifiedFeatureList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFeatureValueAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFeatureNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFeatureValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_QualifiedFeatureList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_QualifiedFeatureList ;
 
} ; // End of GALGAS_galgas_33_QualifiedFeatureList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_QualifiedFeatureList : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFeatureName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFeatureValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_galgas_33_QualifiedFeatureList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_QualifiedFeatureList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_QualifiedFeatureList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFeatureName ;
  public: inline GALGAS_lstring readProperty_mFeatureName (void) const {
    return mProperty_mFeatureName ;
  }

  public: GALGAS_lstring mProperty_mFeatureValue ;
  public: inline GALGAS_lstring readProperty_mFeatureValue (void) const {
    return mProperty_mFeatureValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_QualifiedFeatureList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFeatureName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureName = inValue ;
  }

  public: inline void setter_setMFeatureValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFeatureValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_galgas_33_QualifiedFeatureList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_QualifiedFeatureList_2D_element (const GALGAS_lstring & in_mFeatureName,
                                                            const GALGAS_lstring & in_mFeatureValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_QualifiedFeatureList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_QualifiedFeatureList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_QualifiedFeatureList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ProjectSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_ProjectSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ProjectSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_ (class GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                       class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_ (class GALGAS_lbigint & outArgument0,
                                                 class GALGAS_lbigint & outArgument1,
                                                 class GALGAS_lbigint & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_parse (class C_Lexique_galgasScanner * inLexique) = 0 ;

  protected: virtual void nt_project_5F_header_indexing (class C_Lexique_galgasScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GALGAS_lbigint & outArgument0,
                                                                      GALGAS_lbigint & outArgument1,
                                                                      GALGAS_lbigint & outArgument2,
                                                                      GALGAS_lstring & outArgument3,
                                                                      C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                                            C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (C_Lexique_galgasScanner * inLexique) ;

  protected: void rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (C_Lexique_galgasScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ProjectSyntax_0 (C_Lexique_galgasScanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ProjectSyntax_1 (C_Lexique_galgasScanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_ProjectComponentAST struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_ProjectComponentAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstringlist mProperty_mProjectSourceList ;
  public: inline GALGAS_lstringlist readProperty_mProjectSourceList (void) const {
    return mProperty_mProjectSourceList ;
  }

  public: GALGAS_lbigint mProperty_mMajorVersion ;
  public: inline GALGAS_lbigint readProperty_mMajorVersion (void) const {
    return mProperty_mMajorVersion ;
  }

  public: GALGAS_lbigint mProperty_mMinorVersion ;
  public: inline GALGAS_lbigint readProperty_mMinorVersion (void) const {
    return mProperty_mMinorVersion ;
  }

  public: GALGAS_lbigint mProperty_mRevisionVersion ;
  public: inline GALGAS_lbigint readProperty_mRevisionVersion (void) const {
    return mProperty_mRevisionVersion ;
  }

  public: GALGAS_lstringlist mProperty_mGenerationFeatureList ;
  public: inline GALGAS_lstringlist readProperty_mGenerationFeatureList (void) const {
    return mProperty_mGenerationFeatureList ;
  }

  public: GALGAS_galgas_33_QualifiedFeatureList mProperty_mQualifiedFeatureList ;
  public: inline GALGAS_galgas_33_QualifiedFeatureList readProperty_mQualifiedFeatureList (void) const {
    return mProperty_mQualifiedFeatureList ;
  }

  public: GALGAS_lstring mProperty_mTargetName ;
  public: inline GALGAS_lstring readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GALGAS_location mProperty_mEndOfSourceFile ;
  public: inline GALGAS_location readProperty_mEndOfSourceFile (void) const {
    return mProperty_mEndOfSourceFile ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_ProjectComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProjectSourceList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectSourceList = inValue ;
  }

  public: inline void setter_setMMajorVersion (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMajorVersion = inValue ;
  }

  public: inline void setter_setMMinorVersion (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMinorVersion = inValue ;
  }

  public: inline void setter_setMRevisionVersion (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRevisionVersion = inValue ;
  }

  public: inline void setter_setMGenerationFeatureList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerationFeatureList = inValue ;
  }

  public: inline void setter_setMQualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifiedFeatureList = inValue ;
  }

  public: inline void setter_setMTargetName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMEndOfSourceFile (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfSourceFile = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_galgas_33_ProjectComponentAST (void) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_ProjectComponentAST (const GALGAS_lstringlist & in_mProjectSourceList,
                                                const GALGAS_lbigint & in_mMajorVersion,
                                                const GALGAS_lbigint & in_mMinorVersion,
                                                const GALGAS_lbigint & in_mRevisionVersion,
                                                const GALGAS_lstringlist & in_mGenerationFeatureList,
                                                const GALGAS_galgas_33_QualifiedFeatureList & in_mQualifiedFeatureList,
                                                const GALGAS_lstring & in_mTargetName,
                                                const GALGAS_location & in_mEndOfSourceFile) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_ProjectComponentAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_ProjectComponentAST constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                             const class GALGAS_lbigint & inOperand1,
                                                                             const class GALGAS_lbigint & inOperand2,
                                                                             const class GALGAS_lbigint & inOperand3,
                                                                             const class GALGAS_lstringlist & inOperand4,
                                                                             const class GALGAS_galgas_33_QualifiedFeatureList & inOperand5,
                                                                             const class GALGAS_lstring & inOperand6,
                                                                             const class GALGAS_location & inOperand7
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_ProjectComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_ProjectComponentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;

