#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overrideExtensionGetterForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideExtensionGetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_overrideExtensionGetterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_overrideExtensionGetterForGeneration (const class cPtr_overrideExtensionGetterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mBaseTypeName (void) const ;

  public: class GALGAS_string readProperty_mOverridingExtensionGetterName (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mResultType (void) const ;

  public: class GALGAS_string readProperty_mResultVarCppName (void) const ;

  public: class GALGAS_formalInputParameterListForGeneration readProperty_mOverridingExtensionGetterFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overrideExtensionGetterForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                                  const class GALGAS_string & inOperand1,
                                                                                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                                  const class GALGAS_string & inOperand3,
                                                                                                                                                  const class GALGAS_string & inOperand4,
                                                                                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                                                                                  const class GALGAS_string & inOperand6,
                                                                                                                                                  const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                                                                                                  const class GALGAS_typedPropertyList & inOperand8,
                                                                                                                                                  const class GALGAS_semanticInstructionListForGeneration & inOperand9,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overrideExtensionGetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overrideExtensionGetterForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   const class GALGAS_string & inOperand4,
                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                   const class GALGAS_string & inOperand6,
                                                                                   const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                                   const class GALGAS_typedPropertyList & inOperand8,
                                                                                   const class GALGAS_semanticInstructionListForGeneration & inOperand9
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overrideExtensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overrideExtensionGetterForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overrideExtensionGetterForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overrideExtensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overrideExtensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                         const class GALGAS_string & inOperand1,
                                                                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                         const class GALGAS_string & inOperand3,
                                                                                                                                         const class GALGAS_string & inOperand4,
                                                                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                                                                         const class GALGAS_string & inOperand6,
                                                                                                                                         const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                                                                                         const class GALGAS_typedPropertyList & inOperand8,
                                                                                                                                         const class GALGAS_semanticInstructionListForGeneration & inOperand9,
                                                                                                                                         Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mBaseTypeName ;
  public: GALGAS_string mProperty_mOverridingExtensionGetterName ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GALGAS_string mProperty_mResultVarCppName ;
  public: GALGAS_formalInputParameterListForGeneration mProperty_mOverridingExtensionGetterFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_overrideExtensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overrideExtensionGetterForGeneration (const GALGAS_bool & in_generateHeader,
                                                     const GALGAS_string & in_implementationCppFileName,
                                                     const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                     const GALGAS_string & in_mBaseTypeName,
                                                     const GALGAS_string & in_mOverridingExtensionGetterName,
                                                     const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_string & in_mResultVarCppName,
                                                     const GALGAS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                     const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overrideExtensionGetterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideExtensionGetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overrideExtensionGetterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overrideExtensionGetterForGeneration_2D_weak (const class GALGAS_overrideExtensionGetterForGeneration & inSource) ;

  public: GALGAS_overrideExtensionGetterForGeneration_2D_weak & operator = (const class GALGAS_overrideExtensionGetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overrideExtensionGetterForGeneration bang_overrideExtensionGetterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overrideExtensionGetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overrideExtensionGetterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overrideExtensionGetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overrideExtensionGetterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionMethodForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionMethodForGeneration (const class cPtr_overridingExtensionMethodForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mBaseTypeName (void) const ;

  public: class GALGAS_string readProperty_mExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overridingExtensionMethodForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                            const class GALGAS_string & inOperand1,
                                                                                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                            const class GALGAS_string & inOperand3,
                                                                                                                                            const class GALGAS_string & inOperand4,
                                                                                                                                            const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                                                                            const class GALGAS_typedPropertyList & inOperand6,
                                                                                                                                            const class GALGAS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionMethodForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                     const class GALGAS_string & inOperand3,
                                                                                     const class GALGAS_string & inOperand4,
                                                                                     const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                     const class GALGAS_typedPropertyList & inOperand6,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionMethodForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionMethodForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingExtensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                   const class GALGAS_string & inOperand1,
                                                                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                   const class GALGAS_string & inOperand3,
                                                                                                                                   const class GALGAS_string & inOperand4,
                                                                                                                                   const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                                                                   const class GALGAS_typedPropertyList & inOperand6,
                                                                                                                                   const class GALGAS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                                   Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mBaseTypeName ;
  public: GALGAS_string mProperty_mExtensionMethodName ;
  public: GALGAS_formalParameterListForGeneration mProperty_mExtensionMethodFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_overridingExtensionMethodForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionMethodForGeneration (const GALGAS_bool & in_generateHeader,
                                                       const GALGAS_string & in_implementationCppFileName,
                                                       const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                       const GALGAS_string & in_mBaseTypeName,
                                                       const GALGAS_string & in_mExtensionMethodName,
                                                       const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                       const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                       const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionMethodForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionMethodForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionMethodForGeneration_2D_weak (const class GALGAS_overridingExtensionMethodForGeneration & inSource) ;

  public: GALGAS_overridingExtensionMethodForGeneration_2D_weak & operator = (const class GALGAS_overridingExtensionMethodForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionMethodForGeneration bang_overridingExtensionMethodForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionMethodForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionMethodForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionMethodForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionMethodForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionSetterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionSetterForGeneration (const class cPtr_overridingExtensionSetterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mBaseTypeName (void) const ;

  public: class GALGAS_string readProperty_mExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mExtensionSetterFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overridingExtensionSetterForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                            const class GALGAS_string & inOperand1,
                                                                                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                            const class GALGAS_string & inOperand3,
                                                                                                                                            const class GALGAS_string & inOperand4,
                                                                                                                                            const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                                                                            const class GALGAS_typedPropertyList & inOperand6,
                                                                                                                                            const class GALGAS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionSetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionSetterForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                     const class GALGAS_string & inOperand3,
                                                                                     const class GALGAS_string & inOperand4,
                                                                                     const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                     const class GALGAS_typedPropertyList & inOperand6,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionSetterForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionSetterForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingExtensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                   const class GALGAS_string & inOperand1,
                                                                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                   const class GALGAS_string & inOperand3,
                                                                                                                                   const class GALGAS_string & inOperand4,
                                                                                                                                   const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                                                                   const class GALGAS_typedPropertyList & inOperand6,
                                                                                                                                   const class GALGAS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                                   Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mBaseTypeName ;
  public: GALGAS_string mProperty_mExtensionSetterName ;
  public: GALGAS_formalParameterListForGeneration mProperty_mExtensionSetterFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_overridingExtensionSetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionSetterForGeneration (const GALGAS_bool & in_generateHeader,
                                                       const GALGAS_string & in_implementationCppFileName,
                                                       const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                       const GALGAS_string & in_mBaseTypeName,
                                                       const GALGAS_string & in_mExtensionSetterName,
                                                       const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                       const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                       const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionSetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionSetterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionSetterForGeneration_2D_weak (const class GALGAS_overridingExtensionSetterForGeneration & inSource) ;

  public: GALGAS_overridingExtensionSetterForGeneration_2D_weak & operator = (const class GALGAS_overridingExtensionSetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionSetterForGeneration bang_overridingExtensionSetterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionSetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overridingExtensionSetterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_overridingExtensionSetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionSetterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum callExtensionGetter_typeKind (const cPtr_predefinedTypeAST * inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInitializedLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (class GALGAS_localVarManager & ioObject,
                                                     const class GALGAS_lstring constin_inVarName,
                                                     const class GALGAS_bool constin_inWarnsIfNotMutated,
                                                     const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                     const class GALGAS_string constin_inCppName,
                                                     const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (class GALGAS_localVarManager & ioObject,
                                              const class GALGAS_lstring constin_inVarName,
                                              const class GALGAS_unifiedTypeMapEntry constin_inType,
                                              const class GALGAS_string constin_inCppName,
                                              const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInitializedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (class GALGAS_localVarManager & ioObject,
                                                     const class GALGAS_lstring constin_inVarName,
                                                     const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                     const class GALGAS_string constin_inCppName,
                                                     const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertDeclaredLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (class GALGAS_localVarManager & ioObject,
                                                  const class GALGAS_lstring constin_inVarName,
                                                  const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                  const class GALGAS_string constin_inCppName,
                                                  const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (class GALGAS_localVarManager & ioObject,
                                                                const class GALGAS_lstring constin_inVarName,
                                                                const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                                const class GALGAS_string constin_inCppName,
                                                                const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (class GALGAS_localVarManager & ioObject,
                                                const class GALGAS_lstring constin_inVarName,
                                                const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                const class GALGAS_string constin_inCppName,
                                                const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (class GALGAS_localVarManager & ioObject,
                                                                        const class GALGAS_lstring constin_inVarName,
                                                                        const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                                        const class GALGAS_string constin_inCppName,
                                                                        const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertConstantInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (class GALGAS_localVarManager & ioObject,
                                                        const class GALGAS_lstring constin_inVarName,
                                                        const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                        const class GALGAS_string constin_inCppName,
                                                        const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (class GALGAS_localVarManager & ioObject,
                                                 const class GALGAS_lstring constin_inVarName,
                                                 const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                 const class GALGAS_string constin_inCppName,
                                                 const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (class GALGAS_localVarManager & ioObject,
                                                                      const class GALGAS_lstring constin_inVarName,
                                                                      const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                                      const class GALGAS_string constin_inCppName,
                                                                      const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (class GALGAS_localVarManager & ioObject,
                                                      const class GALGAS_lstring constin_inVarName,
                                                      const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                      const class GALGAS_string constin_inCppName,
                                                      const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertNonMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (class GALGAS_localVarManager & ioObject,
                                               const class GALGAS_lstring constin_inVarName,
                                               const class GALGAS_unifiedTypeMapEntry constin_inType,
                                               const class GALGAS_string constin_inCppName,
                                               const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (class GALGAS_localVarManager & ioObject,
                                            const class GALGAS_lstring constin_inVarName,
                                            const class GALGAS_unifiedTypeMapEntry constin_inType,
                                            const class GALGAS_string constin_inCppName,
                                            const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInitializerSelfProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializerSelfProperty (class GALGAS_localVarManager & ioObject,
                                                    const class GALGAS_string constin_inPropertyName,
                                                    const class GALGAS_location constin_inErrorLocation,
                                                    const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                    const class GALGAS_string constin_inCppName,
                                                    const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                    const class GALGAS_bool constin_inInitialized,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (class GALGAS_localVarManager & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (class GALGAS_localVarManager & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (class GALGAS_localVarManager & ioObject,
                                    const class GALGAS_location constin_inEndOfBranchLocation,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GALGAS_localVarManager & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (class GALGAS_localVarManager & ioObject,
                                  const class GALGAS_location constin_inEndOfBranchLocation,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const class GALGAS_localVarManager inObject,
                                                        const class GALGAS_location constin_inErrorLocation,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GALGAS_localVarManager & ioObject,
                                    const class GALGAS_lstring constin_inVarName,
                                    class GALGAS_unifiedTypeMapEntry & out_outType,
                                    class GALGAS_string & out_outCppName,
                                    class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (class GALGAS_localVarManager & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (class GALGAS_localVarManager & ioObject,
                                           const class GALGAS_lstring constin_inVarName,
                                           class GALGAS_unifiedTypeMapEntry & out_outType,
                                           class GALGAS_string & out_outCppName,
                                           class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (class GALGAS_localVarManager & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          class GALGAS_unifiedTypeMapEntry & out_outType,
                                          class GALGAS_string & out_outCppName,
                                          class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (class GALGAS_localVarManager & ioObject,
                                               const class GALGAS_lstring constin_inVarName,
                                               class GALGAS_unifiedTypeMapEntry & out_outType,
                                               class GALGAS_string & out_outCppName,
                                               class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const class GALGAS_localVarManager inObject,
                                           const class GALGAS_location constin_inErrorLocation,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap unsolvedEntryList' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstringlist extensionGetter_unsolvedEntryList (const class GALGAS_unifiedTypeMap & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualParameterListAST analyzeRoutineArguments'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineArguments (const class GALGAS_actualParameterListAST inObject,
                                              const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                              class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                              const class GALGAS_analysisContext constin_inAnalysisContext,
                                              class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                              const class GALGAS_lstring constin_inRoutineName,
                                              const class GALGAS_string constin_inInvokedEntityName,
                                              const class GALGAS_formalParameterSignature constin_inRoutineSignature,
                                              class GALGAS_localVarManager & io_ioVariableMap,
                                              class GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                              class GALGAS_actualParameterListForGeneration & out_outActualParameterListForGeneration,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routinePrototypeDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routinePrototypeDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_routinePrototypeDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_routinePrototypeDeclarationForGeneration (const class cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_routineMangledName (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mFormalArgumentList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routinePrototypeDeclarationForGeneration init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                                const class GALGAS_string & inOperand1,
                                                                                                                                                const class GALGAS_string & inOperand2,
                                                                                                                                                const class GALGAS_formalParameterListForGeneration & inOperand3,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routinePrototypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routinePrototypeDeclarationForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_string & inOperand2,
                                                                                       const class GALGAS_formalParameterListForGeneration & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routinePrototypeDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @routinePrototypeDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_routinePrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void routinePrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                       const class GALGAS_string & inOperand1,
                                                                                                                                       const class GALGAS_string & inOperand2,
                                                                                                                                       const class GALGAS_formalParameterListForGeneration & inOperand3,
                                                                                                                                       Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_routineMangledName ;
  public: GALGAS_formalParameterListForGeneration mProperty_mFormalArgumentList ;


//--- Default constructor
  public: cPtr_routinePrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_routinePrototypeDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                         const GALGAS_string & in_implementationCppFileName,
                                                         const GALGAS_string & in_routineMangledName,
                                                         const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routinePrototypeDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routinePrototypeDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (const class GALGAS_routinePrototypeDeclarationForGeneration & inSource) ;

  public: GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & operator = (const class GALGAS_routinePrototypeDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_routinePrototypeDeclarationForGeneration bang_routinePrototypeDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routinePrototypeDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routinePrototypeDeclarationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routinePrototypeDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineImplementationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineImplementationForGeneration : public GALGAS_routinePrototypeDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_routineImplementationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_routineImplementationForGeneration (const class cPtr_routineImplementationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mGenerateStatic (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mRoutineInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineImplementationForGeneration init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                                  const class GALGAS_string & inOperand1,
                                                                                                                                                  const class GALGAS_string & inOperand2,
                                                                                                                                                  const class GALGAS_formalParameterListForGeneration & inOperand3,
                                                                                                                                                  const class GALGAS_bool & inOperand4,
                                                                                                                                                  const class GALGAS_semanticInstructionListForGeneration & inOperand5,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineImplementationForGeneration extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineImplementationForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_string & inOperand2,
                                                                                 const class GALGAS_formalParameterListForGeneration & inOperand3,
                                                                                 const class GALGAS_bool & inOperand4,
                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineImplementationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineImplementationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @routineImplementationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_routineImplementationForGeneration : public cPtr_routinePrototypeDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void routineImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                         const class GALGAS_string & inOperand1,
                                                                                                                                         const class GALGAS_string & inOperand2,
                                                                                                                                         const class GALGAS_formalParameterListForGeneration & inOperand3,
                                                                                                                                         const class GALGAS_bool & inOperand4,
                                                                                                                                         const class GALGAS_semanticInstructionListForGeneration & inOperand5,
                                                                                                                                         Compiler * inCompiler) ;


//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mGenerateStatic ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mRoutineInstructionList ;


//--- Default constructor
  public: cPtr_routineImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_routineImplementationForGeneration (const GALGAS_bool & in_generateHeader,
                                                   const GALGAS_string & in_implementationCppFileName,
                                                   const GALGAS_string & in_routineMangledName,
                                                   const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                   const GALGAS_bool & in_mGenerateStatic,
                                                   const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineImplementationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineImplementationForGeneration_2D_weak : public GALGAS_routinePrototypeDeclarationForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_routineImplementationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_routineImplementationForGeneration_2D_weak (const class GALGAS_routineImplementationForGeneration & inSource) ;

  public: GALGAS_routineImplementationForGeneration_2D_weak & operator = (const class GALGAS_routineImplementationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_routineImplementationForGeneration bang_routineImplementationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineImplementationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineImplementationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineImplementationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineImplementationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap searchKey'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const class GALGAS_routineMap inObject,
                                const class GALGAS_lstring constin_inRoutineName,
                                class GALGAS_actualParameterListAST in_inActualParameterList,
                                class GALGAS_formalParameterSignature & out_outRoutineSignature,
                                class GALGAS_bool & out_outIsFilePrivate,
                                class GALGAS_lstring & out_outRoutineMangledName,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_routineArgumentFromFormalParameters (const class GALGAS_formalParameterSignature & constinArgument0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_routineMangledName (const class GALGAS_lstring & constinArgument0,
                                                  const class GALGAS_formalParameterSignature & constinArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineMap locationForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_location extensionGetter_locationForKey (const class GALGAS_routineMap & inObject,
                                                      const class GALGAS_string & constinArgument0,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexiqueDeclarationForGeneration (const class cPtr_lexiqueDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLexiqueName (void) const ;

  public: class GALGAS_string readProperty_mSuperLexiqueName (void) const ;

  public: class GALGAS_string readProperty_mHeaderContents (void) const ;

  public: class GALGAS_string readProperty_mCppContents (void) const ;

  public: class GALGAS_string readProperty_mObjcCocoaHeader (void) const ;

  public: class GALGAS_string readProperty_mObjcCocoaImplementation (void) const ;

  public: class GALGAS_string readProperty_mSwiftCocoaImplementation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexiqueDeclarationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                         const class GALGAS_string & inOperand1,
                                                                                                                                         const class GALGAS_string & inOperand2,
                                                                                                                                         const class GALGAS_string & inOperand3,
                                                                                                                                         const class GALGAS_string & inOperand4,
                                                                                                                                         const class GALGAS_string & inOperand5,
                                                                                                                                         const class GALGAS_string & inOperand6,
                                                                                                                                         const class GALGAS_string & inOperand7,
                                                                                                                                         const class GALGAS_string & inOperand8,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueDeclarationForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_string & inOperand4,
                                                                              const class GALGAS_string & inOperand5,
                                                                              const class GALGAS_string & inOperand6,
                                                                              const class GALGAS_string & inOperand7,
                                                                              const class GALGAS_string & inOperand8
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexiqueDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexiqueDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexiqueDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexiqueDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexiqueDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                const class GALGAS_string & inOperand1,
                                                                                                                                const class GALGAS_string & inOperand2,
                                                                                                                                const class GALGAS_string & inOperand3,
                                                                                                                                const class GALGAS_string & inOperand4,
                                                                                                                                const class GALGAS_string & inOperand5,
                                                                                                                                const class GALGAS_string & inOperand6,
                                                                                                                                const class GALGAS_string & inOperand7,
                                                                                                                                const class GALGAS_string & inOperand8,
                                                                                                                                Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GALGAS_string arg_inProductDirectory,
           class GALGAS_stringset & arg_ioAllProductFileSet,
           class GALGAS_stringlist & arg_ioCocoaProductFileList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLexiqueName ;
  public: GALGAS_string mProperty_mSuperLexiqueName ;
  public: GALGAS_string mProperty_mHeaderContents ;
  public: GALGAS_string mProperty_mCppContents ;
  public: GALGAS_string mProperty_mObjcCocoaHeader ;
  public: GALGAS_string mProperty_mObjcCocoaImplementation ;
  public: GALGAS_string mProperty_mSwiftCocoaImplementation ;


//--- Default constructor
  public: cPtr_lexiqueDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexiqueDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                const GALGAS_string & in_implementationCppFileName,
                                                const GALGAS_string & in_mLexiqueName,
                                                const GALGAS_string & in_mSuperLexiqueName,
                                                const GALGAS_string & in_mHeaderContents,
                                                const GALGAS_string & in_mCppContents,
                                                const GALGAS_string & in_mObjcCocoaHeader,
                                                const GALGAS_string & in_mObjcCocoaImplementation,
                                                const GALGAS_string & in_mSwiftCocoaImplementation
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexiqueDeclarationForGeneration_2D_weak (const class GALGAS_lexiqueDeclarationForGeneration & inSource) ;

  public: GALGAS_lexiqueDeclarationForGeneration_2D_weak & operator = (const class GALGAS_lexiqueDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexiqueDeclarationForGeneration bang_lexiqueDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueDeclarationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexiqueDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexiqueDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionPrototypeDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionPrototypeDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_functionPrototypeDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_functionPrototypeDeclarationForGeneration (const class cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mFunctionName (void) const ;

  public: class GALGAS_formalInputParameterListForGeneration readProperty_mFormalArgumentList (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReturnType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_functionPrototypeDeclarationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                   const class GALGAS_string & inOperand1,
                                                                                                                                   const class GALGAS_string & inOperand2,
                                                                                                                                   const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionPrototypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionPrototypeDeclarationForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                        const class GALGAS_string & inOperand1,
                                                                                        const class GALGAS_string & inOperand2,
                                                                                        const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                                        const class GALGAS_unifiedTypeMapEntry & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionPrototypeDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionPrototypeDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_functionPrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                          const class GALGAS_string & inOperand1,
                                                                                                                          const class GALGAS_string & inOperand2,
                                                                                                                          const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mFunctionName ;
  public: GALGAS_formalInputParameterListForGeneration mProperty_mFormalArgumentList ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnType ;


//--- Default constructor
  public: cPtr_functionPrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionPrototypeDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                          const GALGAS_string & in_implementationCppFileName,
                                                          const GALGAS_string & in_mFunctionName,
                                                          const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                          const GALGAS_unifiedTypeMapEntry & in_mReturnType
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionPrototypeDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionPrototypeDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (const class GALGAS_functionPrototypeDeclarationForGeneration & inSource) ;

  public: GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & operator = (const class GALGAS_functionPrototypeDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionPrototypeDeclarationForGeneration bang_functionPrototypeDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionPrototypeDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionPrototypeDeclarationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionPrototypeDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionImplementationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionImplementationForGeneration : public GALGAS_functionPrototypeDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_functionImplementationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_functionImplementationForGeneration (const class cPtr_functionImplementationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mResultVariableCppName (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mFunctionInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_functionImplementationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                     const class GALGAS_string & inOperand1,
                                                                                                                                     const class GALGAS_string & inOperand2,
                                                                                                                                     const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                                                                     const class GALGAS_string & inOperand5,
                                                                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand6,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionImplementationForGeneration extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionImplementationForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                  const class GALGAS_string & inOperand5,
                                                                                  const class GALGAS_semanticInstructionListForGeneration & inOperand6
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_functionImplementationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionImplementationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionImplementationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_functionImplementationForGeneration : public cPtr_functionPrototypeDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                            const class GALGAS_string & inOperand1,
                                                                                                                            const class GALGAS_string & inOperand2,
                                                                                                                            const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                                                            const class GALGAS_string & inOperand5,
                                                                                                                            const class GALGAS_semanticInstructionListForGeneration & inOperand6,
                                                                                                                            Compiler * inCompiler) ;


//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mResultVariableCppName ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mFunctionInstructionList ;


//--- Default constructor
  public: cPtr_functionImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionImplementationForGeneration (const GALGAS_bool & in_generateHeader,
                                                    const GALGAS_string & in_implementationCppFileName,
                                                    const GALGAS_string & in_mFunctionName,
                                                    const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                    const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                    const GALGAS_string & in_mResultVariableCppName,
                                                    const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionImplementationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionImplementationForGeneration_2D_weak : public GALGAS_functionPrototypeDeclarationForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionImplementationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionImplementationForGeneration_2D_weak (const class GALGAS_functionImplementationForGeneration & inSource) ;

  public: GALGAS_functionImplementationForGeneration_2D_weak & operator = (const class GALGAS_functionImplementationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionImplementationForGeneration bang_functionImplementationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionImplementationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionImplementationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_functionImplementationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionImplementationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @onceFunctionDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_onceFunctionDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_onceFunctionDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_onceFunctionDeclarationForGeneration (const class cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mFunctionName (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReturnType (void) const ;

  public: class GALGAS_string readProperty_mResultVariableCppName (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mFunctionInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_onceFunctionDeclarationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                  const class GALGAS_string & inOperand1,
                                                                                                                                  const class GALGAS_string & inOperand2,
                                                                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                                                                  const class GALGAS_string & inOperand4,
                                                                                                                                  const class GALGAS_semanticInstructionListForGeneration & inOperand5,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_onceFunctionDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_onceFunctionDeclarationForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                   const class GALGAS_string & inOperand4,
                                                                                   const class GALGAS_semanticInstructionListForGeneration & inOperand5
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_onceFunctionDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @onceFunctionDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_onceFunctionDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                         const class GALGAS_string & inOperand1,
                                                                                                                         const class GALGAS_string & inOperand2,
                                                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                                                         const class GALGAS_string & inOperand4,
                                                                                                                         const class GALGAS_semanticInstructionListForGeneration & inOperand5,
                                                                                                                         Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mFunctionName ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnType ;
  public: GALGAS_string mProperty_mResultVariableCppName ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mFunctionInstructionList ;


//--- Default constructor
  public: cPtr_onceFunctionDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_onceFunctionDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                     const GALGAS_string & in_implementationCppFileName,
                                                     const GALGAS_string & in_mFunctionName,
                                                     const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                     const GALGAS_string & in_mResultVariableCppName,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @onceFunctionDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_onceFunctionDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_onceFunctionDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_onceFunctionDeclarationForGeneration_2D_weak (const class GALGAS_onceFunctionDeclarationForGeneration & inSource) ;

  public: GALGAS_onceFunctionDeclarationForGeneration_2D_weak & operator = (const class GALGAS_onceFunctionDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_onceFunctionDeclarationForGeneration bang_onceFunctionDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_onceFunctionDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_onceFunctionDeclarationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_onceFunctionDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperDeclarationForGeneration (const class cPtr_filewrapperDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_string readProperty_mFilewrapperAbsolutePath (void) const ;

  public: class GALGAS_wrapperFileMap readProperty_mFilewrapperFileMap (void) const ;

  public: class GALGAS_wrapperDirectoryMap readProperty_mFilewrapperDirectoryMap (void) const ;

  public: class GALGAS_filewrapperTemplateListForGeneration readProperty_mFilewrapperTemplateListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperDeclarationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                     const class GALGAS_string & inOperand1,
                                                                                                                                     const class GALGAS_string & inOperand2,
                                                                                                                                     const class GALGAS_string & inOperand3,
                                                                                                                                     const class GALGAS_wrapperFileMap & inOperand4,
                                                                                                                                     const class GALGAS_wrapperDirectoryMap & inOperand5,
                                                                                                                                     const class GALGAS_filewrapperTemplateListForGeneration & inOperand6,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperDeclarationForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_wrapperFileMap & inOperand4,
                                                                                  const class GALGAS_wrapperDirectoryMap & inOperand5,
                                                                                  const class GALGAS_filewrapperTemplateListForGeneration & inOperand6
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                            const class GALGAS_string & inOperand1,
                                                                                                                            const class GALGAS_string & inOperand2,
                                                                                                                            const class GALGAS_string & inOperand3,
                                                                                                                            const class GALGAS_wrapperFileMap & inOperand4,
                                                                                                                            const class GALGAS_wrapperDirectoryMap & inOperand5,
                                                                                                                            const class GALGAS_filewrapperTemplateListForGeneration & inOperand6,
                                                                                                                            Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mFilewrapperName ;
  public: GALGAS_string mProperty_mFilewrapperAbsolutePath ;
  public: GALGAS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: GALGAS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: GALGAS_filewrapperTemplateListForGeneration mProperty_mFilewrapperTemplateListForGeneration ;


//--- Default constructor
  public: cPtr_filewrapperDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                    const GALGAS_string & in_implementationCppFileName,
                                                    const GALGAS_string & in_mFilewrapperName,
                                                    const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                    const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                    const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                    const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperDeclarationForGeneration_2D_weak (const class GALGAS_filewrapperDeclarationForGeneration & inSource) ;

  public: GALGAS_filewrapperDeclarationForGeneration_2D_weak & operator = (const class GALGAS_filewrapperDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperDeclarationForGeneration bang_filewrapperDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperDeclarationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programComponentForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_programComponentForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_programComponentForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_programComponentForGeneration (const class cPtr_programComponentForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_stringset readProperty_mInclusionSet (void) const ;

  public: class GALGAS_string readProperty_mImplementationString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_programComponentForGeneration init_21_generateHeader_21_implementationCppFileName_21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                   const class GALGAS_string & inOperand1,
                                                                                                                   const class GALGAS_stringset & inOperand2,
                                                                                                                   const class GALGAS_string & inOperand3,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_programComponentForGeneration extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_programComponentForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_stringset & inOperand2,
                                                                            const class GALGAS_string & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_programComponentForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_programComponentForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @programComponentForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_programComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                          const class GALGAS_string & inOperand1,
                                                                                                          const class GALGAS_stringset & inOperand2,
                                                                                                          const class GALGAS_string & inOperand3,
                                                                                                          Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_stringset mProperty_mInclusionSet ;
  public: GALGAS_string mProperty_mImplementationString ;


//--- Default constructor
  public: cPtr_programComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_programComponentForGeneration (const GALGAS_bool & in_generateHeader,
                                              const GALGAS_string & in_implementationCppFileName,
                                              const GALGAS_stringset & in_mInclusionSet,
                                              const GALGAS_string & in_mImplementationString
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

