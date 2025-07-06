#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeLName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_makeOptionalTypeLName (const class GGS_lstring & constinArgument0,
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
// Phase 1: @lexiqueDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueDeclarationForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_lexiqueDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexiqueDeclarationForGeneration (const class cPtr_lexiqueDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLexiqueName (void) const ;

  public: class GGS_string readProperty_mSuperLexiqueName (void) const ;

  public: class GGS_string readProperty_mHeaderContents (void) const ;

  public: class GGS_string readProperty_mCppContents (void) const ;

  public: class GGS_string readProperty_mObjcCocoaHeader (void) const ;

  public: class GGS_string readProperty_mObjcCocoaImplementation (void) const ;

  public: class GGS_string readProperty_mSwiftCocoaImplementation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexiqueDeclarationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                      const class GGS_string & inOperand1,
                                                                                                                                      const class GGS_string & inOperand2,
                                                                                                                                      const class GGS_string & inOperand3,
                                                                                                                                      const class GGS_string & inOperand4,
                                                                                                                                      const class GGS_string & inOperand5,
                                                                                                                                      const class GGS_string & inOperand6,
                                                                                                                                      const class GGS_string & inOperand7,
                                                                                                                                      const class GGS_string & inOperand8,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexiqueDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexiqueDeclarationForGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           const class GGS_string & inOperand2,
                                                                           const class GGS_string & inOperand3,
                                                                           const class GGS_string & inOperand4,
                                                                           const class GGS_string & inOperand5,
                                                                           const class GGS_string & inOperand6,
                                                                           const class GGS_string & inOperand7,
                                                                           const class GGS_string & inOperand8,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexiqueDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_lexiqueDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexiqueDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_string & inOperand1,
                                                                                                                                const class GGS_string & inOperand2,
                                                                                                                                const class GGS_string & inOperand3,
                                                                                                                                const class GGS_string & inOperand4,
                                                                                                                                const class GGS_string & inOperand5,
                                                                                                                                const class GGS_string & inOperand6,
                                                                                                                                const class GGS_string & inOperand7,
                                                                                                                                const class GGS_string & inOperand8,
                                                                                                                                Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GGS_string arg_inProductDirectory,
           class GGS_stringset & arg_ioAllProductFileSet,
           class GGS_stringlist & arg_ioObjcAppProductFileList,
           class GGS_stringlist & arg_ioSwiftAppProductFileList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLexiqueName ;
  public: GGS_string mProperty_mSuperLexiqueName ;
  public: GGS_string mProperty_mHeaderContents ;
  public: GGS_string mProperty_mCppContents ;
  public: GGS_string mProperty_mObjcCocoaHeader ;
  public: GGS_string mProperty_mObjcCocoaImplementation ;
  public: GGS_string mProperty_mSwiftCocoaImplementation ;


