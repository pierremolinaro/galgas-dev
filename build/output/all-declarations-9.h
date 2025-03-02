#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @moduloExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_moduloExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_moduloExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_moduloExpressionAST_2E_weak (const class GGS_moduloExpressionAST & inSource) ;

  public: GGS_moduloExpressionAST_2E_weak & operator = (const class GGS_moduloExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_moduloExpressionAST_2E_weak init_nil (void) {
    GGS_moduloExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_moduloExpressionAST bang_moduloExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_moduloExpressionAST unwrappedValue (void) const {
    GGS_moduloExpressionAST result ;
    if (isValid ()) {
      const cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_moduloExpressionAST (p) ;
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
  public: static GGS_moduloExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_moduloExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_moduloExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_moduloExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduloExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @notExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_notExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_notExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_notExpressionAST (const class cPtr_notExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_notExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_notExpressionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_notExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                            const class GGS_semanticExpressionAST & inOperand1,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_notExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @notExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_notExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void notExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                              const class GGS_semanticExpressionAST & inOperand1,
                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_notExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_notExpressionAST (const GGS_location & in_mOperatorLocation,
                                 const GGS_semanticExpressionAST & in_mExpression,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @notExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_notExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_notExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_notExpressionAST_2E_weak (const class GGS_notExpressionAST & inSource) ;

  public: GGS_notExpressionAST_2E_weak & operator = (const class GGS_notExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_notExpressionAST_2E_weak init_nil (void) {
    GGS_notExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_notExpressionAST bang_notExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_notExpressionAST unwrappedValue (void) const {
    GGS_notExpressionAST result ;
    if (isValid ()) {
      const cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_notExpressionAST (p) ;
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
  public: static GGS_notExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_notExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_notExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @notExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_notExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_notExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_notExpressionForGeneration (const class cPtr_notExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_notExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GGS_location & inOperand1,
                                                                  const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_notExpressionForGeneration extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_notExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_notExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @notExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_notExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void notExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                            const class GGS_location & inOperand1,
                                                            const class GGS_semanticExpressionForGeneration & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_notExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_notExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                           const GGS_location & in_mLocation,
                                           const GGS_semanticExpressionForGeneration & in_mExpression,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @notExpressionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_notExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_notExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_notExpressionForGeneration_2E_weak (const class GGS_notExpressionForGeneration & inSource) ;

  public: GGS_notExpressionForGeneration_2E_weak & operator = (const class GGS_notExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_notExpressionForGeneration_2E_weak init_nil (void) {
    GGS_notExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_notExpressionForGeneration bang_notExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_notExpressionForGeneration unwrappedValue (void) const {
    GGS_notExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_notExpressionForGeneration * p = (cPtr_notExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_notExpressionForGeneration (p) ;
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
  public: static GGS_notExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_notExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_notExpressionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_orExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_orExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_orExpressionAST (const class cPtr_orExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                       const class GGS_semanticExpressionAST & inOperand1,
                                                       const class GGS_semanticExpressionAST & inOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orExpressionAST extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_orExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_orExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void orExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                 const class GGS_semanticExpressionAST & inOperand1,
                                                 const class GGS_semanticExpressionAST & inOperand2,
                                                 Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GGS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_orExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_orExpressionAST (const GGS_location & in_mOperatorLocation,
                                const GGS_semanticExpressionAST & in_mLeftExpression,
                                const GGS_semanticExpressionAST & in_mRightExpression,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_orExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_orExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_orExpressionAST_2E_weak (const class GGS_orExpressionAST & inSource) ;

  public: GGS_orExpressionAST_2E_weak & operator = (const class GGS_orExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_orExpressionAST_2E_weak init_nil (void) {
    GGS_orExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_orExpressionAST bang_orExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_orExpressionAST unwrappedValue (void) const {
    GGS_orExpressionAST result ;
    if (isValid ()) {
      const cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_orExpressionAST (p) ;
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
  public: static GGS_orExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_orExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orShortExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_orShortExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_orShortExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_orShortExpressionAST (const class cPtr_orShortExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orShortExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_semanticExpressionAST & inOperand1,
                                                            const class GGS_semanticExpressionAST & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orShortExpressionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orShortExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                const class GGS_semanticExpressionAST & inOperand2,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orShortExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_orShortExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orShortExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_orShortExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void orShortExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                      const class GGS_semanticExpressionAST & inOperand2,
                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GGS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_orShortExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_orShortExpressionAST (const GGS_location & in_mOperatorLocation,
                                     const GGS_semanticExpressionAST & in_mLeftExpression,
                                     const GGS_semanticExpressionAST & in_mRightExpression,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orShortExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_orShortExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_orShortExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_orShortExpressionAST_2E_weak (const class GGS_orShortExpressionAST & inSource) ;

  public: GGS_orShortExpressionAST_2E_weak & operator = (const class GGS_orShortExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_orShortExpressionAST_2E_weak init_nil (void) {
    GGS_orShortExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_orShortExpressionAST bang_orShortExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_orShortExpressionAST unwrappedValue (void) const {
    GGS_orShortExpressionAST result ;
    if (isValid ()) {
      const cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_orShortExpressionAST (p) ;
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
  public: static GGS_orShortExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orShortExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orShortExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_orShortExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_xorExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_xorExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_xorExpressionAST (const class cPtr_xorExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xorExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_semanticExpressionAST & inOperand1,
                                                        const class GGS_semanticExpressionAST & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xorExpressionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xorExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                            const class GGS_semanticExpressionAST & inOperand1,
                                                            const class GGS_semanticExpressionAST & inOperand2,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_xorExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_xorExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void xorExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                  const class GGS_semanticExpressionAST & inOperand1,
                                                  const class GGS_semanticExpressionAST & inOperand2,
                                                  Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GGS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_xorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_xorExpressionAST (const GGS_location & in_mOperatorLocation,
                                 const GGS_semanticExpressionAST & in_mLeftExpression,
                                 const GGS_semanticExpressionAST & in_mRightExpression,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_xorExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_xorExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_xorExpressionAST_2E_weak (const class GGS_xorExpressionAST & inSource) ;

  public: GGS_xorExpressionAST_2E_weak & operator = (const class GGS_xorExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_xorExpressionAST_2E_weak init_nil (void) {
    GGS_xorExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_xorExpressionAST bang_xorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_xorExpressionAST unwrappedValue (void) const {
    GGS_xorExpressionAST result ;
    if (isValid ()) {
      const cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_xorExpressionAST (p) ;
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
  public: static GGS_xorExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xorExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_xorExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @closedSliceExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_closedSliceExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_closedSliceExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_closedSliceExpressionAST (const class cPtr_closedSliceExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_closedSliceExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                const class GGS_semanticExpressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_closedSliceExpressionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_closedSliceExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                                    const class GGS_semanticExpressionAST & inOperand2,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_closedSliceExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_closedSliceExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @closedSliceExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_closedSliceExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void closedSliceExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                          const class GGS_semanticExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GGS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_closedSliceExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_closedSliceExpressionAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_semanticExpressionAST & in_mLeftExpression,
                                         const GGS_semanticExpressionAST & in_mRightExpression,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @closedSliceExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_closedSliceExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_closedSliceExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_closedSliceExpressionAST_2E_weak (const class GGS_closedSliceExpressionAST & inSource) ;

  public: GGS_closedSliceExpressionAST_2E_weak & operator = (const class GGS_closedSliceExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_closedSliceExpressionAST_2E_weak init_nil (void) {
    GGS_closedSliceExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_closedSliceExpressionAST bang_closedSliceExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_closedSliceExpressionAST unwrappedValue (void) const {
    GGS_closedSliceExpressionAST result ;
    if (isValid ()) {
      const cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_closedSliceExpressionAST (p) ;
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
  public: static GGS_closedSliceExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_closedSliceExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_closedSliceExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_closedSliceExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @openedSliceExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_openedSliceExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_openedSliceExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_openedSliceExpressionAST (const class cPtr_openedSliceExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_openedSliceExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                const class GGS_semanticExpressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_openedSliceExpressionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_openedSliceExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                                    const class GGS_semanticExpressionAST & inOperand2,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_openedSliceExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_openedSliceExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @openedSliceExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_openedSliceExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void openedSliceExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                          const class GGS_semanticExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GGS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_openedSliceExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_openedSliceExpressionAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_semanticExpressionAST & in_mLeftExpression,
                                         const GGS_semanticExpressionAST & in_mRightExpression,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @openedSliceExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_openedSliceExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_openedSliceExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_openedSliceExpressionAST_2E_weak (const class GGS_openedSliceExpressionAST & inSource) ;

  public: GGS_openedSliceExpressionAST_2E_weak & operator = (const class GGS_openedSliceExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_openedSliceExpressionAST_2E_weak init_nil (void) {
    GGS_openedSliceExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_openedSliceExpressionAST bang_openedSliceExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_openedSliceExpressionAST unwrappedValue (void) const {
    GGS_openedSliceExpressionAST result ;
    if (isValid ()) {
      const cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_openedSliceExpressionAST (p) ;
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
  public: static GGS_openedSliceExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_openedSliceExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_openedSliceExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_openedSliceExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orShortExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_orShortExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_orShortExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_orShortExpressionForGeneration (const class cPtr_orShortExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orShortExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GGS_location & inOperand1,
                                                                          const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                          const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orShortExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orShortExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GGS_location & inOperand1,
                                                                          const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                          const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orShortExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_orShortExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orShortExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_orShortExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void orShortExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                    const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                    Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_orShortExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_orShortExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                               const GGS_location & in_mLocation,
                                               const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                               const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orShortExpressionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_orShortExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_orShortExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_orShortExpressionForGeneration_2E_weak (const class GGS_orShortExpressionForGeneration & inSource) ;

  public: GGS_orShortExpressionForGeneration_2E_weak & operator = (const class GGS_orShortExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_orShortExpressionForGeneration_2E_weak init_nil (void) {
    GGS_orShortExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_orShortExpressionForGeneration bang_orShortExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_orShortExpressionForGeneration unwrappedValue (void) const {
    GGS_orShortExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_orShortExpressionForGeneration (p) ;
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
  public: static GGS_orShortExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orShortExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orShortExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_orShortExpressionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @openedSliceExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_openedSliceExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_openedSliceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_openedSliceExpressionForGeneration (const class cPtr_openedSliceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_openedSliceExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_location & inOperand1,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_openedSliceExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_openedSliceExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_location & inOperand1,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_openedSliceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_openedSliceExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @openedSliceExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_openedSliceExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void openedSliceExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_location & inOperand1,
                                                                        const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                        const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_openedSliceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_openedSliceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                   const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @openedSliceExpressionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_openedSliceExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_openedSliceExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_openedSliceExpressionForGeneration_2E_weak (const class GGS_openedSliceExpressionForGeneration & inSource) ;

  public: GGS_openedSliceExpressionForGeneration_2E_weak & operator = (const class GGS_openedSliceExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_openedSliceExpressionForGeneration_2E_weak init_nil (void) {
    GGS_openedSliceExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_openedSliceExpressionForGeneration bang_openedSliceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_openedSliceExpressionForGeneration unwrappedValue (void) const {
    GGS_openedSliceExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_openedSliceExpressionForGeneration (p) ;
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
  public: static GGS_openedSliceExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_openedSliceExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_openedSliceExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_openedSliceExpressionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @closedSliceExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_closedSliceExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_closedSliceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_closedSliceExpressionForGeneration (const class cPtr_closedSliceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_closedSliceExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_location & inOperand1,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_closedSliceExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_closedSliceExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_location & inOperand1,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_closedSliceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_closedSliceExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @closedSliceExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_closedSliceExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void closedSliceExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_location & inOperand1,
                                                                        const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                        const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_closedSliceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_closedSliceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                   const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @closedSliceExpressionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_closedSliceExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_closedSliceExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_closedSliceExpressionForGeneration_2E_weak (const class GGS_closedSliceExpressionForGeneration & inSource) ;

  public: GGS_closedSliceExpressionForGeneration_2E_weak & operator = (const class GGS_closedSliceExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_closedSliceExpressionForGeneration_2E_weak init_nil (void) {
    GGS_closedSliceExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_closedSliceExpressionForGeneration bang_closedSliceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_closedSliceExpressionForGeneration unwrappedValue (void) const {
    GGS_closedSliceExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_closedSliceExpressionForGeneration (p) ;
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
  public: static GGS_closedSliceExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_closedSliceExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_closedSliceExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_closedSliceExpressionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@actualOutputArgumentList initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_actualOutputArgumentList & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@actualOutputArgumentList subscriptSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_subscriptSignature (const class GGS_actualOutputArgumentList & inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputArgumentList enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const class GGS_actualOutputArgumentList inObject,
                                             class GGS_unifiedTypeMap & io_ioTypeMap,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @tildeExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_tildeExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_tildeExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_tildeExpressionAST (const class cPtr_tildeExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tildeExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tildeExpressionAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tildeExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                              const class GGS_semanticExpressionAST & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tildeExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_tildeExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tildeExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_tildeExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void tildeExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                const class GGS_semanticExpressionAST & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_tildeExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_tildeExpressionAST (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mExpression,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @tildeExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_tildeExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_tildeExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_tildeExpressionAST_2E_weak (const class GGS_tildeExpressionAST & inSource) ;

  public: GGS_tildeExpressionAST_2E_weak & operator = (const class GGS_tildeExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_tildeExpressionAST_2E_weak init_nil (void) {
    GGS_tildeExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_tildeExpressionAST bang_tildeExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_tildeExpressionAST unwrappedValue (void) const {
    GGS_tildeExpressionAST result ;
    if (isValid ()) {
      const cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_tildeExpressionAST (p) ;
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
  public: static GGS_tildeExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tildeExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tildeExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_tildeExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @tildeExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_tildeExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_tildeExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_tildeExpressionForGeneration (const class cPtr_tildeExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tildeExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tildeExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tildeExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_location & inOperand1,
                                                                        const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tildeExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_tildeExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tildeExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_tildeExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void tildeExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_tildeExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_tildeExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                             const GGS_location & in_mLocation,
                                             const GGS_semanticExpressionForGeneration & in_mExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @tildeExpressionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_tildeExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_tildeExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_tildeExpressionForGeneration_2E_weak (const class GGS_tildeExpressionForGeneration & inSource) ;

  public: GGS_tildeExpressionForGeneration_2E_weak & operator = (const class GGS_tildeExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_tildeExpressionForGeneration_2E_weak init_nil (void) {
    GGS_tildeExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_tildeExpressionForGeneration bang_tildeExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_tildeExpressionForGeneration unwrappedValue (void) const {
    GGS_tildeExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_tildeExpressionForGeneration * p = (cPtr_tildeExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_tildeExpressionForGeneration (p) ;
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
  public: static GGS_tildeExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tildeExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_tildeExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_tildeExpressionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryMinusExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_unaryMinusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryMinusExpressionAST (const class cPtr_unaryMinusExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryMinusExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryMinusExpressionAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryMinusExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryMinusExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryMinusExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryMinusExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_semanticExpressionAST & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryMinusExpressionAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_semanticExpressionAST & in_mExpression,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryMinusExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryMinusExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryMinusExpressionAST_2E_weak (const class GGS_unaryMinusExpressionAST & inSource) ;

  public: GGS_unaryMinusExpressionAST_2E_weak & operator = (const class GGS_unaryMinusExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryMinusExpressionAST_2E_weak init_nil (void) {
    GGS_unaryMinusExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryMinusExpressionAST bang_unaryMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_unaryMinusExpressionAST unwrappedValue (void) const {
    GGS_unaryMinusExpressionAST result ;
    if (isValid ()) {
      const cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_unaryMinusExpressionAST (p) ;
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
  public: static GGS_unaryMinusExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryMinusExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryMinusExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryMinusExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryMinusExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_unaryMinusExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryMinusExpressionForGeneration (const class cPtr_unaryMinusExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryMinusExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryMinusExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryMinusExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryMinusExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryMinusExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryMinusExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryMinusExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryMinusExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                  const GGS_location & in_mLocation,
                                                  const GGS_semanticExpressionForGeneration & in_mExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryMinusExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryMinusExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryMinusExpressionForGeneration_2E_weak (const class GGS_unaryMinusExpressionForGeneration & inSource) ;

  public: GGS_unaryMinusExpressionForGeneration_2E_weak & operator = (const class GGS_unaryMinusExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryMinusExpressionForGeneration_2E_weak init_nil (void) {
    GGS_unaryMinusExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryMinusExpressionForGeneration bang_unaryMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_unaryMinusExpressionForGeneration unwrappedValue (void) const {
    GGS_unaryMinusExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_unaryMinusExpressionForGeneration (p) ;
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
  public: static GGS_unaryMinusExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryMinusExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryMinusExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryMinusExpressionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryPlusExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryPlusExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_unaryPlusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryPlusExpressionAST (const class cPtr_unaryPlusExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryPlusExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryPlusExpressionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryPlusExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                                  const class GGS_semanticExpressionAST & inOperand1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryPlusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryPlusExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryPlusExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryPlusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryPlusExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryPlusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryPlusExpressionAST (const GGS_location & in_mOperatorLocation,
                                       const GGS_semanticExpressionAST & in_mExpression,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryPlusExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryPlusExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryPlusExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryPlusExpressionAST_2E_weak (const class GGS_unaryPlusExpressionAST & inSource) ;

  public: GGS_unaryPlusExpressionAST_2E_weak & operator = (const class GGS_unaryPlusExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryPlusExpressionAST_2E_weak init_nil (void) {
    GGS_unaryPlusExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryPlusExpressionAST bang_unaryPlusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_unaryPlusExpressionAST unwrappedValue (void) const {
    GGS_unaryPlusExpressionAST result ;
    if (isValid ()) {
      const cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_unaryPlusExpressionAST (p) ;
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
  public: static GGS_unaryPlusExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryPlusExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryPlusExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryPlusExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryWrappingMinusExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryWrappingMinusExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_unaryWrappingMinusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryWrappingMinusExpressionAST (const class cPtr_unaryWrappingMinusExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryWrappingMinusExpressionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryWrappingMinusExpressionAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryWrappingMinusExpressionAST class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryWrappingMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryWrappingMinusExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryWrappingMinusExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryWrappingMinusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryWrappingMinusExpressionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_semanticExpressionAST & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_unifiedTypeMapEntry arg_inType,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryWrappingMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryWrappingMinusExpressionAST (const GGS_location & in_mOperatorLocation,
                                                const GGS_semanticExpressionAST & in_mExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryWrappingMinusExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryWrappingMinusExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryWrappingMinusExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryWrappingMinusExpressionAST_2E_weak (const class GGS_unaryWrappingMinusExpressionAST & inSource) ;

  public: GGS_unaryWrappingMinusExpressionAST_2E_weak & operator = (const class GGS_unaryWrappingMinusExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryWrappingMinusExpressionAST_2E_weak init_nil (void) {
    GGS_unaryWrappingMinusExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryWrappingMinusExpressionAST bang_unaryWrappingMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_unaryWrappingMinusExpressionAST unwrappedValue (void) const {
    GGS_unaryWrappingMinusExpressionAST result ;
    if (isValid ()) {
      const cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_unaryWrappingMinusExpressionAST (p) ;
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
  public: static GGS_unaryWrappingMinusExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryWrappingMinusExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryWrappingMinusExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryWrappingMinusExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryWrappingMinusExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryWrappingMinusExpressionForGeneration : public GGS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GGS_unaryWrappingMinusExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unaryWrappingMinusExpressionForGeneration (const class cPtr_unaryWrappingMinusExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unaryWrappingMinusExpressionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GGS_location & inOperand1,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unaryWrappingMinusExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryWrappingMinusExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GGS_location & inOperand1,
                                                                                     const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryWrappingMinusExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryWrappingMinusExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryWrappingMinusExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryWrappingMinusExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryWrappingMinusExpressionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                           Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryWrappingMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryWrappingMinusExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                          const GGS_location & in_mLocation,
                                                          const GGS_semanticExpressionForGeneration & in_mExpression,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryWrappingMinusExpressionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unaryWrappingMinusExpressionForGeneration_2E_weak : public GGS_semanticExpressionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (const class GGS_unaryWrappingMinusExpressionForGeneration & inSource) ;

  public: GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & operator = (const class GGS_unaryWrappingMinusExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_unaryWrappingMinusExpressionForGeneration_2E_weak init_nil (void) {
    GGS_unaryWrappingMinusExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unaryWrappingMinusExpressionForGeneration bang_unaryWrappingMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_unaryWrappingMinusExpressionForGeneration unwrappedValue (void) const {
    GGS_unaryWrappingMinusExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_unaryWrappingMinusExpressionForGeneration * p = (cPtr_unaryWrappingMinusExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_unaryWrappingMinusExpressionForGeneration (p) ;
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
  public: static GGS_unaryWrappingMinusExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unaryWrappingMinusExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unaryWrappingMinusExpressionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum selfMutability
//--------------------------------------------------------------------------------------------------

class GGS_selfMutability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_selfMutability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_propertiesAreMutableSelfIsNot,
    enum_selfAndPropertiesAreMutable,
    enum_initializer
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
  public: static GGS_selfMutability extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfMutability class_func_initializer (LOCATION_ARGS) ;

  public: static class GGS_selfMutability class_func_none (LOCATION_ARGS) ;

  public: static class GGS_selfMutability class_func_propertiesAreMutableSelfIsNot (LOCATION_ARGS) ;

  public: static class GGS_selfMutability class_func_selfAndPropertiesAreMutable (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfMutability & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInitializer (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPropertiesAreMutableSelfIsNot (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelfAndPropertiesAreMutable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfMutability class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMutability ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@selfMutability selfIsMutable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_selfIsMutable (const class GGS_selfMutability & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfAvailability_2E_available struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_selfAvailability_2E_available (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_selfAvailability_2E_available (const GGS_unifiedTypeMapEntry & in_type,
                                             const GGS_selfMutability & in_selfMutability) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_selfAvailability_2E_available class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_selfMutability & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAvailability_2E_available & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfAvailability_2E_available class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: selfAvailability.available? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfAvailability_2E_available_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (class cPtr_semanticExpressionAST * inObject,
                                                    const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                    class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const class GGS_unifiedTypeMapEntry constin_inType,
                                                    const class GGS_analysisContext constin_inAnalysisContext,
                                                    class GGS_unifiedTypeMap & io_ioTypeMap,
                                                    class GGS_localVarManager & io_ioVariableMap,
                                                    class GGS_semanticExpressionForGeneration & out_outExpression,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assignmentInstructionAST (const class cPtr_assignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetVariableName (void) const ;

  public: class GGS_lstring readProperty_mOptionalProperty (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_semanticExpressionAST & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_semanticExpressionAST & inOperand3,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_assignmentInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_assignmentInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assignmentInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_semanticExpressionAST & inOperand3,
                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetVariableName ;
  public: GGS_lstring mProperty_mOptionalProperty ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_assignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_lstring & in_mTargetVariableName,
                                         const GGS_lstring & in_mOptionalProperty,
                                         const GGS_semanticExpressionAST & in_mSourceExpression,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assignmentInstructionAST_2E_weak (const class GGS_assignmentInstructionAST & inSource) ;

  public: GGS_assignmentInstructionAST_2E_weak & operator = (const class GGS_assignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assignmentInstructionAST_2E_weak init_nil (void) {
    GGS_assignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assignmentInstructionAST bang_assignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_assignmentInstructionAST unwrappedValue (void) const {
    GGS_assignmentInstructionAST result ;
    if (isValid ()) {
      const cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_assignmentInstructionAST (p) ;
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
  public: static GGS_assignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_assignmentInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfPropertyAssignmentInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_selfPropertyAssignmentInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfPropertyAssignmentInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfPropertyAssignmentInstructionAST (const class cPtr_selfPropertyAssignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetSelfPropertyName (void) const ;

  public: class GGS_lstring readProperty_mOptionalProperty (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfPropertyAssignmentInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_semanticExpressionAST & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfPropertyAssignmentInstructionAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfPropertyAssignmentInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_semanticExpressionAST & inOperand3,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPropertyAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfPropertyAssignmentInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfPropertyAssignmentInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_selfPropertyAssignmentInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfPropertyAssignmentInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_lstring & inOperand2,
                                                                          const class GGS_semanticExpressionAST & inOperand3,
                                                                          Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetSelfPropertyName ;
  public: GGS_lstring mProperty_mOptionalProperty ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_selfPropertyAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfPropertyAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                     const GGS_lstring & in_mTargetSelfPropertyName,
                                                     const GGS_lstring & in_mOptionalProperty,
                                                     const GGS_semanticExpressionAST & in_mSourceExpression,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfPropertyAssignmentInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_selfPropertyAssignmentInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfPropertyAssignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfPropertyAssignmentInstructionAST_2E_weak (const class GGS_selfPropertyAssignmentInstructionAST & inSource) ;

  public: GGS_selfPropertyAssignmentInstructionAST_2E_weak & operator = (const class GGS_selfPropertyAssignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfPropertyAssignmentInstructionAST_2E_weak init_nil (void) {
    GGS_selfPropertyAssignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfPropertyAssignmentInstructionAST bang_selfPropertyAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_selfPropertyAssignmentInstructionAST unwrappedValue (void) const {
    GGS_selfPropertyAssignmentInstructionAST result ;
    if (isValid ()) {
      const cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_selfPropertyAssignmentInstructionAST (p) ;
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
  public: static GGS_selfPropertyAssignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfPropertyAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfPropertyAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfPropertyAssignmentInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assignmentInstructionForGeneration (const class cPtr_assignmentInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_string readProperty_mTargetCppName (void) const ;

  public: class GGS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GGS_string readProperty_mOptionalProperty (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

  public: class GGS_location readProperty_mSourceLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentInstructionForGeneration init_21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                          const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                          const class GGS_string & inOperand2,
                                                                                          const class GGS_string & inOperand3,
                                                                                          const class GGS_string & inOperand4,
                                                                                          const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                                          const class GGS_location & inOperand6,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentInstructionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                              const class GGS_string & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              const class GGS_string & inOperand4,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                              const class GGS_location & inOperand6,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_assignmentInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_assignmentInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assignmentInstructionForGeneration_init_21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                    const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                    const class GGS_string & inOperand2,
                                                                                    const class GGS_string & inOperand3,
                                                                                    const class GGS_string & inOperand4,
                                                                                    const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                                    const class GGS_location & inOperand6,
                                                                                    Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_string mProperty_mTargetCppName ;
  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GGS_string mProperty_mOptionalProperty ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceExpression ;
  public: GGS_location mProperty_mSourceLocation ;


//--- Default constructor
  public: cPtr_assignmentInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assignmentInstructionForGeneration (const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                   const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                   const GGS_string & in_mTargetCppName,
                                                   const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                   const GGS_string & in_mOptionalProperty,
                                                   const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                   const GGS_location & in_mSourceLocation,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assignmentInstructionForGeneration_2E_weak (const class GGS_assignmentInstructionForGeneration & inSource) ;

  public: GGS_assignmentInstructionForGeneration_2E_weak & operator = (const class GGS_assignmentInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assignmentInstructionForGeneration_2E_weak init_nil (void) {
    GGS_assignmentInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assignmentInstructionForGeneration bang_assignmentInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_assignmentInstructionForGeneration unwrappedValue (void) const {
    GGS_assignmentInstructionForGeneration result ;
    if (isValid ()) {
      const cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_assignmentInstructionForGeneration (p) ;
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
  public: static GGS_assignmentInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_assignmentInstructionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_castInstructionBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_castInstructionBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_castInstructionBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mTypeName,
                                                 const class GGS_lstring & in_mConstantVarName,
                                                 const class GGS_semanticInstructionListAST & in_mInstructionList,
                                                 const class GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                 const class GGS_location & in_mEndOfInstructions
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_castInstructionBranchListAST init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_castInstructionBranchListAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_castInstructionBranchListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_castInstructionBranchListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_semanticInstructionListAST & inOperand2,
                                                                                  const class GGS_dynamicTypeComparisonKind & inOperand3,
                                                                                  const class GGS_location & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_castInstructionBranchListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_semanticInstructionListAST & inOperand2,
                                                     const class GGS_dynamicTypeComparisonKind & inOperand3,
                                                     const class GGS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_castInstructionBranchListAST add_operation (const GGS_castInstructionBranchListAST & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_semanticInstructionListAST constinArgument2,
                                               class GGS_dynamicTypeComparisonKind constinArgument3,
                                               class GGS_location constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_semanticInstructionListAST constinArgument2,
                                                      class GGS_dynamicTypeComparisonKind constinArgument3,
                                                      class GGS_location constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_semanticInstructionListAST & outArgument2,
                                                 class GGS_dynamicTypeComparisonKind & outArgument3,
                                                 class GGS_location & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_semanticInstructionListAST & outArgument2,
                                                class GGS_dynamicTypeComparisonKind & outArgument3,
                                                class GGS_location & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_semanticInstructionListAST & outArgument2,
                                                      class GGS_dynamicTypeComparisonKind & outArgument3,
                                                      class GGS_location & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantVarNameAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionsAtIndex (class GGS_location constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_semanticInstructionListAST constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeComparisonKindAtIndex (class GGS_dynamicTypeComparisonKind constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_semanticInstructionListAST & outArgument2,
                                              class GGS_dynamicTypeComparisonKind & outArgument3,
                                              class GGS_location & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_semanticInstructionListAST & outArgument2,
                                             class GGS_dynamicTypeComparisonKind & outArgument3,
                                             class GGS_location & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mConstantVarNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfInstructionsAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_dynamicTypeComparisonKind getter_mTypeComparisonKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_castInstructionBranchListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_castInstructionBranchListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_castInstructionBranchListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_castInstructionBranchListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_castInstructionBranchListAST ;
 
} ; // End of GGS_castInstructionBranchListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_castInstructionBranchListAST final
#ifndef NEW_ITERATOR
  : public cGenericAbstractEnumerator
#endif
{
  public: cEnumerator_castInstructionBranchListAST (const GGS_castInstructionBranchListAST & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  #ifdef NEW_ITERATOR
    public: bool hasCurrentObject (void) const ;
    public: void gotoNextObject (void) ;
    public: void rewind (void) ;
  #endif
  public: class GGS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mConstantVarName (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_dynamicTypeComparisonKind current_mTypeComparisonKind (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_castInstructionBranchListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_castInstructionBranchListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: inline GGS_lstring readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GGS_lstring mProperty_mConstantVarName ;
  public: inline GGS_lstring readProperty_mConstantVarName (void) const {
    return mProperty_mConstantVarName ;
  }

  public: GGS_semanticInstructionListAST mProperty_mInstructionList ;
  public: inline GGS_semanticInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: inline GGS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const {
    return mProperty_mTypeComparisonKind ;
  }

  public: GGS_location mProperty_mEndOfInstructions ;
  public: inline GGS_location readProperty_mEndOfInstructions (void) const {
    return mProperty_mEndOfInstructions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_castInstructionBranchListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMConstantVarName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantVarName = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMTypeComparisonKind (const GGS_dynamicTypeComparisonKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeComparisonKind = inValue ;
  }

  public: inline void setter_setMEndOfInstructions (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructions = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_castInstructionBranchListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_castInstructionBranchListAST_2E_element (const GGS_lstring & in_mTypeName,
                                                       const GGS_lstring & in_mConstantVarName,
                                                       const GGS_semanticInstructionListAST & in_mInstructionList,
                                                       const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                       const GGS_location & in_mEndOfInstructions) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_castInstructionBranchListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_semanticInstructionListAST & inOperand2,
                                                                                       const class GGS_dynamicTypeComparisonKind & inOperand3,
                                                                                       const class GGS_location & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_castInstructionBranchListAST_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_castInstructionBranchListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_semanticInstructionListAST & inOperand2,
                                                                                   const class GGS_dynamicTypeComparisonKind & inOperand3,
                                                                                   const class GGS_location & inOperand4,
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
 
} ; // End of GGS_castInstructionBranchListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structuredCastInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_structuredCastInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_structuredCastInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structuredCastInstructionAST (const class cPtr_structuredCastInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mCastExpression (void) const ;

  public: class GGS_castInstructionBranchListAST readProperty_mCastInstructionBranchList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mElseInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfCastInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structuredCastInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_semanticExpressionAST & inOperand1,
                                                                            const class GGS_castInstructionBranchListAST & inOperand2,
                                                                            const class GGS_semanticInstructionListAST & inOperand3,
                                                                            const class GGS_location & inOperand4,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structuredCastInstructionAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structuredCastInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_semanticExpressionAST & inOperand1,
                                                                        const class GGS_castInstructionBranchListAST & inOperand2,
                                                                        const class GGS_semanticInstructionListAST & inOperand3,
                                                                        const class GGS_location & inOperand4,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structuredCastInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_structuredCastInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structuredCastInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_structuredCastInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structuredCastInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                                      const class GGS_castInstructionBranchListAST & inOperand2,
                                                                      const class GGS_semanticInstructionListAST & inOperand3,
                                                                      const class GGS_location & inOperand4,
                                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mCastExpression ;
  public: GGS_castInstructionBranchListAST mProperty_mCastInstructionBranchList ;
  public: GGS_semanticInstructionListAST mProperty_mElseInstructionList ;
  public: GGS_location mProperty_mEndOfCastInstruction ;


//--- Default constructor
  public: cPtr_structuredCastInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structuredCastInstructionAST (const GGS_location & in_mInstructionLocation,
                                             const GGS_semanticExpressionAST & in_mCastExpression,
                                             const GGS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                             const GGS_semanticInstructionListAST & in_mElseInstructionList,
                                             const GGS_location & in_mEndOfCastInstruction,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structuredCastInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_structuredCastInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structuredCastInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structuredCastInstructionAST_2E_weak (const class GGS_structuredCastInstructionAST & inSource) ;

  public: GGS_structuredCastInstructionAST_2E_weak & operator = (const class GGS_structuredCastInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structuredCastInstructionAST_2E_weak init_nil (void) {
    GGS_structuredCastInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structuredCastInstructionAST bang_structuredCastInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_structuredCastInstructionAST unwrappedValue (void) const {
    GGS_structuredCastInstructionAST result ;
    if (isValid ()) {
      const cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_structuredCastInstructionAST (p) ;
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
  public: static GGS_structuredCastInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structuredCastInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structuredCastInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_structuredCastInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GGS_castInstructionBranchListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_castInstructionBranchListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_castInstructionBranchListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                 const class GGS_unifiedTypeMapEntry & in_mType,
                                                 const class GGS_string & in_mCastedVarCppName,
                                                 const class GGS_semanticInstructionListForGeneration & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_castInstructionBranchListForGeneration init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_castInstructionBranchListForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_castInstructionBranchListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_castInstructionBranchListForGeneration class_func_listWithValue (const class GGS_dynamicTypeComparisonKind & inOperand0,
                                                                                            const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                            const class GGS_string & inOperand2,
                                                                                            const class GGS_semanticInstructionListForGeneration & inOperand3
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_castInstructionBranchListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_dynamicTypeComparisonKind & inOperand0,
                                                     const class GGS_unifiedTypeMapEntry & inOperand1,
                                                     const class GGS_string & inOperand2,
                                                     const class GGS_semanticInstructionListForGeneration & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_castInstructionBranchListForGeneration add_operation (const GGS_castInstructionBranchListForGeneration & inOperand,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_dynamicTypeComparisonKind constinArgument0,
                                               class GGS_unifiedTypeMapEntry constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_semanticInstructionListForGeneration constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_dynamicTypeComparisonKind constinArgument0,
                                                      class GGS_unifiedTypeMapEntry constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_semanticInstructionListForGeneration constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_dynamicTypeComparisonKind & outArgument0,
                                                 class GGS_unifiedTypeMapEntry & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_semanticInstructionListForGeneration & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_dynamicTypeComparisonKind & outArgument0,
                                                class GGS_unifiedTypeMapEntry & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_semanticInstructionListForGeneration & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_dynamicTypeComparisonKind & outArgument0,
                                                      class GGS_unifiedTypeMapEntry & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_semanticInstructionListForGeneration & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCastedVarCppNameAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_semanticInstructionListForGeneration constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeComparisonKindAtIndex (class GGS_dynamicTypeComparisonKind constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_dynamicTypeComparisonKind & outArgument0,
                                              class GGS_unifiedTypeMapEntry & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_semanticInstructionListForGeneration & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_dynamicTypeComparisonKind & outArgument0,
                                             class GGS_unifiedTypeMapEntry & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_semanticInstructionListForGeneration & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCastedVarCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_dynamicTypeComparisonKind getter_mTypeComparisonKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_castInstructionBranchListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_castInstructionBranchListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_castInstructionBranchListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_castInstructionBranchListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_castInstructionBranchListForGeneration ;
 
} ; // End of GGS_castInstructionBranchListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_castInstructionBranchListForGeneration final
#ifndef NEW_ITERATOR
  : public cGenericAbstractEnumerator
#endif
{
  public: cEnumerator_castInstructionBranchListForGeneration (const GGS_castInstructionBranchListForGeneration & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) ;

//--- Current element access
  #ifdef NEW_ITERATOR
    public: bool hasCurrentObject (void) const ;
    public: void gotoNextObject (void) ;
    public: void rewind (void) ;
  #endif
  public: class GGS_dynamicTypeComparisonKind current_mTypeComparisonKind (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_string current_mCastedVarCppName (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_castInstructionBranchListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_castInstructionBranchListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: inline GGS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const {
    return mProperty_mTypeComparisonKind ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_string mProperty_mCastedVarCppName ;
  public: inline GGS_string readProperty_mCastedVarCppName (void) const {
    return mProperty_mCastedVarCppName ;
  }

  public: GGS_semanticInstructionListForGeneration mProperty_mInstructionList ;
  public: inline GGS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_castInstructionBranchListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeComparisonKind (const GGS_dynamicTypeComparisonKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeComparisonKind = inValue ;
  }

  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCastedVarCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCastedVarCppName = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_castInstructionBranchListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_castInstructionBranchListForGeneration_2E_element (const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                 const GGS_unifiedTypeMapEntry & in_mType,
                                                                 const GGS_string & in_mCastedVarCppName,
                                                                 const GGS_semanticInstructionListForGeneration & in_mInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_castInstructionBranchListForGeneration_2E_element init_21__21__21__21_ (const class GGS_dynamicTypeComparisonKind & inOperand0,
                                                                                             const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                             const class GGS_string & inOperand2,
                                                                                             const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_castInstructionBranchListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_castInstructionBranchListForGeneration_2E_element class_func_new (const class GGS_dynamicTypeComparisonKind & inOperand0,
                                                                                             const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                             const class GGS_string & inOperand2,
                                                                                             const class GGS_semanticInstructionListForGeneration & inOperand3,
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
 
} ; // End of GGS_castInstructionBranchListForGeneration_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structuredCastInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_structuredCastInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_structuredCastInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structuredCastInstructionForGeneration (const class cPtr_structuredCastInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GGS_castInstructionBranchListForGeneration readProperty_mCastBranchList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structuredCastInstructionForGeneration init_21__21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                              const class GGS_castInstructionBranchListForGeneration & inOperand1,
                                                                              const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structuredCastInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structuredCastInstructionForGeneration class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                                  const class GGS_castInstructionBranchListForGeneration & inOperand1,
                                                                                  const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structuredCastInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_structuredCastInstructionForGeneration class


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

//--------------------------------- Initializers
  public: void structuredCastInstructionForGeneration_init_21__21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                        const class GGS_castInstructionBranchListForGeneration & inOperand1,
                                                                        const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GGS_castInstructionBranchListForGeneration mProperty_mCastBranchList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_structuredCastInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structuredCastInstructionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                       const GGS_castInstructionBranchListForGeneration & in_mCastBranchList,
                                                       const GGS_semanticInstructionListForGeneration & in_mElseInstructionList,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structuredCastInstructionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_structuredCastInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structuredCastInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structuredCastInstructionForGeneration_2E_weak (const class GGS_structuredCastInstructionForGeneration & inSource) ;

  public: GGS_structuredCastInstructionForGeneration_2E_weak & operator = (const class GGS_structuredCastInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structuredCastInstructionForGeneration_2E_weak init_nil (void) {
    GGS_structuredCastInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structuredCastInstructionForGeneration bang_structuredCastInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_structuredCastInstructionForGeneration unwrappedValue (void) const {
    GGS_structuredCastInstructionForGeneration result ;
    if (isValid ()) {
      const cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_structuredCastInstructionForGeneration (p) ;
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
  public: static GGS_structuredCastInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structuredCastInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structuredCastInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_structuredCastInstructionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum opAssignmentOperator
//--------------------------------------------------------------------------------------------------

class GGS_opAssignmentOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_opAssignmentOperator (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_andAssign,
    enum_orAssign,
    enum_xorAssign,
    enum_plusAssign,
    enum_minusAssign,
    enum_mulAssign,
    enum_divAssign
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
  public: static GGS_opAssignmentOperator extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_opAssignmentOperator class_func_andAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_divAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_minusAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_mulAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_orAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_plusAssign (LOCATION_ARGS) ;

  public: static class GGS_opAssignmentOperator class_func_xorAssign (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAndAssign (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDivAssign (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMinusAssign (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMulAssign (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOrAssign (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPlusAssign (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXorAssign (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_opAssignmentOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opAssignmentOperator ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@opAssignmentOperator string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_opAssignmentOperator & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@opAssignmentOperator cppFunctionName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cppFunctionName (const class GGS_opAssignmentOperator & inObject,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @opAssignExpressionInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_opAssignExpressionInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_opAssignExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_opAssignExpressionInstructionAST (const class cPtr_opAssignExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_opAssignmentOperator readProperty_mOperator (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_opAssignExpressionInstructionAST init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    const class GGS_lstring & inOperand2,
                                                                                    const class GGS_lstringlist & inOperand3,
                                                                                    const class GGS_opAssignmentOperator & inOperand4,
                                                                                    const class GGS_semanticExpressionAST & inOperand5,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_opAssignExpressionInstructionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_opAssignExpressionInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_bool & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_lstringlist & inOperand3,
                                                                            const class GGS_opAssignmentOperator & inOperand4,
                                                                            const class GGS_semanticExpressionAST & inOperand5,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_opAssignExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_opAssignExpressionInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @opAssignExpressionInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_opAssignExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void opAssignExpressionInstructionAST_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              const class GGS_lstringlist & inOperand3,
                                                                              const class GGS_opAssignmentOperator & inOperand4,
                                                                              const class GGS_semanticExpressionAST & inOperand5,
                                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mPrefixedBySelf ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_opAssignmentOperator mProperty_mOperator ;
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_opAssignExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_opAssignExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                 const GGS_bool & in_mPrefixedBySelf,
                                                 const GGS_lstring & in_mReceiverName,
                                                 const GGS_lstringlist & in_mStructAttributeList,
                                                 const GGS_opAssignmentOperator & in_mOperator,
                                                 const GGS_semanticExpressionAST & in_mExpression,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @opAssignExpressionInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_opAssignExpressionInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_opAssignExpressionInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_opAssignExpressionInstructionAST_2E_weak (const class GGS_opAssignExpressionInstructionAST & inSource) ;

  public: GGS_opAssignExpressionInstructionAST_2E_weak & operator = (const class GGS_opAssignExpressionInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_opAssignExpressionInstructionAST_2E_weak init_nil (void) {
    GGS_opAssignExpressionInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_opAssignExpressionInstructionAST bang_opAssignExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_opAssignExpressionInstructionAST unwrappedValue (void) const {
    GGS_opAssignExpressionInstructionAST result ;
    if (isValid ()) {
      const cPtr_opAssignExpressionInstructionAST * p = (cPtr_opAssignExpressionInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_opAssignExpressionInstructionAST (p) ;
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
  public: static GGS_opAssignExpressionInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_opAssignExpressionInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_opAssignExpressionInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_opAssignExpressionInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualElementsInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_plusEqualElementsInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_plusEqualElementsInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_plusEqualElementsInstructionAST (const class cPtr_plusEqualElementsInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_actualOutputArgumentList readProperty_mExpressions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_plusEqualElementsInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_bool & inOperand1,
                                                                               const class GGS_lstring & inOperand2,
                                                                               const class GGS_lstringlist & inOperand3,
                                                                               const class GGS_actualOutputArgumentList & inOperand4,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_plusEqualElementsInstructionAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_plusEqualElementsInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                           const class GGS_bool & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_lstringlist & inOperand3,
                                                                           const class GGS_actualOutputArgumentList & inOperand4,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_plusEqualElementsInstructionAST class


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

//--------------------------------- Initializers
  public: void plusEqualElementsInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_lstringlist & inOperand3,
                                                                         const class GGS_actualOutputArgumentList & inOperand4,
                                                                         Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mPrefixedBySelf ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_actualOutputArgumentList mProperty_mExpressions ;


//--- Default constructor
  public: cPtr_plusEqualElementsInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_plusEqualElementsInstructionAST (const GGS_location & in_mInstructionLocation,
                                                const GGS_bool & in_mPrefixedBySelf,
                                                const GGS_lstring & in_mReceiverName,
                                                const GGS_lstringlist & in_mStructAttributeList,
                                                const GGS_actualOutputArgumentList & in_mExpressions,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualElementsInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_plusEqualElementsInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_plusEqualElementsInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_plusEqualElementsInstructionAST_2E_weak (const class GGS_plusEqualElementsInstructionAST & inSource) ;

  public: GGS_plusEqualElementsInstructionAST_2E_weak & operator = (const class GGS_plusEqualElementsInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_plusEqualElementsInstructionAST_2E_weak init_nil (void) {
    GGS_plusEqualElementsInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_plusEqualElementsInstructionAST bang_plusEqualElementsInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_plusEqualElementsInstructionAST unwrappedValue (void) const {
    GGS_plusEqualElementsInstructionAST result ;
    if (isValid ()) {
      const cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_plusEqualElementsInstructionAST (p) ;
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
  public: static GGS_plusEqualElementsInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_plusEqualElementsInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusEqualElementsInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_plusEqualElementsInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualnstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_plusEqualnstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_plusEqualnstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_plusEqualnstructionForGeneration (const class cPtr_plusEqualnstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mReceiverCppName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_semanticExpressionListForGeneration readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_plusEqualnstructionForGeneration init_21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                    const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                    const class GGS_string & inOperand2,
                                                                                    const class GGS_location & inOperand3,
                                                                                    const class GGS_lstringlist & inOperand4,
                                                                                    const class GGS_semanticExpressionListForGeneration & inOperand5,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_plusEqualnstructionForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_plusEqualnstructionForGeneration class_func_new (const class GGS_string & inOperand0,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                            const class GGS_string & inOperand2,
                                                                            const class GGS_location & inOperand3,
                                                                            const class GGS_lstringlist & inOperand4,
                                                                            const class GGS_semanticExpressionListForGeneration & inOperand5,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusEqualnstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_plusEqualnstructionForGeneration class


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

//--------------------------------- Initializers
  public: void plusEqualnstructionForGeneration_init_21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                              const class GGS_string & inOperand2,
                                                                              const class GGS_location & inOperand3,
                                                                              const class GGS_lstringlist & inOperand4,
                                                                              const class GGS_semanticExpressionListForGeneration & inOperand5,
                                                                              Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mReceiverCppName ;
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_semanticExpressionListForGeneration mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_plusEqualnstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_plusEqualnstructionForGeneration (const GGS_string & in_mReceiverCppName,
                                                 const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                 const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                 const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstringlist & in_mStructAttributeList,
                                                 const GGS_semanticExpressionListForGeneration & in_mExpressionList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualnstructionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_plusEqualnstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_plusEqualnstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_plusEqualnstructionForGeneration_2E_weak (const class GGS_plusEqualnstructionForGeneration & inSource) ;

  public: GGS_plusEqualnstructionForGeneration_2E_weak & operator = (const class GGS_plusEqualnstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_plusEqualnstructionForGeneration_2E_weak init_nil (void) {
    GGS_plusEqualnstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_plusEqualnstructionForGeneration bang_plusEqualnstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_plusEqualnstructionForGeneration unwrappedValue (void) const {
    GGS_plusEqualnstructionForGeneration result ;
    if (isValid ()) {
      const cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_plusEqualnstructionForGeneration (p) ;
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
  public: static GGS_plusEqualnstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_plusEqualnstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_plusEqualnstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_plusEqualnstructionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @opAssignInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_opAssignInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_opAssignInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_opAssignInstructionForGeneration (const class cPtr_opAssignInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_string readProperty_mTargetVariableCppName (void) const ;

  public: class GGS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

  public: class GGS_string readProperty_mGeneratedMethod (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_opAssignInstructionForGeneration init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                        const class GGS_string & inOperand2,
                                                                                        const class GGS_string & inOperand3,
                                                                                        const class GGS_lstringlist & inOperand4,
                                                                                        const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                                        const class GGS_string & inOperand6,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_opAssignInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_opAssignInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                            const class GGS_string & inOperand2,
                                                                            const class GGS_string & inOperand3,
                                                                            const class GGS_lstringlist & inOperand4,
                                                                            const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                            const class GGS_string & inOperand6,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_opAssignInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_opAssignInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opAssignInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @opAssignInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_opAssignInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void opAssignInstructionForGeneration_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                  const class GGS_string & inOperand2,
                                                                                  const class GGS_string & inOperand3,
                                                                                  const class GGS_lstringlist & inOperand4,
                                                                                  const class GGS_semanticExpressionForGeneration & inOperand5,
                                                                                  const class GGS_string & inOperand6,
                                                                                  Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_string mProperty_mTargetVariableCppName ;
  public: GGS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceExpression ;
  public: GGS_string mProperty_mGeneratedMethod ;


//--- Default constructor
  public: cPtr_opAssignInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_opAssignInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                 const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                 const GGS_string & in_mTargetVariableCppName,
                                                 const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                 const GGS_lstringlist & in_mStructAttributeList,
                                                 const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                 const GGS_string & in_mGeneratedMethod,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @opAssignInstructionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_opAssignInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_opAssignInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_opAssignInstructionForGeneration_2E_weak (const class GGS_opAssignInstructionForGeneration & inSource) ;

  public: GGS_opAssignInstructionForGeneration_2E_weak & operator = (const class GGS_opAssignInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_opAssignInstructionForGeneration_2E_weak init_nil (void) {
    GGS_opAssignInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_opAssignInstructionForGeneration bang_opAssignInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_opAssignInstructionForGeneration unwrappedValue (void) const {
    GGS_opAssignInstructionForGeneration result ;
    if (isValid ()) {
      const cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_opAssignInstructionForGeneration (p) ;
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
  public: static GGS_opAssignInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_opAssignInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_opAssignInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_opAssignInstructionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opAssignInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dropInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dropInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_dropInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dropInstructionAST (const class cPtr_dropInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstringlist readProperty_mDropList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dropInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_lstringlist & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dropInstructionAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dropInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                              const class GGS_lstringlist & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_dropInstructionAST class


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

//--------------------------------- Initializers
  public: void dropInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                const class GGS_lstringlist & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstringlist mProperty_mDropList ;


//--- Default constructor
  public: cPtr_dropInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dropInstructionAST (const GGS_location & in_mInstructionLocation,
                                   const GGS_lstringlist & in_mDropList,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dropInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dropInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dropInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dropInstructionAST_2E_weak (const class GGS_dropInstructionAST & inSource) ;

  public: GGS_dropInstructionAST_2E_weak & operator = (const class GGS_dropInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dropInstructionAST_2E_weak init_nil (void) {
    GGS_dropInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dropInstructionAST bang_dropInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_dropInstructionAST unwrappedValue (void) const {
    GGS_dropInstructionAST result ;
    if (isValid ()) {
      const cPtr_dropInstructionAST * p = (cPtr_dropInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_dropInstructionAST (p) ;
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
  public: static GGS_dropInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dropInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dropInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_dropInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum fixitElementAST
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_fixitElementAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_fixItRemove,
    enum_fixItReplace,
    enum_fixItInsertAfter,
    enum_fixItInsertBefore
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItReplace (class GGS_semanticExpressionAST & out_exp,
                                                                     class GGS_location & out_errorLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertAfter (class GGS_semanticExpressionAST & out_exp,
                                                                         class GGS_location & out_errorLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertBefore (class GGS_semanticExpressionAST & out_exp,
                                                                          class GGS_location & out_errorLocation) const ;

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
  public: static GGS_fixitElementAST extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementAST class_func_fixItInsertAfter (const class GGS_semanticExpressionAST & inOperand0,
                                                                        const class GGS_location & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementAST class_func_fixItInsertBefore (const class GGS_semanticExpressionAST & inOperand0,
                                                                         const class GGS_location & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementAST class_func_fixItRemove (LOCATION_ARGS) ;

  public: static class GGS_fixitElementAST class_func_fixItReplace (const class GGS_semanticExpressionAST & inOperand0,
                                                                    const class GGS_location & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractFixItInsertAfter (class GGS_semanticExpressionAST & outArgument0,
                                                                class GGS_location & outArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFixItInsertBefore (class GGS_semanticExpressionAST & outArgument0,
                                                                 class GGS_location & outArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFixItReplace (class GGS_semanticExpressionAST & outArgument0,
                                                            class GGS_location & outArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_fixitElementAST_2E_fixItInsertAfter_3F_ getter_getFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitElementAST_2E_fixItInsertBefore_3F_ getter_getFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitElementAST_2E_fixItReplace_3F_ getter_getFixItReplace (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fixitElementAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementAST_2E_fixItInsertAfter struct
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertAfter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_errorLocation ;
  public: inline GGS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_fixitElementAST_2E_fixItInsertAfter (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_semanticExpressionAST & in_exp,
                                                   const GGS_location & in_errorLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementAST_2E_fixItInsertAfter init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItInsertAfter extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementAST_2E_fixItInsertAfter class_func_new (const class GGS_semanticExpressionAST & inOperand0,
                                                                               const class GGS_location & inOperand1,
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
 
} ; // End of GGS_fixitElementAST_2E_fixItInsertAfter class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: fixitElementAST.fixItInsertAfter? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertAfter_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementAST_2E_fixItInsertAfter mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementAST_2E_fixItInsertAfter_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementAST_2E_fixItInsertAfter unwrappedValue (void) const {
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
  public: static GGS_fixitElementAST_2E_fixItInsertAfter_3F_ extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fixitElementAST_2E_fixItInsertAfter_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementAST_2E_fixItInsertBefore struct
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertBefore : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_errorLocation ;
  public: inline GGS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_fixitElementAST_2E_fixItInsertBefore (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_semanticExpressionAST & in_exp,
                                                    const GGS_location & in_errorLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementAST_2E_fixItInsertBefore init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                        const class GGS_location & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItInsertBefore extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementAST_2E_fixItInsertBefore class_func_new (const class GGS_semanticExpressionAST & inOperand0,
                                                                                const class GGS_location & inOperand1,
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
 
} ; // End of GGS_fixitElementAST_2E_fixItInsertBefore class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: fixitElementAST.fixItInsertBefore? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertBefore_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementAST_2E_fixItInsertBefore mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementAST_2E_fixItInsertBefore_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementAST_2E_fixItInsertBefore unwrappedValue (void) const {
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
  public: static GGS_fixitElementAST_2E_fixItInsertBefore_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fixitElementAST_2E_fixItInsertBefore_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementAST_2E_fixItReplace struct
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItReplace : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_errorLocation ;
  public: inline GGS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItReplace (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_fixitElementAST_2E_fixItReplace (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementAST_2E_fixItReplace (const GGS_semanticExpressionAST & in_exp,
                                               const GGS_location & in_errorLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementAST_2E_fixItReplace init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItReplace extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementAST_2E_fixItReplace class_func_new (const class GGS_semanticExpressionAST & inOperand0,
                                                                           const class GGS_location & inOperand1,
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
 
} ; // End of GGS_fixitElementAST_2E_fixItReplace class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: fixitElementAST.fixItReplace? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItReplace_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementAST_2E_fixItReplace mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItReplace_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementAST_2E_fixItReplace_3F_ (const GGS_fixitElementAST_2E_fixItReplace & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementAST_2E_fixItReplace_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementAST_2E_fixItReplace unwrappedValue (void) const {
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
  public: static GGS_fixitElementAST_2E_fixItReplace_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fixitElementAST_2E_fixItReplace_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_fixitListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_fixitListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_fixitElementAST & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitListAST init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitListAST extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_fixitListAST class_func_listWithValue (const class GGS_fixitElementAST & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_fixitListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_fixitElementAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_fixitListAST add_operation (const GGS_fixitListAST & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_fixitElementAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_fixitElementAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_fixitElementAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_fixitElementAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_fixitElementAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GGS_fixitElementAST constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_fixitElementAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_fixitElementAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_fixitElementAST getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_fixitListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_fixitListAST ;
 
} ; // End of GGS_fixitListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_fixitListAST final
#ifndef NEW_ITERATOR
  : public cGenericAbstractEnumerator
#endif
{
  public: cEnumerator_fixitListAST (const GGS_fixitListAST & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  #ifdef NEW_ITERATOR
    public: bool hasCurrentObject (void) const ;
    public: void gotoNextObject (void) ;
    public: void rewind (void) ;
  #endif
  public: class GGS_fixitElementAST current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fixitListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_fixitElementAST mProperty_mElement ;
  public: inline GGS_fixitElementAST readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_fixitElementAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_fixitListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitListAST_2E_element (const GGS_fixitElementAST & in_mElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitListAST_2E_element init_21_ (const class GGS_fixitElementAST & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitListAST_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitListAST_2E_element class_func_new (const class GGS_fixitElementAST & inOperand0,
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
 
} ; // End of GGS_fixitListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_errorInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_errorInstructionAST (const class cPtr_errorInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mLocationExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mMessageExpression (void) const ;

  public: class GGS_lstringlist readProperty_mBuiltVariableList (void) const ;

  public: class GGS_fixitListAST readProperty_mFixitListAST (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_errorInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                                   const class GGS_semanticExpressionAST & inOperand2,
                                                                   const class GGS_lstringlist & inOperand3,
                                                                   const class GGS_fixitListAST & inOperand4,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_errorInstructionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                               const class GGS_semanticExpressionAST & inOperand1,
                                                               const class GGS_semanticExpressionAST & inOperand2,
                                                               const class GGS_lstringlist & inOperand3,
                                                               const class GGS_fixitListAST & inOperand4,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_errorInstructionAST class


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

//--------------------------------- Initializers
  public: void errorInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_semanticExpressionAST & inOperand1,
                                                             const class GGS_semanticExpressionAST & inOperand2,
                                                             const class GGS_lstringlist & inOperand3,
                                                             const class GGS_fixitListAST & inOperand4,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mLocationExpression ;
  public: GGS_semanticExpressionAST mProperty_mMessageExpression ;
  public: GGS_lstringlist mProperty_mBuiltVariableList ;
  public: GGS_fixitListAST mProperty_mFixitListAST ;


//--- Default constructor
  public: cPtr_errorInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_errorInstructionAST (const GGS_location & in_mInstructionLocation,
                                    const GGS_semanticExpressionAST & in_mLocationExpression,
                                    const GGS_semanticExpressionAST & in_mMessageExpression,
                                    const GGS_lstringlist & in_mBuiltVariableList,
                                    const GGS_fixitListAST & in_mFixitListAST,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_errorInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_errorInstructionAST_2E_weak (const class GGS_errorInstructionAST & inSource) ;

  public: GGS_errorInstructionAST_2E_weak & operator = (const class GGS_errorInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_errorInstructionAST_2E_weak init_nil (void) {
    GGS_errorInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_errorInstructionAST bang_errorInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_errorInstructionAST unwrappedValue (void) const {
    GGS_errorInstructionAST result ;
    if (isValid ()) {
      const cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_errorInstructionAST (p) ;
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
  public: static GGS_errorInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_errorInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const class GGS_fixitListAST inObject,
                                                      class GGS_unifiedTypeMap & io_ioTypeMap,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum fixitElementForGeneration
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_fixItRemove,
    enum_fixItReplace,
    enum_fixItInsertBefore,
    enum_fixItInsertAfter
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItReplace (class GGS_semanticExpressionForGeneration & out_exp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertBefore (class GGS_semanticExpressionForGeneration & out_exp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertAfter (class GGS_semanticExpressionForGeneration & out_exp) const ;

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
  public: static GGS_fixitElementForGeneration extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration class_func_fixItInsertAfter (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItInsertBefore (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItRemove (LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItReplace (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractFixItInsertAfter (class GGS_semanticExpressionForGeneration & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFixItInsertBefore (class GGS_semanticExpressionForGeneration & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFixItReplace (class GGS_semanticExpressionForGeneration & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ getter_getFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ getter_getFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration_2E_fixItReplace_3F_ getter_getFixItReplace (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fixitElementForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementForGeneration_2E_fixItInsertAfter struct
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertAfter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_semanticExpressionForGeneration & in_exp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration_2E_fixItInsertAfter class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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
 
} ; // End of GGS_fixitElementForGeneration_2E_fixItInsertAfter class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: fixitElementForGeneration.fixItInsertAfter? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItInsertAfter mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItInsertAfter unwrappedValue (void) const {
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
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementForGeneration_2E_fixItInsertBefore struct
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertBefore : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_semanticExpressionForGeneration & in_exp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration_2E_fixItInsertBefore class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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
 
} ; // End of GGS_fixitElementForGeneration_2E_fixItInsertBefore class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: fixitElementForGeneration.fixItInsertBefore? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItInsertBefore mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItInsertBefore unwrappedValue (void) const {
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
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementForGeneration_2E_fixItReplace struct
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItReplace : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_fixitElementForGeneration_2E_fixItReplace (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_semanticExpressionForGeneration & in_exp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItReplace init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItReplace extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration_2E_fixItReplace class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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
 
} ; // End of GGS_fixitElementForGeneration_2E_fixItReplace class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: fixitElementForGeneration.fixItReplace? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItReplace_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItReplace mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItReplace_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItReplace unwrappedValue (void) const {
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
  public: static GGS_fixitElementForGeneration_2E_fixItReplace_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fixitElementForGeneration_2E_fixItReplace_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_fixitListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_fixitListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_fixitElementForGeneration & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitListForGeneration init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitListForGeneration extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_fixitListForGeneration class_func_listWithValue (const class GGS_fixitElementForGeneration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_fixitListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_fixitElementForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_fixitListForGeneration add_operation (const GGS_fixitListForGeneration & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_fixitElementForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_fixitElementForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_fixitElementForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_fixitElementForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_fixitElementForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GGS_fixitElementForGeneration constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_fixitElementForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_fixitElementForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_fixitListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_fixitListForGeneration ;
 
} ; // End of GGS_fixitListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_fixitListForGeneration final
#ifndef NEW_ITERATOR
  : public cGenericAbstractEnumerator
#endif
{
  public: cEnumerator_fixitListForGeneration (const GGS_fixitListForGeneration & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  #ifdef NEW_ITERATOR
    public: bool hasCurrentObject (void) const ;
    public: void gotoNextObject (void) ;
    public: void rewind (void) ;
  #endif
  public: class GGS_fixitElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fixitListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_fixitListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_fixitElementForGeneration mProperty_mElement ;
  public: inline GGS_fixitElementForGeneration readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_fixitElementForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_fixitListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitListForGeneration_2E_element (const GGS_fixitElementForGeneration & in_mElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitListForGeneration_2E_element init_21_ (const class GGS_fixitElementForGeneration & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitListForGeneration_2E_element class_func_new (const class GGS_fixitElementForGeneration & inOperand0,
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
 
} ; // End of GGS_fixitListForGeneration_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const class GGS_fixitListForGeneration inObject,
                                    class GGS_stringset & io_ioInclusionSet,
                                    class GGS_uint & io_ioTemporaryVariableIndex,
                                    class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                    const class GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                    class GGS_string & io_ioGeneratedCode,
                                    class GGS_string & out_outFixItArrayCppName,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (class cPtr_semanticExpressionForGeneration * inObject,
                                             class GGS_string & io_ioGeneratedCode,
                                             class GGS_stringset & io_ioInclusionSet,
                                             class GGS_uint & io_ioTemporaryVariableIndex,
                                             class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                             class GGS_string & out_outCppExpression,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_errorInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_errorInstructionForGeneration (const class cPtr_errorInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mErrorExpression (void) const ;

  public: class GGS_stringlist readProperty_mBuiltVariableCppNameList (void) const ;

  public: class GGS_fixitListForGeneration readProperty_mFixitListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_errorInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GGS_stringlist & inOperand3,
                                                                             const class GGS_fixitListForGeneration & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_errorInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                         const class GGS_stringlist & inOperand3,
                                                                         const class GGS_fixitListForGeneration & inOperand4,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_errorInstructionForGeneration class


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

//--------------------------------- Initializers
  public: void errorInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                       const class GGS_stringlist & inOperand3,
                                                                       const class GGS_fixitListForGeneration & inOperand4,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mErrorExpression ;
  public: GGS_stringlist mProperty_mBuiltVariableCppNameList ;
  public: GGS_fixitListForGeneration mProperty_mFixitListForGeneration ;


//--- Default constructor
  public: cPtr_errorInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_errorInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                              const GGS_stringlist & in_mBuiltVariableCppNameList,
                                              const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_errorInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_errorInstructionForGeneration_2E_weak (const class GGS_errorInstructionForGeneration & inSource) ;

  public: GGS_errorInstructionForGeneration_2E_weak & operator = (const class GGS_errorInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_errorInstructionForGeneration_2E_weak init_nil (void) {
    GGS_errorInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_errorInstructionForGeneration bang_errorInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_errorInstructionForGeneration unwrappedValue (void) const {
    GGS_errorInstructionForGeneration result ;
    if (isValid ()) {
      const cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_errorInstructionForGeneration (p) ;
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
  public: static GGS_errorInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_errorInstructionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectElementListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectElementListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOptionalTypeName,
                                                 const class GGS_bool & in_mDeclaredAsUnused,
                                                 const class GGS_lstring & in_mOptionalConstantName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectElementListAST init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectElementListAST extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectElementListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_forInstructionEnumeratedObjectElementListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_lstring & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_forInstructionEnumeratedObjectElementListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_bool & inOperand1,
                                                     const class GGS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_forInstructionEnumeratedObjectElementListAST add_operation (const GGS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bool constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bool & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclaredAsUnusedAtIndex (class GGS_bool constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalConstantNameAtIndex (class GGS_lstring constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bool & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mDeclaredAsUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionalConstantNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionalTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectElementListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectElementListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectElementListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_forInstructionEnumeratedObjectElementListAST ;
 
} ; // End of GGS_forInstructionEnumeratedObjectElementListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_forInstructionEnumeratedObjectElementListAST final
#ifndef NEW_ITERATOR
  : public cGenericAbstractEnumerator
#endif
{
  public: cEnumerator_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  #ifdef NEW_ITERATOR
    public: bool hasCurrentObject (void) const ;
    public: void gotoNextObject (void) ;
    public: void rewind (void) ;
  #endif
  public: class GGS_lstring current_mOptionalTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mDeclaredAsUnused (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionalConstantName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectElementListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectElementListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectElementListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionalTypeName ;
  public: inline GGS_lstring readProperty_mOptionalTypeName (void) const {
    return mProperty_mOptionalTypeName ;
  }

  public: GGS_bool mProperty_mDeclaredAsUnused ;
  public: inline GGS_bool readProperty_mDeclaredAsUnused (void) const {
    return mProperty_mDeclaredAsUnused ;
  }

  public: GGS_lstring mProperty_mOptionalConstantName ;
  public: inline GGS_lstring readProperty_mOptionalConstantName (void) const {
    return mProperty_mOptionalConstantName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionalTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalTypeName = inValue ;
  }

  public: inline void setter_setMDeclaredAsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaredAsUnused = inValue ;
  }

  public: inline void setter_setMOptionalConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalConstantName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_forInstructionEnumeratedObjectElementListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_lstring & in_mOptionalTypeName,
                                                                       const GGS_bool & in_mDeclaredAsUnused,
                                                                       const GGS_lstring & in_mOptionalConstantName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectElementListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_bool & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectElementListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectElementListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_bool & inOperand1,
                                                                                                   const class GGS_lstring & inOperand2,
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
 
} ; // End of GGS_forInstructionEnumeratedObjectElementListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractEnumeratedCollectionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractEnumeratedCollectionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractEnumeratedCollectionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractEnumeratedCollectionAST (const class cPtr_abstractEnumeratedCollectionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractEnumeratedCollectionAST init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractEnumeratedCollectionAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractEnumeratedCollectionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractEnumeratedCollectionAST class


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

//--------------------------------- Initializers
  public: void abstractEnumeratedCollectionAST_init (Compiler * inCompiler) ;


//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_localConstantList & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractEnumeratedCollectionAST (Compiler * inCompiler
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
// Phase 1: @abstractEnumeratedCollectionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractEnumeratedCollectionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractEnumeratedCollectionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractEnumeratedCollectionAST_2E_weak (const class GGS_abstractEnumeratedCollectionAST & inSource) ;

  public: GGS_abstractEnumeratedCollectionAST_2E_weak & operator = (const class GGS_abstractEnumeratedCollectionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractEnumeratedCollectionAST_2E_weak init_nil (void) {
    GGS_abstractEnumeratedCollectionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractEnumeratedCollectionAST bang_abstractEnumeratedCollectionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractEnumeratedCollectionAST unwrappedValue (void) const {
    GGS_abstractEnumeratedCollectionAST result ;
    if (isValid ()) {
      const cPtr_abstractEnumeratedCollectionAST * p = (cPtr_abstractEnumeratedCollectionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractEnumeratedCollectionAST (p) ;
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
  public: static GGS_abstractEnumeratedCollectionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractEnumeratedCollectionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractEnumeratedCollectionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractEnumeratedCollectionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionImplicitVarInExpAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionImplicitVarInExpAST : public GGS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionImplicitVarInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumeratedCollectionImplicitVarInExpAST (const class cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mPrefix (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GGS_location readProperty_mEndOfAnonymousEnumeration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumeratedCollectionImplicitVarInExpAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_semanticExpressionAST & inOperand1,
                                                                               const class GGS_location & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumeratedCollectionImplicitVarInExpAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionImplicitVarInExpAST class_func_new (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                                                   const class GGS_location & inOperand2,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionImplicitVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enumeratedCollectionImplicitVarInExpAST class


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

//--------------------------------- Initializers
  public: void enumeratedCollectionImplicitVarInExpAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_semanticExpressionAST & inOperand1,
                                                                         const class GGS_location & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_localConstantList & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mPrefix ;
  public: GGS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GGS_location mProperty_mEndOfAnonymousEnumeration ;


//--- Default constructor
  public: cPtr_enumeratedCollectionImplicitVarInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumeratedCollectionImplicitVarInExpAST (const GGS_lstring & in_mPrefix,
                                                        const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                        const GGS_location & in_mEndOfAnonymousEnumeration,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionImplicitVarInExpAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (const class GGS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

  public: GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionImplicitVarInExpAST bang_enumeratedCollectionImplicitVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_enumeratedCollectionImplicitVarInExpAST unwrappedValue (void) const {
    GGS_enumeratedCollectionImplicitVarInExpAST result ;
    if (isValid ()) {
      const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_enumeratedCollectionImplicitVarInExpAST (p) ;
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
  public: static GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionVarInExpAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionVarInExpAST : public GGS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionVarInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumeratedCollectionVarInExpAST (const class cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mEnumerationOptionalTypeName (void) const ;

  public: class GGS_lstring readProperty_mEnumerationVariable (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GGS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumeratedCollectionVarInExpAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                                           const class GGS_location & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumeratedCollectionVarInExpAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionVarInExpAST class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                                           const class GGS_location & inOperand3,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enumeratedCollectionVarInExpAST class


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

//--------------------------------- Initializers
  public: void enumeratedCollectionVarInExpAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_semanticExpressionAST & inOperand2,
                                                                     const class GGS_location & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_localConstantList & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mEnumerationOptionalTypeName ;
  public: GGS_lstring mProperty_mEnumerationVariable ;
  public: GGS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GGS_location mProperty_mEndOfEnumerationExpression ;


//--- Default constructor
  public: cPtr_enumeratedCollectionVarInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumeratedCollectionVarInExpAST (const GGS_lstring & in_mEnumerationOptionalTypeName,
                                                const GGS_lstring & in_mEnumerationVariable,
                                                const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                const GGS_location & in_mEndOfEnumerationExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionVarInExpAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionVarInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionVarInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionVarInExpAST_2E_weak (const class GGS_enumeratedCollectionVarInExpAST & inSource) ;

  public: GGS_enumeratedCollectionVarInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionVarInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionVarInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionVarInExpAST bang_enumeratedCollectionVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_enumeratedCollectionVarInExpAST unwrappedValue (void) const {
    GGS_enumeratedCollectionVarInExpAST result ;
    if (isValid ()) {
      const cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_enumeratedCollectionVarInExpAST (p) ;
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
  public: static GGS_enumeratedCollectionVarInExpAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionVarInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionVarInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enumeratedCollectionVarInExpAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionCstListInExpAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionCstListInExpAST : public GGS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionCstListInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumeratedCollectionCstListInExpAST (const class cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_forInstructionEnumeratedObjectElementListAST readProperty_mElementList (void) const ;

  public: class GGS_bool readProperty_mEndsWithEllipsis (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GGS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumeratedCollectionCstListInExpAST init_21__21_mEndsWithEllipsis_21__21_ (const class GGS_forInstructionEnumeratedObjectElementListAST & inOperand0,
                                                                                                const class GGS_bool & inOperand1,
                                                                                                const class GGS_semanticExpressionAST & inOperand2,
                                                                                                const class GGS_location & inOperand3,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumeratedCollectionCstListInExpAST extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionCstListInExpAST class_func_new (const class GGS_forInstructionEnumeratedObjectElementListAST & inOperand0,
                                                                               const class GGS_bool & inOperand1,
                                                                               const class GGS_semanticExpressionAST & inOperand2,
                                                                               const class GGS_location & inOperand3,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionCstListInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enumeratedCollectionCstListInExpAST class


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

//--------------------------------- Initializers
  public: void enumeratedCollectionCstListInExpAST_init_21__21_mEndsWithEllipsis_21__21_ (const class GGS_forInstructionEnumeratedObjectElementListAST & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_semanticExpressionAST & inOperand2,
                                                                                          const class GGS_location & inOperand3,
                                                                                          Compiler * inCompiler) ;


//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_localConstantList & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_forInstructionEnumeratedObjectElementListAST mProperty_mElementList ;
  public: GGS_bool mProperty_mEndsWithEllipsis ;
  public: GGS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GGS_location mProperty_mEndOfEnumerationExpression ;


//--- Default constructor
  public: cPtr_enumeratedCollectionCstListInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumeratedCollectionCstListInExpAST (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                    const GGS_bool & in_mEndsWithEllipsis,
                                                    const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                    const GGS_location & in_mEndOfEnumerationExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionCstListInExpAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionCstListInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak (const class GGS_enumeratedCollectionCstListInExpAST & inSource) ;

  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionCstListInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionCstListInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionCstListInExpAST bang_enumeratedCollectionCstListInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_enumeratedCollectionCstListInExpAST unwrappedValue (void) const {
    GGS_enumeratedCollectionCstListInExpAST result ;
    if (isValid ()) {
      const cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_enumeratedCollectionCstListInExpAST (p) ;
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
  public: static GGS_enumeratedCollectionCstListInExpAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionCstListInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionCstListInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enumeratedCollectionCstListInExpAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_forInstructionEnumeratedObjectListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_bool & in_mAscending,
                                                 const class GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectListAST init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectListAST extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_forInstructionEnumeratedObjectListAST class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                                           const class GGS_abstractEnumeratedCollectionAST & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_forInstructionEnumeratedObjectListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_bool & inOperand0,
                                                     const class GGS_abstractEnumeratedCollectionAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_forInstructionEnumeratedObjectListAST add_operation (const GGS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_bool constinArgument0,
                                               class GGS_abstractEnumeratedCollectionAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_bool constinArgument0,
                                                      class GGS_abstractEnumeratedCollectionAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_bool & outArgument0,
                                                 class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_bool & outArgument0,
                                                class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_bool & outArgument0,
                                                      class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAscendingAtIndex (class GGS_bool constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratedCollectionAtIndex (class GGS_abstractEnumeratedCollectionAST constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_bool & outArgument0,
                                              class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_bool & outArgument0,
                                             class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mAscendingAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractEnumeratedCollectionAST getter_mEnumeratedCollectionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_forInstructionEnumeratedObjectListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_forInstructionEnumeratedObjectListAST ;
 
} ; // End of GGS_forInstructionEnumeratedObjectListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_forInstructionEnumeratedObjectListAST final
#ifndef NEW_ITERATOR
  : public cGenericAbstractEnumerator
#endif
{
  public: cEnumerator_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST & inEnumeratedObject,
                                                             const EnumerationOrder inOrder) ;

//--- Current element access
  #ifdef NEW_ITERATOR
    public: bool hasCurrentObject (void) const ;
    public: void gotoNextObject (void) ;
    public: void rewind (void) ;
  #endif
  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
  public: class GGS_abstractEnumeratedCollectionAST current_mEnumeratedCollection (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mAscending ;
  public: inline GGS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

  public: GGS_abstractEnumeratedCollectionAST mProperty_mEnumeratedCollection ;
  public: inline GGS_abstractEnumeratedCollectionAST readProperty_mEnumeratedCollection (void) const {
    return mProperty_mEnumeratedCollection ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAscending (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

  public: inline void setter_setMEnumeratedCollection (const GGS_abstractEnumeratedCollectionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedCollection = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_forInstructionEnumeratedObjectListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_bool & in_mAscending,
                                                                const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectListAST_2E_element init_21__21_ (const class GGS_bool & inOperand0,
                                                                                    const class GGS_abstractEnumeratedCollectionAST & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectListAST_2E_element class_func_new (const class GGS_bool & inOperand0,
                                                                                            const class GGS_abstractEnumeratedCollectionAST & inOperand1,
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
 
} ; // End of GGS_forInstructionEnumeratedObjectListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionAST (const class cPtr_forInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_forInstructionEnumeratedObjectListAST readProperty_mEnumeratedObjectList (void) const ;

  public: class GGS_lstring readProperty_mIndexVariableName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mWhileExpression (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_while_5F_expression (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mBeforeInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_before_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mBetweenInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_between_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mDoInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_do_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mAfterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_after_5F_branch (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_foreach_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionAST init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                     const class GGS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                     const class GGS_semanticExpressionAST & inOperand3,
                                                                                                     const class GGS_location & inOperand4,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                     const class GGS_location & inOperand6,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                     const class GGS_location & inOperand8,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand9,
                                                                                                     const class GGS_location & inOperand10,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand11,
                                                                                                     const class GGS_location & inOperand12,
                                                                                                     const class GGS_location & inOperand13,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                             const class GGS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                             const class GGS_lstring & inOperand2,
                                                             const class GGS_semanticExpressionAST & inOperand3,
                                                             const class GGS_location & inOperand4,
                                                             const class GGS_semanticInstructionListAST & inOperand5,
                                                             const class GGS_location & inOperand6,
                                                             const class GGS_semanticInstructionListAST & inOperand7,
                                                             const class GGS_location & inOperand8,
                                                             const class GGS_semanticInstructionListAST & inOperand9,
                                                             const class GGS_location & inOperand10,
                                                             const class GGS_semanticInstructionListAST & inOperand11,
                                                             const class GGS_location & inOperand12,
                                                             const class GGS_location & inOperand13,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forInstructionAST class


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

//--------------------------------- Initializers
  public: void forInstructionAST_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               const class GGS_semanticExpressionAST & inOperand3,
                                                                                               const class GGS_location & inOperand4,
                                                                                               const class GGS_semanticInstructionListAST & inOperand5,
                                                                                               const class GGS_location & inOperand6,
                                                                                               const class GGS_semanticInstructionListAST & inOperand7,
                                                                                               const class GGS_location & inOperand8,
                                                                                               const class GGS_semanticInstructionListAST & inOperand9,
                                                                                               const class GGS_location & inOperand10,
                                                                                               const class GGS_semanticInstructionListAST & inOperand11,
                                                                                               const class GGS_location & inOperand12,
                                                                                               const class GGS_location & inOperand13,
                                                                                               Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_forInstructionEnumeratedObjectListAST mProperty_mEnumeratedObjectList ;
  public: GGS_lstring mProperty_mIndexVariableName ;
  public: GGS_semanticExpressionAST mProperty_mWhileExpression ;
  public: GGS_location mProperty_mEndOf_5F_while_5F_expression ;
  public: GGS_semanticInstructionListAST mProperty_mBeforeInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_before_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_mBetweenInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_between_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_mDoInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_do_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_mAfterInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_after_5F_branch ;
  public: GGS_location mProperty_mEndOf_5F_foreach_5F_instruction ;


//--- Default constructor
  public: cPtr_forInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionAST (const GGS_location & in_mInstructionLocation,
                                  const GGS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                  const GGS_lstring & in_mIndexVariableName,
                                  const GGS_semanticExpressionAST & in_mWhileExpression,
                                  const GGS_location & in_mEndOf_5F_while_5F_expression,
                                  const GGS_semanticInstructionListAST & in_mBeforeInstructionList,
                                  const GGS_location & in_mEndOf_5F_before_5F_branch,
                                  const GGS_semanticInstructionListAST & in_mBetweenInstructionList,
                                  const GGS_location & in_mEndOf_5F_between_5F_branch,
                                  const GGS_semanticInstructionListAST & in_mDoInstructionList,
                                  const GGS_location & in_mEndOf_5F_do_5F_branch,
                                  const GGS_semanticInstructionListAST & in_mAfterInstructionList,
                                  const GGS_location & in_mEndOf_5F_after_5F_branch,
                                  const GGS_location & in_mEndOf_5F_foreach_5F_instruction,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionAST_2E_weak (const class GGS_forInstructionAST & inSource) ;

  public: GGS_forInstructionAST_2E_weak & operator = (const class GGS_forInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionAST_2E_weak init_nil (void) {
    GGS_forInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionAST bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_forInstructionAST unwrappedValue (void) const {
    GGS_forInstructionAST result ;
    if (isValid ()) {
      const cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_forInstructionAST (p) ;
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
  public: static GGS_forInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 class GGS_unifiedTypeMap & io_ioTypeMap,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeEnumeration (class cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                             class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const class GGS_analysisContext constin_inAnalysisContext,
                                             class GGS_unifiedTypeMap & io_ioTypeMap,
                                             class GGS_localVarManager & io_ioVariableMap,
                                             class GGS_localConstantList & io_ioLocalConstantListForDoBranch,
                                             class GGS_string & out_outEnumeratorCppName,
                                             class GGS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_forInstructionEnumeratedObjectListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mEnumerationOrder,
                                                 const class GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                 const class GGS_string & in_mEnumeratorCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectListForGeneration init (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectListForGeneration extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_forInstructionEnumeratedObjectListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                     const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                     const class GGS_string & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_forInstructionEnumeratedObjectListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_semanticExpressionForGeneration & inOperand1,
                                                     const class GGS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_forInstructionEnumeratedObjectListForGeneration add_operation (const GGS_forInstructionEnumeratedObjectListForGeneration & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_semanticExpressionForGeneration constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_semanticExpressionForGeneration constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_semanticExpressionForGeneration & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_semanticExpressionForGeneration & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_semanticExpressionForGeneration & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratedExpressionAtIndex (class GGS_semanticExpressionForGeneration constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumerationOrderAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratorCppNameAtIndex (class GGS_string constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_semanticExpressionForGeneration & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_semanticExpressionForGeneration & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticExpressionForGeneration getter_mEnumeratedExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mEnumerationOrderAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mEnumeratorCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_forInstructionEnumeratedObjectListForGeneration ;
 
} ; // End of GGS_forInstructionEnumeratedObjectListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_forInstructionEnumeratedObjectListForGeneration final
#ifndef NEW_ITERATOR
  : public cGenericAbstractEnumerator
#endif
{
  public: cEnumerator_forInstructionEnumeratedObjectListForGeneration (const GGS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject,
                                                                       const EnumerationOrder inOrder) ;

//--- Current element access
  #ifdef NEW_ITERATOR
    public: bool hasCurrentObject (void) const ;
    public: void gotoNextObject (void) ;
    public: void rewind (void) ;
  #endif
  public: class GGS_string current_mEnumerationOrder (LOCATION_ARGS) const ;
  public: class GGS_semanticExpressionForGeneration current_mEnumeratedExpression (LOCATION_ARGS) const ;
  public: class GGS_string current_mEnumeratorCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mEnumerationOrder ;
  public: inline GGS_string readProperty_mEnumerationOrder (void) const {
    return mProperty_mEnumerationOrder ;
  }

  public: GGS_semanticExpressionForGeneration mProperty_mEnumeratedExpression ;
  public: inline GGS_semanticExpressionForGeneration readProperty_mEnumeratedExpression (void) const {
    return mProperty_mEnumeratedExpression ;
  }

  public: GGS_string mProperty_mEnumeratorCppName ;
  public: inline GGS_string readProperty_mEnumeratorCppName (void) const {
    return mProperty_mEnumeratorCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumerationOrder (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationOrder = inValue ;
  }

  public: inline void setter_setMEnumeratedExpression (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedExpression = inValue ;
  }

  public: inline void setter_setMEnumeratorCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratorCppName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (const GGS_string & in_mEnumerationOrder,
                                                                          const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                          const GGS_string & in_mEnumeratorCppName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectListForGeneration_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                                  const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                  const class GGS_string & inOperand2,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectListForGeneration_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                                      const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                      const class GGS_string & inOperand2,
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
 
} ; // End of GGS_forInstructionEnumeratedObjectListForGeneration_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_forInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionForGeneration (const class cPtr_forInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_forInstructionEnumeratedObjectListForGeneration readProperty_mEnumeratedObjectList (void) const ;

  public: class GGS_string readProperty_mIndexVariableCppName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mWhileExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mBeforeInstructionList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mBetweenInstructionList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mDoInstructionList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mAfterInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_forInstructionEnumeratedObjectListForGeneration & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                       const class GGS_forInstructionEnumeratedObjectListForGeneration & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forInstructionForGeneration class


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

//--------------------------------- Initializers
  public: void forInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_forInstructionEnumeratedObjectListForGeneration & inOperand1,
                                                                                 const class GGS_string & inOperand2,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_forInstructionEnumeratedObjectListForGeneration mProperty_mEnumeratedObjectList ;
  public: GGS_string mProperty_mIndexVariableCppName ;
  public: GGS_semanticExpressionForGeneration mProperty_mWhileExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mDoInstructionList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mAfterInstructionList ;


//--- Default constructor
  public: cPtr_forInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                            const GGS_forInstructionEnumeratedObjectListForGeneration & in_mEnumeratedObjectList,
                                            const GGS_string & in_mIndexVariableCppName,
                                            const GGS_semanticExpressionForGeneration & in_mWhileExpression,
                                            const GGS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                            const GGS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                            const GGS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                            const GGS_semanticInstructionListForGeneration & in_mAfterInstructionList,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionForGeneration_2E_weak (const class GGS_forInstructionForGeneration & inSource) ;

  public: GGS_forInstructionForGeneration_2E_weak & operator = (const class GGS_forInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionForGeneration_2E_weak init_nil (void) {
    GGS_forInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionForGeneration bang_forInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_forInstructionForGeneration unwrappedValue (void) const {
    GGS_forInstructionForGeneration result ;
    if (isValid ()) {
      const cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_forInstructionForGeneration (p) ;
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
  public: static GGS_forInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forInstructionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & operator = (const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak init_nil (void) {
    GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult unwrappedValue (void) const {
    GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
    if (isValid ()) {
      const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (p) ;
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
  public: static GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultNone : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultNone init (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultNone extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultNone class_func_new (Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationResultNone class


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

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultNone_init (Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone bang_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_grammarInstructionSyntaxDirectedTranslationResultNone unwrappedValue (void) const {
    GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
    if (isValid ()) {
      const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) ptr () ;
      if (nullptr != p) {
        result = GGS_grammarInstructionSyntaxDirectedTranslationResultNone (p) ;
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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationDropResult : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult (const class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationDropResult init_21_ (const class GGS_location & inOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationDropResult extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationDropResult class_func_new (const class GGS_location & inOperand0,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationDropResult class


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

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (const class GGS_location & inOperand0,
                                                                               Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GGS_location & in_mLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult bang_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_grammarInstructionSyntaxDirectedTranslationDropResult unwrappedValue (void) const {
    GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
    if (isValid ()) {
      const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) ptr () ;
      if (nullptr != p) {
        result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult (p) ;
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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar init_21_ (const class GGS_lstring & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar class_func_new (const class GGS_lstring & inOperand0,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationResultInVar class


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

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultInVar_init_21_ (const class GGS_lstring & inOperand0,
                                                                                Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GGS_lstring & in_mActualParameterName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_grammarInstructionSyntaxDirectedTranslationResultInVar unwrappedValue (void) const {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
    if (isValid ()) {
      const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) ptr () ;
      if (nullptr != p) {
        result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (p) ;
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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class_func_new (const class GGS_lstring & inOperand0,
                                                                                                          const class GGS_lstring & inOperand1,
                                                                                                          class Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class


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

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GGS_lstring & in_mActualParameterTypeName,
                                                                               const GGS_lstring & in_mActualParameterName,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar unwrappedValue (void) const {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
    if (isValid ()) {
      const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) ptr () ;
      if (nullptr != p) {
        result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (p) ;
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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak extractObject (const GGS_object & inObject,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_lstring & inOperand1,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst extractObject (const GGS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class_func_new (const class GGS_lstring & inOperand0,
                                                                                                            const class GGS_lstring & inOperand1,
                                                                                                            class Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class


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

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_lstring & inOperand1,
                                                                                              Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GGS_lstring & in_mActualParameterTypeName,
                                                                                 const GGS_lstring & in_mActualParameterName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst unwrappedValue (void) const {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
    if (isValid ()) {
      const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) ptr () ;
      if (nullptr != p) {
        result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (p) ;
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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak extractObject (const GGS_object & inObject,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInFileInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInFileInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_grammarInFileInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInFileInstructionAST (const class cPtr_grammarInFileInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GGS_lstring readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GGS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInFileInstructionAST init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_semanticExpressionAST & inOperand3,
                                                                                   const class GGS_location & inOperand4,
                                                                                   const class GGS_actualParameterListAST & inOperand5,
                                                                                   const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInFileInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInFileInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_lstring & inOperand2,
                                                                       const class GGS_semanticExpressionAST & inOperand3,
                                                                       const class GGS_location & inOperand4,
                                                                       const class GGS_actualParameterListAST & inOperand5,
                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInFileInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInFileInstructionAST class


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

//--------------------------------- Initializers
  public: void grammarInFileInstructionAST_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             const class GGS_semanticExpressionAST & inOperand3,
                                                                             const class GGS_location & inOperand4,
                                                                             const class GGS_actualParameterListAST & inOperand5,
                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGrammarComponentName ;
  public: GGS_lstring mProperty_mLabelName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GGS_location mProperty_mEndOfSourceExpression ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;


//--- Default constructor
  public: cPtr_grammarInFileInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInFileInstructionAST (const GGS_location & in_mInstructionLocation,
                                            const GGS_lstring & in_mGrammarComponentName,
                                            const GGS_lstring & in_mLabelName,
                                            const GGS_semanticExpressionAST & in_mSourceExpression,
                                            const GGS_location & in_mEndOfSourceExpression,
                                            const GGS_actualParameterListAST & in_mActualParameterList,
                                            const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInFileInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInFileInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInFileInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInFileInstructionAST_2E_weak (const class GGS_grammarInFileInstructionAST & inSource) ;

  public: GGS_grammarInFileInstructionAST_2E_weak & operator = (const class GGS_grammarInFileInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInFileInstructionAST_2E_weak init_nil (void) {
    GGS_grammarInFileInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInFileInstructionAST bang_grammarInFileInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_grammarInFileInstructionAST unwrappedValue (void) const {
    GGS_grammarInFileInstructionAST result ;
    if (isValid ()) {
      const cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_grammarInFileInstructionAST (p) ;
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
  public: static GGS_grammarInFileInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInFileInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInFileInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInFileInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInStringInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInStringInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_grammarInStringInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInStringInstructionAST (const class cPtr_grammarInStringInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GGS_lstring readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GGS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mNameExpression (void) const ;

  public: class GGS_location readProperty_mEndOfNameExpression (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInStringInstructionAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_lstring & inOperand2,
                                                                                             const class GGS_semanticExpressionAST & inOperand3,
                                                                                             const class GGS_location & inOperand4,
                                                                                             const class GGS_semanticExpressionAST & inOperand5,
                                                                                             const class GGS_location & inOperand6,
                                                                                             const class GGS_actualParameterListAST & inOperand7,
                                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInStringInstructionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInStringInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_semanticExpressionAST & inOperand3,
                                                                         const class GGS_location & inOperand4,
                                                                         const class GGS_semanticExpressionAST & inOperand5,
                                                                         const class GGS_location & inOperand6,
                                                                         const class GGS_actualParameterListAST & inOperand7,
                                                                         const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInStringInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInStringInstructionAST class


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

//--------------------------------- Initializers
  public: void grammarInStringInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_semanticExpressionAST & inOperand3,
                                                                                       const class GGS_location & inOperand4,
                                                                                       const class GGS_semanticExpressionAST & inOperand5,
                                                                                       const class GGS_location & inOperand6,
                                                                                       const class GGS_actualParameterListAST & inOperand7,
                                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8,
                                                                                       Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGrammarComponentName ;
  public: GGS_lstring mProperty_mLabelName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GGS_location mProperty_mEndOfSourceExpression ;
  public: GGS_semanticExpressionAST mProperty_mNameExpression ;
  public: GGS_location mProperty_mEndOfNameExpression ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;


//--- Default constructor
  public: cPtr_grammarInStringInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInStringInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mGrammarComponentName,
                                              const GGS_lstring & in_mLabelName,
                                              const GGS_semanticExpressionAST & in_mSourceExpression,
                                              const GGS_location & in_mEndOfSourceExpression,
                                              const GGS_semanticExpressionAST & in_mNameExpression,
                                              const GGS_location & in_mEndOfNameExpression,
                                              const GGS_actualParameterListAST & in_mActualParameterList,
                                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInStringInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInStringInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInStringInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInStringInstructionAST_2E_weak (const class GGS_grammarInStringInstructionAST & inSource) ;

  public: GGS_grammarInStringInstructionAST_2E_weak & operator = (const class GGS_grammarInStringInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInStringInstructionAST_2E_weak init_nil (void) {
    GGS_grammarInStringInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInStringInstructionAST bang_grammarInStringInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_grammarInStringInstructionAST unwrappedValue (void) const {
    GGS_grammarInStringInstructionAST result ;
    if (isValid ()) {
      const cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_grammarInStringInstructionAST (p) ;
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
  public: static GGS_grammarInStringInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInStringInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInStringInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInStringInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionWithSourceFileForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceFileForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceFileForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionWithSourceFileForGeneration (const class cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceFileExpression (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GGS_stringlist readProperty_mAssignementList (void) const ;

  public: class GGS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionWithSourceFileForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                         const class GGS_string & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                         const class GGS_actualParameterListForGeneration & inOperand4,
                                                                                                         const class GGS_bool & inOperand5,
                                                                                                         const class GGS_stringlist & inOperand6,
                                                                                                         const class GGS_string & inOperand7,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionWithSourceFileForGeneration extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceFileForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_string & inOperand1,
                                                                                         const class GGS_string & inOperand2,
                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                         const class GGS_actualParameterListForGeneration & inOperand4,
                                                                                         const class GGS_bool & inOperand5,
                                                                                         const class GGS_stringlist & inOperand6,
                                                                                         const class GGS_string & inOperand7,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionWithSourceFileForGeneration class


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

//--------------------------------- Initializers
  public: void grammarInstructionWithSourceFileForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_string & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                   const class GGS_actualParameterListForGeneration & inOperand4,
                                                                                                   const class GGS_bool & inOperand5,
                                                                                                   const class GGS_stringlist & inOperand6,
                                                                                                   const class GGS_string & inOperand7,
                                                                                                   Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLabelName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceFileExpression ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GGS_stringlist mProperty_mAssignementList ;
  public: GGS_string mProperty_mSyntaxDirectedTranslationResultVarName ;


//--- Default constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (const GGS_location & in_mInstructionLocation,
                                                              const GGS_string & in_mGrammarName,
                                                              const GGS_string & in_mLabelName,
                                                              const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                              const GGS_bool & in_mGrammarHasTranslateFeature,
                                                              const GGS_stringlist & in_mAssignementList,
                                                              const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionWithSourceFileForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceFileForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (const class GGS_grammarInstructionWithSourceFileForGeneration & inSource) ;

  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & operator = (const class GGS_grammarInstructionWithSourceFileForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionWithSourceFileForGeneration_2E_weak init_nil (void) {
    GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionWithSourceFileForGeneration bang_grammarInstructionWithSourceFileForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_grammarInstructionWithSourceFileForGeneration unwrappedValue (void) const {
    GGS_grammarInstructionWithSourceFileForGeneration result ;
    if (isValid ()) {
      const cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_grammarInstructionWithSourceFileForGeneration (p) ;
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
  public: static GGS_grammarInstructionWithSourceFileForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceFileForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionWithSourceFileForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceExpressionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionWithSourceExpressionForGeneration (const class cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceStringExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mNameStringExpression (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GGS_stringlist readProperty_mAssignementList (void) const ;

  public: class GGS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                                   const class GGS_string & inOperand1,
                                                                                                                   const class GGS_string & inOperand2,
                                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                                                   const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                                                   const class GGS_bool & inOperand6,
                                                                                                                   const class GGS_stringlist & inOperand7,
                                                                                                                   const class GGS_string & inOperand8,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceExpressionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                               const class GGS_string & inOperand1,
                                                                                               const class GGS_string & inOperand2,
                                                                                               const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                               const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                               const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                               const class GGS_bool & inOperand6,
                                                                                               const class GGS_stringlist & inOperand7,
                                                                                               const class GGS_string & inOperand8,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionWithSourceExpressionForGeneration class


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

//--------------------------------- Initializers
  public: void grammarInstructionWithSourceExpressionForGeneration_init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                             const class GGS_string & inOperand1,
                                                                                                             const class GGS_string & inOperand2,
                                                                                                             const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                             const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                                             const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                                             const class GGS_bool & inOperand6,
                                                                                                             const class GGS_stringlist & inOperand7,
                                                                                                             const class GGS_string & inOperand8,
                                                                                                             Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLabelName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceStringExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mNameStringExpression ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GGS_stringlist mProperty_mAssignementList ;
  public: GGS_string mProperty_mSyntaxDirectedTranslationResultVarName ;


//--- Default constructor
  public: cPtr_grammarInstructionWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceExpressionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_string & in_mGrammarName,
                                                                    const GGS_string & in_mLabelName,
                                                                    const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                    const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                    const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                    const GGS_stringlist & in_mAssignementList,
                                                                    const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (const class GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & operator = (const class GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak init_nil (void) {
    GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionWithSourceExpressionForGeneration bang_grammarInstructionWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_grammarInstructionWithSourceExpressionForGeneration unwrappedValue (void) const {
    GGS_grammarInstructionWithSourceExpressionForGeneration result ;
    if (isValid ()) {
      const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_grammarInstructionWithSourceExpressionForGeneration (p) ;
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
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum incDecKind
//--------------------------------------------------------------------------------------------------

class GGS_incDecKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_incDecKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_increment,
    enum_decrement
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
  public: static GGS_incDecKind extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecKind class_func_decrement (LOCATION_ARGS) ;

  public: static class GGS_incDecKind class_func_increment (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDecrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIncrement (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_incDecKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecInstructionAST (const class cPtr_incDecInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_bool & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_lstringlist & inOperand3,
                                                                    const class GGS_incDecKind & inOperand4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecInstructionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                const class GGS_bool & inOperand1,
                                                                const class GGS_lstring & inOperand2,
                                                                const class GGS_lstringlist & inOperand3,
                                                                const class GGS_incDecKind & inOperand4,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_incDecInstructionAST class


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

//--------------------------------- Initializers
  public: void incDecInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_lstringlist & inOperand3,
                                                              const class GGS_incDecKind & inOperand4,
                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mPrefixedBySelf ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecInstructionAST (const GGS_location & in_mInstructionLocation,
                                     const GGS_bool & in_mPrefixedBySelf,
                                     const GGS_lstring & in_mReceiverName,
                                     const GGS_lstringlist & in_mStructAttributeList,
                                     const GGS_incDecKind & in_mKind,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecInstructionAST_2E_weak (const class GGS_incDecInstructionAST & inSource) ;

  public: GGS_incDecInstructionAST_2E_weak & operator = (const class GGS_incDecInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecInstructionAST_2E_weak init_nil (void) {
    GGS_incDecInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecInstructionAST bang_incDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_incDecInstructionAST unwrappedValue (void) const {
    GGS_incDecInstructionAST result ;
    if (isValid ()) {
      const cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_incDecInstructionAST (p) ;
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
  public: static GGS_incDecInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_incDecInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecNoOVFInstructionAST (const class cPtr_incDecNoOVFInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecNoOVFInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_lstringlist & inOperand3,
                                                                         const class GGS_incDecKind & inOperand4,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecNoOVFInstructionAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_lstringlist & inOperand3,
                                                                     const class GGS_incDecKind & inOperand4,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_incDecNoOVFInstructionAST class


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

//--------------------------------- Initializers
  public: void incDecNoOVFInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_bool & inOperand1,
                                                                   const class GGS_lstring & inOperand2,
                                                                   const class GGS_lstringlist & inOperand3,
                                                                   const class GGS_incDecKind & inOperand4,
                                                                   Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mPrefixedBySelf ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecNoOVFInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecNoOVFInstructionAST (const GGS_location & in_mInstructionLocation,
                                          const GGS_bool & in_mPrefixedBySelf,
                                          const GGS_lstring & in_mReceiverName,
                                          const GGS_lstringlist & in_mStructAttributeList,
                                          const GGS_incDecKind & in_mKind,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecNoOVFInstructionAST_2E_weak (const class GGS_incDecNoOVFInstructionAST & inSource) ;

  public: GGS_incDecNoOVFInstructionAST_2E_weak & operator = (const class GGS_incDecNoOVFInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecNoOVFInstructionAST_2E_weak init_nil (void) {
    GGS_incDecNoOVFInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecNoOVFInstructionAST bang_incDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_incDecNoOVFInstructionAST unwrappedValue (void) const {
    GGS_incDecNoOVFInstructionAST result ;
    if (isValid ()) {
      const cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_incDecNoOVFInstructionAST (p) ;
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
  public: static GGS_incDecNoOVFInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_incDecNoOVFInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfIncDecInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfIncDecInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfIncDecInstructionAST (const class cPtr_selfIncDecInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfIncDecInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_incDecKind & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfIncDecInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                    const class GGS_incDecKind & inOperand1,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfIncDecInstructionAST class


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

//--------------------------------- Initializers
  public: void selfIncDecInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_incDecKind & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_selfIncDecInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfIncDecInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_incDecKind & in_mKind,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfIncDecInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfIncDecInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfIncDecInstructionAST_2E_weak (const class GGS_selfIncDecInstructionAST & inSource) ;

  public: GGS_selfIncDecInstructionAST_2E_weak & operator = (const class GGS_selfIncDecInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfIncDecInstructionAST_2E_weak init_nil (void) {
    GGS_selfIncDecInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfIncDecInstructionAST bang_selfIncDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_selfIncDecInstructionAST unwrappedValue (void) const {
    GGS_selfIncDecInstructionAST result ;
    if (isValid ()) {
      const cPtr_selfIncDecInstructionAST * p = (cPtr_selfIncDecInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_selfIncDecInstructionAST (p) ;
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
  public: static GGS_selfIncDecInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfIncDecInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfIncDecNoOVFInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecNoOVFInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfIncDecNoOVFInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfIncDecNoOVFInstructionAST (const class cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfIncDecNoOVFInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_incDecKind & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfIncDecNoOVFInstructionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecNoOVFInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_incDecKind & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecNoOVFInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfIncDecNoOVFInstructionAST class


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

//--------------------------------- Initializers
  public: void selfIncDecNoOVFInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_incDecKind & inOperand1,
                                                           Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_selfIncDecNoOVFInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfIncDecNoOVFInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_incDecKind & in_mKind,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfIncDecNoOVFInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecNoOVFInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfIncDecNoOVFInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfIncDecNoOVFInstructionAST_2E_weak (const class GGS_selfIncDecNoOVFInstructionAST & inSource) ;

  public: GGS_selfIncDecNoOVFInstructionAST_2E_weak & operator = (const class GGS_selfIncDecNoOVFInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfIncDecNoOVFInstructionAST_2E_weak init_nil (void) {
    GGS_selfIncDecNoOVFInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfIncDecNoOVFInstructionAST bang_selfIncDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_selfIncDecNoOVFInstructionAST unwrappedValue (void) const {
    GGS_selfIncDecNoOVFInstructionAST result ;
    if (isValid ()) {
      const cPtr_selfIncDecNoOVFInstructionAST * p = (cPtr_selfIncDecNoOVFInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_selfIncDecNoOVFInstructionAST (p) ;
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
  public: static GGS_selfIncDecNoOVFInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecNoOVFInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecNoOVFInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_selfIncDecNoOVFInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecInstructionForGeneration (const class cPtr_incDecInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mReceiverCppName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_string & inOperand1,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GGS_lstringlist & inOperand3,
                                                                              const class GGS_incDecKind & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                          const class GGS_lstringlist & inOperand3,
                                                                          const class GGS_incDecKind & inOperand4,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_incDecInstructionForGeneration class


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

//--------------------------------- Initializers
  public: void incDecInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                        const class GGS_lstringlist & inOperand3,
                                                                        const class GGS_incDecKind & inOperand4,
                                                                        Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mReceiverCppName ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                               const GGS_string & in_mReceiverCppName,
                                               const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                               const GGS_lstringlist & in_mStructAttributeList,
                                               const GGS_incDecKind & in_mKind,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecInstructionForGeneration_2E_weak (const class GGS_incDecInstructionForGeneration & inSource) ;

  public: GGS_incDecInstructionForGeneration_2E_weak & operator = (const class GGS_incDecInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecInstructionForGeneration_2E_weak init_nil (void) {
    GGS_incDecInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecInstructionForGeneration bang_incDecInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_incDecInstructionForGeneration unwrappedValue (void) const {
    GGS_incDecInstructionForGeneration result ;
    if (isValid ()) {
      const cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_incDecInstructionForGeneration (p) ;
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
  public: static GGS_incDecInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_incDecInstructionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecNoOVFInstructionForGeneration (const class cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mReceiverCppName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecNoOVFInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                   const class GGS_lstringlist & inOperand3,
                                                                                   const class GGS_incDecKind & inOperand4,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecNoOVFInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                               const class GGS_lstringlist & inOperand3,
                                                                               const class GGS_incDecKind & inOperand4,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_incDecNoOVFInstructionForGeneration class


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

//--------------------------------- Initializers
  public: void incDecNoOVFInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                             const class GGS_lstringlist & inOperand3,
                                                                             const class GGS_incDecKind & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mReceiverCppName ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecNoOVFInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecNoOVFInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                    const GGS_string & in_mReceiverCppName,
                                                    const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                    const GGS_lstringlist & in_mStructAttributeList,
                                                    const GGS_incDecKind & in_mKind,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionForGeneration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecNoOVFInstructionForGeneration_2E_weak (const class GGS_incDecNoOVFInstructionForGeneration & inSource) ;

  public: GGS_incDecNoOVFInstructionForGeneration_2E_weak & operator = (const class GGS_incDecNoOVFInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecNoOVFInstructionForGeneration_2E_weak init_nil (void) {
    GGS_incDecNoOVFInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecNoOVFInstructionForGeneration bang_incDecNoOVFInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_incDecNoOVFInstructionForGeneration unwrappedValue (void) const {
    GGS_incDecNoOVFInstructionForGeneration result ;
    if (isValid ()) {
      const cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) ptr () ;
      if (nullptr != p) {
        result = GGS_incDecNoOVFInstructionForGeneration (p) ;
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
  public: static GGS_incDecNoOVFInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_incDecNoOVFInstructionForGeneration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum ifExpressionKind
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_ifExpressionKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_regularExp,
    enum_letExp
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_regularExp (class GGS_semanticExpressionAST & out_exp,
                                                                   class GGS_location & out_endOfExp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_letExp (class GGS_lstring & out_constantName,
                                                               class GGS_semanticExpressionAST & out_exp,
                                                               class GGS_location & out_endOfExp,
                                                               class GGS_lstring & out_typeName) const ;

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
  public: static GGS_ifExpressionKind extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionKind class_func_letExp (const class GGS_lstring & inOperand0,
                                                               const class GGS_semanticExpressionAST & inOperand1,
                                                               const class GGS_location & inOperand2,
                                                               const class GGS_lstring & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_ifExpressionKind class_func_regularExp (const class GGS_semanticExpressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractLetExp (class GGS_lstring & outArgument0,
                                                      class GGS_semanticExpressionAST & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractRegularExp (class GGS_semanticExpressionAST & outArgument0,
                                                          class GGS_location & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_ifExpressionKind_2E_letExp_3F_ getter_getLetExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifExpressionKind_2E_regularExp_3F_ getter_getRegularExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLetExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRegularExp (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_ifExpressionKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionKind_2E_letExp struct
//
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_letExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_constantName ;
  public: inline GGS_lstring readProperty_constantName (void) const {
    return mProperty_constantName ;
  }

  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_endOfExp ;
  public: inline GGS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_letExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantName = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_ifExpressionKind_2E_letExp (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifExpressionKind_2E_letExp (const GGS_lstring & in_constantName,
                                          const GGS_semanticExpressionAST & in_exp,
                                          const GGS_location & in_endOfExp,
                                          const GGS_lstring & in_typeName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionKind_2E_letExp init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_lstring & inOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_letExp extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionKind_2E_letExp class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_lstring & inOperand3,
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
 
} ; // End of GGS_ifExpressionKind_2E_letExp class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letExp ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: ifExpressionKind.letExp? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_letExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifExpressionKind_2E_letExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_letExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifExpressionKind_2E_letExp_3F_ (const GGS_ifExpressionKind_2E_letExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifExpressionKind_2E_letExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifExpressionKind_2E_letExp unwrappedValue (void) const {
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
  public: static GGS_ifExpressionKind_2E_letExp_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_ifExpressionKind_2E_letExp_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letExp_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionKind_2E_regularExp struct
//
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_regularExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_endOfExp ;
  public: inline GGS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_regularExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_ifExpressionKind_2E_regularExp (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifExpressionKind_2E_regularExp (const GGS_semanticExpressionAST & in_exp,
                                              const GGS_location & in_endOfExp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionKind_2E_regularExp init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                  const class GGS_location & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_regularExp extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionKind_2E_regularExp class_func_new (const class GGS_semanticExpressionAST & inOperand0,
                                                                          const class GGS_location & inOperand1,
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
 
} ; // End of GGS_ifExpressionKind_2E_regularExp class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: ifExpressionKind.regularExp? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_regularExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifExpressionKind_2E_regularExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_regularExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifExpressionKind_2E_regularExp_3F_ (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifExpressionKind_2E_regularExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifExpressionKind_2E_regularExp unwrappedValue (void) const {
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
  public: static GGS_ifExpressionKind_2E_regularExp_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_ifExpressionKind_2E_regularExp_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_ifExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_ifExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_ifExpressionKind & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionList init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionList extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_ifExpressionList class_func_listWithValue (const class GGS_ifExpressionKind & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_ifExpressionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_ifExpressionKind & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ifExpressionList add_operation (const GGS_ifExpressionList & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_ifExpressionKind constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_ifExpressionKind constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_ifExpressionKind & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_ifExpressionKind & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_ifExpressionKind & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_ifExpressionKind constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_ifExpressionKind & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_ifExpressionKind & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_ifExpressionKind getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_ifExpressionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_ifExpressionList ;
 
} ; // End of GGS_ifExpressionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ifExpressionList final
#ifndef NEW_ITERATOR
  : public cGenericAbstractEnumerator
#endif
{
  public: cEnumerator_ifExpressionList (const GGS_ifExpressionList & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  #ifdef NEW_ITERATOR
    public: bool hasCurrentObject (void) const ;
    public: void gotoNextObject (void) ;
    public: void rewind (void) ;
  #endif
  public: class GGS_ifExpressionKind current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ifExpressionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_ifExpressionKind mProperty_mExpression ;
  public: inline GGS_ifExpressionKind readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_ifExpressionKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_ifExpressionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifExpressionList_2E_element (const GGS_ifExpressionKind & in_mExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionList_2E_element init_21_ (const class GGS_ifExpressionKind & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionList_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionList_2E_element class_func_new (const class GGS_ifExpressionKind & inOperand0,
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
 
} ; // End of GGS_ifExpressionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionList_2E_element ;

