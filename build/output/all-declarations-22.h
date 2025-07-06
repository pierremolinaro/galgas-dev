#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@selfMutability propertiesAreMutable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_propertiesAreMutable (const class GGS_selfMutability & inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@opAssignmentOperator features' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_typeFeatures extensionGetter_features (const class GGS_opAssignmentOperator & inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@CommaSeparatedExpressionList enterExpressionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExpressionListInSemanticContext (const class GGS_CommaSeparatedExpressionList inObject,
                                                           class GGS_unifiedTypeMap & io_ioTypeMap,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ifTestListForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInstruction (const class GGS_ifTestListForGeneration inObject,
                                          class GGS_stringset & io_ioInclusionSet,
                                          class GGS_uint & io_ioTemporaryVariableIndex,
                                          class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                          class GGS_string & io_ioGeneratedCode,
                                          class GGS_string & out_outTestVar,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_terminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_terminalInstructionForGrammarAnalysis (const class cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTerminalSymbolName (void) const ;

  public: class GGS_uint readProperty_mTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_uint & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalInstructionForGrammarAnalysis class_func_new (const class GGS_location & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_uint & inOperand2,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_terminalInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_terminalInstructionForGrammarAnalysis_2E_weak (const class GGS_terminalInstructionForGrammarAnalysis & inSource) ;

  public: GGS_terminalInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_terminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_terminalInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_terminalInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_terminalInstructionForGrammarAnalysis bang_terminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_terminalInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_terminalInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2E_weak ;