//--- Default constructor
  public: cPtr_lexiqueDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexiqueDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                const GGS_string & in_implementationCppFileName,
                                                const GGS_string & in_mLexiqueName,
                                                const GGS_string & in_mSuperLexiqueName,
                                                const GGS_string & in_mHeaderContents,
                                                const GGS_string & in_mCppContents,
                                                const GGS_string & in_mObjcCocoaHeader,
                                                const GGS_string & in_mObjcCocoaImplementation,
                                                const GGS_string & in_mSwiftCocoaImplementation,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexiqueDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexiqueDeclarationForGeneration_2E_weak (const class GGS_lexiqueDeclarationForGeneration & inSource) ;

  public: GGS_lexiqueDeclarationForGeneration_2E_weak & operator = (const class GGS_lexiqueDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexiqueDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_lexiqueDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexiqueDeclarationForGeneration bang_lexiqueDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexiqueDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_lexiqueDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexiqueDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionPrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionPrototypeDeclarationForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_functionPrototypeDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_functionPrototypeDeclarationForGeneration (const class cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mFunctionName (void) const ;

  public: class GGS_formalInputParameterListForGeneration readProperty_mFormalArgumentList (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReturnType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionPrototypeDeclarationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_string & inOperand1,
                                                                                                                                const class GGS_string & inOperand2,
                                                                                                                                const class GGS_formalInputParameterListForGeneration & inOperand3,
                                                                                                                                const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionPrototypeDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionPrototypeDeclarationForGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                                     const class GGS_string & inOperand1,
                                                                                     const class GGS_string & inOperand2,
                                                                                     const class GGS_formalInputParameterListForGeneration & inOperand3,
                                                                                     const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionPrototypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionPrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_functionPrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                          const class GGS_string & inOperand1,
                                                                                                                          const class GGS_string & inOperand2,
                                                                                                                          const class GGS_formalInputParameterListForGeneration & inOperand3,
                                                                                                                          const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mFunctionName ;
  public: GGS_formalInputParameterListForGeneration mProperty_mFormalArgumentList ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnType ;


//--- Default constructor
  public: cPtr_functionPrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionPrototypeDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                          const GGS_string & in_implementationCppFileName,
                                                          const GGS_string & in_mFunctionName,
                                                          const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                          const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionPrototypeDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionPrototypeDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionPrototypeDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionPrototypeDeclarationForGeneration_2E_weak (const class GGS_functionPrototypeDeclarationForGeneration & inSource) ;

  public: GGS_functionPrototypeDeclarationForGeneration_2E_weak & operator = (const class GGS_functionPrototypeDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_functionPrototypeDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_functionPrototypeDeclarationForGeneration bang_functionPrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_functionPrototypeDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_functionPrototypeDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionPrototypeDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionPrototypeDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionImplementationForGeneration : public GGS_functionPrototypeDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GGS_functionImplementationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_functionImplementationForGeneration (const class cPtr_functionImplementationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mResultVariableCppName (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mFunctionInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionImplementationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                  const class GGS_string & inOperand1,
                                                                                                                                  const class GGS_string & inOperand2,
                                                                                                                                  const class GGS_formalInputParameterListForGeneration & inOperand3,
                                                                                                                                  const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                                                  const class GGS_string & inOperand5,
                                                                                                                                  const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionImplementationForGeneration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionImplementationForGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_formalInputParameterListForGeneration & inOperand3,
                                                                               const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                               const class GGS_string & inOperand5,
                                                                               const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionImplementationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_functionImplementationForGeneration : public cPtr_functionPrototypeDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                            const class GGS_string & inOperand1,
                                                                                                                            const class GGS_string & inOperand2,
                                                                                                                            const class GGS_formalInputParameterListForGeneration & inOperand3,
                                                                                                                            const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                                            const class GGS_string & inOperand5,
                                                                                                                            const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                                                                            Compiler * inCompiler) ;


//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mResultVariableCppName ;
  public: GGS_semanticInstructionListForGeneration mProperty_mFunctionInstructionList ;


//--- Default constructor
  public: cPtr_functionImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionImplementationForGeneration (const GGS_bool & in_generateHeader,
                                                    const GGS_string & in_implementationCppFileName,
                                                    const GGS_string & in_mFunctionName,
                                                    const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                    const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                    const GGS_string & in_mResultVariableCppName,
                                                    const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionImplementationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionImplementationForGeneration_2E_weak : public GGS_functionPrototypeDeclarationForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionImplementationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionImplementationForGeneration_2E_weak (const class GGS_functionImplementationForGeneration & inSource) ;

  public: GGS_functionImplementationForGeneration_2E_weak & operator = (const class GGS_functionImplementationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_functionImplementationForGeneration_2E_weak init_nil (void) {
    GGS_functionImplementationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_functionImplementationForGeneration bang_functionImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_functionImplementationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_functionImplementationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionImplementationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionImplementationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @onceFunctionDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_onceFunctionDeclarationForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_onceFunctionDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_onceFunctionDeclarationForGeneration (const class cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mFunctionName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReturnType (void) const ;

  public: class GGS_string readProperty_mResultVariableCppName (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mFunctionInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_onceFunctionDeclarationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                               const class GGS_string & inOperand1,
                                                                                                                               const class GGS_string & inOperand2,
                                                                                                                               const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                                               const class GGS_string & inOperand4,
                                                                                                                               const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_onceFunctionDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_onceFunctionDeclarationForGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                const class GGS_string & inOperand2,
                                                                                const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                const class GGS_string & inOperand4,
                                                                                const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_onceFunctionDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @onceFunctionDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_onceFunctionDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                         const class GGS_string & inOperand1,
                                                                                                                         const class GGS_string & inOperand2,
                                                                                                                         const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                                         const class GGS_string & inOperand4,
                                                                                                                         const class GGS_semanticInstructionListForGeneration & inOperand5,
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
  public: GGS_string mProperty_mFunctionName ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnType ;
  public: GGS_string mProperty_mResultVariableCppName ;
  public: GGS_semanticInstructionListForGeneration mProperty_mFunctionInstructionList ;


//--- Default constructor
  public: cPtr_onceFunctionDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_onceFunctionDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                     const GGS_string & in_implementationCppFileName,
                                                     const GGS_string & in_mFunctionName,
                                                     const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                     const GGS_string & in_mResultVariableCppName,
                                                     const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @onceFunctionDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_onceFunctionDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_onceFunctionDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_onceFunctionDeclarationForGeneration_2E_weak (const class GGS_onceFunctionDeclarationForGeneration & inSource) ;

  public: GGS_onceFunctionDeclarationForGeneration_2E_weak & operator = (const class GGS_onceFunctionDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_onceFunctionDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_onceFunctionDeclarationForGeneration bang_onceFunctionDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_onceFunctionDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_onceFunctionDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_onceFunctionDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_onceFunctionDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperDeclarationForGeneration (const class cPtr_filewrapperDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mFilewrapperName (void) const ;

  public: class GGS_string readProperty_mFilewrapperAbsolutePath (void) const ;

  public: class GGS_wrapperFileMap readProperty_mFilewrapperFileMap (void) const ;

  public: class GGS_wrapperDirectoryMap readProperty_mFilewrapperDirectoryMap (void) const ;

  public: class GGS_filewrapperTemplateListForGeneration readProperty_mFilewrapperTemplateListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperDeclarationForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                  const class GGS_string & inOperand1,
                                                                                                                                  const class GGS_string & inOperand2,
                                                                                                                                  const class GGS_string & inOperand3,
                                                                                                                                  const class GGS_wrapperFileMap & inOperand4,
                                                                                                                                  const class GGS_wrapperDirectoryMap & inOperand5,
                                                                                                                                  const class GGS_filewrapperTemplateListForGeneration & inOperand6,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperDeclarationForGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_string & inOperand3,
                                                                               const class GGS_wrapperFileMap & inOperand4,
                                                                               const class GGS_wrapperDirectoryMap & inOperand5,
                                                                               const class GGS_filewrapperTemplateListForGeneration & inOperand6,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                            const class GGS_string & inOperand1,
                                                                                                                            const class GGS_string & inOperand2,
                                                                                                                            const class GGS_string & inOperand3,
                                                                                                                            const class GGS_wrapperFileMap & inOperand4,
                                                                                                                            const class GGS_wrapperDirectoryMap & inOperand5,
                                                                                                                            const class GGS_filewrapperTemplateListForGeneration & inOperand6,
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
  public: GGS_string mProperty_mFilewrapperName ;
  public: GGS_string mProperty_mFilewrapperAbsolutePath ;
  public: GGS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: GGS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: GGS_filewrapperTemplateListForGeneration mProperty_mFilewrapperTemplateListForGeneration ;


//--- Default constructor
  public: cPtr_filewrapperDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                    const GGS_string & in_implementationCppFileName,
                                                    const GGS_string & in_mFilewrapperName,
                                                    const GGS_string & in_mFilewrapperAbsolutePath,
                                                    const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                    const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                    const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperDeclarationForGeneration_2E_weak (const class GGS_filewrapperDeclarationForGeneration & inSource) ;

  public: GGS_filewrapperDeclarationForGeneration_2E_weak & operator = (const class GGS_filewrapperDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_filewrapperDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperDeclarationForGeneration bang_filewrapperDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_filewrapperDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_programComponentForGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_stringset & inOperand2,
                                                                         const class GGS_string & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_programComponentForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration ;

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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const class GGS_analysisContext constin_inAnalysisContext,
                                                       class GGS_unifiedTypeMap & io_ioTypeMap,
                                                       const class GGS_bool constin_inHasTranslateFeature,
                                                       const class GGS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       class GGS_stringlist & io_ioAssignementList,
                                                       class GGS_localVarManager & io_ioVariableMap,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarForGeneration (const class cPtr_grammarForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLexiqueName (void) const ;

  public: class GGS_nonTerminalSymbolMapForGrammarAnalysis readProperty_mNonTerminalMapForGrammarAnalysis (void) const ;

  public: class GGS_nonTerminalToAddList readProperty_mNonTerminalToAddList (void) const ;

  public: class GGS_lstringlist readProperty_mSyntaxComponents (void) const ;

  public: class GGS_string readProperty_mStartSymbolName (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

  public: class GGS_string readProperty_mCppFileContents (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarForGeneration init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                               const class GGS_string & inOperand1,
                                                                                                                               const class GGS_string & inOperand2,
                                                                                                                               const class GGS_string & inOperand3,
                                                                                                                               const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand4,
                                                                                                                               const class GGS_nonTerminalToAddList & inOperand5,
                                                                                                                               const class GGS_lstringlist & inOperand6,
                                                                                                                               const class GGS_string & inOperand7,
                                                                                                                               const class GGS_bool & inOperand8,
                                                                                                                               const class GGS_string & inOperand9,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarForGeneration extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarForGeneration class_func_new (const class GGS_bool & inOperand0,
                                                                const class GGS_string & inOperand1,
                                                                const class GGS_string & inOperand2,
                                                                const class GGS_string & inOperand3,
                                                                const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand4,
                                                                const class GGS_nonTerminalToAddList & inOperand5,
                                                                const class GGS_lstringlist & inOperand6,
                                                                const class GGS_string & inOperand7,
                                                                const class GGS_bool & inOperand8,
                                                                const class GGS_string & inOperand9,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                         const class GGS_string & inOperand1,
                                                                                                                         const class GGS_string & inOperand2,
                                                                                                                         const class GGS_string & inOperand3,
                                                                                                                         const class GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand4,
                                                                                                                         const class GGS_nonTerminalToAddList & inOperand5,
                                                                                                                         const class GGS_lstringlist & inOperand6,
                                                                                                                         const class GGS_string & inOperand7,
                                                                                                                         const class GGS_bool & inOperand8,
                                                                                                                         const class GGS_string & inOperand9,
                                                                                                                         Compiler * inCompiler) ;


//--- Extension getter getImplementationCppFileName
  public: virtual class GGS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GGS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GGS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLexiqueName ;
  public: GGS_nonTerminalSymbolMapForGrammarAnalysis mProperty_mNonTerminalMapForGrammarAnalysis ;
  public: GGS_nonTerminalToAddList mProperty_mNonTerminalToAddList ;
  public: GGS_lstringlist mProperty_mSyntaxComponents ;
  public: GGS_string mProperty_mStartSymbolName ;
  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: GGS_string mProperty_mCppFileContents ;


//--- Default constructor
  public: cPtr_grammarForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarForGeneration (const GGS_bool & in_generateHeader,
                                     const GGS_string & in_implementationCppFileName,
                                     const GGS_string & in_mGrammarName,
                                     const GGS_string & in_mLexiqueName,
                                     const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                     const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                     const GGS_lstringlist & in_mSyntaxComponents,
                                     const GGS_string & in_mStartSymbolName,
                                     const GGS_bool & in_mHasTranslateFeature,
                                     const GGS_string & in_mCppFileContents,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarForGeneration_2E_weak : public GGS_semanticDeclarationWithHeaderForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarForGeneration_2E_weak (const class GGS_grammarForGeneration & inSource) ;

  public: GGS_grammarForGeneration_2E_weak & operator = (const class GGS_grammarForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarForGeneration_2E_weak init_nil (void) {
    GGS_grammarForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarForGeneration bang_grammarForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarForGeneration unwrappedValue (void) const ;

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
  public: static GGS_grammarForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primitiveTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_primitiveTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_primitiveTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_primitiveTypeForGeneration (const class cPtr_primitiveTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mPredefinedTypeName (void) const ;

  public: class GGS_string readProperty_mCppDeclarationString (void) const ;

  public: class GGS_bool readProperty_isPackage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primitiveTypeForGeneration init_21__21__21__21_isPackage (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_bool & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primitiveTypeForGeneration extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primitiveTypeForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      const class GGS_string & inOperand2,
                                                                      const class GGS_bool & inOperand3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primitiveTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @primitiveTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_primitiveTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void primitiveTypeForGeneration_init_21__21__21__21_isPackage (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         Compiler * inCompiler) ;


//--- Extension getter appendPrimitiveTypeDeclaration
  public: virtual class GGS_string getter_appendPrimitiveTypeDeclaration (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendPrimitiveTypePreDeclaration
  public: virtual void method_appendPrimitiveTypePreDeclaration (class GGS_string & arg_ioHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mPredefinedTypeName ;
  public: GGS_string mProperty_mCppDeclarationString ;
  public: GGS_bool mProperty_isPackage ;


//--- Default constructor
  public: cPtr_primitiveTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_primitiveTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                           const GGS_string & in_mPredefinedTypeName,
                                           const GGS_string & in_mCppDeclarationString,
                                           const GGS_bool & in_isPackage,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primitiveTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_primitiveTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_primitiveTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_primitiveTypeForGeneration_2E_weak (const class GGS_primitiveTypeForGeneration & inSource) ;

  public: GGS_primitiveTypeForGeneration_2E_weak & operator = (const class GGS_primitiveTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_primitiveTypeForGeneration_2E_weak init_nil (void) {
    GGS_primitiveTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_primitiveTypeForGeneration bang_primitiveTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_primitiveTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_primitiveTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primitiveTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primitiveTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2E_weak ;

