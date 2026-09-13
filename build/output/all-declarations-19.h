#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @programComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_programComponentForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_programComponentForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_programComponentForGeneration (const class cPtr_programComponentForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_stringset readProperty_mInclusionSet (void) const ;

  public: class GGS_string readProperty_mImplementationString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programComponentForGeneration init_21_generateHeader_21_implementationCppFileName_21__21_ (const class GGS_bool & inOperand0,
                                                                                                                const class GGS_string & inOperand1,
                                                                                                                const class GGS_stringset & inOperand2,
                                                                                                                const class GGS_string & inOperand3,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programComponentForGeneration extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_programComponentForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programComponentForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @programComponentForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_programComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (const class GGS_bool & inOperand0,
                                                                                                          const class GGS_string & inOperand1,
                                                                                                          const class GGS_stringset & inOperand2,
                                                                                                          const class GGS_string & inOperand3,
                                                                                                          Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_stringset mProperty_mInclusionSet ;
  public: GGS_string mProperty_mImplementationString ;


//--- Default constructor
  public: cPtr_programComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_programComponentForGeneration (const GGS_bool & in_generateHeader,
                                              const GGS_string & in_implementationCppFileName,
                                              const GGS_stringset & in_mInclusionSet,
                                              const GGS_string & in_mImplementationString,
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
// Phase 1: @programComponentForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_programComponentForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_programComponentForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_programComponentForGeneration_2E_weak (const class GGS_programComponentForGeneration & inSource) ;

  public: GGS_programComponentForGeneration_2E_weak & operator = (const class GGS_programComponentForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_programComponentForGeneration_2E_weak init_nil (void) {
    GGS_programComponentForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_programComponentForGeneration bang_programComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_programComponentForGeneration unwrappedValue (void) const ;

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
  public: static GGS_programComponentForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_programComponentForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_programComponentForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@genericExtensionMethodListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_genericExtensionMethodListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_lstring constin_inValue,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@descendantClassListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_descendantClassListMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_unifiedTypeMapEntry constin_inType,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @binarysetPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_binarysetPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_binarysetPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_binarysetPredefinedTypeAST (const class cPtr_binarysetPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_binarysetPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_binarysetPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binarysetPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @binarysetPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_binarysetPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void binarysetPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initializers
  public: virtual class GGS__5B_formalInputParameterListAST_5D_ getter_initializers (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_binarysetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_binarysetPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                           const GGS_string & in_mPredefinedTypeName,
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
// Phase 1: @binarysetPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_binarysetPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_binarysetPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_binarysetPredefinedTypeAST_2E_weak (const class GGS_binarysetPredefinedTypeAST & inSource) ;

  public: GGS_binarysetPredefinedTypeAST_2E_weak & operator = (const class GGS_binarysetPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_binarysetPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_binarysetPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_binarysetPredefinedTypeAST bang_binarysetPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_binarysetPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_binarysetPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_binarysetPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binarysetPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typeNameFormalParameterNameList initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_typeNameFormalParameterNameList & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

