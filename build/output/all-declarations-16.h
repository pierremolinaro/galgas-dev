#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionDeclarationAST_2D_weak : public GALGAS_externFunctionDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionDeclarationAST_2D_weak (const class GALGAS_functionDeclarationAST & inSource) ;

  public: GALGAS_functionDeclarationAST_2D_weak & operator = (const class GALGAS_functionDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionDeclarationAST bang_functionDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @onceFunctionDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_onceFunctionDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_onceFunctionDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_onceFunctionDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_onceFunctionDeclarationAST_2D_weak (const class GALGAS_onceFunctionDeclarationAST & inSource) ;

  public: GALGAS_onceFunctionDeclarationAST_2D_weak & operator = (const class GALGAS_onceFunctionDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_onceFunctionDeclarationAST bang_onceFunctionDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_onceFunctionDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_onceFunctionDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_onceFunctionDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperDeclarationAST_2D_weak (const class GALGAS_filewrapperDeclarationAST & inSource) ;

  public: GALGAS_filewrapperDeclarationAST_2D_weak & operator = (const class GALGAS_filewrapperDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperDeclarationAST bang_filewrapperDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxComponentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxComponentAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxComponentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_SyntaxComponentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_galgas_33_SyntaxComponentAST (const class cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mSyntaxComponentName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_lstring readProperty_mLexiqueName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_syntaxRuleListAST readProperty_mRuleList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_bool readProperty_mHasTranslateFeature (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxComponentAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_SyntaxComponentAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                            const class GALGAS_syntaxRuleListAST & inOperand4,
                                                                            const class GALGAS_bool & inOperand5
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxComponentAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeature (class GALGAS_bool inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationList (class GALGAS_nonterminalDeclarationListAST inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleList (class GALGAS_syntaxRuleListAST inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @galgas3SyntaxComponentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_galgas_33_SyntaxComponentAST : public cPtr_semanticDeclarationAST {
//--- Properties
  public: GALGAS_lstring mProperty_mSyntaxComponentName ;
  public: GALGAS_lstring mProperty_mLexiqueName ;
  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;
  public: GALGAS_bool mProperty_mHasTranslateFeature ;

//--- Constructor
  public: cPtr_galgas_33_SyntaxComponentAST (const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_lstring & in_mSyntaxComponentName,
                                             const GALGAS_lstring & in_mLexiqueName,
                                             const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                             const GALGAS_syntaxRuleListAST & in_mRuleList,
                                             const GALGAS_bool & in_mHasTranslateFeature
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxComponentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxComponentAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxComponentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_SyntaxComponentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_galgas_33_SyntaxComponentAST_2D_weak (const class GALGAS_galgas_33_SyntaxComponentAST & inSource) ;

  public: GALGAS_galgas_33_SyntaxComponentAST_2D_weak & operator = (const class GALGAS_galgas_33_SyntaxComponentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_galgas_33_SyntaxComponentAST bang_galgas_33_SyntaxComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxComponentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_SyntaxComponentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxComponentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_GrammarComponentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_GrammarComponentAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_GrammarComponentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_GrammarComponentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_galgas_33_GrammarComponentAST_2D_weak (const class GALGAS_galgas_33_GrammarComponentAST & inSource) ;

  public: GALGAS_galgas_33_GrammarComponentAST_2D_weak & operator = (const class GALGAS_galgas_33_GrammarComponentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_galgas_33_GrammarComponentAST bang_galgas_33_GrammarComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_GrammarComponentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_GrammarComponentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_GrammarComponentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_GrammarComponentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry baseType' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_entry extensionGetter_baseType (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap-entry addHeaderFileName'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const class GALGAS_unifiedTypeMap_2D_entry inObject,
                                        class GALGAS_stringset & io_ioInclusions,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap-entry addHeaderFileName1'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GALGAS_unifiedTypeMap_2D_entry inObject,
                                            class GALGAS_stringset & io_ioInclusions,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actualParameterForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_actualParameterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_actualParameterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_actualParameterForGeneration_2D_weak (const class GALGAS_actualParameterForGeneration & inSource) ;

  public: GALGAS_actualParameterForGeneration_2D_weak & operator = (const class GALGAS_actualParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_actualParameterForGeneration bang_actualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_actualParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actualParameterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_actualParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actualParameterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_actualParameterForGeneration_generateActualParameter) (const class cPtr_actualParameterForGeneration * inObject,
                                                                                               class GALGAS_stringset & ioArgument0,
                                                                                               class GALGAS_uint & ioArgument1,
                                                                                               class GALGAS_string & ioArgument2,
                                                                                               class GALGAS_stringlist & ioArgument3,
                                                                                               class GALGAS_stringlist & ioArgument4,
                                                                                               class GALGAS_stringset & ioArgument5,
                                                                                               class GALGAS_string & outArgument6,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateActualParameter (const int32_t inClassIndex,
                                                   extensionMethodSignature_actualParameterForGeneration_generateActualParameter inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateActualParameter (const class cPtr_actualParameterForGeneration * inObject,
                                                  GALGAS_stringset & io_ioInclusionSet,
                                                  GALGAS_uint & io_ioTemporaryVariableIndex,
                                                  GALGAS_string & io_ioImplementation,
                                                  GALGAS_stringlist & io_ioJokerParametersToReleaseList,
                                                  GALGAS_stringlist & io_ioOutputVariableList,
                                                  GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                  GALGAS_string & out_outCppName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputActualParameterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outputInputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_outputInputActualParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outputInputActualParameterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_outputInputActualParameterForGeneration (const class cPtr_outputInputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mOutputInputVariableCppName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_unifiedTypeMapEntryList readProperty_mTypeList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outputInputActualParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_lstringlist & inOperand2,
                                                                                       const class GALGAS_unifiedTypeMapEntryList & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outputInputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOutputInputVariableCppName (class GALGAS_string inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeList (class GALGAS_unifiedTypeMapEntryList inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOutputInputVariableCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_mTypeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputActualParameterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outputInputActualParameterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_outputInputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mOutputInputVariableCppName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_unifiedTypeMapEntryList mProperty_mTypeList ;

//--- Constructor
  public: cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                        const GALGAS_string & in_mOutputInputVariableCppName,
                                                        const GALGAS_lstringlist & in_mStructAttributeList,
                                                        const GALGAS_unifiedTypeMapEntryList & in_mTypeList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputActualParameterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outputInputActualParameterForGeneration_2D_weak : public GALGAS_actualParameterForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputInputActualParameterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outputInputActualParameterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputInputActualParameterForGeneration_2D_weak (const class GALGAS_outputInputActualParameterForGeneration & inSource) ;

  public: GALGAS_outputInputActualParameterForGeneration_2D_weak & operator = (const class GALGAS_outputInputActualParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputInputActualParameterForGeneration bang_outputInputActualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputActualParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outputInputActualParameterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outputInputActualParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputActualParameterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualParameterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_inputActualParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputActualParameterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_inputActualParameterForGeneration (const class cPtr_inputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mInputActualCppName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputActualParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                 const class GALGAS_string & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInputActualCppName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mInputActualCppName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualParameterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputActualParameterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_inputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mInputActualCppName ;

//--- Constructor
  public: cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                  const GALGAS_string & in_mInputActualCppName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualParameterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputActualParameterForGeneration_2D_weak : public GALGAS_actualParameterForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualParameterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputActualParameterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualParameterForGeneration_2D_weak (const class GALGAS_inputActualParameterForGeneration & inSource) ;

  public: GALGAS_inputActualParameterForGeneration_2D_weak & operator = (const class GALGAS_inputActualParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualParameterForGeneration bang_inputActualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputActualParameterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputActualParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualParameterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputJokerParameterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputJokerParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_inputJokerParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputJokerParameterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_inputJokerParameterForGeneration (const class cPtr_inputJokerParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mInputActualCppName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputJokerParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputJokerParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                const class GALGAS_string & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputJokerParameterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInputActualCppName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mInputActualCppName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputJokerParameterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputJokerParameterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_inputJokerParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mInputActualCppName ;

//--- Constructor
  public: cPtr_inputJokerParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                 const GALGAS_string & in_mInputActualCppName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputJokerParameterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputJokerParameterForGeneration_2D_weak : public GALGAS_actualParameterForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputJokerParameterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputJokerParameterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputJokerParameterForGeneration_2D_weak (const class GALGAS_inputJokerParameterForGeneration & inSource) ;

  public: GALGAS_inputJokerParameterForGeneration_2D_weak & operator = (const class GALGAS_inputJokerParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputJokerParameterForGeneration bang_inputJokerParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputJokerParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputJokerParameterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputJokerParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputJokerParameterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueDeclarationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexiqueDeclarationForGeneration (const class cPtr_lexiqueDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mLexiqueName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mHeaderContents (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mCppContents (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mCocoaHeader (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mCocoaImplementation (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_string & inOperand3,
                                                                               const class GALGAS_string & inOperand4,
                                                                               const class GALGAS_string & inOperand5,
                                                                               const class GALGAS_string & inOperand6
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCocoaHeader (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCocoaImplementation (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppContents (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHeaderContents (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueName (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCocoaHeader (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCocoaImplementation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppContents (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mHeaderContents (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexiqueDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexiqueDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mLexiqueName ;
  public: GALGAS_string mProperty_mHeaderContents ;
  public: GALGAS_string mProperty_mCppContents ;
  public: GALGAS_string mProperty_mCocoaHeader ;
  public: GALGAS_string mProperty_mCocoaImplementation ;

//--- Constructor
  public: cPtr_lexiqueDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                const GALGAS_string & in_mImplementationCppFileName,
                                                const GALGAS_string & in_mLexiqueName,
                                                const GALGAS_string & in_mHeaderContents,
                                                const GALGAS_string & in_mCppContents,
                                                const GALGAS_string & in_mCocoaHeader,
                                                const GALGAS_string & in_mCocoaImplementation
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueDeclarationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueDeclarationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexiqueDeclarationForGeneration_2D_weak (const class GALGAS_lexiqueDeclarationForGeneration & inSource) ;

  public: GALGAS_lexiqueDeclarationForGeneration_2D_weak & operator = (const class GALGAS_lexiqueDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexiqueDeclarationForGeneration bang_lexiqueDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueDeclarationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_grammarForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarForGeneration (const class cPtr_grammarForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mGrammarName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mLexiqueName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_nonTerminalSymbolMapForGrammarAnalysis readProperty_mNonTerminalMapForGrammarAnalysis (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_nonTerminalToAddList readProperty_mNonTerminalToAddList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_bool readProperty_mHasIndexing (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_lstringlist readProperty_mSyntaxComponents (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mStartSymbolName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_bool readProperty_mHasTranslateFeature (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mCppFileContents (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarForGeneration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_string & inOperand2,
                                                                    const class GALGAS_string & inOperand3,
                                                                    const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inOperand4,
                                                                    const class GALGAS_nonTerminalToAddList & inOperand5,
                                                                    const class GALGAS_bool & inOperand6,
                                                                    const class GALGAS_lstringlist & inOperand7,
                                                                    const class GALGAS_string & inOperand8,
                                                                    const class GALGAS_bool & inOperand9,
                                                                    const class GALGAS_string & inOperand10
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCppFileContents (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGrammarName (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasIndexing (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeature (class GALGAS_bool inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueName (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalMapForGrammarAnalysis (class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalToAddList (class GALGAS_nonTerminalToAddList inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartSymbolName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponents (class GALGAS_lstringlist inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppFileContents (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mGrammarName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasIndexing (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalSymbolMapForGrammarAnalysis getter_mNonTerminalMapForGrammarAnalysis (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_mNonTerminalToAddList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mStartSymbolName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mSyntaxComponents (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mGrammarName ;
  public: GALGAS_string mProperty_mLexiqueName ;
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis mProperty_mNonTerminalMapForGrammarAnalysis ;
  public: GALGAS_nonTerminalToAddList mProperty_mNonTerminalToAddList ;
  public: GALGAS_bool mProperty_mHasIndexing ;
  public: GALGAS_lstringlist mProperty_mSyntaxComponents ;
  public: GALGAS_string mProperty_mStartSymbolName ;
  public: GALGAS_bool mProperty_mHasTranslateFeature ;
  public: GALGAS_string mProperty_mCppFileContents ;

//--- Constructor
  public: cPtr_grammarForGeneration (const GALGAS_bool & in_mHasHeader,
                                     const GALGAS_string & in_mImplementationCppFileName,
                                     const GALGAS_string & in_mGrammarName,
                                     const GALGAS_string & in_mLexiqueName,
                                     const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                     const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                     const GALGAS_bool & in_mHasIndexing,
                                     const GALGAS_lstringlist & in_mSyntaxComponents,
                                     const GALGAS_string & in_mStartSymbolName,
                                     const GALGAS_bool & in_mHasTranslateFeature,
                                     const GALGAS_string & in_mCppFileContents
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarForGeneration_2D_weak (const class GALGAS_grammarForGeneration & inSource) ;

  public: GALGAS_grammarForGeneration_2D_weak & operator = (const class GALGAS_grammarForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarForGeneration bang_grammarForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routinePrototypeDeclarationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routinePrototypeDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_routinePrototypeDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_routinePrototypeDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_routinePrototypeDeclarationForGeneration (const class cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mRoutineName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mFormalArgumentList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_routinePrototypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routinePrototypeDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                        const class GALGAS_string & inOperand1,
                                                                                        const class GALGAS_string & inOperand2,
                                                                                        const class GALGAS_formalParameterListForGeneration & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentList (class GALGAS_formalParameterListForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routinePrototypeDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @routinePrototypeDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_routinePrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mRoutineName ;
  public: GALGAS_formalParameterListForGeneration mProperty_mFormalArgumentList ;

//--- Constructor
  public: cPtr_routinePrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                         const GALGAS_string & in_mImplementationCppFileName,
                                                         const GALGAS_string & in_mRoutineName,
                                                         const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routinePrototypeDeclarationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routinePrototypeDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_routinePrototypeDeclarationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (const class GALGAS_routinePrototypeDeclarationForGeneration & inSource) ;

  public: GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & operator = (const class GALGAS_routinePrototypeDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_routinePrototypeDeclarationForGeneration bang_routinePrototypeDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_routinePrototypeDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routinePrototypeDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routinePrototypeDeclarationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineImplementationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineImplementationForGeneration : public GALGAS_routinePrototypeDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_routineImplementationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_routineImplementationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_routineImplementationForGeneration (const class cPtr_routineImplementationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mGenerateStatic (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mRoutineInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_routineImplementationForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineImplementationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_formalParameterListForGeneration & inOperand3,
                                                                                  const class GALGAS_bool & inOperand4,
                                                                                  const class GALGAS_semanticInstructionListForGeneration & inOperand5
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routineImplementationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMGenerateStatic (class GALGAS_bool inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineInstructionList (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateStatic (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mRoutineInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineImplementationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @routineImplementationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_routineImplementationForGeneration : public cPtr_routinePrototypeDeclarationForGeneration {
//--- Properties
  public: GALGAS_bool mProperty_mGenerateStatic ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mRoutineInstructionList ;

//--- Constructor
  public: cPtr_routineImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                   const GALGAS_string & in_mImplementationCppFileName,
                                                   const GALGAS_string & in_mRoutineName,
                                                   const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                   const GALGAS_bool & in_mGenerateStatic,
                                                   const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineImplementationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineImplementationForGeneration_2D_weak : public GALGAS_routinePrototypeDeclarationForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_routineImplementationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_routineImplementationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_routineImplementationForGeneration_2D_weak (const class GALGAS_routineImplementationForGeneration & inSource) ;

  public: GALGAS_routineImplementationForGeneration_2D_weak & operator = (const class GALGAS_routineImplementationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_routineImplementationForGeneration bang_routineImplementationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_routineImplementationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineImplementationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routineImplementationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineImplementationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionPrototypeDeclarationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionPrototypeDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_functionPrototypeDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionPrototypeDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_functionPrototypeDeclarationForGeneration (const class cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mFunctionName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_formalInputParameterListForGeneration readProperty_mFormalArgumentList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReturnType (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionPrototypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionPrototypeDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                         const class GALGAS_string & inOperand1,
                                                                                         const class GALGAS_string & inOperand2,
                                                                                         const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                                         const class GALGAS_unifiedTypeMap_2D_entry & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentList (class GALGAS_formalInputParameterListForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReturnType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionPrototypeDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionPrototypeDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_functionPrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mFunctionName ;
  public: GALGAS_formalInputParameterListForGeneration mProperty_mFormalArgumentList ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReturnType ;

//--- Constructor
  public: cPtr_functionPrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                          const GALGAS_string & in_mFunctionName,
                                                          const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mReturnType
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionPrototypeDeclarationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionPrototypeDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionPrototypeDeclarationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (const class GALGAS_functionPrototypeDeclarationForGeneration & inSource) ;

  public: GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & operator = (const class GALGAS_functionPrototypeDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionPrototypeDeclarationForGeneration bang_functionPrototypeDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionPrototypeDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionPrototypeDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionPrototypeDeclarationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionImplementationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionImplementationForGeneration : public GALGAS_functionPrototypeDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_functionImplementationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionImplementationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_functionImplementationForGeneration (const class cPtr_functionImplementationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mResultVariableCppName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mFunctionInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionImplementationForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionImplementationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                                   const class GALGAS_unifiedTypeMap_2D_entry & inOperand4,
                                                                                   const class GALGAS_string & inOperand5,
                                                                                   const class GALGAS_semanticInstructionListForGeneration & inOperand6
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionImplementationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionInstructionList (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultVariableCppName (class GALGAS_string inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mResultVariableCppName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionImplementationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionImplementationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_functionImplementationForGeneration : public cPtr_functionPrototypeDeclarationForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mResultVariableCppName ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mFunctionInstructionList ;

//--- Constructor
  public: cPtr_functionImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                    const GALGAS_string & in_mFunctionName,
                                                    const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mReturnType,
                                                    const GALGAS_string & in_mResultVariableCppName,
                                                    const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionImplementationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionImplementationForGeneration_2D_weak : public GALGAS_functionPrototypeDeclarationForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionImplementationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionImplementationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionImplementationForGeneration_2D_weak (const class GALGAS_functionImplementationForGeneration & inSource) ;

  public: GALGAS_functionImplementationForGeneration_2D_weak & operator = (const class GALGAS_functionImplementationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionImplementationForGeneration bang_functionImplementationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionImplementationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionImplementationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionImplementationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionImplementationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @onceFunctionDeclarationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_onceFunctionDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_onceFunctionDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_onceFunctionDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_onceFunctionDeclarationForGeneration (const class cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mFunctionName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReturnType (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mResultVariableCppName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mFunctionInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_onceFunctionDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_onceFunctionDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_string & inOperand2,
                                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                                                    const class GALGAS_string & inOperand4,
                                                                                    const class GALGAS_semanticInstructionListForGeneration & inOperand5
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFunctionInstructionList (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultVariableCppName (class GALGAS_string inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mResultVariableCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReturnType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_onceFunctionDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @onceFunctionDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_onceFunctionDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mFunctionName ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReturnType ;
  public: GALGAS_string mProperty_mResultVariableCppName ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mFunctionInstructionList ;

//--- Constructor
  public: cPtr_onceFunctionDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_string & in_mFunctionName,
                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mReturnType,
                                                     const GALGAS_string & in_mResultVariableCppName,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @onceFunctionDeclarationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_onceFunctionDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_onceFunctionDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_onceFunctionDeclarationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_onceFunctionDeclarationForGeneration_2D_weak (const class GALGAS_onceFunctionDeclarationForGeneration & inSource) ;

  public: GALGAS_onceFunctionDeclarationForGeneration_2D_weak & operator = (const class GALGAS_onceFunctionDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_onceFunctionDeclarationForGeneration bang_onceFunctionDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_onceFunctionDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_onceFunctionDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_onceFunctionDeclarationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @primitiveTypeForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_primitiveTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_primitiveTypeForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_primitiveTypeForGeneration (const class cPtr_primitiveTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mPredefinedTypeName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_predefinedTypeKindEnum readProperty_mKind (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_primitiveTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_primitiveTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_primitiveTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_predefinedTypeKindEnum inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPredefinedTypeName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_predefinedTypeKindEnum getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mPredefinedTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primitiveTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @primitiveTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_primitiveTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mPredefinedTypeName ;
  public: GALGAS_predefinedTypeKindEnum mProperty_mKind ;

//--- Constructor
  public: cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                           const GALGAS_string & in_mPredefinedTypeName,
                                           const GALGAS_predefinedTypeKindEnum & in_mKind
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @primitiveTypeForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_primitiveTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_primitiveTypeForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_primitiveTypeForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_primitiveTypeForGeneration_2D_weak (const class GALGAS_primitiveTypeForGeneration & inSource) ;

  public: GALGAS_primitiveTypeForGeneration_2D_weak & operator = (const class GALGAS_primitiveTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_primitiveTypeForGeneration bang_primitiveTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_primitiveTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_primitiveTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_primitiveTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primitiveTypeForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperDeclarationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperDeclarationForGeneration (const class cPtr_filewrapperDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mFilewrapperName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mFilewrapperAbsolutePath (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_wrapperFileMap readProperty_mFilewrapperFileMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_wrapperDirectoryMap readProperty_mFilewrapperDirectoryMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_filewrapperTemplateListForGeneration readProperty_mFilewrapperTemplateListForGeneration (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   const class GALGAS_wrapperFileMap & inOperand4,
                                                                                   const class GALGAS_wrapperDirectoryMap & inOperand5,
                                                                                   const class GALGAS_filewrapperTemplateListForGeneration & inOperand6
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperAbsolutePath (class GALGAS_string inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperDirectoryMap (class GALGAS_wrapperDirectoryMap inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperFileMap (class GALGAS_wrapperFileMap inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateListForGeneration (class GALGAS_filewrapperTemplateListForGeneration inArgument0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilewrapperAbsolutePath (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mFilewrapperFileMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilewrapperName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_mFilewrapperTemplateListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mFilewrapperName ;
  public: GALGAS_string mProperty_mFilewrapperAbsolutePath ;
  public: GALGAS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: GALGAS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: GALGAS_filewrapperTemplateListForGeneration mProperty_mFilewrapperTemplateListForGeneration ;

//--- Constructor
  public: cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                    const GALGAS_string & in_mFilewrapperName,
                                                    const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                    const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                    const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                    const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperDeclarationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperDeclarationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperDeclarationForGeneration_2D_weak (const class GALGAS_filewrapperDeclarationForGeneration & inSource) ;

  public: GALGAS_filewrapperDeclarationForGeneration_2D_weak & operator = (const class GALGAS_filewrapperDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperDeclarationForGeneration bang_filewrapperDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperDeclarationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @programComponentForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_programComponentForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_programComponentForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_programComponentForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_programComponentForGeneration (const class cPtr_programComponentForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_stringset readProperty_mInclusionSet (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mImplementationString (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_programComponentForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_programComponentForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_stringset & inOperand2,
                                                                             const class GALGAS_string & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_programComponentForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMImplementationString (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInclusionSet (class GALGAS_stringset inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mImplementationString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInclusionSet (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programComponentForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @programComponentForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_programComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Properties
  public: GALGAS_stringset mProperty_mInclusionSet ;
  public: GALGAS_string mProperty_mImplementationString ;

//--- Constructor
  public: cPtr_programComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                              const GALGAS_string & in_mImplementationCppFileName,
                                              const GALGAS_stringset & in_mInclusionSet,
                                              const GALGAS_string & in_mImplementationString
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @programComponentForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_programComponentForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_programComponentForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_programComponentForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_programComponentForGeneration_2D_weak (const class GALGAS_programComponentForGeneration & inSource) ;

  public: GALGAS_programComponentForGeneration_2D_weak & operator = (const class GALGAS_programComponentForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_programComponentForGeneration bang_programComponentForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_programComponentForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_programComponentForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_programComponentForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programComponentForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                                 const class GALGAS_analysisContext constinArgument0,
                                                                                                                                 const class GALGAS_bool constinArgument1,
                                                                                                                                 const class GALGAS_string constinArgument2,
                                                                                                                                 class GALGAS_stringlist & ioArgument3,
                                                                                                                                 class GALGAS_localVarManager & ioArgument4,
                                                                                                                                 class C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeGrammarInstructionSDT (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GALGAS_analysisContext constin_inAnalysisContext,
                                                       const GALGAS_bool constin_inHasTranslateFeature,
                                                       const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GALGAS_stringlist & io_ioAssignementList,
                                                       GALGAS_localVarManager & io_ioVariableMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInExpressionAST_2D_weak (const class GALGAS_varInExpressionAST & inSource) ;

  public: GALGAS_varInExpressionAST_2D_weak & operator = (const class GALGAS_varInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInExpressionAST bang_varInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalCharExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalCharExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalCharExpressionAST_2D_weak (const class GALGAS_literalCharExpressionAST & inSource) ;

  public: GALGAS_literalCharExpressionAST_2D_weak & operator = (const class GALGAS_literalCharExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalCharExpressionAST bang_literalCharExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalCharExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalCharExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalCharExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalDoubleExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalDoubleExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalDoubleExpressionAST_2D_weak (const class GALGAS_literalDoubleExpressionAST & inSource) ;

  public: GALGAS_literalDoubleExpressionAST_2D_weak & operator = (const class GALGAS_literalDoubleExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalDoubleExpressionAST bang_literalDoubleExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalDoubleExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalDoubleExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalUIntExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUIntExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalUIntExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUIntExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalUIntExpressionAST_2D_weak (const class GALGAS_literalUIntExpressionAST & inSource) ;

  public: GALGAS_literalUIntExpressionAST_2D_weak & operator = (const class GALGAS_literalUIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalUIntExpressionAST bang_literalUIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUIntExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUIntExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalUInt_36__34_ExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUInt_36__34_ExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalUInt_36__34_ExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUInt_36__34_ExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalUInt_36__34_ExpressionAST_2D_weak (const class GALGAS_literalUInt_36__34_ExpressionAST & inSource) ;

  public: GALGAS_literalUInt_36__34_ExpressionAST_2D_weak & operator = (const class GALGAS_literalUInt_36__34_ExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalUInt_36__34_ExpressionAST bang_literalUInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUInt_36__34_ExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUInt_36__34_ExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSIntExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSIntExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalSIntExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalSIntExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalSIntExpressionAST_2D_weak (const class GALGAS_literalSIntExpressionAST & inSource) ;

  public: GALGAS_literalSIntExpressionAST_2D_weak & operator = (const class GALGAS_literalSIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalSIntExpressionAST bang_literalSIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSIntExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSIntExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSInt_36__34_ExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSInt_36__34_ExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalSInt_36__34_ExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalSInt_36__34_ExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalSInt_36__34_ExpressionAST_2D_weak (const class GALGAS_literalSInt_36__34_ExpressionAST & inSource) ;

  public: GALGAS_literalSInt_36__34_ExpressionAST_2D_weak & operator = (const class GALGAS_literalSInt_36__34_ExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalSInt_36__34_ExpressionAST bang_literalSInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSInt_36__34_ExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSInt_36__34_ExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @testDynamicClassInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_testDynamicClassInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_testDynamicClassInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_testDynamicClassInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_testDynamicClassInExpressionAST_2D_weak (const class GALGAS_testDynamicClassInExpressionAST & inSource) ;

  public: GALGAS_testDynamicClassInExpressionAST_2D_weak & operator = (const class GALGAS_testDynamicClassInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_testDynamicClassInExpressionAST bang_testDynamicClassInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_testDynamicClassInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_testDynamicClassInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testDynamicClassInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @castInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_castInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_castInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_castInExpressionAST_2D_weak (const class GALGAS_castInExpressionAST & inSource) ;

  public: GALGAS_castInExpressionAST_2D_weak & operator = (const class GALGAS_castInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_castInExpressionAST bang_castInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_castInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_castInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionExpressionAST_2D_weak (const class GALGAS_optionExpressionAST & inSource) ;

  public: GALGAS_optionExpressionAST_2D_weak & operator = (const class GALGAS_optionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionExpressionAST bang_optionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueIntrospectionExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueIntrospectionExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueIntrospectionExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueIntrospectionExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexiqueIntrospectionExpressionAST_2D_weak (const class GALGAS_lexiqueIntrospectionExpressionAST & inSource) ;

  public: GALGAS_lexiqueIntrospectionExpressionAST_2D_weak & operator = (const class GALGAS_lexiqueIntrospectionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexiqueIntrospectionExpressionAST bang_lexiqueIntrospectionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueIntrospectionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueIntrospectionExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueIntrospectionExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperObjectInstanciationInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak (const class GALGAS_filewrapperObjectInstanciationInExpressionAST & inSource) ;

  public: GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak & operator = (const class GALGAS_filewrapperObjectInstanciationInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST bang_filewrapperObjectInstanciationInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperInExpressionAST_2D_weak (const class GALGAS_filewrapperInExpressionAST & inSource) ;

  public: GALGAS_filewrapperInExpressionAST_2D_weak & operator = (const class GALGAS_filewrapperInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperInExpressionAST bang_filewrapperInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperTemplateInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperTemplateInExpressionAST_2D_weak (const class GALGAS_filewrapperTemplateInExpressionAST & inSource) ;

  public: GALGAS_filewrapperTemplateInExpressionAST_2D_weak & operator = (const class GALGAS_filewrapperTemplateInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperTemplateInExpressionAST bang_filewrapperTemplateInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperTemplateInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getterCallExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getterCallExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getterCallExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_getterCallExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getterCallExpressionAST_2D_weak (const class GALGAS_getterCallExpressionAST & inSource) ;

  public: GALGAS_getterCallExpressionAST_2D_weak & operator = (const class GALGAS_getterCallExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getterCallExpressionAST bang_getterCallExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_getterCallExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_getterCallExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_getterCallExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterCallExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constructorExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_constructorExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constructorExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_constructorExpressionAST_2D_weak (const class GALGAS_constructorExpressionAST & inSource) ;

  public: GALGAS_constructorExpressionAST_2D_weak & operator = (const class GALGAS_constructorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_constructorExpressionAST bang_constructorExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constructorExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @defaultConstructorExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_defaultConstructorExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_defaultConstructorExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_defaultConstructorExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_defaultConstructorExpressionAST_2D_weak (const class GALGAS_defaultConstructorExpressionAST & inSource) ;

  public: GALGAS_defaultConstructorExpressionAST_2D_weak & operator = (const class GALGAS_defaultConstructorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_defaultConstructorExpressionAST bang_defaultConstructorExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_defaultConstructorExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_defaultConstructorExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_defaultConstructorExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultConstructorExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultConstructorExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionCallExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionCallExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionCallExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionCallExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionCallExpressionAST_2D_weak (const class GALGAS_functionCallExpressionAST & inSource) ;

  public: GALGAS_functionCallExpressionAST_2D_weak & operator = (const class GALGAS_functionCallExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionCallExpressionAST bang_functionCallExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionCallExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionCallExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionCallExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalTypeInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalTypeInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalTypeInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalTypeInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalTypeInExpressionAST_2D_weak (const class GALGAS_literalTypeInExpressionAST & inSource) ;

  public: GALGAS_literalTypeInExpressionAST_2D_weak & operator = (const class GALGAS_literalTypeInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalTypeInExpressionAST bang_literalTypeInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalTypeInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalTypeInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalTypeInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalTypeInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalTypeInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_collectionValueAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_collectionValueAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_collectionValueAST_2D_weak (const class GALGAS_collectionValueAST & inSource) ;

  public: GALGAS_collectionValueAST_2D_weak & operator = (const class GALGAS_collectionValueAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_collectionValueAST bang_collectionValueAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_collectionValueAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_collectionValueAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_collectionValueAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structPropertyAccessExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structPropertyAccessExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structPropertyAccessExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structPropertyAccessExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structPropertyAccessExpressionAST_2D_weak (const class GALGAS_structPropertyAccessExpressionAST & inSource) ;

  public: GALGAS_structPropertyAccessExpressionAST_2D_weak & operator = (const class GALGAS_structPropertyAccessExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structPropertyAccessExpressionAST bang_structPropertyAccessExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structPropertyAccessExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structPropertyAccessExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structPropertyAccessExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structPropertyAccessExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignmentInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentInstructionAST_2D_weak (const class GALGAS_assignmentInstructionAST & inSource) ;

  public: GALGAS_assignmentInstructionAST_2D_weak & operator = (const class GALGAS_assignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentInstructionAST bang_assignmentInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfPropertyAssignmentInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfPropertyAssignmentInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfPropertyAssignmentInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (const class GALGAS_selfPropertyAssignmentInstructionAST & inSource) ;

  public: GALGAS_selfPropertyAssignmentInstructionAST_2D_weak & operator = (const class GALGAS_selfPropertyAssignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfPropertyAssignmentInstructionAST bang_selfPropertyAssignmentInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfPropertyAssignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfPropertyAssignmentInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfPropertyAssignmentInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2D_weak ;

