#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@selfMutability propertiesAreMutable' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_propertiesAreMutable (const class GALGAS_selfMutability & inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@opAssignmentOperator features' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeFeatures extensionGetter_features (const class GALGAS_opAssignmentOperator & inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GALGAS_terminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_terminalInstructionForGrammarAnalysis (const class cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTerminalSymbolName (void) const ;

  public: class GALGAS_uint readProperty_mTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_terminalInstructionForGrammarAnalysis init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_uint & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_terminalInstructionForGrammarAnalysis class_func_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_uint & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalInstructionForGrammarAnalysis_2E_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GALGAS_terminalInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_terminalInstructionForGrammarAnalysis_2E_weak (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_terminalInstructionForGrammarAnalysis_2E_weak & operator = (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_terminalInstructionForGrammarAnalysis bang_terminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalInstructionForGrammarAnalysis_2E_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_terminalInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2E_weak ;

