#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (class cPtr_lexicalExpressionAST * inObject,
                                                 class GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractLexicalRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (class cPtr_abstractLexicalRuleAST * inObject,
                                           class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[abstractLexicalRuleAST] useLoopLocalVar' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_useLoopLocalVar (const class GGS__5B_abstractLexicalRuleAST_5D_ & inObject,
                                                Compiler * inCompiler
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateLexicalRuleCode
  public: virtual class GGS_string getter_generateLexicalRuleCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaCode
  public: virtual class GGS_string getter_generateSwiftCocoaCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func lexicalRuleUsesLoopLocalVar
  public: virtual class GGS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalRule
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
// Phase 1: @lexicalExplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitRuleAST : public GGS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GGS_lexicalExplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalExplicitRuleAST (const class cPtr_lexicalExplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalExpressionAST readProperty_mLexicalRuleExpression (void) const ;

  public: class GGS__5B_lexicalInstructionAST_5D_ readProperty_mInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitRuleAST init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                          const class GGS__5B_lexicalInstructionAST_5D_ & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalExplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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
                                                    const class GGS__5B_lexicalInstructionAST_5D_ & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension func generateLexicalRuleCode
  public: virtual class GGS_string getter_generateLexicalRuleCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaCode
  public: virtual class GGS_string getter_generateSwiftCocoaCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func lexicalRuleUsesLoopLocalVar
  public: virtual class GGS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalRule
  public: virtual void method_checkLexicalRule (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalExpressionAST mProperty_mLexicalRuleExpression ;
  public: GGS__5B_lexicalInstructionAST_5D_ mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_lexicalExplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalExplicitRuleAST (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                       const GGS__5B_lexicalInstructionAST_5D_ & in_mInstructionList,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringNotMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
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
//
//Abstract extension proc '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (class cPtr_lexicalSendDefaultActionAST * inObject,
                                                    class GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSendTerminalByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateDefaultSendCode
  public: virtual class GGS_string getter_generateDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaDefaultSendCode
  public: virtual class GGS_string getter_generateSwiftCocoaDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateDefaultSendCode
  public: virtual class GGS_string getter_generateDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaDefaultSendCode
  public: virtual class GGS_string getter_generateSwiftCocoaDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
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
//
//Abstract extension proc '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          class GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                          const class GGS_lexicalTypeEnum constin__5F_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           class GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                           const class GGS_lexicalTypeEnum constin__5F_inLexicalRoutineFormalArgumentType,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalAttributeInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalUnsignedInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
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
// Phase 1: @lexicalFunctionInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalFunctionInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalFunctionInputArgumentAST (const class cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ readProperty_mFunctionActualArgumentList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionInputArgumentAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalFunctionInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


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
                                                             const class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ mProperty_mFunctionActualArgumentList ;


//--- Default constructor
  public: cPtr_lexicalFunctionInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalFunctionInputArgumentAST (const GGS_lstring & in_mFunctionName,
                                                const GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & in_mFunctionActualArgumentList,
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
//Extension func '@lexicalArgumentModeAST lexicalFormalModeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_lexicalFormalModeName (const class GGS_lexicalArgumentModeAST & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalArgumentModeAST cocoaPointerInFormalArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaPointerInFormalArgument (const class GGS_lexicalArgumentModeAST & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTypeMap map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalTypeMap final {

  public: DownEnumerator_lexicalTypeMap (const class GGS_lexicalTypeMap & inMap) ;

  public: ~ DownEnumerator_lexicalTypeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalTypeMap (const DownEnumerator_lexicalTypeMap &) = delete ;
  private: DownEnumerator_lexicalTypeMap & operator = (const DownEnumerator_lexicalTypeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalTypeMap final {
  public: UpEnumerator_lexicalTypeMap (const class GGS_lexicalTypeMap & inMap)  ;

  public: ~ UpEnumerator_lexicalTypeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalTypeMap (const UpEnumerator_lexicalTypeMap &) = delete ;
  private: UpEnumerator_lexicalTypeMap & operator = (const UpEnumerator_lexicalTypeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeMap final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalTypeMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalTypeMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalTypeMap (void) ;

//--- Handle copy
  public: GGS_lexicalTypeMap (const GGS_lexicalTypeMap & inSource) ;
  public: GGS_lexicalTypeMap & operator = (const GGS_lexicalTypeMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalTypeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalTypeMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTypeMap class_func_mapWithMapToOverride (const class GGS_lexicalTypeMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalTypeEnum constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalTypeForKey (class GGS_lexicalTypeEnum constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalTypeEnum & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum getter_mLexicalTypeForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_lexicalTypeMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalTypeMap ;
  friend class DownEnumerator_lexicalTypeMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTypeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GGS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalTypeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalTypeMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_lexicalTypeEnum & in_mLexicalType) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalTypeMap_2E_element (const GGS_lexicalTypeMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalTypeMap_2E_element & operator = (const GGS_lexicalTypeMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalTypeMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_lexicalTypeEnum & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalTypeMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalTypeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalTypeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalTypeMap_2E_element_3F_ (const GGS_lexicalTypeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalTypeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalTypeMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [syntaxComponentAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_syntaxComponentAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_syntaxComponentAST_5D_ (const class GGS__5B_syntaxComponentAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_syntaxComponentAST_5D_ (const DownEnumerator__5B_syntaxComponentAST_5D_ &) = delete ;
  private: DownEnumerator__5B_syntaxComponentAST_5D_ & operator = (const DownEnumerator__5B_syntaxComponentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_syntaxComponentAST current (LOCATION_ARGS) const ;
  public: class GGS_syntaxComponentAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_syntaxComponentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_syntaxComponentAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_syntaxComponentAST_5D_ (const class GGS__5B_syntaxComponentAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_syntaxComponentAST_5D_ (const UpEnumerator__5B_syntaxComponentAST_5D_ &) = delete ;
  private: UpEnumerator__5B_syntaxComponentAST_5D_ & operator = (const UpEnumerator__5B_syntaxComponentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_syntaxComponentAST current (LOCATION_ARGS) const ;
  public: class GGS_syntaxComponentAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_syntaxComponentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_syntaxComponentAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_syntaxComponentAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_syntaxComponentAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_syntaxComponentAST_5D_ (const GGS__5B_syntaxComponentAST_5D_ & inSource) ;
  public: GGS__5B_syntaxComponentAST_5D_ & operator = (const GGS__5B_syntaxComponentAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_syntaxComponentAST_5D_ init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_syntaxComponentAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_syntaxComponentAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_syntaxComponentAST_5D_ add_operation (const GGS__5B_syntaxComponentAST_5D_ & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_syntaxComponentAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_syntaxComponentAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_syntaxComponentAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_syntaxComponentAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_syntaxComponentAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentAST getter_first (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentAST getter_last (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_syntaxComponentAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_syntaxComponentAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                               const class GGS_u_33__32_ & constinOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_syntaxComponentAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_syntaxComponentAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_syntaxComponentAST_5D_ ;
  friend class DownEnumerator__5B_syntaxComponentAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_syntaxComponentAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentAST struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GGS_lstring mProperty_mImportedLexiqueFilePath ;
  public: inline GGS_lstring readProperty_mImportedLexiqueFilePath (void) const {
    return mProperty_mImportedLexiqueFilePath ;
  }

  public: GGS__5B_nonterminalDeclarationAST_5D_ mProperty_mNonterminalDeclarationList ;
  public: inline GGS__5B_nonterminalDeclarationAST_5D_ readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GGS__5B_syntaxRuleAST_5D_ mProperty_mRuleList ;
  public: inline GGS__5B_syntaxRuleAST_5D_ readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: inline GGS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMImportedLexiqueFilePath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedLexiqueFilePath = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GGS__5B_nonterminalDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GGS__5B_syntaxRuleAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxComponentAST (const GGS_lstring & in_mSyntaxComponentName,
                                  const GGS_lstring & in_mImportedLexiqueFilePath,
                                  const GGS__5B_nonterminalDeclarationAST_5D_ & in_mNonterminalDeclarationList,
                                  const GGS__5B_syntaxRuleAST_5D_ & in_mRuleList,
                                  const GGS_bool & in_mHasTranslateFeature) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxComponentAST (const GGS_syntaxComponentAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxComponentAST & operator = (const GGS_syntaxComponentAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS__5B_nonterminalDeclarationAST_5D_ & inOperand2,
                                                                  const class GGS__5B_syntaxRuleAST_5D_ & inOperand3,
                                                                  const class GGS_bool & inOperand4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentAST ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@semanticInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSyntaxSignature (class cPtr_semanticInstructionForGeneration * inObject,
                                                const class GGS_string constin__5F_inPosfix,
                                                class GGS__5B_semanticInstructionForGeneration_5D_ & io__5F_ioInstructionListForGeneration,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@semanticInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                      const class GGS_semanticInstructionForGeneration constin__5F_inTestedInstruction,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//§Filewrapper§ 'projectCreationFileWrapper'
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_1_projectCreationFileWrapper ;
extern const DirectoryWrapper gWrapperDirectory_2_projectCreationFileWrapper ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @projectCreationFileWrapper
//--------------------------------------------------------------------------------------------------

class GGS_projectCreationFileWrapper final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_string class_func_PROJECT_5F_cocoa (const class GGS_string & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_PROJECT_5F_grammar (const class GGS_string & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_PROJECT_5F_lexique (const class GGS_string & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_PROJECT_5F_program (const class GGS_string & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_PROJECT_5F_project (const class GGS_string & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_PROJECT_5F_semantics (const class GGS_string & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_PROJECT_5F_syntax (const class GGS_string & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_filewrapper class_func_contents (LOCATION_ARGS) ;

//--------------------------------- Class Methods

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@location sourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_sourceFile (const class GGS_location & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@location commaSourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_commaSourceFile (const class GGS_location & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[semanticInstructionAST] enterInstructionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionListInSemanticContext (const class GGS__5B_semanticInstructionAST_5D_ inObject,
                                                            class GGS_unifiedTypeMap & io_ioTypeMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (class cPtr_semanticInstructionAST * inObject,
                                                            class GGS_unifiedTypeMap & io_ioTypeMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarLabelMap map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_grammarLabelMap final {

  public: DownEnumerator_grammarLabelMap (const class GGS_grammarLabelMap & inMap) ;

  public: ~ DownEnumerator_grammarLabelMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mLabelSignature (LOCATION_ARGS) const ;

  public: class GGS_grammarLabelMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_grammarLabelMap (const DownEnumerator_grammarLabelMap &) = delete ;
  private: DownEnumerator_grammarLabelMap & operator = (const DownEnumerator_grammarLabelMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_grammarLabelMap final {
  public: UpEnumerator_grammarLabelMap (const class GGS_grammarLabelMap & inMap)  ;

  public: ~ UpEnumerator_grammarLabelMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mLabelSignature (LOCATION_ARGS) const ;
  public: class GGS_grammarLabelMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_grammarLabelMap (const UpEnumerator_grammarLabelMap &) = delete ;
  private: UpEnumerator_grammarLabelMap & operator = (const UpEnumerator_grammarLabelMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_grammarLabelMap final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_grammarLabelMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_grammarLabelMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_grammarLabelMap (void) ;

//--- Handle copy
  public: GGS_grammarLabelMap (const GGS_grammarLabelMap & inSource) ;
  public: GGS_grammarLabelMap & operator = (const GGS_grammarLabelMap & inSource) ;

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
  protected: void performInsert (const class GGS_grammarLabelMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarLabelMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_grammarLabelMap class_func_mapWithMapToOverride (const class GGS_grammarLabelMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterSignatureElement_5D_ constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMLabelSignatureForKey (class GGS__5B_formalParameterSignatureElement_5D_ constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterSignatureElement_5D_ & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ getter_mLabelSignatureForKey (const class GGS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_grammarLabelMap getter_overriddenMap (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_grammarLabelMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_grammarLabelMap ;
  friend class DownEnumerator_grammarLabelMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarLabelMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarLabelMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_grammarLabelMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_formalParameterSignatureElement_5D_ mProperty_mLabelSignature ;
  public: inline GGS__5B_formalParameterSignatureElement_5D_ readProperty_mLabelSignature (void) const {
    return mProperty_mLabelSignature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_grammarLabelMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelSignature (const GGS__5B_formalParameterSignatureElement_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelSignature = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_grammarLabelMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS__5B_formalParameterSignatureElement_5D_ & in_mLabelSignature) ;

//--------------------------------- Copy constructor
  public: GGS_grammarLabelMap_2E_element (const GGS_grammarLabelMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_grammarLabelMap_2E_element & operator = (const GGS_grammarLabelMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarLabelMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS__5B_formalParameterSignatureElement_5D_ & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarLabelMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: grammarLabelMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_grammarLabelMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_grammarLabelMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_grammarLabelMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_grammarLabelMap_2E_element_3F_ (const GGS_grammarLabelMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_grammarLabelMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_grammarLabelMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarLabelMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_grammarMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_grammarLabelMap mProperty_mLabelMap ;
  public: inline GGS_grammarLabelMap readProperty_mLabelMap (void) const {
    return mProperty_mLabelMap ;
  }

  public: GGS_bool mProperty_mHasIndexing ;
  public: inline GGS_bool readProperty_mHasIndexing (void) const {
    return mProperty_mHasIndexing ;
  }

  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: inline GGS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_grammarMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelMap (const GGS_grammarLabelMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelMap = inValue ;
  }

  public: inline void setter_setMHasIndexing (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasIndexing = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_grammarMap_2E_element (const GGS_lstring & in_lkey,
                                     const GGS_grammarLabelMap & in_mLabelMap,
                                     const GGS_bool & in_mHasIndexing,
                                     const GGS_bool & in_mHasTranslateFeature) ;

//--------------------------------- Copy constructor
  public: GGS_grammarMap_2E_element (const GGS_grammarMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_grammarMap_2E_element & operator = (const GGS_grammarMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_grammarLabelMap & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 const class GGS_bool & inOperand3,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: grammarMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_grammarMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_grammarMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_grammarMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_grammarMap_2E_element_3F_ (const GGS_grammarMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_grammarMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_grammarMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_functionMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_functionSignatureElement_5D_ mProperty_mFunctionSignature ;
  public: inline GGS__5B_functionSignatureElement_5D_ readProperty_mFunctionSignature (void) const {
    return mProperty_mFunctionSignature ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mResultType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

  public: GGS_bool mProperty_mIsInternal ;
  public: inline GGS_bool readProperty_mIsInternal (void) const {
    return mProperty_mIsInternal ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_functionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFunctionSignature (const GGS__5B_functionSignatureElement_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionSignature = inValue ;
  }

  public: inline void setter_setMResultType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

  public: inline void setter_setMIsInternal (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsInternal = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_functionMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS__5B_functionSignatureElement_5D_ & in_mFunctionSignature,
                                      const GGS_unifiedTypeMapEntry & in_mResultType,
                                      const GGS_bool & in_mIsInternal) ;

//--------------------------------- Copy constructor
  public: GGS_functionMap_2E_element (const GGS_functionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_functionMap_2E_element & operator = (const GGS_functionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS__5B_functionSignatureElement_5D_ & inOperand1,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                  const class GGS_bool & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: functionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_functionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_functionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_functionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_functionMap_2E_element_3F_ (const GGS_functionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_functionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_functionMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueComponentMapForSemanticAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueComponentMapForSemanticAnalysis_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsTemplate ;
  public: inline GGS_bool readProperty_mIsTemplate (void) const {
    return mProperty_mIsTemplate ;
  }

  public: GGS_terminalMap mProperty_mTerminalMap ;
  public: inline GGS_terminalMap readProperty_mTerminalMap (void) const {
    return mProperty_mTerminalMap ;
  }

  public: GGS__5B_indexingAST_5D_ mProperty_mIndexingListAST ;
  public: inline GGS__5B_indexingAST_5D_ readProperty_mIndexingListAST (void) const {
    return mProperty_mIndexingListAST ;
  }

  public: GGS__5B_terminalDeclarationAST_5D_ mProperty_mTerminalListAST ;
  public: inline GGS__5B_terminalDeclarationAST_5D_ readProperty_mTerminalListAST (void) const {
    return mProperty_mTerminalListAST ;
  }

  public: GGS__5B_lexicalAttributeAST_5D_ mProperty_mLexicalAttributeListAST ;
  public: inline GGS__5B_lexicalAttributeAST_5D_ readProperty_mLexicalAttributeListAST (void) const {
    return mProperty_mLexicalAttributeListAST ;
  }

  public: GGS__5B_lexicalListDeclarationAST_5D_ mProperty_mLexicalListDeclarationListAST ;
  public: inline GGS__5B_lexicalListDeclarationAST_5D_ readProperty_mLexicalListDeclarationListAST (void) const {
    return mProperty_mLexicalListDeclarationListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsTemplate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsTemplate = inValue ;
  }

  public: inline void setter_setMTerminalMap (const GGS_terminalMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalMap = inValue ;
  }

  public: inline void setter_setMIndexingListAST (const GGS__5B_indexingAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexingListAST = inValue ;
  }

  public: inline void setter_setMTerminalListAST (const GGS__5B_terminalDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalListAST = inValue ;
  }

  public: inline void setter_setMLexicalAttributeListAST (const GGS__5B_lexicalAttributeAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalAttributeListAST = inValue ;
  }

  public: inline void setter_setMLexicalListDeclarationListAST (const GGS__5B_lexicalListDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalListDeclarationListAST = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                 const GGS_bool & in_mIsTemplate,
                                                                 const GGS_terminalMap & in_mTerminalMap,
                                                                 const GGS__5B_indexingAST_5D_ & in_mIndexingListAST,
                                                                 const GGS__5B_terminalDeclarationAST_5D_ & in_mTerminalListAST,
                                                                 const GGS__5B_lexicalAttributeAST_5D_ & in_mLexicalAttributeListAST,
                                                                 const GGS__5B_lexicalListDeclarationAST_5D_ & in_mLexicalListDeclarationListAST) ;

//--------------------------------- Copy constructor
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & operator = (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueComponentMapForSemanticAnalysis_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                         const class GGS_bool & inOperand1,
                                                                                                         const class GGS_terminalMap & inOperand2,
                                                                                                         const class GGS__5B_indexingAST_5D_ & inOperand3,
                                                                                                         const class GGS__5B_terminalDeclarationAST_5D_ & inOperand4,
                                                                                                         const class GGS__5B_lexicalAttributeAST_5D_ & inOperand5,
                                                                                                         const class GGS__5B_lexicalListDeclarationAST_5D_ & inOperand6,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexiqueComponentMapForSemanticAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexiqueComponentMapForSemanticAnalysis_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mLexiqueName ;
  public: inline GGS_lstring readProperty_mLexiqueName (void) const {
    return mProperty_mLexiqueName ;
  }

  public: GGS__5B_nonterminalDeclarationAST_5D_ mProperty_mNonterminalDeclarationList ;
  public: inline GGS__5B_nonterminalDeclarationAST_5D_ readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GGS__5B_syntaxRuleAST_5D_ mProperty_mRuleList ;
  public: inline GGS__5B_syntaxRuleAST_5D_ readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: inline GGS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexiqueName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GGS__5B_nonterminalDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GGS__5B_syntaxRuleAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxComponentMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_lstring & in_mLexiqueName,
                                             const GGS__5B_nonterminalDeclarationAST_5D_ & in_mNonterminalDeclarationList,
                                             const GGS__5B_syntaxRuleAST_5D_ & in_mRuleList,
                                             const GGS_bool & in_mHasTranslateFeature) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxComponentMap_2E_element (const GGS_syntaxComponentMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxComponentMap_2E_element & operator = (const GGS_syntaxComponentMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS__5B_nonterminalDeclarationAST_5D_ & inOperand2,
                                                                             const class GGS__5B_syntaxRuleAST_5D_ & inOperand3,
                                                                             const class GGS_bool & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: syntaxComponentMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_syntaxComponentMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_syntaxComponentMap_2E_element_3F_ (const GGS_syntaxComponentMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_syntaxComponentMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_syntaxComponentMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalConstantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalConstantMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_bool mProperty_mIsPrivate ;
  public: inline GGS_bool readProperty_mIsPrivate (void) const {
    return mProperty_mIsPrivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalConstantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMIsPrivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPrivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalConstantMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_unifiedTypeMapEntry & in_mType,
                                            const GGS_bool & in_mIsPrivate) ;

//--------------------------------- Copy constructor
  public: GGS_globalConstantMap_2E_element (const GGS_globalConstantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalConstantMap_2E_element & operator = (const GGS_globalConstantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalConstantMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: globalConstantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_globalConstantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_globalConstantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_globalConstantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_globalConstantMap_2E_element_3F_ (const GGS_globalConstantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_globalConstantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_globalConstantMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerMapForType map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionInitializerMapForType final {

  public: DownEnumerator_extensionInitializerMapForType (const class GGS_extensionInitializerMapForType & inMap) ;

  public: ~ DownEnumerator_extensionInitializerMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionInitializerMapForType (const DownEnumerator_extensionInitializerMapForType &) = delete ;
  private: DownEnumerator_extensionInitializerMapForType & operator = (const DownEnumerator_extensionInitializerMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionInitializerMapForType final {
  public: UpEnumerator_extensionInitializerMapForType (const class GGS_extensionInitializerMapForType & inMap)  ;

  public: ~ UpEnumerator_extensionInitializerMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_formalInputParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_extensionInitializerMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionInitializerMapForType (const UpEnumerator_extensionInitializerMapForType &) = delete ;
  private: UpEnumerator_extensionInitializerMapForType & operator = (const UpEnumerator_extensionInitializerMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerMapForType final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerMapForType_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionInitializerMapForType (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionInitializerMapForType (void) ;

//--- Handle copy
  public: GGS_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inSource) ;
  public: GGS_extensionInitializerMapForType & operator = (const GGS_extensionInitializerMapForType & inSource) ;

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
  protected: void performInsert (const class GGS_extensionInitializerMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerMapForType init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionInitializerMapForType class_func_mapWithMapToOverride (const class GGS_extensionInitializerMapForType & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalInputParameterAST_5D_ constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParameterListForKey (class GGS__5B_formalInputParameterAST_5D_ constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ getter_mFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionInitializerMapForType getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_extensionInitializerMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionInitializerMapForType ;
  friend class DownEnumerator_extensionInitializerMapForType ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerMapForType_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_formalInputParameterAST_5D_ mProperty_mFormalParameterList ;
  public: inline GGS__5B_formalInputParameterAST_5D_ readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerMapForType_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GGS__5B_formalInputParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionInitializerMapForType_2E_element (const GGS_lstring & in_lkey,
                                                         const GGS__5B_formalInputParameterAST_5D_ & in_mFormalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_extensionInitializerMapForType_2E_element (const GGS_extensionInitializerMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionInitializerMapForType_2E_element & operator = (const GGS_extensionInitializerMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerMapForType_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS__5B_formalInputParameterAST_5D_ & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionInitializerMapForType.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerMapForType_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionInitializerMapForType_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerMapForType_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionInitializerMapForType_2E_element_3F_ (const GGS_extensionInitializerMapForType_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionInitializerMapForType_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionInitializerMapForType_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerForBuildingContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForBuildingContext_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_extensionInitializerMapForType mProperty_mExtensionInitializerMapForType ;
  public: inline GGS_extensionInitializerMapForType readProperty_mExtensionInitializerMapForType (void) const {
    return mProperty_mExtensionInitializerMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerForBuildingContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionInitializerMapForType (const GGS_extensionInitializerMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionInitializerMapForType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionInitializerForBuildingContext_2E_element (const GGS_lstring & in_lkey,
                                                                 const GGS_extensionInitializerMapForType & in_mExtensionInitializerMapForType) ;

//--------------------------------- Copy constructor
  public: GGS_extensionInitializerForBuildingContext_2E_element (const GGS_extensionInitializerForBuildingContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionInitializerForBuildingContext_2E_element & operator = (const GGS_extensionInitializerForBuildingContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerForBuildingContext_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_extensionInitializerMapForType & inOperand1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionInitializerForBuildingContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForBuildingContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionInitializerForBuildingContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionInitializerForBuildingContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionInitializerForBuildingContext_2E_element_3F_ (const GGS_extensionInitializerForBuildingContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionInitializerForBuildingContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionInitializerForBuildingContext_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForType map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionMethodMapForType final {

  public: DownEnumerator_extensionMethodMapForType (const class GGS_extensionMethodMapForType & inMap) ;

  public: ~ DownEnumerator_extensionMethodMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionMethodMapForType (const DownEnumerator_extensionMethodMapForType &) = delete ;
  private: DownEnumerator_extensionMethodMapForType & operator = (const DownEnumerator_extensionMethodMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionMethodMapForType final {
  public: UpEnumerator_extensionMethodMapForType (const class GGS_extensionMethodMapForType & inMap)  ;

  public: ~ UpEnumerator_extensionMethodMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_formalParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GGS_extensionMethodMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionMethodMapForType (const UpEnumerator_extensionMethodMapForType &) = delete ;
  private: UpEnumerator_extensionMethodMapForType & operator = (const UpEnumerator_extensionMethodMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForType final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForType_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionMethodMapForType (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionMethodMapForType (void) ;

//--- Handle copy
  public: GGS_extensionMethodMapForType (const GGS_extensionMethodMapForType & inSource) ;
  public: GGS_extensionMethodMapForType & operator = (const GGS_extensionMethodMapForType & inSource) ;

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
  protected: void performInsert (const class GGS_extensionMethodMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForType init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodMapForType class_func_mapWithMapToOverride (const class GGS_extensionMethodMapForType & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterAST_5D_ constinArgument1,
                                 class GGS_methodQualifier constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParameterListForKey (class GGS__5B_formalParameterAST_5D_ constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMQualifierForKey (class GGS_methodQualifier constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterAST_5D_ getter_mFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodQualifier getter_mQualifierForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionMethodMapForType getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_extensionMethodMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionMethodMapForType ;
  friend class DownEnumerator_extensionMethodMapForType ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForType_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_formalParameterAST_5D_ mProperty_mFormalParameterList ;
  public: inline GGS__5B_formalParameterAST_5D_ readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForType_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GGS__5B_formalParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMethodMapForType_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS__5B_formalParameterAST_5D_ & in_mFormalParameterList,
                                                    const GGS_methodQualifier & in_mQualifier) ;

//--------------------------------- Copy constructor
  public: GGS_extensionMethodMapForType_2E_element (const GGS_extensionMethodMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionMethodMapForType_2E_element & operator = (const GGS_extensionMethodMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForType_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS__5B_formalParameterAST_5D_ & inOperand1,
                                                                            const class GGS_methodQualifier & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionMethodMapForType.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForType_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionMethodMapForType_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForType_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionMethodMapForType_2E_element_3F_ (const GGS_extensionMethodMapForType_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionMethodMapForType_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionMethodMapForType_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodMapForBuildingContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForBuildingContext_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_extensionMethodMapForType mProperty_mExtensionMethodMapForType ;
  public: inline GGS_extensionMethodMapForType readProperty_mExtensionMethodMapForType (void) const {
    return mProperty_mExtensionMethodMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForBuildingContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionMethodMapForType (const GGS_extensionMethodMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionMethodMapForType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionMethodMapForBuildingContext_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_extensionMethodMapForType & in_mExtensionMethodMapForType) ;

//--------------------------------- Copy constructor
  public: GGS_extensionMethodMapForBuildingContext_2E_element (const GGS_extensionMethodMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionMethodMapForBuildingContext_2E_element & operator = (const GGS_extensionMethodMapForBuildingContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodMapForBuildingContext_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_extensionMethodMapForType & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionMethodMapForBuildingContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodMapForBuildingContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionMethodMapForBuildingContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionMethodMapForBuildingContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionMethodMapForBuildingContext_2E_element_3F_ (const GGS_extensionMethodMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionMethodMapForBuildingContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionMethodMapForBuildingContext_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForType map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionSetterMapForType final {

  public: DownEnumerator_extensionSetterMapForType (const class GGS_extensionSetterMapForType & inMap) ;

  public: ~ DownEnumerator_extensionSetterMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionSetterMapForType (const DownEnumerator_extensionSetterMapForType &) = delete ;
  private: DownEnumerator_extensionSetterMapForType & operator = (const DownEnumerator_extensionSetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionSetterMapForType final {
  public: UpEnumerator_extensionSetterMapForType (const class GGS_extensionSetterMapForType & inMap)  ;

  public: ~ UpEnumerator_extensionSetterMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_formalParameterAST_5D_ current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_extensionSetterMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionSetterMapForType (const UpEnumerator_extensionSetterMapForType &) = delete ;
  private: UpEnumerator_extensionSetterMapForType & operator = (const UpEnumerator_extensionSetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForType final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForType_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionSetterMapForType (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionSetterMapForType (void) ;

//--- Handle copy
  public: GGS_extensionSetterMapForType (const GGS_extensionSetterMapForType & inSource) ;
  public: GGS_extensionSetterMapForType & operator = (const GGS_extensionSetterMapForType & inSource) ;

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
  protected: void performInsert (const class GGS_extensionSetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForType init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterMapForType class_func_mapWithMapToOverride (const class GGS_extensionSetterMapForType & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterAST_5D_ constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParameterListForKey (class GGS__5B_formalParameterAST_5D_ constinArgument0,
                                                     class GGS_string constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterAST_5D_ getter_mFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionSetterMapForType getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_extensionSetterMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionSetterMapForType ;
  friend class DownEnumerator_extensionSetterMapForType ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForType_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_formalParameterAST_5D_ mProperty_mFormalParameterList ;
  public: inline GGS__5B_formalParameterAST_5D_ readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForType_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GGS__5B_formalParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionSetterMapForType_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS__5B_formalParameterAST_5D_ & in_mFormalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_extensionSetterMapForType_2E_element (const GGS_extensionSetterMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionSetterMapForType_2E_element & operator = (const GGS_extensionSetterMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForType_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS__5B_formalParameterAST_5D_ & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionSetterMapForType.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForType_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionSetterMapForType_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForType_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionSetterMapForType_2E_element_3F_ (const GGS_extensionSetterMapForType_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionSetterMapForType_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionSetterMapForType_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterMapForBuildingContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForBuildingContext_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_extensionSetterMapForType mProperty_mExtensionSetterMapForType ;
  public: inline GGS_extensionSetterMapForType readProperty_mExtensionSetterMapForType (void) const {
    return mProperty_mExtensionSetterMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForBuildingContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionSetterMapForType (const GGS_extensionSetterMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionSetterMapForType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionSetterMapForBuildingContext_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_extensionSetterMapForType & in_mExtensionSetterMapForType) ;

//--------------------------------- Copy constructor
  public: GGS_extensionSetterMapForBuildingContext_2E_element (const GGS_extensionSetterMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionSetterMapForBuildingContext_2E_element & operator = (const GGS_extensionSetterMapForBuildingContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterMapForBuildingContext_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_extensionSetterMapForType & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionSetterMapForBuildingContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterMapForBuildingContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionSetterMapForBuildingContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionSetterMapForBuildingContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionSetterMapForBuildingContext_2E_element_3F_ (const GGS_extensionSetterMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionSetterMapForBuildingContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionSetterMapForBuildingContext_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForType map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extensionGetterMapForType final {

  public: DownEnumerator_extensionGetterMapForType (const class GGS_extensionGetterMapForType & inMap) ;

  public: ~ DownEnumerator_extensionGetterMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mResultTypeName (LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ current_mInputFormalParameterList (LOCATION_ARGS) const ;

  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extensionGetterMapForType (const DownEnumerator_extensionGetterMapForType &) = delete ;
  private: DownEnumerator_extensionGetterMapForType & operator = (const DownEnumerator_extensionGetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extensionGetterMapForType final {
  public: UpEnumerator_extensionGetterMapForType (const class GGS_extensionGetterMapForType & inMap)  ;

  public: ~ UpEnumerator_extensionGetterMapForType (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public: class GGS__5B_formalInputParameterAST_5D_ current_mInputFormalParameterList (LOCATION_ARGS) const ;
  public: class GGS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
  public: class GGS_extensionGetterMapForType_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extensionGetterMapForType (const UpEnumerator_extensionGetterMapForType &) = delete ;
  private: UpEnumerator_extensionGetterMapForType & operator = (const UpEnumerator_extensionGetterMapForType &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForType final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForType_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_extensionGetterMapForType (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_extensionGetterMapForType (void) ;

//--- Handle copy
  public: GGS_extensionGetterMapForType (const GGS_extensionGetterMapForType & inSource) ;
  public: GGS_extensionGetterMapForType & operator = (const GGS_extensionGetterMapForType & inSource) ;

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
  protected: void performInsert (const class GGS_extensionGetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForType init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterMapForType class_func_mapWithMapToOverride (const class GGS_extensionGetterMapForType & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lstring constinArgument1,
                                 class GGS__5B_formalInputParameterAST_5D_ constinArgument2,
                                 class GGS_methodQualifier constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMInputFormalParameterListForKey (class GGS__5B_formalInputParameterAST_5D_ constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMQualifierForKey (class GGS_methodQualifier constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMResultTypeNameForKey (class GGS_lstring constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalInputParameterAST_5D_ getter_mInputFormalParameterListForKey (const class GGS_string & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_methodQualifier getter_mQualifierForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mResultTypeNameForKey (const class GGS_string & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_extensionGetterMapForType getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_extensionGetterMapForType_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extensionGetterMapForType ;
  friend class DownEnumerator_extensionGetterMapForType ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForType_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForType_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mResultTypeName ;
  public: inline GGS_lstring readProperty_mResultTypeName (void) const {
    return mProperty_mResultTypeName ;
  }

  public: GGS__5B_formalInputParameterAST_5D_ mProperty_mInputFormalParameterList ;
  public: inline GGS__5B_formalInputParameterAST_5D_ readProperty_mInputFormalParameterList (void) const {
    return mProperty_mInputFormalParameterList ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForType_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMResultTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultTypeName = inValue ;
  }

  public: inline void setter_setMInputFormalParameterList (const GGS__5B_formalInputParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputFormalParameterList = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionGetterMapForType_2E_element (const GGS_lstring & in_lkey,
                                                    const GGS_lstring & in_mResultTypeName,
                                                    const GGS__5B_formalInputParameterAST_5D_ & in_mInputFormalParameterList,
                                                    const GGS_methodQualifier & in_mQualifier) ;

//--------------------------------- Copy constructor
  public: GGS_extensionGetterMapForType_2E_element (const GGS_extensionGetterMapForType_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionGetterMapForType_2E_element & operator = (const GGS_extensionGetterMapForType_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForType_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS__5B_formalInputParameterAST_5D_ & inOperand2,
                                                                                const class GGS_methodQualifier & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionGetterMapForType.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForType_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionGetterMapForType_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForType_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionGetterMapForType_2E_element_3F_ (const GGS_extensionGetterMapForType_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionGetterMapForType_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionGetterMapForType_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterMapForBuildingContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForBuildingContext_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_extensionGetterMapForType mProperty_mExtensionGetterMapForType ;
  public: inline GGS_extensionGetterMapForType readProperty_mExtensionGetterMapForType (void) const {
    return mProperty_mExtensionGetterMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForBuildingContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionGetterMapForType (const GGS_extensionGetterMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionGetterMapForType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extensionGetterMapForBuildingContext_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_extensionGetterMapForType & in_mExtensionGetterMapForType) ;

//--------------------------------- Copy constructor
  public: GGS_extensionGetterMapForBuildingContext_2E_element (const GGS_extensionGetterMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extensionGetterMapForBuildingContext_2E_element & operator = (const GGS_extensionGetterMapForBuildingContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterMapForBuildingContext_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_extensionGetterMapForType & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extensionGetterMapForBuildingContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterMapForBuildingContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extensionGetterMapForBuildingContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extensionGetterMapForBuildingContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extensionGetterMapForBuildingContext_2E_element_3F_ (const GGS_extensionGetterMapForBuildingContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extensionGetterMapForBuildingContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extensionGetterMapForBuildingContext_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@semanticDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_keyRepresentation (const class cPtr_semanticDeclarationAST * inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@semanticDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addAssociatedElement (class cPtr_semanticDeclarationAST * inObject,
                                               class GGS_galgasDeclarationAST & io__5F_ioDeclarations,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [galgas3SyntaxExtensionAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ (const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ (const DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ &) = delete ;
  private: DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ & operator = (const DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_galgas_33_SyntaxExtensionAST current (LOCATION_ARGS) const ;
  public: class GGS_galgas_33_SyntaxExtensionAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_galgas_33_SyntaxExtensionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ (const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ (const UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ &) = delete ;
  private: UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ & operator = (const UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_galgas_33_SyntaxExtensionAST current (LOCATION_ARGS) const ;
  public: class GGS_galgas_33_SyntaxExtensionAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_galgas_33_SyntaxExtensionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_galgas_33_SyntaxExtensionAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inSource) ;
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & operator = (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_galgas_33_SyntaxExtensionAST_5D_ init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_galgas_33_SyntaxExtensionAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ add_operation (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_galgas_33_SyntaxExtensionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_galgas_33_SyntaxExtensionAST constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_galgas_33_SyntaxExtensionAST & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_galgas_33_SyntaxExtensionAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_galgas_33_SyntaxExtensionAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_galgas_33_SyntaxExtensionAST getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_galgas_33_SyntaxExtensionAST getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                         const class GGS_u_33__32_ & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_galgas_33_SyntaxExtensionAST readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_galgas_33_SyntaxExtensionAST inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ ;
  friend class DownEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_galgas_33_SyntaxExtensionAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [galgas3SyntaxExtensionAST]? optional
//--------------------------------------------------------------------------------------------------

class GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS__5B_galgas_33_SyntaxExtensionAST_5D_ mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ (const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS__5B_galgas_33_SyntaxExtensionAST_5D_ unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @_5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ dictionary
//--------------------------------------------------------------------------------------------------

class Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ final {
  public : GGS_string mProperty_key ;
  public : GGS__5B_galgas_33_SyntaxExtensionAST_5D_ mProperty_value ;

  public: Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (void) :
  mProperty_key (),
  mProperty_value () {
  }

  public: Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const GGS_string & inKey,
                                                                       const GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & inValue) :
  mProperty_key (inKey),
  mProperty_value (inValue) {
  }

  public: Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inSource) :
  mProperty_key (inSource.mProperty_key),
  mProperty_value (inSource.mProperty_value) {
  }

  public: Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & operator = (const Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inSource) {
    mProperty_key = inSource.mProperty_key ;
    mProperty_value = inSource.mProperty_value ;
    return *this ;
  }

} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ final {
  public: DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const class GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ current_value (UNUSED_LOCATION_ARGS) const ;


//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_>> mArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ &) = delete ;
  private: DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & operator = (const DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ final {
  public: UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const class GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ current_value (UNUSED_LOCATION_ARGS) const ;
//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_>> mArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (const UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ &) = delete ;
  private: UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & operator = (const UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ final : public GenericDictionary <GGS_string, Node__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ (void) = default ;

//--------------------------------- Build
  protected: static GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ buildEmptyDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ init (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_remove (class GGS_string constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D__3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ readSubscript__3F__3F_default (const class GGS_string & in0,
                                                                                        const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ & in1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ readSubscript__3F_unwrap (const class GGS_string & in0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_string in0,
                                    const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

  public: void writeSubscript__3F_unique (const class GGS_string in0,
                                          const class GGS__5B_galgas_33_SyntaxExtensionAST_5D_ inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ ;
  friend class DownEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxExtensions struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensions final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ mProperty_dictionary ;
  public: inline GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensions (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxExtensions (const GGS__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ & in_dictionary) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxExtensions (const GGS_syntaxExtensions & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxExtensions & operator = (const GGS_syntaxExtensions & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxExtensions init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgasDeclarationAST struct
//--------------------------------------------------------------------------------------------------

class GGS_galgasDeclarationAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_semanticDeclarationAST_5D_ mProperty_mDeclarationList ;
  public: inline GGS__5B_semanticDeclarationAST_5D_ readProperty_mDeclarationList (void) const {
    return mProperty_mDeclarationList ;
  }

  public: GGS_stringset mProperty_implicitTypeDeclarationSet ;
  public: inline GGS_stringset readProperty_implicitTypeDeclarationSet (void) const {
    return mProperty_implicitTypeDeclarationSet ;
  }

  public: GGS__5B_syntaxComponentAST_5D_ mProperty_mSyntaxComponentList ;
  public: inline GGS__5B_syntaxComponentAST_5D_ readProperty_mSyntaxComponentList (void) const {
    return mProperty_mSyntaxComponentList ;
  }

  public: GGS_syntaxExtensions mProperty_mSyntaxExtensions ;
  public: inline GGS_syntaxExtensions readProperty_mSyntaxExtensions (void) const {
    return mProperty_mSyntaxExtensions ;
  }

  public: GGS__5B_galgasGUIComponentAST_5D_ mProperty_mGUIComponentList ;
  public: inline GGS__5B_galgasGUIComponentAST_5D_ readProperty_mGUIComponentList (void) const {
    return mProperty_mGUIComponentList ;
  }

  public: GGS__5B_prologueEpilogueAST_5D_ mProperty_mPrologueDeclarationList ;
  public: inline GGS__5B_prologueEpilogueAST_5D_ readProperty_mPrologueDeclarationList (void) const {
    return mProperty_mPrologueDeclarationList ;
  }

  public: GGS__5B_programRuleAST_5D_ mProperty_mSourceRuleList ;
  public: inline GGS__5B_programRuleAST_5D_ readProperty_mSourceRuleList (void) const {
    return mProperty_mSourceRuleList ;
  }

  public: GGS__5B_prologueEpilogueAST_5D_ mProperty_mEpilogueDeclarationList ;
  public: inline GGS__5B_prologueEpilogueAST_5D_ readProperty_mEpilogueDeclarationList (void) const {
    return mProperty_mEpilogueDeclarationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgasDeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationList (const GGS__5B_semanticDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationList = inValue ;
  }

  public: inline void setter_setImplicitTypeDeclarationSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_implicitTypeDeclarationSet = inValue ;
  }

  public: inline void setter_setMSyntaxComponentList (const GGS__5B_syntaxComponentAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentList = inValue ;
  }

  public: inline void setter_setMSyntaxExtensions (const GGS_syntaxExtensions & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxExtensions = inValue ;
  }

  public: inline void setter_setMGUIComponentList (const GGS__5B_galgasGUIComponentAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGUIComponentList = inValue ;
  }

  public: inline void setter_setMPrologueDeclarationList (const GGS__5B_prologueEpilogueAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPrologueDeclarationList = inValue ;
  }

  public: inline void setter_setMSourceRuleList (const GGS__5B_programRuleAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceRuleList = inValue ;
  }

  public: inline void setter_setMEpilogueDeclarationList (const GGS__5B_prologueEpilogueAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEpilogueDeclarationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgasDeclarationAST (const GGS__5B_semanticDeclarationAST_5D_ & in_mDeclarationList,
                                    const GGS_stringset & in_implicitTypeDeclarationSet,
                                    const GGS__5B_syntaxComponentAST_5D_ & in_mSyntaxComponentList,
                                    const GGS_syntaxExtensions & in_mSyntaxExtensions,
                                    const GGS__5B_galgasGUIComponentAST_5D_ & in_mGUIComponentList,
                                    const GGS__5B_prologueEpilogueAST_5D_ & in_mPrologueDeclarationList,
                                    const GGS__5B_programRuleAST_5D_ & in_mSourceRuleList,
                                    const GGS__5B_prologueEpilogueAST_5D_ & in_mEpilogueDeclarationList) ;

//--------------------------------- Copy constructor
  public: GGS_galgasDeclarationAST (const GGS_galgasDeclarationAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgasDeclarationAST & operator = (const GGS_galgasDeclarationAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgasDeclarationAST init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//   enum overrideKind
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind final : public AC_GALGAS_root {
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
  public: void getAssociatedValuesFor_selectOverrideFirstBranch (class GGS_currentVarManager & out_savedManager) const ;
  public: void getAssociatedValuesFor_selectOverrideNextBranches (class GGS_currentVarManager & out_savedManager,
                                                                  class GGS_currentVarManager & out_referenceManager) const ;

//--------------------------------- Accessors
  public: inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_overrideKind class_func_repeatOverride (LOCATION_ARGS) ;

  public: static class GGS_overrideKind class_func_selectOverrideFirstBranch (const class GGS_currentVarManager & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_overrideKind class_func_selectOverrideNextBranches (const class GGS_currentVarManager & inOperand0,
                                                                               const class GGS_currentVarManager & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractSelectOverrideFirstBranch (class GGS_currentVarManager & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: void method_extractSelectOverrideNextBranches (class GGS_currentVarManager & outArgument0,
                                                         class GGS_currentVarManager & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_overrideKind_2E_selectOverrideFirstBranch_3F_ getter_getSelectOverrideFirstBranch (LOCATION_ARGS) const ;

  public: class GGS_overrideKind_2E_selectOverrideNextBranches_3F_ getter_getSelectOverrideNextBranches (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRepeatOverride (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelectOverrideFirstBranch (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelectOverrideNextBranches (LOCATION_ARGS) const ;


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overrideKind_2E_selectOverrideFirstBranch struct
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideFirstBranch final : public AC_GALGAS_root {
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_currentVarManager & in_savedManager) ;

//--------------------------------- Copy constructor
  public: GGS_overrideKind_2E_selectOverrideFirstBranch (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_overrideKind_2E_selectOverrideFirstBranch & operator = (const GGS_overrideKind_2E_selectOverrideFirstBranch & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overrideKind_2E_selectOverrideFirstBranch init_21_ (const class GGS_currentVarManager & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ;

//--------------------------------------------------------------------------------------------------
// Phase 1: overrideKind.selectOverrideFirstBranch? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overrideKind_2E_selectOverrideNextBranches struct
//--------------------------------------------------------------------------------------------------

class GGS_overrideKind_2E_selectOverrideNextBranches final : public AC_GALGAS_root {
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_currentVarManager & in_savedManager,
                                                          const GGS_currentVarManager & in_referenceManager) ;

//--------------------------------- Copy constructor
  public: GGS_overrideKind_2E_selectOverrideNextBranches (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_overrideKind_2E_selectOverrideNextBranches & operator = (const GGS_overrideKind_2E_selectOverrideNextBranches & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overrideKind_2E_selectOverrideNextBranches init_21__21_ (const class GGS_currentVarManager & inOperand0,
                                                                              const class GGS_currentVarManager & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ;

//--------------------------------------------------------------------------------------------------
// Phase 1: overrideKind.selectOverrideNextBranches? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: optionset @localVariableAttributes
//--------------------------------------------------------------------------------------------------

class GGS_localVariableAttributes final : public AC_GALGAS_root {
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
//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableAttributes class_func_acceptInitializedStateAsFinalState (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_acceptReadStateAsFinalState (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_rejectDeclaredStateAsFinalState (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_rejectWriteInInitializedAndReadStates (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_suggestDeclareUnusedParameterAsUnused (LOCATION_ARGS) ;

  public: static class GGS_localVariableAttributes class_func_warnsOnAnyAcces (LOCATION_ARGS) ;

//--------------------------------- &= operator
  public: void andAssignOperation (const GGS_localVariableAttributes inOperand,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- |= operator
  public: void orAssignOperation (const GGS_localVariableAttributes inOperand,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- ^= operator
  public: void xorAssignOperation (const GGS_localVariableAttributes inOperand,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator
  public: void minusAssignOperation (const GGS_localVariableAttributes inOperand,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: GGS_localVariableAttributes operator_and (const GGS_localVariableAttributes & inOperand
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: GGS_localVariableAttributes operator_or (const GGS_localVariableAttributes & inOperand
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: GGS_localVariableAttributes operator_xor (const GGS_localVariableAttributes & inOperand
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: GGS_localVariableAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: GGS_localVariableAttributes subtract_operation (const GGS_localVariableAttributes & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_localVariableAttributes & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableAttributes ;

//--------------------------------------------------------------------------------------------------
//   enum localVarValuation
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation final : public AC_GALGAS_root {
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
  public: void getAssociatedValuesFor_declared (class GGS_bool & out_usedInSubscope) const ;

//--------------------------------- Accessors
  public: inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_localVarValuation class_func_declared (const class GGS_bool & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_initialized (LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_invalid (LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_mutated (LOCATION_ARGS) ;

  public: static class GGS_localVarValuation class_func_read (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVarValuation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractDeclared (class GGS_bool & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_localVarValuation_2E_declared_3F_ getter_getDeclared (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDeclared (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isInitialized (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isInvalid (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMutated (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRead (LOCATION_ARGS) const ;


//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVarValuation_2E_declared struct
//--------------------------------------------------------------------------------------------------

class GGS_localVarValuation_2E_declared final : public AC_GALGAS_root {
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_localVarValuation_2E_declared (const GGS_bool & in_usedInSubscope) ;

//--------------------------------- Copy constructor
  public: GGS_localVarValuation_2E_declared (const GGS_localVarValuation_2E_declared & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_localVarValuation_2E_declared & operator = (const GGS_localVarValuation_2E_declared & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVarValuation_2E_declared init_21_ (const class GGS_bool & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVarValuation_2E_declared & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared ;

//--------------------------------------------------------------------------------------------------
// Phase 1: localVarValuation.declared? optional
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVarValuation_2E_declared_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @scopeLocalVarMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_scopeLocalVarMap_2E_element final : public AC_GALGAS_root {
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_scopeLocalVarMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_unifiedTypeMapEntry & in_mType,
                                           const GGS_string & in_mCppName,
                                           const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                           const GGS_localVariableAttributes & in_mAttributes,
                                           const GGS_localVarValuation & in_mState) ;

//--------------------------------- Copy constructor
  public: GGS_scopeLocalVarMap_2E_element (const GGS_scopeLocalVarMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_scopeLocalVarMap_2E_element & operator = (const GGS_scopeLocalVarMap_2E_element & inSource) ;

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
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: scopeLocalVarMap.element? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeLocalVarMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@[scopeLocalVarMap] neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GGS__5B_scopeLocalVarMap_5D_ & ioObject,
                                    const class GGS_lstring constin_inVarName,
                                    const class GGS_u_33__32_ constin_inIndex,
                                    class GGS_unifiedTypeMapEntry & out_outType,
                                    class GGS_string & out_outCppName,
                                    class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@[scopeLocalVarMap] writeAccessInSubMap'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeAccessInSubMap (class GGS__5B_scopeLocalVarMap_5D_ & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          const class GGS_u_33__32_ constin_inIndex,
                                          class GGS_unifiedTypeMapEntry & out_outType,
                                          class GGS_string & out_outCppName,
                                          class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarValuation writeTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeTransition (class GGS_localVarValuation & ioObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_bool constin_inOverridenMap,
                                      const class GGS_localVariableAttributes constin_inAttributes,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@[scopeLocalVarMap] readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GGS__5B_scopeLocalVarMap_5D_ & ioObject,
                                 const class GGS_lstring constin_inVarName,
                                 const class GGS_u_33__32_ constin_inIndex,
                                 class GGS_unifiedTypeMapEntry & out_outType,
                                 class GGS_string & out_outCppName,
                                 class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarValuation readTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readTransition (class GGS_localVarValuation & ioObject,
                                     const class GGS_lstring constin_inVarName,
                                     const class GGS_localVariableAttributes constin_inAttributes,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@[scopeLocalVarMap] readWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteAccess (class GGS__5B_scopeLocalVarMap_5D_ & ioObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_u_33__32_ constin_inIndex,
                                      class GGS_unifiedTypeMapEntry & out_outType,
                                      class GGS_string & out_outCppName,
                                      class GGS_string & out_outNameForCheckingFormalParameterUsing,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@localVarValuation readWriteTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteTransition (class GGS_localVarValuation & ioObject,
                                          const class GGS_lstring constin_inVarName,
                                          const class GGS_bool constin_inOverridenMap,
                                          const class GGS_localVariableAttributes constin_inAttributes,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarValuation checkFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalState (const class GGS_localVarValuation inObject,
                                      const class GGS_lstring constin_inVarName,
                                      const class GGS_localVariableAttributes constin_inAttributes,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@scopeLocalVarMap checkFinalStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalStates (const class GGS_scopeLocalVarMap inObject,
                                       const class GGS_location constin__5F_inErrorLocation,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarValuation combineValuationWith'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_combineValuationWith (const class GGS_localVarValuation inObject,
                                           const class GGS_localVarValuation constin_inOther,
                                           class GGS_localVarValuation & out_outResult,
                                           class GGS_string & io__5F_ioErrorMessage,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@scopeLocalVarMap combineMapWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineMapWith (class GGS_scopeLocalVarMap & ioObject,
                                     const class GGS_scopeLocalVarMap constin_inOtherMap,
                                     class GGS_string & io_ioErrorMessage,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMap unsolvedEntryList' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS__5B_lstring_5D_ extensionGetter_unsolvedEntryList (const class GGS_unifiedTypeMap & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GGS_unifiedTypeMap & ioObject,
                                          const class GGS_string constin_inKey,
                                          class GGS_unifiedTypeMapEntry & out_outEntry,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMap typeMapEntryOrNullForLKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_typeMapEntryOrNullForLKey (const class GGS_unifiedTypeMap & inObject,
                                                                         const class GGS_lstring & constinArgument0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GGS_unifiedTypeMap & ioObject,
                                 const class GGS_lstring constin_inTypeName,
                                 const class GGS_unifiedTypeDefinition constin_inTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMap typeDefinition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeDefinition extensionGetter_typeDefinition (const class GGS_unifiedTypeMap & inObject,
                                                                const class GGS_lstring & constinArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap removeAll'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_removeAll (class GGS_unifiedTypeMap & ioObject,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@unifiedTypeMapElementClass clear'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_clear (class cPtr_unifiedTypeMapElementClass * inObject,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeDefinition_2E_solved struct
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved final : public AC_GALGAS_root {
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeDefinition_2E_solved (const GGS_unifiedTypeDefinition & in_definition) ;

//--------------------------------- Copy constructor
  public: GGS_typeDefinition_2E_solved (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeDefinition_2E_solved & operator = (const GGS_typeDefinition_2E_solved & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDefinition_2E_solved init_21_ (const class GGS_unifiedTypeDefinition & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeDefinition.solved? optional
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapEntry typeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typeName (const class GGS_unifiedTypeMapEntry & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapEntry baseType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_baseType (const class GGS_unifiedTypeMapEntry & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GGS_unifiedTypeMapEntry inObject,
                                            class GGS_stringset & io_ioInclusions,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [acceptableParameter] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_acceptableParameter_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_acceptableParameter_5D_ (const class GGS__5B_acceptableParameter_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_acceptableParameter_5D_ (const DownEnumerator__5B_acceptableParameter_5D_ &) = delete ;
  private: DownEnumerator__5B_acceptableParameter_5D_ & operator = (const DownEnumerator__5B_acceptableParameter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_acceptableParameter current (LOCATION_ARGS) const ;
  public: class GGS_acceptableParameter current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_acceptableParameter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_acceptableParameter_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_acceptableParameter_5D_ (const class GGS__5B_acceptableParameter_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_acceptableParameter_5D_ (const UpEnumerator__5B_acceptableParameter_5D_ &) = delete ;
  private: UpEnumerator__5B_acceptableParameter_5D_ & operator = (const UpEnumerator__5B_acceptableParameter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_acceptableParameter current (LOCATION_ARGS) const ;
  public: class GGS_acceptableParameter current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_acceptableParameter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_acceptableParameter_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_acceptableParameter> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_acceptableParameter_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_acceptableParameter_5D_ (const GGS__5B_acceptableParameter_5D_ & inSource) ;
  public: GGS__5B_acceptableParameter_5D_ & operator = (const GGS__5B_acceptableParameter_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_acceptableParameter_5D_ init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_acceptableParameter_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_acceptableParameter & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_acceptableParameter_5D_ add_operation (const GGS__5B_acceptableParameter_5D_ & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_acceptableParameter constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_acceptableParameter constinArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_acceptableParameter & outArgument0,
                              class GGS_u_33__32_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_acceptableParameter & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_acceptableParameter & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_acceptableParameter getter_first (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_acceptableParameter getter_last (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_acceptableParameter_5D_ getter_removingFirst (const class GGS_u_33__32_ & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_acceptableParameter_5D_ getter_sublist (const class GGS_u_33__32_ & constinOperand0,
                                                                const class GGS_u_33__32_ & constinOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_acceptableParameter readSubscript__3F_ (const class GGS_u_33__32_ & in0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts
  public: void writeSubscript__3F_ (const class GGS_u_33__32_ in0,
                                    const class GGS_acceptableParameter inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_acceptableParameter_5D_ ;
  friend class DownEnumerator__5B_acceptableParameter_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_acceptableParameter_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @acceptableParameter struct
//--------------------------------------------------------------------------------------------------

class GGS_acceptableParameter final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_formalParameterSignatureElement_5D_ mProperty_mRoutineSignature ;
  public: inline GGS__5B_formalParameterSignatureElement_5D_ readProperty_mRoutineSignature (void) const {
    return mProperty_mRoutineSignature ;
  }

  public: GGS_bool mProperty_mIsFilePrivate ;
  public: inline GGS_bool readProperty_mIsFilePrivate (void) const {
    return mProperty_mIsFilePrivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_acceptableParameter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineSignature (const GGS__5B_formalParameterSignatureElement_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineSignature = inValue ;
  }

  public: inline void setter_setMIsFilePrivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsFilePrivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_acceptableParameter (const GGS__5B_formalParameterSignatureElement_5D_ & in_mRoutineSignature,
                                   const GGS_bool & in_mIsFilePrivate) ;

//--------------------------------- Copy constructor
  public: GGS_acceptableParameter (const GGS_acceptableParameter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_acceptableParameter & operator = (const GGS_acceptableParameter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_acceptableParameter init_21__21_ (const class GGS__5B_formalParameterSignatureElement_5D_ & inOperand0,
                                                       const class GGS_bool & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_acceptableParameter ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineArgumentMap map
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineArgumentMap final {

  public: DownEnumerator_routineArgumentMap (const class GGS_routineArgumentMap & inMap) ;

  public: ~ DownEnumerator_routineArgumentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mRoutineSignature (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsFilePrivate (LOCATION_ARGS) const ;

  public: class GGS_routineArgumentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineArgumentMap (const DownEnumerator_routineArgumentMap &) = delete ;
  private: DownEnumerator_routineArgumentMap & operator = (const DownEnumerator_routineArgumentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineArgumentMap final {
  public: UpEnumerator_routineArgumentMap (const class GGS_routineArgumentMap & inMap)  ;

  public: ~ UpEnumerator_routineArgumentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_formalParameterSignatureElement_5D_ current_mRoutineSignature (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsFilePrivate (LOCATION_ARGS) const ;
  public: class GGS_routineArgumentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineArgumentMap (const UpEnumerator_routineArgumentMap &) = delete ;
  private: UpEnumerator_routineArgumentMap & operator = (const UpEnumerator_routineArgumentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_routineArgumentMap final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_routineArgumentMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_routineArgumentMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_routineArgumentMap (void) ;

//--- Handle copy
  public: GGS_routineArgumentMap (const GGS_routineArgumentMap & inSource) ;
  public: GGS_routineArgumentMap & operator = (const GGS_routineArgumentMap & inSource) ;

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
  protected: void performInsert (const class GGS_routineArgumentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element> infoForKey (const String & inKey) const ;

//--- Count
  public: int32_t count (void) const ;

//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineArgumentMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineArgumentMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_routineArgumentMap class_func_mapWithMapToOverride (const class GGS_routineArgumentMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterSignatureElement_5D_ constinArgument1,
                                 class GGS_bool constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsFilePrivateForKey (class GGS_bool constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMRoutineSignatureForKey (class GGS__5B_formalParameterSignatureElement_5D_ constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_formalParameterSignatureElement_5D_ & outArgument1,
                                 class GGS_bool & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_u_33__32_ & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_u_33__32_ getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsFilePrivateForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_formalParameterSignatureElement_5D_ getter_mRoutineSignatureForKey (const class GGS_string & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_routineArgumentMap getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_routineArgumentMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineArgumentMap ;
  friend class DownEnumerator_routineArgumentMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineArgumentMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @internalRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_internalRoutineMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_routineArgumentMap mProperty_mArgumentMap ;
  public: inline GGS_routineArgumentMap readProperty_mArgumentMap (void) const {
    return mProperty_mArgumentMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_internalRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentMap (const GGS_routineArgumentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_internalRoutineMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_routineArgumentMap & in_mArgumentMap) ;

//--------------------------------- Copy constructor
  public: GGS_internalRoutineMap_2E_element (const GGS_internalRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_internalRoutineMap_2E_element & operator = (const GGS_internalRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_internalRoutineMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_routineArgumentMap & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: internalRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_internalRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_internalRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_internalRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_internalRoutineMap_2E_element_3F_ (const GGS_internalRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_internalRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_internalRoutineMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element_3F_ ;

