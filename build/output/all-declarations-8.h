#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateXorOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateXorOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateXorOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateXorOperationAST_2E_weak (const class GGS_templateXorOperationAST & inSource) ;

  public: GGS_templateXorOperationAST_2E_weak & operator = (const class GGS_templateXorOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateXorOperationAST_2E_weak init_nil (void) {
    GGS_templateXorOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateXorOperationAST bang_templateXorOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateXorOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateXorOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateXorOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateXorOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateXorOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateTrueBoolAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateTrueBoolAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateTrueBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateTrueBoolAST (const class cPtr_templateTrueBoolAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateTrueBoolAST init_21_ (const class GGS_location & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateTrueBoolAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTrueBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTrueBoolAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateTrueBoolAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateTrueBoolAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateTrueBoolAST_init_21_ (const class GGS_location & inOperand0,
                                             Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateTrueBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateTrueBoolAST (const GGS_location & in_mLocation,
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
// Phase 1: @templateTrueBoolAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateTrueBoolAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateTrueBoolAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateTrueBoolAST_2E_weak (const class GGS_templateTrueBoolAST & inSource) ;

  public: GGS_templateTrueBoolAST_2E_weak & operator = (const class GGS_templateTrueBoolAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateTrueBoolAST_2E_weak init_nil (void) {
    GGS_templateTrueBoolAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateTrueBoolAST bang_templateTrueBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateTrueBoolAST unwrappedValue (void) const ;

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
  public: static GGS_templateTrueBoolAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateTrueBoolAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTrueBoolAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTrueBoolAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateFalseBoolAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateFalseBoolAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateFalseBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateFalseBoolAST (const class cPtr_templateFalseBoolAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateFalseBoolAST init_21_ (const class GGS_location & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFalseBoolAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFalseBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFalseBoolAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateFalseBoolAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateFalseBoolAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateFalseBoolAST_init_21_ (const class GGS_location & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateFalseBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFalseBoolAST (const GGS_location & in_mLocation,
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
// Phase 1: @templateFalseBoolAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateFalseBoolAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateFalseBoolAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateFalseBoolAST_2E_weak (const class GGS_templateFalseBoolAST & inSource) ;

  public: GGS_templateFalseBoolAST_2E_weak & operator = (const class GGS_templateFalseBoolAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateFalseBoolAST_2E_weak init_nil (void) {
    GGS_templateFalseBoolAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateFalseBoolAST bang_templateFalseBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateFalseBoolAST unwrappedValue (void) const ;

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
  public: static GGS_templateFalseBoolAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFalseBoolAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFalseBoolAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFalseBoolAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLiteralStringExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralStringExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralStringExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralStringExpressionAST (const class cPtr_templateLiteralStringExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_stringlist readProperty_mLiteralStringList (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralStringExpressionAST init_21__21_ (const class GGS_stringlist & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralStringExpressionAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLiteralStringExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralStringExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLiteralStringExpressionAST_init_21__21_ (const class GGS_stringlist & inOperand0,
                                                                const class GGS_location & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_stringlist mProperty_mLiteralStringList ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateLiteralStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralStringExpressionAST (const GGS_stringlist & in_mLiteralStringList,
                                                   const GGS_location & in_mLocation,
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
// Phase 1: @templateLiteralStringExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralStringExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralStringExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralStringExpressionAST_2E_weak (const class GGS_templateLiteralStringExpressionAST & inSource) ;

  public: GGS_templateLiteralStringExpressionAST_2E_weak & operator = (const class GGS_templateLiteralStringExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralStringExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralStringExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralStringExpressionAST bang_templateLiteralStringExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLiteralStringExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateLiteralStringExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralStringExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralStringExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLiteralUIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralUIntExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralUIntExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralUIntExpressionAST (const class cPtr_templateLiteralUIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbigint readProperty_mLiteralInt (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralUIntExpressionAST init_21_ (const class GGS_lbigint & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralUIntExpressionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralUIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLiteralUIntExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralUIntExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLiteralUIntExpressionAST_init_21_ (const class GGS_lbigint & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbigint mProperty_mLiteralInt ;


//--- Default constructor
  public: cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralUIntExpressionAST (const GGS_lbigint & in_mLiteralInt,
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
// Phase 1: @templateLiteralUIntExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralUIntExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralUIntExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralUIntExpressionAST_2E_weak (const class GGS_templateLiteralUIntExpressionAST & inSource) ;

  public: GGS_templateLiteralUIntExpressionAST_2E_weak & operator = (const class GGS_templateLiteralUIntExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralUIntExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralUIntExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralUIntExpressionAST bang_templateLiteralUIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLiteralUIntExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateLiteralUIntExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralUIntExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralUIntExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLiteralCharExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralCharExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralCharExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralCharExpressionAST (const class cPtr_templateLiteralCharExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mLiteralChar (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralCharExpressionAST init_21_ (const class GGS_lchar & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralCharExpressionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLiteralCharExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralCharExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLiteralCharExpressionAST_init_21_ (const class GGS_lchar & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mLiteralChar ;


//--- Default constructor
  public: cPtr_templateLiteralCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralCharExpressionAST (const GGS_lchar & in_mLiteralChar,
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
// Phase 1: @templateLiteralCharExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralCharExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralCharExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralCharExpressionAST_2E_weak (const class GGS_templateLiteralCharExpressionAST & inSource) ;

  public: GGS_templateLiteralCharExpressionAST_2E_weak & operator = (const class GGS_templateLiteralCharExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralCharExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralCharExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralCharExpressionAST bang_templateLiteralCharExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLiteralCharExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateLiteralCharExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralCharExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralCharExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLiteralDoubleExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralDoubleExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLiteralDoubleExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLiteralDoubleExpressionAST (const class cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ldouble readProperty_mLiteralDouble (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLiteralDoubleExpressionAST init_21_ (const class GGS_ldouble & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLiteralDoubleExpressionAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLiteralDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLiteralDoubleExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLiteralDoubleExpressionAST_init_21_ (const class GGS_ldouble & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ldouble mProperty_mLiteralDouble ;


//--- Default constructor
  public: cPtr_templateLiteralDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLiteralDoubleExpressionAST (const GGS_ldouble & in_mLiteralDouble,
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
// Phase 1: @templateLiteralDoubleExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLiteralDoubleExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLiteralDoubleExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLiteralDoubleExpressionAST_2E_weak (const class GGS_templateLiteralDoubleExpressionAST & inSource) ;

  public: GGS_templateLiteralDoubleExpressionAST_2E_weak & operator = (const class GGS_templateLiteralDoubleExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLiteralDoubleExpressionAST_2E_weak init_nil (void) {
    GGS_templateLiteralDoubleExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLiteralDoubleExpressionAST bang_templateLiteralDoubleExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLiteralDoubleExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateLiteralDoubleExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLiteralDoubleExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLiteralDoubleExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structFieldAccessTemplateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_structFieldAccessTemplateExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_structFieldAccessTemplateExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structFieldAccessTemplateExpressionAST (const class cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GGS_lstring readProperty_mStructFieldName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structFieldAccessTemplateExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_templateExpressionAST & inOperand1,
                                                                              const class GGS_lstring & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structFieldAccessTemplateExpressionAST extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structFieldAccessTemplateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structFieldAccessTemplateExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_structFieldAccessTemplateExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structFieldAccessTemplateExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_templateExpressionAST & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: GGS_lstring mProperty_mStructFieldName ;


//--- Default constructor
  public: cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structFieldAccessTemplateExpressionAST (const GGS_location & in_mOperatorLocation,
                                                       const GGS_templateExpressionAST & in_mExpression,
                                                       const GGS_lstring & in_mStructFieldName,
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
// Phase 1: @structFieldAccessTemplateExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_structFieldAccessTemplateExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structFieldAccessTemplateExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structFieldAccessTemplateExpressionAST_2E_weak (const class GGS_structFieldAccessTemplateExpressionAST & inSource) ;

  public: GGS_structFieldAccessTemplateExpressionAST_2E_weak & operator = (const class GGS_structFieldAccessTemplateExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structFieldAccessTemplateExpressionAST_2E_weak init_nil (void) {
    GGS_structFieldAccessTemplateExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structFieldAccessTemplateExpressionAST bang_structFieldAccessTemplateExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_structFieldAccessTemplateExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_structFieldAccessTemplateExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structFieldAccessTemplateExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structFieldAccessTemplateExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateNotOperatorAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateNotOperatorAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateNotOperatorAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateNotOperatorAST (const class cPtr_templateNotOperatorAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateNotOperatorAST init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_templateExpressionAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateNotOperatorAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNotOperatorAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNotOperatorAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateNotOperatorAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateNotOperatorAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateNotOperatorAST_init_21__21_ (const class GGS_location & inOperand0,
                                                    const class GGS_templateExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateNotOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateNotOperatorAST (const GGS_location & in_mOperatorLocation,
                                       const GGS_templateExpressionAST & in_mExpression,
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
// Phase 1: @templateNotOperatorAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateNotOperatorAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateNotOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateNotOperatorAST_2E_weak (const class GGS_templateNotOperatorAST & inSource) ;

  public: GGS_templateNotOperatorAST_2E_weak & operator = (const class GGS_templateNotOperatorAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateNotOperatorAST_2E_weak init_nil (void) {
    GGS_templateNotOperatorAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateNotOperatorAST bang_templateNotOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateNotOperatorAST unwrappedValue (void) const ;

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
  public: static GGS_templateNotOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateNotOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNotOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNotOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLogicalNegateAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLogicalNegateAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLogicalNegateAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLogicalNegateAST (const class cPtr_templateLogicalNegateAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLogicalNegateAST init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLogicalNegateAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLogicalNegateAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLogicalNegateAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLogicalNegateAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLogicalNegateAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLogicalNegateAST_init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_templateExpressionAST & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateLogicalNegateAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLogicalNegateAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_templateExpressionAST & in_mExpression,
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
// Phase 1: @templateLogicalNegateAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLogicalNegateAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLogicalNegateAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLogicalNegateAST_2E_weak (const class GGS_templateLogicalNegateAST & inSource) ;

  public: GGS_templateLogicalNegateAST_2E_weak & operator = (const class GGS_templateLogicalNegateAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLogicalNegateAST_2E_weak init_nil (void) {
    GGS_templateLogicalNegateAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLogicalNegateAST bang_templateLogicalNegateAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLogicalNegateAST unwrappedValue (void) const ;

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
  public: static GGS_templateLogicalNegateAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLogicalNegateAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLogicalNegateAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLogicalNegateAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateOptionAccessAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateOptionAccessAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateOptionAccessAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateOptionAccessAST (const class cPtr_templateOptionAccessAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GGS_lstring readProperty_mOptionName (void) const ;

  public: class GGS_lstring readProperty_mGetterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateOptionAccessAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_lstring & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateOptionAccessAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateOptionAccessAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateOptionAccessAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateOptionAccessAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateOptionAccessAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_lstring & inOperand1,
                                                         const class GGS_lstring & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOptionComponentName ;
  public: GGS_lstring mProperty_mOptionName ;
  public: GGS_lstring mProperty_mGetterName ;


//--- Default constructor
  public: cPtr_templateOptionAccessAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateOptionAccessAST (const GGS_lstring & in_mOptionComponentName,
                                        const GGS_lstring & in_mOptionName,
                                        const GGS_lstring & in_mGetterName,
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
// Phase 1: @templateOptionAccessAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateOptionAccessAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateOptionAccessAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateOptionAccessAST_2E_weak (const class GGS_templateOptionAccessAST & inSource) ;

  public: GGS_templateOptionAccessAST_2E_weak & operator = (const class GGS_templateOptionAccessAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateOptionAccessAST_2E_weak init_nil (void) {
    GGS_templateOptionAccessAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateOptionAccessAST bang_templateOptionAccessAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateOptionAccessAST unwrappedValue (void) const ;

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
  public: static GGS_templateOptionAccessAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateOptionAccessAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateOptionAccessAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateOptionAccessAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum dynamicTypeComparisonKind
//--------------------------------------------------------------------------------------------------

class GGS_dynamicTypeComparisonKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_dynamicTypeComparisonKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_equal,
    enum_inherited,
    enum_strictlyInherited
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
  public: static GGS_dynamicTypeComparisonKind extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynamicTypeComparisonKind class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_dynamicTypeComparisonKind class_func_inherited (LOCATION_ARGS) ;

  public: static class GGS_dynamicTypeComparisonKind class_func_strictlyInherited (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isInherited (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isStrictlyInherited (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicTypeComparisonKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateTestDynamicClassAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateTestDynamicClassAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateTestDynamicClassAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateTestDynamicClassAST (const class cPtr_templateTestDynamicClassAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GGS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GGS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateTestDynamicClassAST init_21__21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_dynamicTypeComparisonKind & inOperand2,
                                                                       const class GGS_lstring & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateTestDynamicClassAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTestDynamicClassAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateTestDynamicClassAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateTestDynamicClassAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateTestDynamicClassAST_init_21__21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                 const class GGS_location & inOperand1,
                                                                 const class GGS_dynamicTypeComparisonKind & inOperand2,
                                                                 const class GGS_lstring & inOperand3,
                                                                 Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mReceiverExpression ;
  public: GGS_location mProperty_mEndOfReceiverExpression ;
  public: GGS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GGS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateTestDynamicClassAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                            const GGS_location & in_mEndOfReceiverExpression,
                                            const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                            const GGS_lstring & in_mTypeName,
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
// Phase 1: @templateTestDynamicClassAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateTestDynamicClassAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateTestDynamicClassAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateTestDynamicClassAST_2E_weak (const class GGS_templateTestDynamicClassAST & inSource) ;

  public: GGS_templateTestDynamicClassAST_2E_weak & operator = (const class GGS_templateTestDynamicClassAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateTestDynamicClassAST_2E_weak init_nil (void) {
    GGS_templateTestDynamicClassAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateTestDynamicClassAST bang_templateTestDynamicClassAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateTestDynamicClassAST unwrappedValue (void) const ;

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
  public: static GGS_templateTestDynamicClassAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateTestDynamicClassAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateTestDynamicClassAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateFunctionCallAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateFunctionCallAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateFunctionCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateFunctionCallAST (const class cPtr_templateFunctionCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS_templateExpressionListAST readProperty_mExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateFunctionCallAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_templateExpressionListAST & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateFunctionCallAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFunctionCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateFunctionCallAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateFunctionCallAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateFunctionCallAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                     const class GGS_templateExpressionListAST & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS_templateExpressionListAST mProperty_mExpressionList ;


//--- Default constructor
  public: cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateFunctionCallAST (const GGS_lstring & in_mFunctionName,
                                        const GGS_templateExpressionListAST & in_mExpressionList,
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
// Phase 1: @templateFunctionCallAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateFunctionCallAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateFunctionCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateFunctionCallAST_2E_weak (const class GGS_templateFunctionCallAST & inSource) ;

  public: GGS_templateFunctionCallAST_2E_weak & operator = (const class GGS_templateFunctionCallAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateFunctionCallAST_2E_weak init_nil (void) {
    GGS_templateFunctionCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateFunctionCallAST bang_templateFunctionCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateFunctionCallAST unwrappedValue (void) const ;

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
  public: static GGS_templateFunctionCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateFunctionCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateFunctionCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFunctionCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateVarInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateVarInExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateVarInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateVarInExpressionAST (const class cPtr_templateVarInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateVarInExpressionAST init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateVarInExpressionAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateVarInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateVarInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateVarInExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateVarInExpressionAST_init_21_ (const class GGS_lstring & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;


//--- Default constructor
  public: cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateVarInExpressionAST (const GGS_lstring & in_mVarName,
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
// Phase 1: @templateVarInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateVarInExpressionAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateVarInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateVarInExpressionAST_2E_weak (const class GGS_templateVarInExpressionAST & inSource) ;

  public: GGS_templateVarInExpressionAST_2E_weak & operator = (const class GGS_templateVarInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateVarInExpressionAST_2E_weak init_nil (void) {
    GGS_templateVarInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateVarInExpressionAST bang_templateVarInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateVarInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateVarInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateVarInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateVarInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateAddOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateAddOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateAddOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateAddOperationAST (const class cPtr_templateAddOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateAddOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateAddOperationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAddOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAddOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateAddOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateAddOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateAddOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateAddOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateAddOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateAddOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateAddOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateAddOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateAddOperationAST_2E_weak (const class GGS_templateAddOperationAST & inSource) ;

  public: GGS_templateAddOperationAST_2E_weak & operator = (const class GGS_templateAddOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateAddOperationAST_2E_weak init_nil (void) {
    GGS_templateAddOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateAddOperationAST bang_templateAddOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateAddOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateAddOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateAddOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateAddOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAddOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateSubOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateSubOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateSubOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateSubOperationAST (const class cPtr_templateSubOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateSubOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateSubOperationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSubOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSubOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateSubOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateSubOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateSubOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateSubOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateSubOperationAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateSubOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateSubOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateSubOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateSubOperationAST_2E_weak (const class GGS_templateSubOperationAST & inSource) ;

  public: GGS_templateSubOperationAST_2E_weak & operator = (const class GGS_templateSubOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateSubOperationAST_2E_weak init_nil (void) {
    GGS_templateSubOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateSubOperationAST bang_templateSubOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateSubOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateSubOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateSubOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSubOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSubOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateMultiplyOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateMultiplyOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateMultiplyOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateMultiplyOperationAST (const class cPtr_templateMultiplyOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateMultiplyOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_templateExpressionAST & inOperand1,
                                                                    const class GGS_templateExpressionAST & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateMultiplyOperationAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateMultiplyOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateMultiplyOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateMultiplyOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateMultiplyOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_templateExpressionAST & inOperand1,
                                                              const class GGS_templateExpressionAST & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateMultiplyOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateMultiplyOperationAST (const GGS_location & in_mOperatorLocation,
                                             const GGS_templateExpressionAST & in_mLeftExpression,
                                             const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateMultiplyOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateMultiplyOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateMultiplyOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateMultiplyOperationAST_2E_weak (const class GGS_templateMultiplyOperationAST & inSource) ;

  public: GGS_templateMultiplyOperationAST_2E_weak & operator = (const class GGS_templateMultiplyOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateMultiplyOperationAST_2E_weak init_nil (void) {
    GGS_templateMultiplyOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateMultiplyOperationAST bang_templateMultiplyOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateMultiplyOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateMultiplyOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateMultiplyOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateMultiplyOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateMultiplyOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDivideOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateDivideOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateDivideOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateDivideOperationAST (const class cPtr_templateDivideOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDivideOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  const class GGS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateDivideOperationAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateDivideOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDivideOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateDivideOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateDivideOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateDivideOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            const class GGS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateDivideOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateDivideOperationAST (const GGS_location & in_mOperatorLocation,
                                           const GGS_templateExpressionAST & in_mLeftExpression,
                                           const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateDivideOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateDivideOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateDivideOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateDivideOperationAST_2E_weak (const class GGS_templateDivideOperationAST & inSource) ;

  public: GGS_templateDivideOperationAST_2E_weak & operator = (const class GGS_templateDivideOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateDivideOperationAST_2E_weak init_nil (void) {
    GGS_templateDivideOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateDivideOperationAST bang_templateDivideOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateDivideOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateDivideOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateDivideOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateDivideOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDivideOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateModuloOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateModuloOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateModuloOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateModuloOperationAST (const class cPtr_templateModuloOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateModuloOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  const class GGS_templateExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateModuloOperationAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateModuloOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateModuloOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateModuloOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateModuloOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateModuloOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            const class GGS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateModuloOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateModuloOperationAST (const GGS_location & in_mOperatorLocation,
                                           const GGS_templateExpressionAST & in_mLeftExpression,
                                           const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateModuloOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateModuloOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateModuloOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateModuloOperationAST_2E_weak (const class GGS_templateModuloOperationAST & inSource) ;

  public: GGS_templateModuloOperationAST_2E_weak & operator = (const class GGS_templateModuloOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateModuloOperationAST_2E_weak init_nil (void) {
    GGS_templateModuloOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateModuloOperationAST bang_templateModuloOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateModuloOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateModuloOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateModuloOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateModuloOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateModuloOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateUnaryMinusOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateUnaryMinusOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateUnaryMinusOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateUnaryMinusOperationAST (const class cPtr_templateUnaryMinusOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateUnaryMinusOperationAST init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_templateExpressionAST & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateUnaryMinusOperationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateUnaryMinusOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateUnaryMinusOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateUnaryMinusOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateUnaryMinusOperationAST_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_templateUnaryMinusOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateUnaryMinusOperationAST (const GGS_location & in_mOperatorLocation,
                                               const GGS_templateExpressionAST & in_mExpression,
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
// Phase 1: @templateUnaryMinusOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateUnaryMinusOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateUnaryMinusOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateUnaryMinusOperationAST_2E_weak (const class GGS_templateUnaryMinusOperationAST & inSource) ;

  public: GGS_templateUnaryMinusOperationAST_2E_weak & operator = (const class GGS_templateUnaryMinusOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateUnaryMinusOperationAST_2E_weak init_nil (void) {
    GGS_templateUnaryMinusOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateUnaryMinusOperationAST bang_templateUnaryMinusOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateUnaryMinusOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateUnaryMinusOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateUnaryMinusOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateUnaryMinusOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateEqualTestAST (const class cPtr_templateEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_templateExpressionAST & inOperand1,
                                                            const class GGS_templateExpressionAST & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateEqualTestAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateEqualTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateEqualTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_templateExpressionAST & inOperand1,
                                                      const class GGS_templateExpressionAST & inOperand2,
                                                      Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateEqualTestAST (const GGS_location & in_mOperatorLocation,
                                     const GGS_templateExpressionAST & in_mLeftExpression,
                                     const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateEqualTestAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateEqualTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateEqualTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateEqualTestAST_2E_weak (const class GGS_templateEqualTestAST & inSource) ;

  public: GGS_templateEqualTestAST_2E_weak & operator = (const class GGS_templateEqualTestAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateEqualTestAST_2E_weak init_nil (void) {
    GGS_templateEqualTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateEqualTestAST bang_templateEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateEqualTestAST unwrappedValue (void) const ;

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
  public: static GGS_templateEqualTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateEqualTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateEqualTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateEqualTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateNonEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateNonEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateNonEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateNonEqualTestAST (const class cPtr_templateNonEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateNonEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateNonEqualTestAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNonEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNonEqualTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateNonEqualTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateNonEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateNonEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_templateExpressionAST & inOperand1,
                                                         const class GGS_templateExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateNonEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateNonEqualTestAST (const GGS_location & in_mOperatorLocation,
                                        const GGS_templateExpressionAST & in_mLeftExpression,
                                        const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateNonEqualTestAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateNonEqualTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateNonEqualTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateNonEqualTestAST_2E_weak (const class GGS_templateNonEqualTestAST & inSource) ;

  public: GGS_templateNonEqualTestAST_2E_weak & operator = (const class GGS_templateNonEqualTestAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateNonEqualTestAST_2E_weak init_nil (void) {
    GGS_templateNonEqualTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateNonEqualTestAST bang_templateNonEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateNonEqualTestAST unwrappedValue (void) const ;

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
  public: static GGS_templateNonEqualTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateNonEqualTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateNonEqualTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNonEqualTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateStrictInfTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictInfTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateStrictInfTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateStrictInfTestAST (const class cPtr_templateStrictInfTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateStrictInfTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                const class GGS_templateExpressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateStrictInfTestAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictInfTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictInfTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateStrictInfTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateStrictInfTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateStrictInfTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_templateExpressionAST & inOperand1,
                                                          const class GGS_templateExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateStrictInfTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateStrictInfTestAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_templateExpressionAST & in_mLeftExpression,
                                         const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateStrictInfTestAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictInfTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateStrictInfTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateStrictInfTestAST_2E_weak (const class GGS_templateStrictInfTestAST & inSource) ;

  public: GGS_templateStrictInfTestAST_2E_weak & operator = (const class GGS_templateStrictInfTestAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateStrictInfTestAST_2E_weak init_nil (void) {
    GGS_templateStrictInfTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateStrictInfTestAST bang_templateStrictInfTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateStrictInfTestAST unwrappedValue (void) const ;

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
  public: static GGS_templateStrictInfTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateStrictInfTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictInfTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictInfTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInfOrEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInfOrEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateInfOrEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInfOrEqualTestAST (const class cPtr_templateInfOrEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInfOrEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_templateExpressionAST & inOperand1,
                                                                 const class GGS_templateExpressionAST & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInfOrEqualTestAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInfOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInfOrEqualTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInfOrEqualTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInfOrEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInfOrEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_templateExpressionAST & inOperand1,
                                                           const class GGS_templateExpressionAST & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateInfOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInfOrEqualTestAST (const GGS_location & in_mOperatorLocation,
                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                          const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateInfOrEqualTestAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInfOrEqualTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInfOrEqualTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInfOrEqualTestAST_2E_weak (const class GGS_templateInfOrEqualTestAST & inSource) ;

  public: GGS_templateInfOrEqualTestAST_2E_weak & operator = (const class GGS_templateInfOrEqualTestAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInfOrEqualTestAST_2E_weak init_nil (void) {
    GGS_templateInfOrEqualTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInfOrEqualTestAST bang_templateInfOrEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInfOrEqualTestAST unwrappedValue (void) const ;

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
  public: static GGS_templateInfOrEqualTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInfOrEqualTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInfOrEqualTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInfOrEqualTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateStrictSupTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictSupTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateStrictSupTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateStrictSupTestAST (const class cPtr_templateStrictSupTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateStrictSupTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                const class GGS_templateExpressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateStrictSupTestAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictSupTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictSupTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateStrictSupTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateStrictSupTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateStrictSupTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_templateExpressionAST & inOperand1,
                                                          const class GGS_templateExpressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateStrictSupTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateStrictSupTestAST (const GGS_location & in_mOperatorLocation,
                                         const GGS_templateExpressionAST & in_mLeftExpression,
                                         const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateStrictSupTestAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateStrictSupTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateStrictSupTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateStrictSupTestAST_2E_weak (const class GGS_templateStrictSupTestAST & inSource) ;

  public: GGS_templateStrictSupTestAST_2E_weak & operator = (const class GGS_templateStrictSupTestAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateStrictSupTestAST_2E_weak init_nil (void) {
    GGS_templateStrictSupTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateStrictSupTestAST bang_templateStrictSupTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateStrictSupTestAST unwrappedValue (void) const ;

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
  public: static GGS_templateStrictSupTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateStrictSupTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateStrictSupTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateStrictSupTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateSupOrEqualTestAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateSupOrEqualTestAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateSupOrEqualTestAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateSupOrEqualTestAST (const class cPtr_templateSupOrEqualTestAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateSupOrEqualTestAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_templateExpressionAST & inOperand1,
                                                                 const class GGS_templateExpressionAST & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateSupOrEqualTestAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSupOrEqualTestAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateSupOrEqualTestAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateSupOrEqualTestAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateSupOrEqualTestAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_templateExpressionAST & inOperand1,
                                                           const class GGS_templateExpressionAST & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateSupOrEqualTestAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateSupOrEqualTestAST (const GGS_location & in_mOperatorLocation,
                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                          const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateSupOrEqualTestAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateSupOrEqualTestAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateSupOrEqualTestAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateSupOrEqualTestAST_2E_weak (const class GGS_templateSupOrEqualTestAST & inSource) ;

  public: GGS_templateSupOrEqualTestAST_2E_weak & operator = (const class GGS_templateSupOrEqualTestAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateSupOrEqualTestAST_2E_weak init_nil (void) {
    GGS_templateSupOrEqualTestAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateSupOrEqualTestAST bang_templateSupOrEqualTestAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateSupOrEqualTestAST unwrappedValue (void) const ;

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
  public: static GGS_templateSupOrEqualTestAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateSupOrEqualTestAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateSupOrEqualTestAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSupOrEqualTestAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateLeftShiftOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLeftShiftOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateLeftShiftOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateLeftShiftOperationAST (const class cPtr_templateLeftShiftOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateLeftShiftOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_templateExpressionAST & inOperand1,
                                                                     const class GGS_templateExpressionAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateLeftShiftOperationAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLeftShiftOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLeftShiftOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateLeftShiftOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateLeftShiftOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLeftShiftOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_templateExpressionAST & inOperand1,
                                                               const class GGS_templateExpressionAST & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateLeftShiftOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLeftShiftOperationAST (const GGS_location & in_mOperatorLocation,
                                              const GGS_templateExpressionAST & in_mLeftExpression,
                                              const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateLeftShiftOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateLeftShiftOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateLeftShiftOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateLeftShiftOperationAST_2E_weak (const class GGS_templateLeftShiftOperationAST & inSource) ;

  public: GGS_templateLeftShiftOperationAST_2E_weak & operator = (const class GGS_templateLeftShiftOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateLeftShiftOperationAST_2E_weak init_nil (void) {
    GGS_templateLeftShiftOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateLeftShiftOperationAST bang_templateLeftShiftOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateLeftShiftOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateLeftShiftOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateLeftShiftOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateLeftShiftOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLeftShiftOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateRightShiftOperationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateRightShiftOperationAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateRightShiftOperationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateRightShiftOperationAST (const class cPtr_templateRightShiftOperationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;

  public: class GGS_templateExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GGS_templateExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateRightShiftOperationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_templateExpressionAST & inOperand1,
                                                                      const class GGS_templateExpressionAST & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateRightShiftOperationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateRightShiftOperationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateRightShiftOperationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateRightShiftOperationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateRightShiftOperationAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateRightShiftOperationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_templateExpressionAST & inOperand1,
                                                                const class GGS_templateExpressionAST & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_templateExpressionAST mProperty_mLeftExpression ;
  public: GGS_templateExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_templateRightShiftOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateRightShiftOperationAST (const GGS_location & in_mOperatorLocation,
                                               const GGS_templateExpressionAST & in_mLeftExpression,
                                               const GGS_templateExpressionAST & in_mRightExpression,
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
// Phase 1: @templateRightShiftOperationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateRightShiftOperationAST_2E_weak : public GGS_templateExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateRightShiftOperationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateRightShiftOperationAST_2E_weak (const class GGS_templateRightShiftOperationAST & inSource) ;

  public: GGS_templateRightShiftOperationAST_2E_weak & operator = (const class GGS_templateRightShiftOperationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateRightShiftOperationAST_2E_weak init_nil (void) {
    GGS_templateRightShiftOperationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateRightShiftOperationAST bang_templateRightShiftOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateRightShiftOperationAST unwrappedValue (void) const ;

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
  public: static GGS_templateRightShiftOperationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateRightShiftOperationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateRightShiftOperationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateRightShiftOperationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionStringAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionStringAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionStringAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionStringAST (const class cPtr_templateInstructionStringAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mTemplateString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionStringAST init_21_ (const class GGS_string & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionStringAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionStringAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionStringAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionStringAST_init_21_ (const class GGS_string & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mTemplateString ;


//--- Default constructor
  public: cPtr_templateInstructionStringAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionStringAST (const GGS_string & in_mTemplateString,
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
// Phase 1: @templateInstructionStringAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionStringAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionStringAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionStringAST_2E_weak (const class GGS_templateInstructionStringAST & inSource) ;

  public: GGS_templateInstructionStringAST_2E_weak & operator = (const class GGS_templateInstructionStringAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionStringAST_2E_weak init_nil (void) {
    GGS_templateInstructionStringAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionStringAST bang_templateInstructionStringAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionStringAST unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionStringAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionStringAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionStringAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionExpressionAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionExpressionAST (const class cPtr_templateInstructionExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionExpressionAST init_21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionExpressionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionExpressionAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionExpressionAST_init_21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_templateInstructionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionExpressionAST (const GGS_templateExpressionAST & in_mExpression,
                                                 const GGS_location & in_mLocation,
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
// Phase 1: @templateInstructionExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionExpressionAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionExpressionAST_2E_weak (const class GGS_templateInstructionExpressionAST & inSource) ;

  public: GGS_templateInstructionExpressionAST_2E_weak & operator = (const class GGS_templateInstructionExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionExpressionAST_2E_weak init_nil (void) {
    GGS_templateInstructionExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionExpressionAST bang_templateInstructionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateBlockInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateBlockInstructionAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateBlockInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateBlockInstructionAST (const class cPtr_templateBlockInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GGS_location readProperty_mLocation (void) const ;

  public: class GGS_templateInstructionListAST readProperty_mBlockInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateBlockInstructionAST init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_templateInstructionListAST & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateBlockInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateBlockInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateBlockInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateBlockInstructionAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateBlockInstructionAST_init_21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                             const class GGS_location & inOperand1,
                                                             const class GGS_templateInstructionListAST & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: GGS_location mProperty_mLocation ;
  public: GGS_templateInstructionListAST mProperty_mBlockInstructionList ;


//--- Default constructor
  public: cPtr_templateBlockInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateBlockInstructionAST (const GGS_templateExpressionAST & in_mExpression,
                                            const GGS_location & in_mLocation,
                                            const GGS_templateInstructionListAST & in_mBlockInstructionList,
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
// Phase 1: @templateBlockInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateBlockInstructionAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateBlockInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateBlockInstructionAST_2E_weak (const class GGS_templateBlockInstructionAST & inSource) ;

  public: GGS_templateBlockInstructionAST_2E_weak & operator = (const class GGS_templateBlockInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateBlockInstructionAST_2E_weak init_nil (void) {
    GGS_templateBlockInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateBlockInstructionAST bang_templateBlockInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateBlockInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_templateBlockInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateBlockInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateBlockInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionGetColumnLocationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGetColumnLocationAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGetColumnLocationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionGetColumnLocationAST (const class cPtr_templateInstructionGetColumnLocationAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionGetColumnLocationAST init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionGetColumnLocationAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGetColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionGetColumnLocationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGetColumnLocationAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionGetColumnLocationAST_init (Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_templateInstructionGetColumnLocationAST (Compiler * inCompiler
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
// Phase 1: @templateInstructionGetColumnLocationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGetColumnLocationAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGetColumnLocationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionGetColumnLocationAST_2E_weak (const class GGS_templateInstructionGetColumnLocationAST & inSource) ;

  public: GGS_templateInstructionGetColumnLocationAST_2E_weak & operator = (const class GGS_templateInstructionGetColumnLocationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionGetColumnLocationAST_2E_weak init_nil (void) {
    GGS_templateInstructionGetColumnLocationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionGetColumnLocationAST bang_templateInstructionGetColumnLocationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionGetColumnLocationAST unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionGetColumnLocationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionGetColumnLocationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGetColumnLocationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionGotoColumnLocationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGotoColumnLocationAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGotoColumnLocationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionGotoColumnLocationAST (const class cPtr_templateInstructionGotoColumnLocationAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionGotoColumnLocationAST init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionGotoColumnLocationAST extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGotoColumnLocationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionGotoColumnLocationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGotoColumnLocationAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionGotoColumnLocationAST_init (Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_templateInstructionGotoColumnLocationAST (Compiler * inCompiler
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
// Phase 1: @templateInstructionGotoColumnLocationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionGotoColumnLocationAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionGotoColumnLocationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionGotoColumnLocationAST_2E_weak (const class GGS_templateInstructionGotoColumnLocationAST & inSource) ;

  public: GGS_templateInstructionGotoColumnLocationAST_2E_weak & operator = (const class GGS_templateInstructionGotoColumnLocationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionGotoColumnLocationAST_2E_weak init_nil (void) {
    GGS_templateInstructionGotoColumnLocationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionGotoColumnLocationAST bang_templateInstructionGotoColumnLocationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionGotoColumnLocationAST unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionGotoColumnLocationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionGotoColumnLocationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionGotoColumnLocationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionIfBranchListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_templateInstructionIfBranchListAST final {
  public: DownEnumerator_templateInstructionIfBranchListAST (const class GGS_templateInstructionIfBranchListAST & inList) ;

  public: ~ DownEnumerator_templateInstructionIfBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionIfBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionIfBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_templateInstructionIfBranchListAST (const DownEnumerator_templateInstructionIfBranchListAST &) = delete ;
  private: DownEnumerator_templateInstructionIfBranchListAST & operator = (const DownEnumerator_templateInstructionIfBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_templateInstructionIfBranchListAST final {
  public: UpEnumerator_templateInstructionIfBranchListAST (const class GGS_templateInstructionIfBranchListAST & inList)  ;

  public: ~ UpEnumerator_templateInstructionIfBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_templateExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_templateInstructionIfBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_templateInstructionIfBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_templateInstructionIfBranchListAST (const UpEnumerator_templateInstructionIfBranchListAST &) = delete ;
  private: UpEnumerator_templateInstructionIfBranchListAST & operator = (const UpEnumerator_templateInstructionIfBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @templateInstructionIfBranchListAST list
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfBranchListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_templateInstructionIfBranchListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_templateInstructionIfBranchListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_templateInstructionIfBranchListAST (void) = default ;

//--- Copy
  public: GGS_templateInstructionIfBranchListAST (const GGS_templateInstructionIfBranchListAST &) = default ;
  public: GGS_templateInstructionIfBranchListAST & operator = (const GGS_templateInstructionIfBranchListAST &) = default ;

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
  public : inline GenericArray <GGS_templateInstructionIfBranchListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_templateInstructionIfBranchListAST subList (const int32_t inStart,
                                                           const int32_t inLength,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_templateInstructionIfBranchListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_templateExpressionAST & in_mExpression,
                                                 const class GGS_templateInstructionListAST & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfBranchListAST init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfBranchListAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionIfBranchListAST class_func_listWithValue (const class GGS_templateExpressionAST & inOperand0,
                                                                                        const class GGS_templateInstructionListAST & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_templateInstructionIfBranchListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_templateExpressionAST & inOperand0,
                                   const class GGS_templateInstructionListAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_templateInstructionIfBranchListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_templateInstructionIfBranchListAST add_operation (const GGS_templateInstructionIfBranchListAST & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateExpressionAST constinArgument0,
                              class GGS_templateInstructionListAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_templateExpressionAST constinArgument0,
                                     class GGS_templateInstructionListAST constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_templateExpressionAST & outArgument0,
                                class GGS_templateInstructionListAST & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_templateExpressionAST & outArgument0,
                               class GGS_templateInstructionListAST & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_templateExpressionAST & outArgument0,
                                     class GGS_templateInstructionListAST & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_templateExpressionAST constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_templateInstructionListAST constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_templateExpressionAST & outArgument0,
                             class GGS_templateInstructionListAST & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_templateExpressionAST & outArgument0,
                            class GGS_templateInstructionListAST & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateExpressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionListAST getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionIfBranchListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_templateInstructionIfBranchListAST ;
  friend class DownEnumerator_templateInstructionIfBranchListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionIfBranchListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfBranchListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: inline GGS_templateExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_templateInstructionListAST mProperty_mInstructionList ;
  public: inline GGS_templateInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateInstructionIfBranchListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_templateExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_templateInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateInstructionIfBranchListAST_2E_element (const GGS_templateExpressionAST & in_mExpression,
                                                             const GGS_templateInstructionListAST & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_templateInstructionIfBranchListAST_2E_element (const GGS_templateInstructionIfBranchListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateInstructionIfBranchListAST_2E_element & operator = (const GGS_templateInstructionIfBranchListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfBranchListAST_2E_element init_21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                                 const class GGS_templateInstructionListAST & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfBranchListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionIfAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionIfAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionIfAST (const class cPtr_templateInstructionIfAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateInstructionIfBranchListAST readProperty_mTemplateInstructionIfBranchList (void) const ;

  public: class GGS_templateInstructionListAST readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionIfAST init_21__21_ (const class GGS_templateInstructionIfBranchListAST & inOperand0,
                                                            const class GGS_templateInstructionListAST & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionIfAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionIfAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionIfAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionIfAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionIfAST_init_21__21_ (const class GGS_templateInstructionIfBranchListAST & inOperand0,
                                                      const class GGS_templateInstructionListAST & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateInstructionIfBranchListAST mProperty_mTemplateInstructionIfBranchList ;
  public: GGS_templateInstructionListAST mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionIfAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionIfAST (const GGS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
                                         const GGS_templateInstructionListAST & in_mElseInstructionList,
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
// Phase 1: @templateInstructionIfAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionIfAST_2E_weak : public GGS_templateInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionIfAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionIfAST_2E_weak (const class GGS_templateInstructionIfAST & inSource) ;

  public: GGS_templateInstructionIfAST_2E_weak & operator = (const class GGS_templateInstructionIfAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionIfAST_2E_weak init_nil (void) {
    GGS_templateInstructionIfAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionIfAST bang_templateInstructionIfAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionIfAST unwrappedValue (void) const ;

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
  public: static GGS_templateInstructionIfAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionIfAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionIfAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'templateSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_templateSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_templateSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_expression_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                                 class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                             class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GGS_lstringlist & ioArgument0,
                                                             class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GGS_lstringlist & outArgument0,
                                                                          class GGS_location & outArgument1,
                                                                          class GGS_templateExpressionAST & outArgument2,
                                                                          class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (class GGS_templateExpressionListAST & outArgument0,
                                                                   class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                              class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                                         class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                                       class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                                           class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GGS__5B_lstring_5D_ & outArgument0,
                                              class GGS_switchExtractedValuesListAST & outArgument1,
                                              class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_ (class GGS_templateInstructionListAST & ioArgument0,
                                                       class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (class GGS_templateInstructionListAST & outArgument0,
                                                                     class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                           class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_templateSyntax_expression_5F_tpl_i0_ (GGS_templateExpressionAST & outArgument0,
                                                             Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_expression_5F_tpl_i0_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_expression_5F_tpl_i0_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_ (GGS_templateExpressionAST & outArgument0,
                                                                   Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_ (GGS_templateExpressionAST & outArgument0,
                                                                     Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_ (GGS_templateExpressionAST & outArgument0,
                                                                       Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_ (GGS_templateExpressionAST & outArgument0,
                                                       Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_term_5F_tpl_i4_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_term_5F_tpl_i4_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_ (GGS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_factor_5F_tpl_i5_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_factor_5F_tpl_i5_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_ (GGS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_factor_5F_tpl_i6_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_factor_5F_tpl_i6_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_ (GGS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_factor_5F_tpl_i7_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_factor_5F_tpl_i7_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_ (GGS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_factor_5F_tpl_i8_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_factor_5F_tpl_i8_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_ (GGS_templateExpressionAST & outArgument0,
                                                          Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i9_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i9_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i10_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i10_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i11_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i11_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i12_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i12_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i13_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i13_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i14_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i14_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i15_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i15_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i16_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i16_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i17_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i17_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i18_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i18_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_primary_5F_tpl_i19_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_primary_5F_tpl_i19_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_ (GGS_templateExpressionListAST & outArgument0,
                                                                                Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_template_5F_instruction_i21_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_template_5F_instruction_i21_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_template_5F_instruction_i22_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_template_5F_instruction_i22_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_template_5F_instruction_i23_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_template_5F_instruction_i23_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_template_5F_instruction_i24_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_template_5F_instruction_i24_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_template_5F_instruction_i25_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_template_5F_instruction_i25_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_ (GGS_templateInstructionListAST & outArgument0,
                                                                                  Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_ (GGS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_ (GGS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_ (GGS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GGS_lstringlist & outArgument0,
                                                                                       GGS_location & outArgument1,
                                                                                       GGS_templateExpressionAST & outArgument2,
                                                                                       Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i31_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_template_5F_instruction_i31_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_template_5F_instruction_i31_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_template_5F_instruction_i32_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_template_5F_instruction_i32_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i33_ (GGS__5B_lstring_5D_ & outArgument0,
                                                           GGS_switchExtractedValuesListAST & outArgument1,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

/*  protected: void rule_templateSyntax_switch_5F_case_i33_parse (Lexique_galgasTemplateScanner * inLexique) ; */

  protected: void rule_templateSyntax_switch_5F_case_i33_indexing (Lexique_galgasTemplateScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_templateSyntax_0 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_1 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_2 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_3 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_4 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_5 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_6 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_7 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_8 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_9 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_10 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_11 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_12 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_13 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_14 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_15 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_16 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_17 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_18 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_19 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_20 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_21 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_22 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_23 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_24 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_25 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_26 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_27 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_28 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_29 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_30 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_31 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_32 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_33 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_34 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_35 (Lexique_galgasTemplateScanner *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateGetterCallInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateGetterCallInExpressionAST : public GGS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GGS_templateGetterCallInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateGetterCallInExpressionAST (const class cPtr_templateGetterCallInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_templateExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GGS_lstring readProperty_mGetterName (void) const ;

  public: class GGS_templateExpressionListAST readProperty_mExpressionList (void) const ;

  public: class GGS_location readProperty_mExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateGetterCallInExpressionAST init_21__21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_templateExpressionListAST & inOperand2,
                                                                             const class GGS_location & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateGetterCallInExpressionAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateGetterCallInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateGetterCallInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateGetterCallInExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateGetterCallInExpressionAST_init_21__21__21__21_ (const class GGS_templateExpressionAST & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_templateExpressionListAST & inOperand2,
                                                                       const class GGS_location & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_templateExpressionAST mProperty_mReceiverExpression ;
  public: GGS_lstring mProperty_mGetterName ;
  public: GGS_templateExpressionListAST mProperty_mExpressionList ;
  public: GGS_location mProperty_mExpressionLocation ;


//--- Default constructor
  public: cPtr_templateGetterCallInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateGetterCallInExpressionAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                  const GGS_lstring & in_mGetterName,
                                                  const GGS_templateExpressionListAST & in_mExpressionList,
                                                  const GGS_location & in_mExpressionLocation,
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
// Phase 1: @templateInstructionForeachAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForeachAST : public GGS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForeachAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionForeachAST (const class cPtr_templateInstructionForeachAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAscending (void) const ;

  public: class GGS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GGS_lstringlist readProperty_mEnumeration (void) const ;

  public: class GGS_location readProperty_mEndOfProperties (void) const ;

  public: class GGS_templateInstructionListAST readProperty_mBeforeInstructionList (void) const ;

  public: class GGS_templateInstructionListAST readProperty_mDoInstructionList (void) const ;

  public: class GGS_lstring readProperty_mIndexIdentifier (void) const ;

  public: class GGS_templateInstructionListAST readProperty_mBetweenInstructionList (void) const ;

  public: class GGS_templateInstructionListAST readProperty_mAfterInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionForeachAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                             const class GGS_templateExpressionAST & inOperand1,
                                                                                             const class GGS_lstringlist & inOperand2,
                                                                                             const class GGS_location & inOperand3,
                                                                                             const class GGS_templateInstructionListAST & inOperand4,
                                                                                             const class GGS_templateInstructionListAST & inOperand5,
                                                                                             const class GGS_lstring & inOperand6,
                                                                                             const class GGS_templateInstructionListAST & inOperand7,
                                                                                             const class GGS_templateInstructionListAST & inOperand8,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionForeachAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForeachAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionForeachAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForeachAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForeachAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_templateExpressionAST & inOperand1,
                                                                                       const class GGS_lstringlist & inOperand2,
                                                                                       const class GGS_location & inOperand3,
                                                                                       const class GGS_templateInstructionListAST & inOperand4,
                                                                                       const class GGS_templateInstructionListAST & inOperand5,
                                                                                       const class GGS_lstring & inOperand6,
                                                                                       const class GGS_templateInstructionListAST & inOperand7,
                                                                                       const class GGS_templateInstructionListAST & inOperand8,
                                                                                       Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAscending ;
  public: GGS_templateExpressionAST mProperty_mExpression ;
  public: GGS_lstringlist mProperty_mEnumeration ;
  public: GGS_location mProperty_mEndOfProperties ;
  public: GGS_templateInstructionListAST mProperty_mBeforeInstructionList ;
  public: GGS_templateInstructionListAST mProperty_mDoInstructionList ;
  public: GGS_lstring mProperty_mIndexIdentifier ;
  public: GGS_templateInstructionListAST mProperty_mBetweenInstructionList ;
  public: GGS_templateInstructionListAST mProperty_mAfterInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionForeachAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionForeachAST (const GGS_bool & in_mIsAscending,
                                              const GGS_templateExpressionAST & in_mExpression,
                                              const GGS_lstringlist & in_mEnumeration,
                                              const GGS_location & in_mEndOfProperties,
                                              const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                              const GGS_templateInstructionListAST & in_mDoInstructionList,
                                              const GGS_lstring & in_mIndexIdentifier,
                                              const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                              const GGS_templateInstructionListAST & in_mAfterInstructionList,
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
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (class GGS_templateInstructionListAST & ioArgument0,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procDeclarationAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @procDeclarationAST class
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
                                   const GGS_location & in_mEndOfRoutineInstructionList,
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
// Phase 1: @procDeclarationAST_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_procDeclarationAST bang_procDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_procDeclarationAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @productionRuleListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_productionRuleListForGrammarAnalysis final {
  public: DownEnumerator_productionRuleListForGrammarAnalysis (const class GGS_productionRuleListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_productionRuleListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLeftNonterminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mProductionIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_productionRuleListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_productionRuleListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_productionRuleListForGrammarAnalysis (const DownEnumerator_productionRuleListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_productionRuleListForGrammarAnalysis & operator = (const DownEnumerator_productionRuleListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_productionRuleListForGrammarAnalysis final {
  public: UpEnumerator_productionRuleListForGrammarAnalysis (const class GGS_productionRuleListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_productionRuleListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLeftNonterminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mProductionIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_productionRuleListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_productionRuleListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_productionRuleListForGrammarAnalysis (const UpEnumerator_productionRuleListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_productionRuleListForGrammarAnalysis & operator = (const UpEnumerator_productionRuleListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @productionRuleListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_productionRuleListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_productionRuleListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_productionRuleListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_productionRuleListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis &) = default ;
  public: GGS_productionRuleListForGrammarAnalysis & operator = (const GGS_productionRuleListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_productionRuleListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_productionRuleListForGrammarAnalysis subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_productionRuleListForGrammarAnalysis (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLeftNonterminalSymbol,
                                                 const class GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                 const class GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                 const class GGS_uint & in_mProductionIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_productionRuleListForGrammarAnalysis init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_productionRuleListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_productionRuleListForGrammarAnalysis class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_uint & inOperand1,
                                                                                          const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                          const class GGS_uint & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_productionRuleListForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_uint & inOperand1,
                                   const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                   const class GGS_uint & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_productionRuleListForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_productionRuleListForGrammarAnalysis add_operation (const GGS_productionRuleListForGrammarAnalysis & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_uint constinArgument1,
                              class GGS_syntaxInstructionListForGrammarAnalysis constinArgument2,
                              class GGS_uint constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_uint constinArgument1,
                                     class GGS_syntaxInstructionListForGrammarAnalysis constinArgument2,
                                     class GGS_uint constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_uint & outArgument1,
                                class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                class GGS_uint & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_uint & outArgument1,
                               class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                               class GGS_uint & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_uint & outArgument1,
                                     class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                     class GGS_uint & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMLeftNonterminalSymbolAtIndex (class GGS_lstring constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMLeftNonterminalSymbolIndexAtIndex (class GGS_uint constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMProductionIndexAtIndex (class GGS_uint constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_uint & outArgument1,
                             class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                             class GGS_uint & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_uint & outArgument1,
                            class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                            class GGS_uint & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionListForGrammarAnalysis getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mLeftNonterminalSymbolAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mLeftNonterminalSymbolIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mProductionIndexAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_productionRuleListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_productionRuleListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_productionRuleListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_productionRuleListForGrammarAnalysis ;
  friend class DownEnumerator_productionRuleListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @productionRuleListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_productionRuleListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLeftNonterminalSymbol ;
  public: inline GGS_lstring readProperty_mLeftNonterminalSymbol (void) const {
    return mProperty_mLeftNonterminalSymbol ;
  }

  public: GGS_uint mProperty_mLeftNonterminalSymbolIndex ;
  public: inline GGS_uint readProperty_mLeftNonterminalSymbolIndex (void) const {
    return mProperty_mLeftNonterminalSymbolIndex ;
  }

  public: GGS_syntaxInstructionListForGrammarAnalysis mProperty_mInstructionList ;
  public: inline GGS_syntaxInstructionListForGrammarAnalysis readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_uint mProperty_mProductionIndex ;
  public: inline GGS_uint readProperty_mProductionIndex (void) const {
    return mProperty_mProductionIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_productionRuleListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLeftNonterminalSymbol (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeftNonterminalSymbol = inValue ;
  }

  public: inline void setter_setMLeftNonterminalSymbolIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeftNonterminalSymbolIndex = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMProductionIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                               const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                               const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                               const GGS_uint & in_mProductionIndex) ;

//--------------------------------- Copy constructor
  public: GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_productionRuleListForGrammarAnalysis_2E_element & operator = (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_productionRuleListForGrammarAnalysis_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                           const class GGS_uint & inOperand3,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_productionRuleListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis final {

  public: DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis final {
  public: UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMNonTerminalIndexForKey (class GGS_uint constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
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

  public: class GGS_uint getter_mNonTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
  friend class DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mNonTerminalIndex ;
  public: inline GGS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                       const GGS_uint & in_mNonTerminalIndex) ;

//--------------------------------- Copy constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unusedNonTerminalSymbolMapForGrammarAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis final {
//--- Constructor
  public: DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const class GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis & operator = (const DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis final {
//--- Constructor
  public: UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const class GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis & operator = (const UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis sorted list
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolSortedListForGrammarAnalysis final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) = default ;

//--- Handle copy
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis &) = default ;
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis & operator = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalSymbolSortedListForGrammarAnalysis class_func_sortedListWithValue (const class GGS_lstring & inOperand0,
                                                                                                         const class GGS_uint & inOperand1,
                                                                                                         const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_uint & inOperand1,
                                   const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_lstring inArgument0,
                              class GGS_uint inArgument1,
                              class GGS_nonterminalSymbolLabelMapForGrammarAnalysis inArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_popGreatest (class GGS_lstring & outArgument0,
                                   class GGS_uint & outArgument1,
                                   class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_popSmallest (class GGS_lstring & outArgument0,
                                   class GGS_uint & outArgument1,
                                   class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_greatest (class GGS_lstring & outArgument0,
                                class GGS_uint & outArgument1,
                                class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void method_smallest (class GGS_lstring & outArgument0,
                                class GGS_uint & outArgument1,
                                class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
  friend class DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mNonTerminalSymbol ;
  public: inline GGS_lstring readProperty_mNonTerminalSymbol (void) const {
    return mProperty_mNonTerminalSymbol ;
  }

  public: GGS_uint mProperty_mNonTerminalIndex ;
  public: inline GGS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;
  public: inline GGS_nonterminalSymbolLabelMapForGrammarAnalysis readProperty_mNonterminalSymbolParametersMap (void) const {
    return mProperty_mNonterminalSymbolParametersMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonTerminalSymbol (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalSymbol = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (const GGS_lstring & in_mNonTerminalSymbol,
                                                                        const GGS_uint & in_mNonTerminalIndex,
                                                                        const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//--------------------------------- Copy constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & operator = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_uint & inOperand1,
                                                                                                const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @signatureForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_signatureForGrammarAnalysis final {
  public: DownEnumerator_signatureForGrammarAnalysis (const class GGS_signatureForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_signatureForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_signatureForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_signatureForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_signatureForGrammarAnalysis (const DownEnumerator_signatureForGrammarAnalysis &) = delete ;
  private: DownEnumerator_signatureForGrammarAnalysis & operator = (const DownEnumerator_signatureForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_signatureForGrammarAnalysis final {
  public: UpEnumerator_signatureForGrammarAnalysis (const class GGS_signatureForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_signatureForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_signatureForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_signatureForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_signatureForGrammarAnalysis (const UpEnumerator_signatureForGrammarAnalysis &) = delete ;
  private: UpEnumerator_signatureForGrammarAnalysis & operator = (const UpEnumerator_signatureForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @signatureForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_signatureForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_signatureForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_signatureForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_signatureForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis &) = default ;
  public: GGS_signatureForGrammarAnalysis & operator = (const GGS_signatureForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_signatureForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_signatureForGrammarAnalysis subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_signatureForGrammarAnalysis (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                 const class GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_signatureForGrammarAnalysis init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_signatureForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_signatureForGrammarAnalysis class_func_listWithValue (const class GGS_formalArgumentPassingModeAST & inOperand0,
                                                                                 const class GGS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_signatureForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_formalArgumentPassingModeAST & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_signatureForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_signatureForGrammarAnalysis add_operation (const GGS_signatureForGrammarAnalysis & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_formalArgumentPassingModeAST constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_formalArgumentPassingModeAST constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_formalArgumentPassingModeAST & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_formalArgumentPassingModeAST & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_formalArgumentPassingModeAST & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentPassingModeForGrammarAnalysisAtIndex (class GGS_formalArgumentPassingModeAST constinArgument0,
                                                                              class GGS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMGalgasTypeNameForGrammarAnalysisAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_formalArgumentPassingModeAST & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_formalArgumentPassingModeAST & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mGalgasTypeNameForGrammarAnalysisAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_signatureForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_signatureForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_signatureForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_signatureForGrammarAnalysis ;
  friend class DownEnumerator_signatureForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalSymbolLabelMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_signatureForGrammarAnalysis mProperty_mFormalParametersList ;
  public: inline GGS_signatureForGrammarAnalysis readProperty_mFormalParametersList (void) const {
    return mProperty_mFormalParametersList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParametersList (const GGS_signatureForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParametersList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                      const GGS_signatureForGrammarAnalysis & in_mFormalParametersList) ;

//--------------------------------- Copy constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & operator = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_signatureForGrammarAnalysis & inOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: nonterminalSymbolLabelMapForGrammarAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_nonTerminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nonTerminalInstructionForGrammarAnalysis (const class cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mNonterminalSymbolName (void) const ;

  public: class GGS_uint readProperty_mNonterminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_uint & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_nonTerminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (const class GGS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_nonTerminalInstructionForGrammarAnalysis bang_nonTerminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_nonTerminalInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_branchListForGrammarAnalysis final {
  public: DownEnumerator_branchListForGrammarAnalysis (const class GGS_branchListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_branchListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_branchListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_branchListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_branchListForGrammarAnalysis (const DownEnumerator_branchListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_branchListForGrammarAnalysis & operator = (const DownEnumerator_branchListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_branchListForGrammarAnalysis final {
  public: UpEnumerator_branchListForGrammarAnalysis (const class GGS_branchListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_branchListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_branchListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_branchListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_branchListForGrammarAnalysis (const UpEnumerator_branchListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_branchListForGrammarAnalysis & operator = (const UpEnumerator_branchListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @branchListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_branchListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_branchListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_branchListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_branchListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis &) = default ;
  public: GGS_branchListForGrammarAnalysis & operator = (const GGS_branchListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_branchListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_branchListForGrammarAnalysis subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_branchListForGrammarAnalysis (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchListForGrammarAnalysis init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_branchListForGrammarAnalysis class_func_listWithValue (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_branchListForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_branchListForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_branchListForGrammarAnalysis add_operation (const GGS_branchListForGrammarAnalysis & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxInstructionListAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionListForGrammarAnalysis getter_mSyntaxInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_branchListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_branchListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_branchListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_branchListForGrammarAnalysis ;
  friend class DownEnumerator_branchListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_branchListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_syntaxInstructionListForGrammarAnalysis mProperty_mSyntaxInstructionList ;
  public: inline GGS_syntaxInstructionListForGrammarAnalysis readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GGS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (const GGS_branchListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_branchListForGrammarAnalysis_2E_element & operator = (const GGS_branchListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchListForGrammarAnalysis_2E_element init_21_ (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectInstructionForGrammarAnalysis (const class cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_branchListForGrammarAnalysis readProperty_mSelectBranchList (void) const ;

  public: class GGS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;

#include "separateHeaderFor_selectInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectInstructionForGrammarAnalysis_2E_weak (const class GGS_selectInstructionForGrammarAnalysis & inSource) ;

  public: GGS_selectInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_selectInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_selectInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectInstructionForGrammarAnalysis bang_selectInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_selectInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_repeatInstructionForGrammarAnalysis (const class cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_branchListForGrammarAnalysis readProperty_mRepeatBranchList (void) const ;

  public: class GGS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_repeatInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;

#include "separateHeaderFor_repeatInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak (const class GGS_repeatInstructionForGrammarAnalysis & inSource) ;

  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_repeatInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_repeatInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_repeatInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_repeatInstructionForGrammarAnalysis bang_repeatInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_repeatInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_repeatInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_repeatInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxComponentListForGrammarAnalysis final {
  public: DownEnumerator_syntaxComponentListForGrammarAnalysis (const class GGS_syntaxComponentListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_syntaxComponentListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxComponentListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syntaxComponentListForGrammarAnalysis (const DownEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_syntaxComponentListForGrammarAnalysis & operator = (const DownEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxComponentListForGrammarAnalysis final {
  public: UpEnumerator_syntaxComponentListForGrammarAnalysis (const class GGS_syntaxComponentListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_syntaxComponentListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxComponentListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syntaxComponentListForGrammarAnalysis (const UpEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_syntaxComponentListForGrammarAnalysis & operator = (const UpEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syntaxComponentListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_syntaxComponentListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_syntaxComponentListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis &) = default ;
  public: GGS_syntaxComponentListForGrammarAnalysis & operator = (const GGS_syntaxComponentListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syntaxComponentListForGrammarAnalysis subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syntaxComponentListForGrammarAnalysis (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                 const class GGS_lstring & in_mSyntaxComponentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentListForGrammarAnalysis init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxComponentListForGrammarAnalysis class_func_listWithValue (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                           const class GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_syntaxComponentListForGrammarAnalysis add_operation (const GGS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMProductionRulesListAtIndex (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxComponentNameAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_productionRuleListForGrammarAnalysis getter_mProductionRulesListAtIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSyntaxComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxComponentListForGrammarAnalysis ;
  friend class DownEnumerator_syntaxComponentListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_productionRuleListForGrammarAnalysis mProperty_mProductionRulesList ;
  public: inline GGS_productionRuleListForGrammarAnalysis readProperty_mProductionRulesList (void) const {
    return mProperty_mProductionRulesList ;
  }

  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProductionRulesList (const GGS_productionRuleListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionRulesList = inValue ;
  }

  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                const GGS_lstring & in_mSyntaxComponentName) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element & operator = (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentListForGrammarAnalysis_2E_element init_21__21_ (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalSymbolsMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mTerminalIndex ;
  public: inline GGS_uint readProperty_mTerminalIndex (void) const {
    return mProperty_mTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_uint & in_mTerminalIndex) ;

//--------------------------------- Copy constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & operator = (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_uint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: terminalSymbolsMapForGrammarAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_terminalSymbolsMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classFuncExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_classFuncExpressionAST : public GGS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GGS_classFuncExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classFuncExpressionAST (const class cPtr_classFuncExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_typeName (void) const ;

  public: class GGS_lstring readProperty_classFuncName (void) const ;

  public: class GGS_actualOutputArgumentList readProperty_expressions (void) const ;

  public: class GGS_location readProperty_locationForOldStyleCollectionInitializerError (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classFuncExpressionAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_actualOutputArgumentList & inOperand2,
                                                                  const class GGS_location & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classFuncExpressionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classFuncExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classFuncExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_classFuncExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classFuncExpressionAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            const class GGS_actualOutputArgumentList & inOperand2,
                                                            const class GGS_location & inOperand3,
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
  public: GGS_lstring mProperty_typeName ;
  public: GGS_lstring mProperty_classFuncName ;
  public: GGS_actualOutputArgumentList mProperty_expressions ;
  public: GGS_location mProperty_locationForOldStyleCollectionInitializerError ;


//--- Default constructor
  public: cPtr_classFuncExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classFuncExpressionAST (const GGS_lstring & in_typeName,
                                       const GGS_lstring & in_classFuncName,
                                       const GGS_actualOutputArgumentList & in_expressions,
                                       const GGS_location & in_locationForOldStyleCollectionInitializerError,
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
// Phase 1: @classFuncExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_classFuncExpressionAST_2E_weak : public GGS_semanticExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_classFuncExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_classFuncExpressionAST_2E_weak (const class GGS_classFuncExpressionAST & inSource) ;

  public: GGS_classFuncExpressionAST_2E_weak & operator = (const class GGS_classFuncExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_classFuncExpressionAST_2E_weak init_nil (void) {
    GGS_classFuncExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_classFuncExpressionAST bang_classFuncExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_classFuncExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_classFuncExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classFuncExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classFuncExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionForGeneration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_semanticExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticExpressionForGeneration_2E_weak (const class GGS_semanticExpressionForGeneration & inSource) ;

  public: GGS_semanticExpressionForGeneration_2E_weak & operator = (const class GGS_semanticExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticExpressionForGeneration_2E_weak init_nil (void) {
    GGS_semanticExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticExpressionForGeneration bang_semanticExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_semanticExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @collectionValueElementList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_collectionValueElementList final {
  public: DownEnumerator_collectionValueElementList (const class GGS_collectionValueElementList & inList) ;

  public: ~ DownEnumerator_collectionValueElementList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_location (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_collectionValueElementList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_collectionValueElementList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_collectionValueElementList (const DownEnumerator_collectionValueElementList &) = delete ;
  private: DownEnumerator_collectionValueElementList & operator = (const DownEnumerator_collectionValueElementList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_collectionValueElementList final {
  public: UpEnumerator_collectionValueElementList (const class GGS_collectionValueElementList & inList)  ;

  public: ~ UpEnumerator_collectionValueElementList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_location (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_collectionValueElementList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_collectionValueElementList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_collectionValueElementList (const UpEnumerator_collectionValueElementList &) = delete ;
  private: UpEnumerator_collectionValueElementList & operator = (const UpEnumerator_collectionValueElementList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @collectionValueElementList list
//--------------------------------------------------------------------------------------------------

class GGS_collectionValueElementList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_collectionValueElementList_2E_element> mArray ;

//--- Default constructor
  public: GGS_collectionValueElementList (void) ;

//--- Destructor
  public: virtual ~ GGS_collectionValueElementList (void) = default ;

//--- Copy
  public: GGS_collectionValueElementList (const GGS_collectionValueElementList &) = default ;
  public: GGS_collectionValueElementList & operator = (const GGS_collectionValueElementList &) = default ;

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
  public : inline GenericArray <GGS_collectionValueElementList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_collectionValueElementList subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_collectionValueElementList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_semanticExpressionAST & in_mExpression,
                                                 const class GGS_location & in_location
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_collectionValueElementList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_collectionValueElementList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_collectionValueElementList class_func_listWithValue (const class GGS_semanticExpressionAST & inOperand0,
                                                                                const class GGS_location & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_collectionValueElementList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_semanticExpressionAST & inOperand0,
                                   const class GGS_location & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_collectionValueElementList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_collectionValueElementList add_operation (const GGS_collectionValueElementList & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticExpressionAST constinArgument0,
                              class GGS_location constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_semanticExpressionAST constinArgument0,
                                     class GGS_location constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticExpressionAST & outArgument0,
                                class GGS_location & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticExpressionAST & outArgument0,
                               class GGS_location & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticExpressionAST & outArgument0,
                                     class GGS_location & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setLocationAtIndex (class GGS_location constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_semanticExpressionAST constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_semanticExpressionAST & outArgument0,
                             class GGS_location & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_semanticExpressionAST & outArgument0,
                            class GGS_location & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticExpressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_collectionValueElementList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_collectionValueElementList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_collectionValueElementList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_collectionValueElementList ;
  friend class DownEnumerator_collectionValueElementList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @collectionValueElementList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_collectionValueElementList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;
  public: inline GGS_semanticExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_collectionValueElementList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_collectionValueElementList_2E_element (const GGS_semanticExpressionAST & in_mExpression,
                                                     const GGS_location & in_location) ;

//--------------------------------- Copy constructor
  public: GGS_collectionValueElementList_2E_element (const GGS_collectionValueElementList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_collectionValueElementList_2E_element & operator = (const GGS_collectionValueElementList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_collectionValueElementList_2E_element init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_collectionValueElementList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementList_2E_element ;

