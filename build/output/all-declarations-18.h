#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

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

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTerminalSymbolName (void) const ;

  public: class GALGAS_uint readProperty_mTerminalSymbolIndex (void) const ;

//-- Start of type generic part

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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalInstructionForGrammarAnalysis_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalInstructionForGrammarAnalysis_2D_weak : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

  public: GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & operator = (const class GALGAS_terminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_terminalInstructionForGrammarAnalysis bang_terminalInstructionForGrammarAnalysis_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalInstructionForGrammarAnalysis_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_terminalInstructionForGrammarAnalysis_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRuleVertically'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const class GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                            const class GALGAS_string constin_inSyntaxComponentName,
                                            class GALGAS_string & io_ioGeneratedCode,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_escapeForTex (const class GALGAS_string & constinArgument0,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR galgas3ProjectGrammar
//--------------------------------------------------------------------------------------------------

class cGrammar_galgas_33_ProjectGrammar : public cParser_galgas_33_ProjectSyntax {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                    Lexique_galgasScanner_33_ * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'project_header' non terminal
//--- 'parse' label
  public: virtual void nt_project_5F_header_parse (Lexique_galgasScanner_33_ * inCompiler) ;

//--- indexing
  public: virtual void nt_project_5F_header_indexing (Lexique_galgasScanner_33_ * inCompiler) ;

//----------- '' label
  public: virtual void nt_project_5F_header_ (GALGAS_lbigint & outArgument0,
                                              GALGAS_lbigint & outArgument1,
                                              GALGAS_lbigint & outArgument2,
                                              GALGAS_lstring & outArgument3,
                                              Lexique_galgasScanner_33_ * inCompiler) ;

  public: virtual int32_t select_galgas_33_ProjectSyntax_0 (Lexique_galgasScanner_33_ *) ;
} ;

//--------------------------------------------------------------------------------------------------
