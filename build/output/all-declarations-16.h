#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRewindInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRewindInstructionAST_2E_weak : public GGS_lexicalInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalRewindInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalRewindInstructionAST_2E_weak (const class GGS_lexicalRewindInstructionAST & inSource) ;

  public: GGS_lexicalRewindInstructionAST_2E_weak & operator = (const class GGS_lexicalRewindInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalRewindInstructionAST_2E_weak init_nil (void) {
    GGS_lexicalRewindInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalRewindInstructionAST bang_lexicalRewindInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalRewindInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_lexicalRewindInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRewindInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRewindInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (class cPtr_semanticDeclarationAST * inObject,
                                                  class GGS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  class GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                  class GGS_extensionInitializerForBuildingContext & io_ioExtensionInitializerForBuildingContext,
                                                  class GGS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  class GGS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  class GGS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  class GGS_semanticDeclarationListAST & io_ioExtensionOverrideDefinitionList,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap searchKey'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const class GGS_routineMap inObject,
                                const class GGS_lstring constin_inRoutineName,
                                const class GGS_actualParameterListAST constin_inActualParameterList,
                                class GGS_formalParameterSignature & out_outRoutineSignature,
                                class GGS_bool & out_outIsFilePrivate,
                                class GGS_lstring & out_outRoutineMangledName,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_routineArgumentFromFormalParameters (const class GGS_formalParameterSignature & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_routineMangledName (const class GGS_lstring & constinArgument0,
                                               const class GGS_formalParameterSignature & constinArgument1,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineMap locationForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_location extensionGetter_locationForKey (const class GGS_routineMap & inObject,
                                                   const class GGS_string & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalParameterListAST keyRepresentation' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_keyRepresentation (const class GGS_formalParameterListAST & inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalInputParameterListAST initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_formalInputParameterListAST & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationWithHeaderForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationWithHeaderForGeneration : public GGS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationWithHeaderForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticDeclarationWithHeaderForGeneration (const class cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_generateHeader (void) const ;

  public: class GGS_string readProperty_implementationCppFileName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationWithHeaderForGeneration init_21_generateHeader_21_implementationCppFileName (const class GGS_bool & inOperand0,
                                                                                                                     const class GGS_string & inOperand1,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationWithHeaderForGeneration extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationWithHeaderForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @semanticDeclarationWithHeaderForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationWithHeaderForGeneration : public cPtr_semanticDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticDeclarationWithHeaderForGeneration_init_21_generateHeader_21_implementationCppFileName (const class GGS_bool & inOperand0,
                                                                                                               const class GGS_string & inOperand1,
                                                                                                               Compiler * inCompiler) ;


//--- Extension getter getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_bool mProperty_generateHeader ;
  public: GGS_string mProperty_implementationCppFileName ;


//--- Default constructor
  public: cPtr_semanticDeclarationWithHeaderForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticDeclarationWithHeaderForGeneration (const GGS_bool & in_generateHeader,
                                                           const GGS_string & in_implementationCppFileName,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationWithHeaderForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationWithHeaderForGeneration_2E_weak : public GGS_semanticDeclarationForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (const class GGS_semanticDeclarationWithHeaderForGeneration & inSource) ;

  public: GGS_semanticDeclarationWithHeaderForGeneration_2E_weak & operator = (const class GGS_semanticDeclarationWithHeaderForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticDeclarationWithHeaderForGeneration_2E_weak init_nil (void) {
    GGS_semanticDeclarationWithHeaderForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticDeclarationWithHeaderForGeneration bang_semanticDeclarationWithHeaderForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticDeclarationWithHeaderForGeneration unwrappedValue (void) const ;

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
  public: static GGS_semanticDeclarationWithHeaderForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticDeclarationWithHeaderForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticDeclarationWithHeaderForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionInitializerForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_extensionInitializerForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionInitializerForGeneration (const class cPtr_extensionInitializerForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_string readProperty_initializerName (void) const ;

  public: class GGS_formalInputParameterListForGeneration readProperty_formalParameterList (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_semanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionInitializerForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_string & inOperand1,
                                                                                                                                const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                const class GGS_string & inOperand3,
                                                                                                                                const class GGS_formalInputParameterListForGeneration & inOperand4,
                                                                                                                                const class GGS_typedPropertyList & inOperand5,
                                                                                                                                const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionInitializerForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionInitializerForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @extensionInitializerForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_extensionInitializerForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionInitializerForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                          const class GGS_string & inOperand1,
                                                                                                                          const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                          const class GGS_string & inOperand3,
                                                                                                                          const class GGS_formalInputParameterListForGeneration & inOperand4,
                                                                                                                          const class GGS_typedPropertyList & inOperand5,
                                                                                                                          const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_string mProperty_initializerName ;
  public: GGS_formalInputParameterListForGeneration mProperty_formalParameterList ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GGS_semanticInstructionListForGeneration mProperty_semanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_extensionInitializerForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionInitializerForGeneration (const GGS_bool & in_generateHeader,
                                                  const GGS_string & in_implementationCppFileName,
                                                  const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                  const GGS_string & in_initializerName,
                                                  const GGS_formalInputParameterListForGeneration & in_formalParameterList,
                                                  const GGS_typedPropertyList & in_mTypedAttributeList,
                                                  const GGS_semanticInstructionListForGeneration & in_semanticInstructionListForGeneration,
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
// Phase 1: @extensionInitializerForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionInitializerForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionInitializerForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionInitializerForGeneration_2E_weak (const class GGS_extensionInitializerForGeneration & inSource) ;

  public: GGS_extensionInitializerForGeneration_2E_weak & operator = (const class GGS_extensionInitializerForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionInitializerForGeneration_2E_weak init_nil (void) {
    GGS_extensionInitializerForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionInitializerForGeneration bang_extensionInitializerForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extensionInitializerForGeneration unwrappedValue (void) const ;

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
  public: static GGS_extensionInitializerForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionInitializerForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionInitializerForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractExtensionGetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionGetterForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionGetterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractExtensionGetterForGeneration (const class cPtr_abstractExtensionGetterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_string readProperty_mAbstractExtensionGetterName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mResultType (void) const ;

  public: class GGS_formalInputParameterListForGeneration readProperty_mAbstractExtensionGetterFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractExtensionGetterForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                               const class GGS_string & inOperand1,
                                                                                                                               const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                               const class GGS_string & inOperand3,
                                                                                                                               const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                                               const class GGS_formalInputParameterListForGeneration & inOperand5,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractExtensionGetterForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractExtensionGetterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractExtensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                         const class GGS_string & inOperand1,
                                                                                                                         const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                         const class GGS_string & inOperand3,
                                                                                                                         const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                                         const class GGS_formalInputParameterListForGeneration & inOperand5,
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
  public: GGS_string mProperty_mAbstractExtensionGetterName ;
  public: GGS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GGS_formalInputParameterListForGeneration mProperty_mAbstractExtensionGetterFormalParameterList ;


//--- Default constructor
  public: cPtr_abstractExtensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractExtensionGetterForGeneration (const GGS_bool & in_generateHeader,
                                                     const GGS_string & in_implementationCppFileName,
                                                     const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                     const GGS_string & in_mAbstractExtensionGetterName,
                                                     const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList,
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
// Phase 1: @abstractExtensionGetterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionGetterForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionGetterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractExtensionGetterForGeneration_2E_weak (const class GGS_abstractExtensionGetterForGeneration & inSource) ;

  public: GGS_abstractExtensionGetterForGeneration_2E_weak & operator = (const class GGS_abstractExtensionGetterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractExtensionGetterForGeneration_2E_weak init_nil (void) {
    GGS_abstractExtensionGetterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractExtensionGetterForGeneration bang_abstractExtensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractExtensionGetterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_abstractExtensionGetterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractExtensionGetterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionGetterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overrideExtensionGetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_overrideExtensionGetterForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_overrideExtensionGetterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overrideExtensionGetterForGeneration (const class cPtr_overrideExtensionGetterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_string readProperty_mBaseTypeName (void) const ;

  public: class GGS_string readProperty_mOverridingExtensionGetterName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mResultType (void) const ;

  public: class GGS_string readProperty_mResultVarCppName (void) const ;

  public: class GGS_formalInputParameterListForGeneration readProperty_mOverridingExtensionGetterFormalParameterList (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overrideExtensionGetterForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                               const class GGS_string & inOperand1,
                                                                                                                                               const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                               const class GGS_string & inOperand3,
                                                                                                                                               const class GGS_string & inOperand4,
                                                                                                                                               const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                                                               const class GGS_string & inOperand6,
                                                                                                                                               const class GGS_formalInputParameterListForGeneration & inOperand7,
                                                                                                                                               const class GGS_typedPropertyList & inOperand8,
                                                                                                                                               const class GGS_semanticInstructionListForGeneration & inOperand9,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overrideExtensionGetterForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overrideExtensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @overrideExtensionGetterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_overrideExtensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overrideExtensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                         const class GGS_string & inOperand1,
                                                                                                                                         const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                         const class GGS_string & inOperand3,
                                                                                                                                         const class GGS_string & inOperand4,
                                                                                                                                         const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                                                         const class GGS_string & inOperand6,
                                                                                                                                         const class GGS_formalInputParameterListForGeneration & inOperand7,
                                                                                                                                         const class GGS_typedPropertyList & inOperand8,
                                                                                                                                         const class GGS_semanticInstructionListForGeneration & inOperand9,
                                                                                                                                         Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_string mProperty_mBaseTypeName ;
  public: GGS_string mProperty_mOverridingExtensionGetterName ;
  public: GGS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GGS_string mProperty_mResultVarCppName ;
  public: GGS_formalInputParameterListForGeneration mProperty_mOverridingExtensionGetterFormalParameterList ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_overrideExtensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overrideExtensionGetterForGeneration (const GGS_bool & in_generateHeader,
                                                     const GGS_string & in_implementationCppFileName,
                                                     const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                     const GGS_string & in_mBaseTypeName,
                                                     const GGS_string & in_mOverridingExtensionGetterName,
                                                     const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_string & in_mResultVarCppName,
                                                     const GGS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
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
// Phase 1: @overrideExtensionGetterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_overrideExtensionGetterForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overrideExtensionGetterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overrideExtensionGetterForGeneration_2E_weak (const class GGS_overrideExtensionGetterForGeneration & inSource) ;

  public: GGS_overrideExtensionGetterForGeneration_2E_weak & operator = (const class GGS_overrideExtensionGetterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overrideExtensionGetterForGeneration_2E_weak init_nil (void) {
    GGS_overrideExtensionGetterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overrideExtensionGetterForGeneration bang_overrideExtensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_overrideExtensionGetterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_overrideExtensionGetterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overrideExtensionGetterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overrideExtensionGetterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionSetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_extensionSetterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionSetterForGeneration (const class cPtr_extensionSetterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_string readProperty_mExtensionSetterName (void) const ;

  public: class GGS_bool readProperty_mImplementedAsFunction (void) const ;

  public: class GGS_formalParameterListForGeneration readProperty_mExtensionSetterFormalParameterList (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
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
  public: static GGS_extensionSetterForGeneration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @extensionSetterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_extensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
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
  public: GGS_string mProperty_mExtensionSetterName ;
  public: GGS_bool mProperty_mImplementedAsFunction ;
  public: GGS_formalParameterListForGeneration mProperty_mExtensionSetterFormalParameterList ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_extensionSetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionSetterForGeneration (const GGS_bool & in_generateHeader,
                                             const GGS_string & in_implementationCppFileName,
                                             const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                             const GGS_string & in_mExtensionSetterName,
                                             const GGS_bool & in_mImplementedAsFunction,
                                             const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
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
// Phase 1: @extensionSetterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionSetterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionSetterForGeneration_2E_weak (const class GGS_extensionSetterForGeneration & inSource) ;

  public: GGS_extensionSetterForGeneration_2E_weak & operator = (const class GGS_extensionSetterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionSetterForGeneration_2E_weak init_nil (void) {
    GGS_extensionSetterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionSetterForGeneration bang_extensionSetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extensionSetterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_extensionSetterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionSetterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extensionGetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_extensionGetterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionGetterForGeneration (const class cPtr_extensionGetterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_string readProperty_mExtensionGetterName (void) const ;

  public: class GGS_bool readProperty_mImplementedAsFunction (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mResultType (void) const ;

  public: class GGS_string readProperty_mResultVarCppName (void) const ;

  public: class GGS_formalInputParameterListForGeneration readProperty_mExtensionGetterFormalParameterList (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                       const class GGS_string & inOperand1,
                                                                                                                                       const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                       const class GGS_string & inOperand3,
                                                                                                                                       const class GGS_bool & inOperand4,
                                                                                                                                       const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                                                       const class GGS_string & inOperand6,
                                                                                                                                       const class GGS_formalInputParameterListForGeneration & inOperand7,
                                                                                                                                       const class GGS_typedPropertyList & inOperand8,
                                                                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand9,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterForGeneration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @extensionGetterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_extensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                 const class GGS_string & inOperand1,
                                                                                                                                 const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                 const class GGS_string & inOperand3,
                                                                                                                                 const class GGS_bool & inOperand4,
                                                                                                                                 const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                                                 const class GGS_string & inOperand6,
                                                                                                                                 const class GGS_formalInputParameterListForGeneration & inOperand7,
                                                                                                                                 const class GGS_typedPropertyList & inOperand8,
                                                                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand9,
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
  public: GGS_string mProperty_mExtensionGetterName ;
  public: GGS_bool mProperty_mImplementedAsFunction ;
  public: GGS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GGS_string mProperty_mResultVarCppName ;
  public: GGS_formalInputParameterListForGeneration mProperty_mExtensionGetterFormalParameterList ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_extensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionGetterForGeneration (const GGS_bool & in_generateHeader,
                                             const GGS_string & in_implementationCppFileName,
                                             const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                             const GGS_string & in_mExtensionGetterName,
                                             const GGS_bool & in_mImplementedAsFunction,
                                             const GGS_unifiedTypeMapEntry & in_mResultType,
                                             const GGS_string & in_mResultVarCppName,
                                             const GGS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
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
// Phase 1: @extensionGetterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionGetterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionGetterForGeneration_2E_weak (const class GGS_extensionGetterForGeneration & inSource) ;

  public: GGS_extensionGetterForGeneration_2E_weak & operator = (const class GGS_extensionGetterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionGetterForGeneration_2E_weak init_nil (void) {
    GGS_extensionGetterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionGetterForGeneration bang_extensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extensionGetterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_extensionGetterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionGetterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @overridingExtensionMethodForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionMethodForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionMethodForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingExtensionMethodForGeneration (const class cPtr_overridingExtensionMethodForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_string readProperty_mBaseTypeName (void) const ;

  public: class GGS_string readProperty_mExtensionMethodName (void) const ;

  public: class GGS_formalParameterListForGeneration readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingExtensionMethodForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                         const class GGS_string & inOperand1,
                                                                                                                                         const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                         const class GGS_string & inOperand3,
                                                                                                                                         const class GGS_string & inOperand4,
                                                                                                                                         const class GGS_formalParameterListForGeneration & inOperand5,
                                                                                                                                         const class GGS_typedPropertyList & inOperand6,
                                                                                                                                         const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionMethodForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @overridingExtensionMethodForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingExtensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                   const class GGS_string & inOperand1,
                                                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                   const class GGS_string & inOperand3,
                                                                                                                                   const class GGS_string & inOperand4,
                                                                                                                                   const class GGS_formalParameterListForGeneration & inOperand5,
                                                                                                                                   const class GGS_typedPropertyList & inOperand6,
                                                                                                                                   const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                                                                                   Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_string mProperty_mBaseTypeName ;
  public: GGS_string mProperty_mExtensionMethodName ;
  public: GGS_formalParameterListForGeneration mProperty_mExtensionMethodFormalParameterList ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;


//--- Default constructor
  public: cPtr_overridingExtensionMethodForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionMethodForGeneration (const GGS_bool & in_generateHeader,
                                                       const GGS_string & in_implementationCppFileName,
                                                       const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                       const GGS_string & in_mBaseTypeName,
                                                       const GGS_string & in_mExtensionMethodName,
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
// Phase 1: @overridingExtensionMethodForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionMethodForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionMethodForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingExtensionMethodForGeneration_2E_weak (const class GGS_overridingExtensionMethodForGeneration & inSource) ;

  public: GGS_overridingExtensionMethodForGeneration_2E_weak & operator = (const class GGS_overridingExtensionMethodForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingExtensionMethodForGeneration_2E_weak init_nil (void) {
    GGS_overridingExtensionMethodForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingExtensionMethodForGeneration bang_overridingExtensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_overridingExtensionMethodForGeneration unwrappedValue (void) const ;

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
  public: static GGS_overridingExtensionMethodForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionMethodForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionMethodForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractExtensionSetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionSetterForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionSetterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractExtensionSetterForGeneration (const class cPtr_abstractExtensionSetterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_string readProperty_mAbstractExtensionSetterName (void) const ;

  public: class GGS_formalParameterListForGeneration readProperty_mAbstractExtensionSetterFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractExtensionSetterForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                           const class GGS_string & inOperand1,
                                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                                           const class GGS_string & inOperand3,
                                                                                                                           const class GGS_formalParameterListForGeneration & inOperand4,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractExtensionSetterForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractExtensionSetterForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractExtensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const class GGS_bool & inOperand0,
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
  public: GGS_string mProperty_mAbstractExtensionSetterName ;
  public: GGS_formalParameterListForGeneration mProperty_mAbstractExtensionSetterFormalParameterList ;


//--- Default constructor
  public: cPtr_abstractExtensionSetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractExtensionSetterForGeneration (const GGS_bool & in_generateHeader,
                                                     const GGS_string & in_implementationCppFileName,
                                                     const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                     const GGS_string & in_mAbstractExtensionSetterName,
                                                     const GGS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList,
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
// Phase 1: @abstractExtensionSetterForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionSetterForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionSetterForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractExtensionSetterForGeneration_2E_weak (const class GGS_abstractExtensionSetterForGeneration & inSource) ;

  public: GGS_abstractExtensionSetterForGeneration_2E_weak & operator = (const class GGS_abstractExtensionSetterForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractExtensionSetterForGeneration_2E_weak init_nil (void) {
    GGS_abstractExtensionSetterForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractExtensionSetterForGeneration bang_abstractExtensionSetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractExtensionSetterForGeneration unwrappedValue (void) const ;

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
  public: static GGS_abstractExtensionSetterForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractExtensionSetterForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionSetterForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2E_weak ;

