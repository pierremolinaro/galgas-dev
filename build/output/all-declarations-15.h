#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractExtensionMethodForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionMethodForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionMethodForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractExtensionMethodForGeneration (const class cPtr_abstractExtensionMethodForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_string readProperty_mAbstractExtensionMethodName (void) const ;

  public: class GGS_formalParameterListForGeneration readProperty_mAbstractExtensionMethodFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractExtensionMethodForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                           const class GGS_string & inOperand1,
                                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                           const class GGS_string & inOperand3,
                                                                                                                           const class GGS_formalParameterListForGeneration & inOperand4,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractExtensionMethodForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractExtensionMethodForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractExtensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                     const class GGS_string & inOperand1,
                                                                                                                     const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                     const class GGS_string & inOperand3,
                                                                                                                     const class GGS_formalParameterListForGeneration & inOperand4,
                                                                                                                     Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_string mProperty_mAbstractExtensionMethodName ;
  public: GGS_formalParameterListForGeneration mProperty_mAbstractExtensionMethodFormalParameterList ;


//--- Default constructor
  public: cPtr_abstractExtensionMethodForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractExtensionMethodForGeneration (const GGS_bool & in_generateHeader,
                                                     const GGS_string & in_implementationCppFileName,
                                                     const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                     const GGS_string & in_mAbstractExtensionMethodName,
                                                     const GGS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList,
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
// Phase 1: @abstractExtensionMethodForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionMethodForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionMethodForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractExtensionMethodForGeneration_2E_weak (const class GGS_abstractExtensionMethodForGeneration & inSource) ;

  public: GGS_abstractExtensionMethodForGeneration_2E_weak & operator = (const class GGS_abstractExtensionMethodForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractExtensionMethodForGeneration_2E_weak init_nil (void) {
    GGS_abstractExtensionMethodForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractExtensionMethodForGeneration bang_abstractExtensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractExtensionMethodForGeneration unwrappedValue (void) const ;

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
  public: static GGS_abstractExtensionMethodForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractExtensionMethodForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionMethodForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionMethodForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_extensionMethodForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionMethodForGeneration (const class cPtr_extensionMethodForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_string readProperty_mExtensionMethodName (void) const ;

  public: class GGS_bool readProperty_mImplementedAsFunction (void) const ;

  public: class GGS_formalParameterListForGeneration readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                               const class GGS_string & inOperand1,
                                                                                                                               const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                               const class GGS_string & inOperand3,
                                                                                                                               const class GGS_bool & inOperand4,
                                                                                                                               const class GGS_formalParameterListForGeneration & inOperand5,
                                                                                                                               const class GGS_typedPropertyList & inOperand6,
                                                                                                                               const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodForGeneration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @extensionMethodForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_extensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                         const class GGS_string & inOperand1,
                                                                                                                         const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                         const class GGS_string & inOperand3,
                                                                                                                         const class GGS_bool & inOperand4,
                                                                                                                         const class GGS_formalParameterListForGeneration & inOperand5,
                                                                                                                         const class GGS_typedPropertyList & inOperand6,
                                                                                                                         const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                         Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_string mProperty_mExtensionMethodName ;
  public: GGS_bool mProperty_mImplementedAsFunction ;
  public: GGS_formalParameterListForGeneration mProperty_mExtensionMethodFormalParameterList ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_extensionMethodForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionMethodForGeneration (const GGS_bool & in_generateHeader,
                                             const GGS_string & in_implementationCppFileName,
                                             const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                             const GGS_string & in_mExtensionMethodName,
                                             const GGS_bool & in_mImplementedAsFunction,
                                             const GGS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                             const GGS_typedPropertyList & in_mTypedAttributeList,
                                             const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
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
// Phase 1: @extensionMethodForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionMethodForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionMethodForGeneration_2E_weak (const class GGS_extensionMethodForGeneration & inSource) ;

  public: GGS_extensionMethodForGeneration_2E_weak & operator = (const class GGS_extensionMethodForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionMethodForGeneration_2E_weak init_nil (void) {
    GGS_extensionMethodForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionMethodForGeneration bang_extensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extensionMethodForGeneration unwrappedValue (void) const ;

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
  public: static GGS_extensionMethodForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionMethodForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis.element displayRuleVertically'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const class GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                            const class GGS_string constin_inSyntaxComponentName,
                                            class GGS_string & io_ioGeneratedCode,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_escapeForTex (const class GGS_string & constinArgument0,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       class GGS_rowList & io_ioRowList,
                                                       const class GGS_uint constin_inRow,
                                                       class GGS_uint & io_ioColumn,
                                                       class GGS_string & io_ioCurrentNode,
                                                       class GGS_string & io_ioArrowShape,
                                                       class GGS_string & io_ioArrows,
                                                       class GGS_uint & io_ioMaxUsedRowIndex,
                                                       const class GGS_bool constin_inDebug,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_tikzNodeForSyntaxInstruction (const class GGS_syntaxInstructionListForGrammarAnalysis inObject,
                                                   class GGS_rowList & io_ioRowList,
                                                   const class GGS_uint constin_inRow,
                                                   class GGS_uint & io_ioColumn,
                                                   class GGS_string & io_ioCurrentNode,
                                                   class GGS_string & io_ioArrowShape,
                                                   class GGS_string & io_ioArrows,
                                                   class GGS_uint & io_ioMaxUsedRowIndex,
                                                   const class GGS_bool constin_inDebug,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStructuredSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStructuredSendInstructionAST : public GGS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalStructuredSendInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalStructuredSendInstructionAST (const class cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalSendSearchListAST readProperty_mLexicalSendSearchList (void) const ;

  public: class GGS_lexicalSendDefaultActionAST readProperty_mLexicalSendDefaultAction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStructuredSendInstructionAST init_21__21_ (const class GGS_lexicalSendSearchListAST & inOperand0,
                                                                       const class GGS_lexicalSendDefaultActionAST & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalStructuredSendInstructionAST extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStructuredSendInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalStructuredSendInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStructuredSendInstructionAST : public cPtr_lexicalInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalStructuredSendInstructionAST_init_21__21_ (const class GGS_lexicalSendSearchListAST & inOperand0,
                                                                 const class GGS_lexicalSendDefaultActionAST & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GGS_string getter_generateLexicalInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GGS_string getter_generateSwiftCocoaInstructionCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GGS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GGS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalSendSearchListAST mProperty_mLexicalSendSearchList ;
  public: GGS_lexicalSendDefaultActionAST mProperty_mLexicalSendDefaultAction ;


//--- Default constructor
  public: cPtr_lexicalStructuredSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalStructuredSendInstructionAST (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                    const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
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
// Phase 1: @lexicalStructuredSendInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStructuredSendInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalStructuredSendInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalStructuredSendInstructionAST_2E_weak (const class GGS_lexicalStructuredSendInstructionAST & inSource) ;

  public: GGS_lexicalStructuredSendInstructionAST_2E_weak & operator = (const class GGS_lexicalStructuredSendInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalStructuredSendInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalStructuredSendInstructionAST bang_lexicalStructuredSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalStructuredSendInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalStructuredSendInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalStructuredSendInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStructuredSendInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ExpressionSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ExpressionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ExpressionSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_expression_5F_and_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_semanticExpressionAST & outArgument1,
                                                            class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_semanticExpressionAST & outArgument1,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                 class GGS_semanticExpressionAST & outArgument1,
                                                 class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_5F_ggs_33__ (class GGS_lstring & outArgument0,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                       class GGS_actualOutputArgumentList & outArgument1,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_actualOutputArgumentList & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_semanticExpressionAST & outArgument1,
                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_semanticExpressionAST & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_semanticExpressionAST & outArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_term_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                               class GGS_semanticExpressionAST & outArgument1,
                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_term_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i1_ (GGS_lstring & outArgument0,
                                                                                   Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                               GGS_actualOutputArgumentList & outArgument1,
                                                                                               Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                   GGS_actualOutputArgumentList & outArgument1,
                                                                                                   Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i6_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i13_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS_semanticExpressionAST & outArgument1,
                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                              GGS_semanticExpressionAST & outArgument1,
                                                                              Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_semanticExpressionAST & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticExpressionAST & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i30_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                      GGS_semanticExpressionAST & outArgument1,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i33_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i34_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                     GGS_semanticExpressionAST & outArgument1,
                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i37_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ExpressionSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ParameterArgumentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ParameterArgumentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                      class GGS_actualParameterListAST & outArgument1,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                   class GGS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__ (class GGS_lstringlist & outArgument0,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                         GGS_formalParameterListAST & outArgument1,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_actualParameterListAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                              GGS_formalInputParameterListAST & outArgument1,
                                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                  GGS_formalInputParameterListAST & outArgument1,
                                                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_ (GGS_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_ (GGS_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3InstructionsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_InstructionsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_actualInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                      class GGS_actualParameterListAST & outArgument1,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_comma_5F_separated_5F_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_CommaSeparatedExpressionList & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_comma_5F_separated_5F_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_semanticExpressionAST & outArgument1,
                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                   class GGS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__ (const class GGS_bool constinArgument0,
                                                                  const class GGS_bool constinArgument1,
                                                                  const class GGS_bool constinArgument2,
                                                                  const class GGS_lstring constinArgument3,
                                                                  class GGS_galgasDeclarationAST & ioArgument4,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                              const class GGS_location constinArgument1,
                                                              const class GGS_actualParameterListAST constinArgument2,
                                                              const class GGS_lstring constinArgument3,
                                                              const class GGS_lstring constinArgument4,
                                                              class GGS_semanticInstructionAST & outArgument5,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          const class GGS_location constinArgument1,
                                                                          const class GGS_lstring constinArgument2,
                                                                          const class GGS_lstring constinArgument3,
                                                                          class GGS_semanticInstructionAST & outArgument4,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                         class GGS_semanticInstructionAST & outArgument1,
                                                         class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS_fixitListAST & outArgument1,
                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                       class GGS_actualOutputArgumentList & outArgument1,
                                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                       class GGS_actualOutputArgumentList & outArgument1,
                                                                       class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_actualOutputArgumentList & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                          const class GGS_bool constinArgument1,
                                                                                          class GGS_semanticInstructionAST & outArgument2,
                                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                  class GGS_semanticInstructionAST & outArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS__5B_lstring_5D_ & outArgument1,
                                              class GGS_switchExtractedValuesListAST & outArgument2,
                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                    GGS_semanticInstructionListAST & outArgument1,
                                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_ (const GGS_bool constinArgument0,
                                                                                            const GGS_bool constinArgument1,
                                                                                            const GGS_bool constinArgument2,
                                                                                            const GGS_lstring constinArgument3,
                                                                                            GGS_galgasDeclarationAST & ioArgument4,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_ (const GGS_bool constinArgument0,
                                                                                            const GGS_bool constinArgument1,
                                                                                            const GGS_bool constinArgument2,
                                                                                            const GGS_lstring constinArgument3,
                                                                                            GGS_galgasDeclarationAST & ioArgument4,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                         GGS_actualInputParameterListAST & outArgument1,
                                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                            GGS_semanticInstructionAST & outArgument1,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                            GGS_semanticInstructionAST & outArgument1,
                                                                                            Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS_fixitListAST & outArgument1,
                                                                         Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i10_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                     const GGS_bool constinArgument1,
                                                                                                                     GGS_semanticInstructionAST & outArgument2,
                                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i20_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                  GGS_actualOutputArgumentList & outArgument1,
                                                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                      GGS_CommaSeparatedExpressionList & outArgument1,
                                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS_actualParameterListAST constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS_actualParameterListAST constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     const GGS_location constinArgument1,
                                                                                                     const GGS_lstring constinArgument2,
                                                                                                     const GGS_lstring constinArgument3,
                                                                                                     GGS_semanticInstructionAST & outArgument4,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i28_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     const GGS_location constinArgument1,
                                                                                                     const GGS_lstring constinArgument2,
                                                                                                     const GGS_lstring constinArgument3,
                                                                                                     GGS_semanticInstructionAST & outArgument4,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i29_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i31_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticInstructionAST & outArgument1,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i32_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS__5B_lstring_5D_ & outArgument1,
                                                                         GGS_switchExtractedValuesListAST & outArgument2,
                                                                         Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i35_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i36_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i37_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i38_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i39_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i39_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i39_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_semanticInstructionAST & outArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i56_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i57_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i57_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_InstructionsSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_38 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_39 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_40 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_41 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_42 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_43 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_44 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_45 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_46 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_47 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_48 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_49 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_50 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_51 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_52 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_53 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_54 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_55 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_56 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_57 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_58 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_59 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_60 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_61 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_62 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_63 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_64 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_65 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_66 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_67 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_logInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_logInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_logInstructionAST (const class cPtr_logInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_logListAST readProperty_mLogList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_logListAST & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logInstructionAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @logInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_logInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void logInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                               const class GGS_logListAST & inOperand1,
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
  public: GGS_logListAST mProperty_mLogList ;


//--- Default constructor
  public: cPtr_logInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_logInstructionAST (const GGS_location & in_mInstructionLocation,
                                  const GGS_logListAST & in_mLogList,
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
//Parser class 'galgas3DeclarationsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_DeclarationsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_acces_5F_control_ (class GGS_AccessControlAST & outArgument0,
                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_semanticExpressionAST & outArgument1,
                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_externTypeConstructorList & ioArgument1,
                                                                    class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GGS_string & outArgument0,
                                                                     class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GGS_string & outArgument0,
                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_externTypeGetterList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_externTypeMethodList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_externTypeSetterList & ioArgument1,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GGS_lstringlist & outArgument0,
                                                              class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                        class GGS_filewrapperTemplateListAST & outArgument1,
                                                        class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GGS_lstringlist & outArgument0,
                                                            class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                               class GGS_formalInputParameterListAST & outArgument1,
                                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                   class GGS_formalInputParameterListAST & outArgument1,
                                                                                   class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_formalParameterListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GGS_insertSetterListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__ (const class GGS_lstring constinArgument0,
                                                                class GGS_galgasDeclarationAST & ioArgument1,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                  class GGS_propertyInCollectionListAST & ioArgument1,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                               class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subscript_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subscript_5F_declaration_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_semanticInstructionListAST & outArgument1,
                                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                          class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class Lexique_galgasScanner_33_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_5F_ggs_33__indexing (class Lexique_galgasScanner_33_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument0,
                                                                                      Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument0,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_filewrapperTemplateListAST & outArgument1,
                                                                                  Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i6_ (GGS_AccessControlAST & outArgument0,
                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i6_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_acces_5F_control_i6_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i8_ (const GGS_lstring constinArgument0,
                                                                                          GGS_galgasDeclarationAST & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i10_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i12_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i13_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i14_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i16_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i18_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i20_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i22_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i24_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i26_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i26_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i28_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i31_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i31_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i33_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i33_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_propertyInCollectionListAST & ioArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i37_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                             GGS_propertyInCollectionListAST & ioArgument1,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i41_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i41_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i42_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i43_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i44_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_lstring & outArgument1,
                                                                                        Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i47_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i47_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i47_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i48_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i48_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i48_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i49_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i49_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i49_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i50_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i50_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i50_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i51_ (GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i51_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i51_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i52_ (GGS_insertSetterListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i52_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i52_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i56_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i56_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i57_ (GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i57_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i57_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i58_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i58_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i59_ (GGS_string & outArgument0,
                                                                                              Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i59_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i59_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i60_ (GGS_string & outArgument0,
                                                                                                Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i60_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i60_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i61_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                               GGS_externTypeConstructorList & ioArgument1,
                                                                                               Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i61_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i61_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i62_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_externTypeGetterList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i62_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i63_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_externTypeSetterList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i63_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i63_indexing (Lexique_galgasScanner_33_ * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i64_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_externTypeMethodList & ioArgument1,
                                                                                          Lexique_galgasScanner_33_ * inLexique) ;

/*  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i64_parse (Lexique_galgasScanner_33_ * inLexique) ; */

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i64_indexing (Lexique_galgasScanner_33_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_0 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_1 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_2 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_3 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_4 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_5 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_6 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_7 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_8 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_9 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_10 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_11 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_12 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_13 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_14 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_15 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_16 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_17 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_18 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_19 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_20 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_21 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_22 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_23 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_24 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_25 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_26 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_27 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_28 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_29 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_30 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_31 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_32 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_33 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_34 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_35 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_36 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_37 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_38 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_39 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_40 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_41 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_42 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_43 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_44 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_45 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_46 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_47 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_48 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_49 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_50 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_51 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_52 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_53 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_54 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_55 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_56 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_57 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_58 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_59 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_60 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_61 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_62 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_63 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_64 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_65 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_66 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_67 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_68 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_69 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_70 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_71 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_72 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_73 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_74 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_75 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_76 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_77 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_78 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_79 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_80 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_81 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_82 (Lexique_galgasScanner_33_ *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_83 (Lexique_galgasScanner_33_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeArrayTypeLName (const class GGS_lstring & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeEmbeddedTypeLName (const class GGS_lstring & constinArgument0,
                                                  const class GGS_lstring & constinArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeWeakTypeLName (const class GGS_lstring & constinArgument0,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (class GGS_galgasDeclarationAST & ioObject,
                                          class GGS_lstring & out_outOptionalTypeName,
                                          const class GGS_lstring constin_inTypeName,
                                          const class GGS_bool constin_inPredefined,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

