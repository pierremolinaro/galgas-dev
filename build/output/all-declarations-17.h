#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionSetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionSetterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionSetterForGeneration_2D_weak (const class GALGAS_abstractExtensionSetterForGeneration & inSource) ;

  public: GALGAS_abstractExtensionSetterForGeneration_2D_weak & operator = (const class GALGAS_abstractExtensionSetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionSetterForGeneration bang_abstractExtensionSetterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionSetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractExtensionSetterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractExtensionSetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractExtensionSetterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionGetterForGeneration (const class cPtr_extensionGetterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mExtensionGetterName (void) const ;

  public: class GALGAS_bool readProperty_mImplementedAsFunction (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mResultType (void) const ;

  public: class GALGAS_string readProperty_mResultVarCppName (void) const ;

  public: class GALGAS_formalInputParameterListForGeneration readProperty_mExtensionGetterFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionGetterForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                          const class GALGAS_string & inOperand1,
                                                                                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                          const class GALGAS_string & inOperand3,
                                                                                                                                          const class GALGAS_bool & inOperand4,
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
  public: static GALGAS_extensionGetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionGetterForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           const class GALGAS_bool & inOperand4,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                           const class GALGAS_string & inOperand6,
                                                                           const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                           const class GALGAS_typedPropertyList & inOperand8,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand9
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionGetterForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionGetterForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                 const class GALGAS_string & inOperand1,
                                                                                                                                 const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                 const class GALGAS_string & inOperand3,
                                                                                                                                 const class GALGAS_bool & inOperand4,
                                                                                                                                 const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                                                                 const class GALGAS_string & inOperand6,
                                                                                                                                 const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                                                                                 const class GALGAS_typedPropertyList & inOperand8,
                                                                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand9,
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
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mExtensionGetterName ;
  public: GALGAS_bool mProperty_mImplementedAsFunction ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GALGAS_string mProperty_mResultVarCppName ;
  public: GALGAS_formalInputParameterListForGeneration mProperty_mExtensionGetterFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_extensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionGetterForGeneration (const GALGAS_bool & in_generateHeader,
                                             const GALGAS_string & in_implementationCppFileName,
                                             const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                             const GALGAS_string & in_mExtensionGetterName,
                                             const GALGAS_bool & in_mImplementedAsFunction,
                                             const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                             const GALGAS_string & in_mResultVarCppName,
                                             const GALGAS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                             const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                             const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionGetterForGeneration_2D_weak (const class GALGAS_extensionGetterForGeneration & inSource) ;

  public: GALGAS_extensionGetterForGeneration_2D_weak & operator = (const class GALGAS_extensionGetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionGetterForGeneration bang_extensionGetterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionGetterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionGetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionGetterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionMethodForGeneration (const class cPtr_extensionMethodForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mExtensionMethodName (void) const ;

  public: class GALGAS_bool readProperty_mImplementedAsFunction (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionMethodForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                  const class GALGAS_string & inOperand1,
                                                                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                  const class GALGAS_string & inOperand3,
                                                                                                                                  const class GALGAS_bool & inOperand4,
                                                                                                                                  const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                                                                  const class GALGAS_typedPropertyList & inOperand6,
                                                                                                                                  const class GALGAS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionMethodForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           const class GALGAS_bool & inOperand4,
                                                                           const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                           const class GALGAS_typedPropertyList & inOperand6,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionMethodForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionMethodForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                         const class GALGAS_string & inOperand1,
                                                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                         const class GALGAS_string & inOperand3,
                                                                                                                         const class GALGAS_bool & inOperand4,
                                                                                                                         const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                                                         const class GALGAS_typedPropertyList & inOperand6,
                                                                                                                         const class GALGAS_semanticInstructionListForGeneration & inOperand7,
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
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mExtensionMethodName ;
  public: GALGAS_bool mProperty_mImplementedAsFunction ;
  public: GALGAS_formalParameterListForGeneration mProperty_mExtensionMethodFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_extensionMethodForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionMethodForGeneration (const GALGAS_bool & in_generateHeader,
                                             const GALGAS_string & in_implementationCppFileName,
                                             const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                             const GALGAS_string & in_mExtensionMethodName,
                                             const GALGAS_bool & in_mImplementedAsFunction,
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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionMethodForGeneration_2D_weak (const class GALGAS_extensionMethodForGeneration & inSource) ;

  public: GALGAS_extensionMethodForGeneration_2D_weak & operator = (const class GALGAS_extensionMethodForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionMethodForGeneration bang_extensionMethodForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionMethodForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionMethodForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionMethodForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionSetterForGeneration (const class cPtr_extensionSetterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mExtensionSetterName (void) const ;

  public: class GALGAS_bool readProperty_mImplementedAsFunction (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mExtensionSetterFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionSetterForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                  const class GALGAS_string & inOperand1,
                                                                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                  const class GALGAS_string & inOperand3,
                                                                                                                                  const class GALGAS_bool & inOperand4,
                                                                                                                                  const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                                                                  const class GALGAS_typedPropertyList & inOperand6,
                                                                                                                                  const class GALGAS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionSetterForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           const class GALGAS_bool & inOperand4,
                                                                           const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                           const class GALGAS_typedPropertyList & inOperand6,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionSetterForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionSetterForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                         const class GALGAS_string & inOperand1,
                                                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                         const class GALGAS_string & inOperand3,
                                                                                                                         const class GALGAS_bool & inOperand4,
                                                                                                                         const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                                                         const class GALGAS_typedPropertyList & inOperand6,
                                                                                                                         const class GALGAS_semanticInstructionListForGeneration & inOperand7,
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
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mExtensionSetterName ;
  public: GALGAS_bool mProperty_mImplementedAsFunction ;
  public: GALGAS_formalParameterListForGeneration mProperty_mExtensionSetterFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_extensionSetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionSetterForGeneration (const GALGAS_bool & in_generateHeader,
                                             const GALGAS_string & in_implementationCppFileName,
                                             const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                             const GALGAS_string & in_mExtensionSetterName,
                                             const GALGAS_bool & in_mImplementedAsFunction,
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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionSetterForGeneration_2D_weak (const class GALGAS_extensionSetterForGeneration & inSource) ;

  public: GALGAS_extensionSetterForGeneration_2D_weak & operator = (const class GALGAS_extensionSetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionSetterForGeneration bang_extensionSetterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionSetterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionSetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionSetterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionInitializerForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionInitializerForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionInitializerForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionInitializerForGeneration (const class cPtr_extensionInitializerForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_initializerName (void) const ;

  public: class GALGAS_formalInputParameterListForGeneration readProperty_formalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_semanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionInitializerForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                                   const class GALGAS_string & inOperand1,
                                                                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                   const class GALGAS_string & inOperand3,
                                                                                                                                   const class GALGAS_formalInputParameterListForGeneration & inOperand4,
                                                                                                                                   const class GALGAS_typedPropertyList & inOperand5,
                                                                                                                                   const class GALGAS_semanticInstructionListForGeneration & inOperand6,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionInitializerForGeneration extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionInitializerForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                const class GALGAS_formalInputParameterListForGeneration & inOperand4,
                                                                                const class GALGAS_typedPropertyList & inOperand5,
                                                                                const class GALGAS_semanticInstructionListForGeneration & inOperand6
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionInitializerForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionInitializerForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionInitializerForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionInitializerForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionInitializerForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                          const class GALGAS_string & inOperand1,
                                                                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                          const class GALGAS_string & inOperand3,
                                                                                                                          const class GALGAS_formalInputParameterListForGeneration & inOperand4,
                                                                                                                          const class GALGAS_typedPropertyList & inOperand5,
                                                                                                                          const class GALGAS_semanticInstructionListForGeneration & inOperand6,
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
  public: GALGAS_string mProperty_initializerName ;
  public: GALGAS_formalInputParameterListForGeneration mProperty_formalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_semanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_extensionInitializerForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionInitializerForGeneration (const GALGAS_bool & in_generateHeader,
                                                  const GALGAS_string & in_implementationCppFileName,
                                                  const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                  const GALGAS_string & in_initializerName,
                                                  const GALGAS_formalInputParameterListForGeneration & in_formalParameterList,
                                                  const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                  const GALGAS_semanticInstructionListForGeneration & in_semanticInstructionListForGeneration
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionInitializerForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionInitializerForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionInitializerForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionInitializerForGeneration_2D_weak (const class GALGAS_extensionInitializerForGeneration & inSource) ;

  public: GALGAS_extensionInitializerForGeneration_2D_weak & operator = (const class GALGAS_extensionInitializerForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionInitializerForGeneration bang_extensionInitializerForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionInitializerForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionInitializerForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extensionInitializerForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionInitializerForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForGeneration_2D_weak ;

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_overridingExtensionSetterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration_2D_weak ;

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineImplementationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Function 'optionalTypeName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_optionalTypeName (const class GALGAS_lstring & constinArgument0,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

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

