#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_procCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_procCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_procCallInstructionAST_2E_weak (const class GGS_procCallInstructionAST & inSource) ;

  public: GGS_procCallInstructionAST_2E_weak & operator = (const class GGS_procCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_procCallInstructionAST_2E_weak init_nil (void) {
    GGS_procCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_procCallInstructionAST bang_procCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_procCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_procCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_routineMap & ioObject,
                                const class GGS_lstring constin_inRoutineName,
                                const class GGS_formalParameterSignature constin_inRoutineSignature,
                                const class GGS_bool constin_inIsFilePrivate,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeOptionalTypeLName (const class GGS_lstring & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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

