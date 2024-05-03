#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractInputParameter_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractInputParameter_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractInputParameter_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractInputParameter_2E_weak (const class GGS_abstractInputParameter & inSource) ;

  public: GGS_abstractInputParameter_2E_weak & operator = (const class GGS_abstractInputParameter & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_abstractInputParameter_2E_weak init_nil (void) {
    GGS_abstractInputParameter_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractInputParameter bang_abstractInputParameter_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractInputParameter unwrappedValue (void) const {
    GGS_abstractInputParameter result ;
    if (isValid ()) {
      const cPtr_abstractInputParameter * p = (cPtr_abstractInputParameter *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractInputParameter (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_abstractInputParameter_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractInputParameter_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractInputParameter_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractInputParameter_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterAnonymousVariable reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterAnonymousVariable : public GGS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GGS_inputParameterAnonymousVariable (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputParameterAnonymousVariable (const class cPtr_inputParameterAnonymousVariable * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputParameterAnonymousVariable init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputParameterAnonymousVariable extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputParameterAnonymousVariable class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterAnonymousVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputParameterAnonymousVariable class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputParameterAnonymousVariable class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputParameterAnonymousVariable : public cPtr_abstractInputParameter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputParameterAnonymousVariable_init (Compiler * inCompiler) ;


//--- Extension method analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS_terminalCheckAssignementList & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_inputParameterAnonymousVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputParameterAnonymousVariable (LOCATION_ARGS) ;

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
// Phase 1: @inputParameterAnonymousVariable_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterAnonymousVariable_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterAnonymousVariable_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterAnonymousVariable_2E_weak (const class GGS_inputParameterAnonymousVariable & inSource) ;

  public: GGS_inputParameterAnonymousVariable_2E_weak & operator = (const class GGS_inputParameterAnonymousVariable & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_inputParameterAnonymousVariable_2E_weak init_nil (void) {
    GGS_inputParameterAnonymousVariable_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputParameterAnonymousVariable bang_inputParameterAnonymousVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputParameterAnonymousVariable unwrappedValue (void) const {
    GGS_inputParameterAnonymousVariable result ;
    if (isValid ()) {
      const cPtr_inputParameterAnonymousVariable * p = (cPtr_inputParameterAnonymousVariable *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputParameterAnonymousVariable (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputParameterAnonymousVariable_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputParameterAnonymousVariable_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterAnonymousVariable_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputParameterAnonymousVariable_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterVariable reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterVariable : public GGS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GGS_inputParameterVariable (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputParameterVariable (const class cPtr_inputParameterVariable * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputParameterVariable init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputParameterVariable extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputParameterVariable class_func_new (const class GGS_lstring & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputParameterVariable class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputParameterVariable class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputParameterVariable : public cPtr_abstractInputParameter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputParameterVariable_init_21_ (const class GGS_lstring & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension method analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS_terminalCheckAssignementList & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_inputParameterVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputParameterVariable (const GGS_lstring & in_mActualParameterName
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
// Phase 1: @inputParameterVariable_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterVariable_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterVariable_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterVariable_2E_weak (const class GGS_inputParameterVariable & inSource) ;

  public: GGS_inputParameterVariable_2E_weak & operator = (const class GGS_inputParameterVariable & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_inputParameterVariable_2E_weak init_nil (void) {
    GGS_inputParameterVariable_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputParameterVariable bang_inputParameterVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputParameterVariable unwrappedValue (void) const {
    GGS_inputParameterVariable result ;
    if (isValid ()) {
      const cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputParameterVariable (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputParameterVariable_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputParameterVariable_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterVariable_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputParameterVariable_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterDeclaredVariable reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredVariable : public GGS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredVariable (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputParameterDeclaredVariable (const class cPtr_inputParameterDeclaredVariable * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputParameterDeclaredVariable init_21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputParameterDeclaredVariable extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputParameterDeclaredVariable class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputParameterDeclaredVariable class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputParameterDeclaredVariable class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputParameterDeclaredVariable : public cPtr_abstractInputParameter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputParameterDeclaredVariable_init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS_terminalCheckAssignementList & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_inputParameterDeclaredVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputParameterDeclaredVariable (const GGS_lstring & in_mActualParameterTypeName,
                                               const GGS_lstring & in_mActualParameterName
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
// Phase 1: @inputParameterDeclaredVariable_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredVariable_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredVariable_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterDeclaredVariable_2E_weak (const class GGS_inputParameterDeclaredVariable & inSource) ;

  public: GGS_inputParameterDeclaredVariable_2E_weak & operator = (const class GGS_inputParameterDeclaredVariable & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_inputParameterDeclaredVariable_2E_weak init_nil (void) {
    GGS_inputParameterDeclaredVariable_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputParameterDeclaredVariable bang_inputParameterDeclaredVariable_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputParameterDeclaredVariable unwrappedValue (void) const {
    GGS_inputParameterDeclaredVariable result ;
    if (isValid ()) {
      const cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputParameterDeclaredVariable (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputParameterDeclaredVariable_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputParameterDeclaredVariable_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredVariable_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputParameterDeclaredVariable_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterDeclaredConstant reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredConstant : public GGS_abstractInputParameter {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredConstant (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inputParameterDeclaredConstant (const class cPtr_inputParameterDeclaredConstant * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inputParameterDeclaredConstant init_21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inputParameterDeclaredConstant extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputParameterDeclaredConstant class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredConstant & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputParameterDeclaredConstant class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputParameterDeclaredConstant class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputParameterDeclaredConstant : public cPtr_abstractInputParameter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputParameterDeclaredConstant_init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS_terminalCheckAssignementList & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_inputParameterDeclaredConstant (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputParameterDeclaredConstant (const GGS_lstring & in_mActualParameterTypeName,
                                               const GGS_lstring & in_mActualParameterName
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
// Phase 1: @inputParameterDeclaredConstant_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredConstant_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredConstant_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterDeclaredConstant_2E_weak (const class GGS_inputParameterDeclaredConstant & inSource) ;

  public: GGS_inputParameterDeclaredConstant_2E_weak & operator = (const class GGS_inputParameterDeclaredConstant & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_inputParameterDeclaredConstant_2E_weak init_nil (void) {
    GGS_inputParameterDeclaredConstant_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inputParameterDeclaredConstant bang_inputParameterDeclaredConstant_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_inputParameterDeclaredConstant unwrappedValue (void) const {
    GGS_inputParameterDeclaredConstant result ;
    if (isValid ()) {
      const cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) ptr () ;
      if (nullptr != p) {
        result = GGS_inputParameterDeclaredConstant (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_inputParameterDeclaredConstant_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inputParameterDeclaredConstant_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredConstant_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inputParameterDeclaredConstant_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualInputParameterListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_actualInputParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_actualInputParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_actualInputParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mActualSelector,
                                                 const class GGS_abstractInputParameter & in_mInputParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualInputParameterListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualInputParameterListAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualInputParameterListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_actualInputParameterListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_abstractInputParameter & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_actualInputParameterListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_abstractInputParameter & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_actualInputParameterListAST add_operation (const GGS_actualInputParameterListAST & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_abstractInputParameter constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_abstractInputParameter constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_abstractInputParameter & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_abstractInputParameter & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_abstractInputParameter & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualSelectorAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputParameterAtIndex (class GGS_abstractInputParameter constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_abstractInputParameter & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_abstractInputParameter & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mActualSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractInputParameter getter_mInputParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualInputParameterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualInputParameterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_actualInputParameterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_actualInputParameterListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_actualInputParameterListAST ;
 
} ; // End of GGS_actualInputParameterListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_actualInputParameterListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_actualInputParameterListAST (const GGS_actualInputParameterListAST & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GGS_abstractInputParameter current_mInputParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actualInputParameterListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualInputParameterListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualInputParameterListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_actualInputParameterListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mActualSelector ;
  public: inline GGS_lstring readProperty_mActualSelector (void) const {
    return mProperty_mActualSelector ;
  }

  public: GGS_abstractInputParameter mProperty_mInputParameter ;
  public: inline GGS_abstractInputParameter readProperty_mInputParameter (void) const {
    return mProperty_mInputParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actualInputParameterListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualSelector = inValue ;
  }

  public: inline void setter_setMInputParameter (const GGS_abstractInputParameter & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputParameter = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_actualInputParameterListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actualInputParameterListAST_2E_element (const GGS_lstring & in_mActualSelector,
                                                      const GGS_abstractInputParameter & in_mInputParameter) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualInputParameterListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_abstractInputParameter & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualInputParameterListAST_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualInputParameterListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_abstractInputParameter & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_actualInputParameterListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualInputParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_syntaxInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syntaxInstructionAST_2E_weak (const class GGS_syntaxInstructionAST & inSource) ;

  public: GGS_syntaxInstructionAST_2E_weak & operator = (const class GGS_syntaxInstructionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_syntaxInstructionAST_2E_weak init_nil (void) {
    GGS_syntaxInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syntaxInstructionAST bang_syntaxInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_syntaxInstructionAST unwrappedValue (void) const {
    GGS_syntaxInstructionAST result ;
    if (isValid ()) {
      const cPtr_syntaxInstructionAST * p = (cPtr_syntaxInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_syntaxInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_syntaxInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syntaxInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionAST_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticInstructionAST_2E_weak (const class GGS_semanticInstructionAST & inSource) ;

  public: GGS_semanticInstructionAST_2E_weak & operator = (const class GGS_semanticInstructionAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_semanticInstructionAST_2E_weak init_nil (void) {
    GGS_semanticInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticInstructionAST bang_semanticInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_semanticInstructionAST unwrappedValue (void) const {
    GGS_semanticInstructionAST result ;
    if (isValid ()) {
      const cPtr_semanticInstructionAST * p = (cPtr_semanticInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_semanticInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_semanticInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_semanticDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_semanticDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticDeclarationAST & in_mSemanticDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_semanticDeclarationListAST class_func_listWithValue (const class GGS_semanticDeclarationAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_semanticDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_semanticDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_semanticDeclarationListAST add_operation (const GGS_semanticDeclarationListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticDeclarationAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticDeclarationAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticDeclarationAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticDeclarationAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticDeclarationAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSemanticDeclarationAtIndex (class GGS_semanticDeclarationAST constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticDeclarationAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticDeclarationAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationAST getter_mSemanticDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_semanticDeclarationListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticDeclarationListAST ;
 
} ; // End of GGS_semanticDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticDeclarationListAST (const GGS_semanticDeclarationListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_semanticDeclarationAST current_mSemanticDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticDeclarationListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticDeclarationAST mProperty_mSemanticDeclaration ;
  public: inline GGS_semanticDeclarationAST readProperty_mSemanticDeclaration (void) const {
    return mProperty_mSemanticDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSemanticDeclaration (const GGS_semanticDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSemanticDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_semanticDeclarationListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticDeclarationListAST_2E_element (const GGS_semanticDeclarationAST & in_mSemanticDeclaration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticDeclarationListAST_2E_element init_21_ (const class GGS_semanticDeclarationAST & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticDeclarationListAST_2E_element class_func_new (const class GGS_semanticDeclarationAST & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticDeclarationListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_externFunctionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_externFunctionDeclarationAST (const class cPtr_externFunctionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mFormalArgumentList (void) const ;

  public: class GGS_lstring readProperty_mResultTypeName (void) const ;

  public: class GGS_bool readProperty_usefullFunc (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externFunctionDeclarationAST init_21_isPredefined_21__21__21__21_usefullFunc (const class GGS_bool & inOperand0,
                                                                                                   const class GGS_lstring & inOperand1,
                                                                                                   const class GGS_formalInputParameterListAST & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_bool & inOperand4,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externFunctionDeclarationAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externFunctionDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_formalInputParameterListAST & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_bool & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_externFunctionDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externFunctionDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_externFunctionDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (const class GGS_bool & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_formalInputParameterListAST & inOperand2,
                                                                                             const class GGS_lstring & inOperand3,
                                                                                             const class GGS_bool & inOperand4,
                                                                                             Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS_formalInputParameterListAST mProperty_mFormalArgumentList ;
  public: GGS_lstring mProperty_mResultTypeName ;
  public: GGS_bool mProperty_usefullFunc ;


//--- Default constructor
  public: cPtr_externFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                             const GGS_lstring & in_mFunctionName,
                                             const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                             const GGS_lstring & in_mResultTypeName,
                                             const GGS_bool & in_usefullFunc
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
// Phase 1: @externFunctionDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externFunctionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externFunctionDeclarationAST_2E_weak (const class GGS_externFunctionDeclarationAST & inSource) ;

  public: GGS_externFunctionDeclarationAST_2E_weak & operator = (const class GGS_externFunctionDeclarationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_externFunctionDeclarationAST_2E_weak init_nil (void) {
    GGS_externFunctionDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_externFunctionDeclarationAST bang_externFunctionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_externFunctionDeclarationAST unwrappedValue (void) const {
    GGS_externFunctionDeclarationAST result ;
    if (isValid ()) {
      const cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_externFunctionDeclarationAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_externFunctionDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externFunctionDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externFunctionDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_externFunctionDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST : public GGS_externFunctionDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_functionDeclarationAST (const class cPtr_functionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mResultVariableName (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mFunctionInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfFunctionInstructionList (void) const ;

  public: class GGS_bool readProperty_mIsInternal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionDeclarationAST init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                             const class GGS_lstring & inOperand1,
                                                                                                             const class GGS_formalInputParameterListAST & inOperand2,
                                                                                                             const class GGS_lstring & inOperand3,
                                                                                                             const class GGS_bool & inOperand4,
                                                                                                             const class GGS_lstring & inOperand5,
                                                                                                             const class GGS_semanticInstructionListAST & inOperand6,
                                                                                                             const class GGS_location & inOperand7,
                                                                                                             const class GGS_bool & inOperand8,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionDeclarationAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_formalInputParameterListAST & inOperand2,
                                                                  const class GGS_lstring & inOperand3,
                                                                  const class GGS_bool & inOperand4,
                                                                  const class GGS_lstring & inOperand5,
                                                                  const class GGS_semanticInstructionListAST & inOperand6,
                                                                  const class GGS_location & inOperand7,
                                                                  const class GGS_bool & inOperand8
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_functionDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_functionDeclarationAST : public cPtr_externFunctionDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                       const class GGS_lstring & inOperand1,
                                                                                                       const class GGS_formalInputParameterListAST & inOperand2,
                                                                                                       const class GGS_lstring & inOperand3,
                                                                                                       const class GGS_bool & inOperand4,
                                                                                                       const class GGS_lstring & inOperand5,
                                                                                                       const class GGS_semanticInstructionListAST & inOperand6,
                                                                                                       const class GGS_location & inOperand7,
                                                                                                       const class GGS_bool & inOperand8,
                                                                                                       Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mResultVariableName ;
  public: GGS_semanticInstructionListAST mProperty_mFunctionInstructionList ;
  public: GGS_location mProperty_mEndOfFunctionInstructionList ;
  public: GGS_bool mProperty_mIsInternal ;


//--- Default constructor
  public: cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionDeclarationAST (const GGS_bool & in_isPredefined,
                                       const GGS_lstring & in_mFunctionName,
                                       const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                       const GGS_lstring & in_mResultTypeName,
                                       const GGS_bool & in_usefullFunc,
                                       const GGS_lstring & in_mResultVariableName,
                                       const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                       const GGS_location & in_mEndOfFunctionInstructionList,
                                       const GGS_bool & in_mIsInternal
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
// Phase 1: @functionDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST_2E_weak : public GGS_externFunctionDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionDeclarationAST_2E_weak (const class GGS_functionDeclarationAST & inSource) ;

  public: GGS_functionDeclarationAST_2E_weak & operator = (const class GGS_functionDeclarationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_functionDeclarationAST_2E_weak init_nil (void) {
    GGS_functionDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_functionDeclarationAST bang_functionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_functionDeclarationAST unwrappedValue (void) const {
    GGS_functionDeclarationAST result ;
    if (isValid ()) {
      const cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_functionDeclarationAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_functionDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_functionDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @onceFunctionDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_onceFunctionDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_onceFunctionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_onceFunctionDeclarationAST (const class cPtr_onceFunctionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS_lstring readProperty_mResultTypeName (void) const ;

  public: class GGS_lstring readProperty_mResultVariableName (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mFunctionInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfFunctionInstructionList (void) const ;

  public: class GGS_bool readProperty_mIsInternal (void) const ;

  public: class GGS_bool readProperty_mIsUsefull (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_onceFunctionDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_lstring & inOperand2,
                                                                                                  const class GGS_lstring & inOperand3,
                                                                                                  const class GGS_semanticInstructionListAST & inOperand4,
                                                                                                  const class GGS_location & inOperand5,
                                                                                                  const class GGS_bool & inOperand6,
                                                                                                  const class GGS_bool & inOperand7,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_onceFunctionDeclarationAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_onceFunctionDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      const class GGS_lstring & inOperand3,
                                                                      const class GGS_semanticInstructionListAST & inOperand4,
                                                                      const class GGS_location & inOperand5,
                                                                      const class GGS_bool & inOperand6,
                                                                      const class GGS_bool & inOperand7
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_onceFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_onceFunctionDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @onceFunctionDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_onceFunctionDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_lstring & inOperand3,
                                                                                            const class GGS_semanticInstructionListAST & inOperand4,
                                                                                            const class GGS_location & inOperand5,
                                                                                            const class GGS_bool & inOperand6,
                                                                                            const class GGS_bool & inOperand7,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS_lstring mProperty_mResultTypeName ;
  public: GGS_lstring mProperty_mResultVariableName ;
  public: GGS_semanticInstructionListAST mProperty_mFunctionInstructionList ;
  public: GGS_location mProperty_mEndOfFunctionInstructionList ;
  public: GGS_bool mProperty_mIsInternal ;
  public: GGS_bool mProperty_mIsUsefull ;


//--- Default constructor
  public: cPtr_onceFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_onceFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                           const GGS_lstring & in_mFunctionName,
                                           const GGS_lstring & in_mResultTypeName,
                                           const GGS_lstring & in_mResultVariableName,
                                           const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                           const GGS_location & in_mEndOfFunctionInstructionList,
                                           const GGS_bool & in_mIsInternal,
                                           const GGS_bool & in_mIsUsefull
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
// Phase 1: @onceFunctionDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_onceFunctionDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_onceFunctionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_onceFunctionDeclarationAST_2E_weak (const class GGS_onceFunctionDeclarationAST & inSource) ;

  public: GGS_onceFunctionDeclarationAST_2E_weak & operator = (const class GGS_onceFunctionDeclarationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_onceFunctionDeclarationAST_2E_weak init_nil (void) {
    GGS_onceFunctionDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_onceFunctionDeclarationAST bang_onceFunctionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_onceFunctionDeclarationAST unwrappedValue (void) const {
    GGS_onceFunctionDeclarationAST result ;
    if (isValid ()) {
      const cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_onceFunctionDeclarationAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_onceFunctionDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_onceFunctionDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_onceFunctionDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_onceFunctionDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalTemplateInputParameterListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_formalTemplateInputParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_formalTemplateInputParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_formalTemplateInputParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalTemplateSelector,
                                                 const class GGS_lstring & in_mFormalArgumentTypeName,
                                                 const class GGS_lstring & in_mFormalArgumentName,
                                                 const class GGS_bool & in_mIsUnused
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalTemplateInputParameterListAST init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalTemplateInputParameterListAST extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formalTemplateInputParameterListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_formalTemplateInputParameterListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_lstring & inOperand2,
                                                                                         const class GGS_bool & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_formalTemplateInputParameterListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_lstring & inOperand2,
                                                     const class GGS_bool & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_formalTemplateInputParameterListAST add_operation (const GGS_formalTemplateInputParameterListAST & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               class GGS_bool constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_bool constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 class GGS_bool & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                class GGS_bool & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_bool & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalTemplateSelectorAtIndex (class GGS_lstring constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsUnusedAtIndex (class GGS_bool constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              class GGS_bool & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             class GGS_bool & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalTemplateSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalTemplateInputParameterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalTemplateInputParameterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalTemplateInputParameterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_formalTemplateInputParameterListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_formalTemplateInputParameterListAST ;
 
} ; // End of GGS_formalTemplateInputParameterListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_formalTemplateInputParameterListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST & inEnumeratedObject,
                                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mFormalTemplateSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalTemplateInputParameterListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalTemplateInputParameterListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_formalTemplateInputParameterListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalTemplateSelector ;
  public: inline GGS_lstring readProperty_mFormalTemplateSelector (void) const {
    return mProperty_mFormalTemplateSelector ;
  }

  public: GGS_lstring mProperty_mFormalArgumentTypeName ;
  public: inline GGS_lstring readProperty_mFormalArgumentTypeName (void) const {
    return mProperty_mFormalArgumentTypeName ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GGS_bool mProperty_mIsUnused ;
  public: inline GGS_bool readProperty_mIsUnused (void) const {
    return mProperty_mIsUnused ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formalTemplateInputParameterListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalTemplateSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalTemplateSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMIsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsUnused = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_formalTemplateInputParameterListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalTemplateInputParameterListAST_2E_element (const GGS_lstring & in_mFormalTemplateSelector,
                                                              const GGS_lstring & in_mFormalArgumentTypeName,
                                                              const GGS_lstring & in_mFormalArgumentName,
                                                              const GGS_bool & in_mIsUnused) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalTemplateInputParameterListAST_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_bool & inOperand3,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalTemplateInputParameterListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formalTemplateInputParameterListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_bool & inOperand3,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_formalTemplateInputParameterListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_filewrapperTemplateListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFilewrapperTemplateName,
                                                 const class GGS_lstring & in_mFilewrapperTemplatePath,
                                                 const class GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperTemplateListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperTemplateListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_filewrapperTemplateListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_formalTemplateInputParameterListAST & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_filewrapperTemplateListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_formalTemplateInputParameterListAST & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_filewrapperTemplateListAST add_operation (const GGS_filewrapperTemplateListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_formalTemplateInputParameterListAST constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_formalTemplateInputParameterListAST constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_formalTemplateInputParameterListAST & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_formalTemplateInputParameterListAST & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_formalTemplateInputParameterListAST & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateFormalInputParametersAtIndex (class GGS_formalTemplateInputParameterListAST constinArgument0,
                                                                                            class GGS_uint constinArgument1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateNameAtIndex (class GGS_lstring constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplatePathAtIndex (class GGS_lstring constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_formalTemplateInputParameterListAST & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_formalTemplateInputParameterListAST & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_formalTemplateInputParameterListAST getter_mFilewrapperTemplateFormalInputParametersAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFilewrapperTemplateNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFilewrapperTemplatePathAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_filewrapperTemplateListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_filewrapperTemplateListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_filewrapperTemplateListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_filewrapperTemplateListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_filewrapperTemplateListAST ;
 
} ; // End of GGS_filewrapperTemplateListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_filewrapperTemplateListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
  public: class GGS_formalTemplateInputParameterListAST current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_filewrapperTemplateListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFilewrapperTemplateName ;
  public: inline GGS_lstring readProperty_mFilewrapperTemplateName (void) const {
    return mProperty_mFilewrapperTemplateName ;
  }

  public: GGS_lstring mProperty_mFilewrapperTemplatePath ;
  public: inline GGS_lstring readProperty_mFilewrapperTemplatePath (void) const {
    return mProperty_mFilewrapperTemplatePath ;
  }

  public: GGS_formalTemplateInputParameterListAST mProperty_mFilewrapperTemplateFormalInputParameters ;
  public: inline GGS_formalTemplateInputParameterListAST readProperty_mFilewrapperTemplateFormalInputParameters (void) const {
    return mProperty_mFilewrapperTemplateFormalInputParameters ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFilewrapperTemplateName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateName = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplatePath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplatePath = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateFormalInputParameters (const GGS_formalTemplateInputParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateFormalInputParameters = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_filewrapperTemplateListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_filewrapperTemplateListAST_2E_element (const GGS_lstring & in_mFilewrapperTemplateName,
                                                     const GGS_lstring & in_mFilewrapperTemplatePath,
                                                     const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_formalTemplateInputParameterListAST & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperTemplateListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperTemplateListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_formalTemplateInputParameterListAST & inOperand2,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_filewrapperTemplateListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperDeclarationAST (const class cPtr_filewrapperDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsInternal (void) const ;

  public: class GGS_string readProperty_mSourceFileAbsolutePath (void) const ;

  public: class GGS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GGS_lstring readProperty_mFilewrapperPath (void) const ;

  public: class GGS_lstringlist readProperty_mFilewrapperTextFileExtensionList (void) const ;

  public: class GGS_lstringlist readProperty_mFilewrapperBinaryFileExtensionList (void) const ;

  public: class GGS_filewrapperTemplateListAST readProperty_mFilewrapperTemplateList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                 const class GGS_bool & inOperand1,
                                                                                                 const class GGS_string & inOperand2,
                                                                                                 const class GGS_lstring & inOperand3,
                                                                                                 const class GGS_lstring & inOperand4,
                                                                                                 const class GGS_lstringlist & inOperand5,
                                                                                                 const class GGS_lstringlist & inOperand6,
                                                                                                 const class GGS_filewrapperTemplateListAST & inOperand7,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperDeclarationAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_lstring & inOperand3,
                                                                     const class GGS_lstring & inOperand4,
                                                                     const class GGS_lstringlist & inOperand5,
                                                                     const class GGS_lstringlist & inOperand6,
                                                                     const class GGS_filewrapperTemplateListAST & inOperand7
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_filewrapperDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_string & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_lstring & inOperand4,
                                                                                           const class GGS_lstringlist & inOperand5,
                                                                                           const class GGS_lstringlist & inOperand6,
                                                                                           const class GGS_filewrapperTemplateListAST & inOperand7,
                                                                                           Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsInternal ;
  public: GGS_string mProperty_mSourceFileAbsolutePath ;
  public: GGS_lstring mProperty_mFilewrapperName ;
  public: GGS_lstring mProperty_mFilewrapperPath ;
  public: GGS_lstringlist mProperty_mFilewrapperTextFileExtensionList ;
  public: GGS_lstringlist mProperty_mFilewrapperBinaryFileExtensionList ;
  public: GGS_filewrapperTemplateListAST mProperty_mFilewrapperTemplateList ;


//--- Default constructor
  public: cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperDeclarationAST (const GGS_bool & in_isPredefined,
                                          const GGS_bool & in_mIsInternal,
                                          const GGS_string & in_mSourceFileAbsolutePath,
                                          const GGS_lstring & in_mFilewrapperName,
                                          const GGS_lstring & in_mFilewrapperPath,
                                          const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                          const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                          const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
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
// Phase 1: @filewrapperDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperDeclarationAST_2E_weak (const class GGS_filewrapperDeclarationAST & inSource) ;

  public: GGS_filewrapperDeclarationAST_2E_weak & operator = (const class GGS_filewrapperDeclarationAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperDeclarationAST_2E_weak init_nil (void) {
    GGS_filewrapperDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperDeclarationAST bang_filewrapperDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_filewrapperDeclarationAST unwrappedValue (void) const {
    GGS_filewrapperDeclarationAST result ;
    if (isValid ()) {
      const cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_filewrapperDeclarationAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_filewrapperDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_filewrapperDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_syntaxInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_syntaxInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_syntaxInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionList init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxInstructionList extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxInstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_syntaxInstructionList class_func_listWithValue (const class GGS_syntaxInstructionAST & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_syntaxInstructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_syntaxInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_syntaxInstructionList add_operation (const GGS_syntaxInstructionList & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_syntaxInstructionAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_syntaxInstructionAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_syntaxInstructionAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_syntaxInstructionAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_syntaxInstructionAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_syntaxInstructionAST constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_syntaxInstructionAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_syntaxInstructionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionAST getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_syntaxInstructionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxInstructionList ;
 
} ; // End of GGS_syntaxInstructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxInstructionList (const GGS_syntaxInstructionList & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_syntaxInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxInstructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_syntaxInstructionAST mProperty_mInstruction ;
  public: inline GGS_syntaxInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxInstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_syntaxInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_syntaxInstructionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxInstructionList_2E_element (const GGS_syntaxInstructionAST & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionList_2E_element init_21_ (const class GGS_syntaxInstructionAST & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxInstructionList_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxInstructionList_2E_element class_func_new (const class GGS_syntaxInstructionAST & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syntaxInstructionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalLabelListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_nonTerminalLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_nonTerminalLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLabelName,
                                                 const class GGS_formalParameterListAST & in_mFormalArgumentList,
                                                 const class GGS_location & in_mEndOfArgumentLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalLabelListAST init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalLabelListAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalLabelListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_nonTerminalLabelListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_formalParameterListAST & inOperand1,
                                                                             const class GGS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_nonTerminalLabelListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_formalParameterListAST & inOperand1,
                                                     const class GGS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_nonTerminalLabelListAST add_operation (const GGS_nonTerminalLabelListAST & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_formalParameterListAST constinArgument1,
                                               class GGS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_formalParameterListAST constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_formalParameterListAST & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_formalParameterListAST & outArgument1,
                                                class GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_formalParameterListAST & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationAtIndex (class GGS_location constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListAtIndex (class GGS_formalParameterListAST constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_formalParameterListAST & outArgument1,
                                              class GGS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_formalParameterListAST & outArgument1,
                                             class GGS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfArgumentLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListAST getter_mFormalArgumentListAtIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mLabelNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalLabelListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalLabelListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonTerminalLabelListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_nonTerminalLabelListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonTerminalLabelListAST ;
 
} ; // End of GGS_nonTerminalLabelListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalLabelListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonTerminalLabelListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalLabelListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalLabelListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLabelName ;
  public: inline GGS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GGS_formalParameterListAST mProperty_mFormalArgumentList ;
  public: inline GGS_formalParameterListAST readProperty_mFormalArgumentList (void) const {
    return mProperty_mFormalArgumentList ;
  }

  public: GGS_location mProperty_mEndOfArgumentLocation ;
  public: inline GGS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonTerminalLabelListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMFormalArgumentList (const GGS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentList = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_nonTerminalLabelListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonTerminalLabelListAST_2E_element (const GGS_lstring & in_mLabelName,
                                                  const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                  const GGS_location & in_mEndOfArgumentLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalLabelListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_formalParameterListAST & inOperand1,
                                                                          const class GGS_location & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalLabelListAST_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalLabelListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_formalParameterListAST & inOperand1,
                                                                              const class GGS_location & inOperand2,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_nonTerminalLabelListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalDeclarationListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_nonterminalDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mNonterminalName ;
  public: inline GGS_lstring readProperty_mNonterminalName (void) const {
    return mProperty_mNonterminalName ;
  }

  public: GGS_nonTerminalLabelListAST mProperty_mLabels ;
  public: inline GGS_nonTerminalLabelListAST readProperty_mLabels (void) const {
    return mProperty_mLabels ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonterminalDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMLabels (const GGS_nonTerminalLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabels = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_nonterminalDeclarationListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonterminalDeclarationListAST_2E_element (const GGS_lstring & in_mNonterminalName,
                                                        const GGS_nonTerminalLabelListAST & in_mLabels) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonterminalDeclarationListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_nonTerminalLabelListAST & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonterminalDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonterminalDeclarationListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_nonTerminalLabelListAST & inOperand1,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_nonterminalDeclarationListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleLabelListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxRuleLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_syntaxRuleLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_syntaxRuleLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLabelName,
                                                 const class GGS_formalParameterListAST & in_mFormalArguments,
                                                 const class GGS_location & in_mEndOfArgumentLocation,
                                                 const class GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                 const class GGS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxRuleLabelListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxRuleLabelListAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxRuleLabelListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_syntaxRuleLabelListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_formalParameterListAST & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_syntaxInstructionList & inOperand3,
                                                                            const class GGS_location & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_syntaxRuleLabelListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_formalParameterListAST & inOperand1,
                                                     const class GGS_location & inOperand2,
                                                     const class GGS_syntaxInstructionList & inOperand3,
                                                     const class GGS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_syntaxRuleLabelListAST add_operation (const GGS_syntaxRuleLabelListAST & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_formalParameterListAST constinArgument1,
                                               class GGS_location constinArgument2,
                                               class GGS_syntaxInstructionList constinArgument3,
                                               class GGS_location constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_formalParameterListAST constinArgument1,
                                                      class GGS_location constinArgument2,
                                                      class GGS_syntaxInstructionList constinArgument3,
                                                      class GGS_location constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_formalParameterListAST & outArgument1,
                                                 class GGS_location & outArgument2,
                                                 class GGS_syntaxInstructionList & outArgument3,
                                                 class GGS_location & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_formalParameterListAST & outArgument1,
                                                class GGS_location & outArgument2,
                                                class GGS_syntaxInstructionList & outArgument3,
                                                class GGS_location & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_formalParameterListAST & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_syntaxInstructionList & outArgument3,
                                                      class GGS_location & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationAtIndex (class GGS_location constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentsAtIndex (class GGS_formalParameterListAST constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GGS_syntaxInstructionList constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_formalParameterListAST & outArgument1,
                                              class GGS_location & outArgument2,
                                              class GGS_syntaxInstructionList & outArgument3,
                                              class GGS_location & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_formalParameterListAST & outArgument1,
                                             class GGS_location & outArgument2,
                                             class GGS_syntaxInstructionList & outArgument3,
                                             class GGS_location & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfArgumentLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListAST getter_mFormalArgumentsAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mLabelNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionList getter_mSyntaxInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxRuleLabelListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxRuleLabelListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxRuleLabelListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_syntaxRuleLabelListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxRuleLabelListAST ;
 
} ; // End of GGS_syntaxRuleLabelListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxRuleLabelListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalArguments (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxRuleLabelListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleLabelListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxRuleLabelListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLabelName ;
  public: inline GGS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GGS_formalParameterListAST mProperty_mFormalArguments ;
  public: inline GGS_formalParameterListAST readProperty_mFormalArguments (void) const {
    return mProperty_mFormalArguments ;
  }

  public: GGS_location mProperty_mEndOfArgumentLocation ;
  public: inline GGS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

  public: GGS_syntaxInstructionList mProperty_mSyntaxInstructionList ;
  public: inline GGS_syntaxInstructionList readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

  public: GGS_location mProperty_mEndOfInstructionList ;
  public: inline GGS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxRuleLabelListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMFormalArguments (const GGS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArguments = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

  public: inline void setter_setMSyntaxInstructionList (const GGS_syntaxInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_syntaxRuleLabelListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxRuleLabelListAST_2E_element (const GGS_lstring & in_mLabelName,
                                                 const GGS_formalParameterListAST & in_mFormalArguments,
                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                 const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                 const GGS_location & in_mEndOfInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxRuleLabelListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_formalParameterListAST & inOperand1,
                                                                                 const class GGS_location & inOperand2,
                                                                                 const class GGS_syntaxInstructionList & inOperand3,
                                                                                 const class GGS_location & inOperand4,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxRuleLabelListAST_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxRuleLabelListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_formalParameterListAST & inOperand1,
                                                                             const class GGS_location & inOperand2,
                                                                             const class GGS_syntaxInstructionList & inOperand3,
                                                                             const class GGS_location & inOperand4,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syntaxRuleLabelListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxRuleListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mNonterminalName ;
  public: inline GGS_lstring readProperty_mNonterminalName (void) const {
    return mProperty_mNonterminalName ;
  }

  public: GGS_syntaxRuleLabelListAST mProperty_mLabelList ;
  public: inline GGS_syntaxRuleLabelListAST readProperty_mLabelList (void) const {
    return mProperty_mLabelList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxRuleListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMLabelList (const GGS_syntaxRuleLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_syntaxRuleListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxRuleListAST_2E_element (const GGS_lstring & in_mNonterminalName,
                                            const GGS_syntaxRuleLabelListAST & in_mLabelList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxRuleListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_syntaxRuleLabelListAST & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxRuleListAST_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxRuleListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_syntaxRuleLabelListAST & inOperand1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syntaxRuleListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listOfSyntaxInstructionList list
//
//--------------------------------------------------------------------------------------------------

class GGS_listOfSyntaxInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_listOfSyntaxInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_listOfSyntaxInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                 const class GGS_location & in_mEndOf_5F_instructions
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listOfSyntaxInstructionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listOfSyntaxInstructionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listOfSyntaxInstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_listOfSyntaxInstructionList class_func_listWithValue (const class GGS_syntaxInstructionList & inOperand0,
                                                                                 const class GGS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_listOfSyntaxInstructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_syntaxInstructionList & inOperand0,
                                                     const class GGS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_listOfSyntaxInstructionList add_operation (const GGS_listOfSyntaxInstructionList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_syntaxInstructionList constinArgument0,
                                               class GGS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_syntaxInstructionList constinArgument0,
                                                      class GGS_location constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_syntaxInstructionList & outArgument0,
                                                 class GGS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_syntaxInstructionList & outArgument0,
                                                class GGS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_syntaxInstructionList & outArgument0,
                                                      class GGS_location & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_instructionsAtIndex (class GGS_location constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GGS_syntaxInstructionList constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_syntaxInstructionList & outArgument0,
                                              class GGS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_syntaxInstructionList & outArgument0,
                                             class GGS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOf_5F_instructionsAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionList getter_mSyntaxInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_listOfSyntaxInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_listOfSyntaxInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_listOfSyntaxInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_listOfSyntaxInstructionList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_listOfSyntaxInstructionList ;
 
} ; // End of GGS_listOfSyntaxInstructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_listOfSyntaxInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOf_5F_instructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_listOfSyntaxInstructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listOfSyntaxInstructionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_listOfSyntaxInstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_syntaxInstructionList mProperty_mSyntaxInstructionList ;
  public: inline GGS_syntaxInstructionList readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

  public: GGS_location mProperty_mEndOf_5F_instructions ;
  public: inline GGS_location readProperty_mEndOf_5F_instructions (void) const {
    return mProperty_mEndOf_5F_instructions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_listOfSyntaxInstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GGS_syntaxInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

  public: inline void setter_setMEndOf_5F_instructions (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOf_5F_instructions = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_listOfSyntaxInstructionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_listOfSyntaxInstructionList_2E_element (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                      const GGS_location & in_mEndOf_5F_instructions) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listOfSyntaxInstructionList_2E_element init_21__21_ (const class GGS_syntaxInstructionList & inOperand0,
                                                                          const class GGS_location & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listOfSyntaxInstructionList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listOfSyntaxInstructionList_2E_element class_func_new (const class GGS_syntaxInstructionList & inOperand0,
                                                                                  const class GGS_location & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_listOfSyntaxInstructionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxComponentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxComponentAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_galgas_33_SyntaxComponentAST (const class cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSyntaxComponentName (void) const ;

  public: class GGS_lstring readProperty_mLexiqueName (void) const ;

  public: class GGS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const ;

  public: class GGS_syntaxRuleListAST readProperty_mRuleList (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_SyntaxComponentAST init_21_isPredefined_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_nonterminalDeclarationListAST & inOperand3,
                                                                                            const class GGS_syntaxRuleListAST & inOperand4,
                                                                                            const class GGS_bool & inOperand5,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_SyntaxComponentAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_SyntaxComponentAST class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_nonterminalDeclarationListAST & inOperand3,
                                                                        const class GGS_syntaxRuleListAST & inOperand4,
                                                                        const class GGS_bool & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_SyntaxComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_galgas_33_SyntaxComponentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @galgas3SyntaxComponentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_galgas_33_SyntaxComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_nonterminalDeclarationListAST & inOperand3,
                                                                                      const class GGS_syntaxRuleListAST & inOperand4,
                                                                                      const class GGS_bool & inOperand5,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: GGS_lstring mProperty_mLexiqueName ;
  public: GGS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: GGS_syntaxRuleListAST mProperty_mRuleList ;
  public: GGS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_galgas_33_SyntaxComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_galgas_33_SyntaxComponentAST (const GGS_bool & in_isPredefined,
                                             const GGS_lstring & in_mSyntaxComponentName,
                                             const GGS_lstring & in_mLexiqueName,
                                             const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                             const GGS_syntaxRuleListAST & in_mRuleList,
                                             const GGS_bool & in_mHasTranslateFeature
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
// Phase 1: @galgas_33_SyntaxComponentAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_galgas_33_SyntaxComponentAST_2E_weak (const class GGS_galgas_33_SyntaxComponentAST & inSource) ;

  public: GGS_galgas_33_SyntaxComponentAST_2E_weak & operator = (const class GGS_galgas_33_SyntaxComponentAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_galgas_33_SyntaxComponentAST_2E_weak init_nil (void) {
    GGS_galgas_33_SyntaxComponentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_galgas_33_SyntaxComponentAST bang_galgas_33_SyntaxComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_galgas_33_SyntaxComponentAST unwrappedValue (void) const {
    GGS_galgas_33_SyntaxComponentAST result ;
    if (isValid ()) {
      const cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_galgas_33_SyntaxComponentAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_galgas_33_SyntaxComponentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_SyntaxComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_SyntaxComponentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_galgas_33_SyntaxComponentAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_GrammarComponentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_GrammarComponentAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_galgas_33_GrammarComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_galgas_33_GrammarComponentAST (const class cPtr_galgas_33_GrammarComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbool readProperty_mHasIndexing (void) const ;

  public: class GGS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GGS_lstring readProperty_mGrammarClass (void) const ;

  public: class GGS_lstringlist readProperty_mSyntaxComponents (void) const ;

  public: class GGS_lstring readProperty_mStartSymbolName (void) const ;

  public: class GGS_nonTerminalLabelListAST readProperty_mStartSymbolLabelList (void) const ;

  public: class GGS_lstringlist readProperty_mUnusedNonterminalList (void) const ;

  public: class GGS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_GrammarComponentAST init_21_isPredefined_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                         const class GGS_lbool & inOperand1,
                                                                                                         const class GGS_lstring & inOperand2,
                                                                                                         const class GGS_lstring & inOperand3,
                                                                                                         const class GGS_lstringlist & inOperand4,
                                                                                                         const class GGS_lstring & inOperand5,
                                                                                                         const class GGS_nonTerminalLabelListAST & inOperand6,
                                                                                                         const class GGS_lstringlist & inOperand7,
                                                                                                         const class GGS_bool & inOperand8,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_GrammarComponentAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_GrammarComponentAST class_func_new (const class GGS_bool & inOperand0,
                                                                         const class GGS_lbool & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_lstring & inOperand3,
                                                                         const class GGS_lstringlist & inOperand4,
                                                                         const class GGS_lstring & inOperand5,
                                                                         const class GGS_nonTerminalLabelListAST & inOperand6,
                                                                         const class GGS_lstringlist & inOperand7,
                                                                         const class GGS_bool & inOperand8
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_GrammarComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_galgas_33_GrammarComponentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @galgas3GrammarComponentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_galgas_33_GrammarComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                   const class GGS_lbool & inOperand1,
                                                                                                   const class GGS_lstring & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_lstringlist & inOperand4,
                                                                                                   const class GGS_lstring & inOperand5,
                                                                                                   const class GGS_nonTerminalLabelListAST & inOperand6,
                                                                                                   const class GGS_lstringlist & inOperand7,
                                                                                                   const class GGS_bool & inOperand8,
                                                                                                   Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbool mProperty_mHasIndexing ;
  public: GGS_lstring mProperty_mGrammarComponentName ;
  public: GGS_lstring mProperty_mGrammarClass ;
  public: GGS_lstringlist mProperty_mSyntaxComponents ;
  public: GGS_lstring mProperty_mStartSymbolName ;
  public: GGS_nonTerminalLabelListAST mProperty_mStartSymbolLabelList ;
  public: GGS_lstringlist mProperty_mUnusedNonterminalList ;
  public: GGS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_galgas_33_GrammarComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_galgas_33_GrammarComponentAST (const GGS_bool & in_isPredefined,
                                              const GGS_lbool & in_mHasIndexing,
                                              const GGS_lstring & in_mGrammarComponentName,
                                              const GGS_lstring & in_mGrammarClass,
                                              const GGS_lstringlist & in_mSyntaxComponents,
                                              const GGS_lstring & in_mStartSymbolName,
                                              const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                              const GGS_lstringlist & in_mUnusedNonterminalList,
                                              const GGS_bool & in_mHasTranslateFeature
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
// Phase 1: @galgas_33_GrammarComponentAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_GrammarComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_galgas_33_GrammarComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_galgas_33_GrammarComponentAST_2E_weak (const class GGS_galgas_33_GrammarComponentAST & inSource) ;

  public: GGS_galgas_33_GrammarComponentAST_2E_weak & operator = (const class GGS_galgas_33_GrammarComponentAST & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_galgas_33_GrammarComponentAST_2E_weak init_nil (void) {
    GGS_galgas_33_GrammarComponentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_galgas_33_GrammarComponentAST bang_galgas_33_GrammarComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_galgas_33_GrammarComponentAST unwrappedValue (void) const {
    GGS_galgas_33_GrammarComponentAST result ;
    if (isValid ()) {
      const cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_galgas_33_GrammarComponentAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_galgas_33_GrammarComponentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_GrammarComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_GrammarComponentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_galgas_33_GrammarComponentAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3SyntaxComponentListAST list
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_galgas_33_SyntaxComponentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSyntaxComponentName,
                                                 const class GGS_lstring & in_mImportedLexiqueFilePath,
                                                 const class GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                 const class GGS_syntaxRuleListAST & in_mRuleList,
                                                 const class GGS_bool & in_mHasTranslateFeature
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_SyntaxComponentListAST init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_SyntaxComponentListAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_SyntaxComponentListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_galgas_33_SyntaxComponentListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                      const class GGS_syntaxRuleListAST & inOperand3,
                                                                                      const class GGS_bool & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_galgas_33_SyntaxComponentListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_nonterminalDeclarationListAST & inOperand2,
                                                     const class GGS_syntaxRuleListAST & inOperand3,
                                                     const class GGS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_galgas_33_SyntaxComponentListAST add_operation (const GGS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_nonterminalDeclarationListAST constinArgument2,
                                               class GGS_syntaxRuleListAST constinArgument3,
                                               class GGS_bool constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_nonterminalDeclarationListAST constinArgument2,
                                                      class GGS_syntaxRuleListAST constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_nonterminalDeclarationListAST & outArgument2,
                                                 class GGS_syntaxRuleListAST & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_nonterminalDeclarationListAST & outArgument2,
                                                class GGS_syntaxRuleListAST & outArgument3,
                                                class GGS_bool & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_nonterminalDeclarationListAST & outArgument2,
                                                      class GGS_syntaxRuleListAST & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeatureAtIndex (class GGS_bool constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImportedLexiqueFilePathAtIndex (class GGS_lstring constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListAtIndex (class GGS_nonterminalDeclarationListAST constinArgument0,
                                                                              class GGS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleListAtIndex (class GGS_syntaxRuleListAST constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GGS_lstring constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_nonterminalDeclarationListAST & outArgument2,
                                              class GGS_syntaxRuleListAST & outArgument3,
                                              class GGS_bool & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_nonterminalDeclarationListAST & outArgument2,
                                             class GGS_syntaxRuleListAST & outArgument3,
                                             class GGS_bool & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHasTranslateFeatureAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mImportedLexiqueFilePathAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxRuleListAST getter_mRuleListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSyntaxComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_SyntaxComponentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_SyntaxComponentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_galgas_33_SyntaxComponentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_galgas_33_SyntaxComponentListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_galgas_33_SyntaxComponentListAST ;
 
} ; // End of GGS_galgas_33_SyntaxComponentListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_SyntaxComponentListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mImportedLexiqueFilePath (LOCATION_ARGS) const ;
  public: class GGS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GGS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_galgas_33_SyntaxComponentListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxComponentListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxComponentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GGS_lstring mProperty_mImportedLexiqueFilePath ;
  public: inline GGS_lstring readProperty_mImportedLexiqueFilePath (void) const {
    return mProperty_mImportedLexiqueFilePath ;
  }

  public: GGS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: inline GGS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GGS_syntaxRuleListAST mProperty_mRuleList ;
  public: inline GGS_syntaxRuleListAST readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: inline GGS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMImportedLexiqueFilePath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedLexiqueFilePath = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GGS_nonterminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GGS_syntaxRuleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_galgas_33_SyntaxComponentListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element (const GGS_lstring & in_mSyntaxComponentName,
                                                           const GGS_lstring & in_mImportedLexiqueFilePath,
                                                           const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                           const GGS_syntaxRuleListAST & in_mRuleList,
                                                           const GGS_bool & in_mHasTranslateFeature) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgas_33_SyntaxComponentListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_lstring & inOperand1,
                                                                                           const class GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                           const class GGS_syntaxRuleListAST & inOperand3,
                                                                                           const class GGS_bool & inOperand4,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgas_33_SyntaxComponentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgas_33_SyntaxComponentListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                       const class GGS_syntaxRuleListAST & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_galgas_33_SyntaxComponentListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prologueEpilogueList list
//
//--------------------------------------------------------------------------------------------------

class GGS_prologueEpilogueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_prologueEpilogueList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_prologueEpilogueList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticInstructionListAST & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prologueEpilogueList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prologueEpilogueList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prologueEpilogueList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_prologueEpilogueList class_func_listWithValue (const class GGS_semanticInstructionListAST & inOperand0,
                                                                          const class GGS_location & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_prologueEpilogueList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_semanticInstructionListAST & inOperand0,
                                                     const class GGS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_prologueEpilogueList add_operation (const GGS_prologueEpilogueList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticInstructionListAST constinArgument0,
                                               class GGS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticInstructionListAST constinArgument0,
                                                      class GGS_location constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticInstructionListAST & outArgument0,
                                                 class GGS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticInstructionListAST & outArgument0,
                                                class GGS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticInstructionListAST & outArgument0,
                                                      class GGS_location & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_semanticInstructionListAST constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticInstructionListAST & outArgument0,
                                              class GGS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticInstructionListAST & outArgument0,
                                             class GGS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_prologueEpilogueList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_prologueEpilogueList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_prologueEpilogueList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_prologueEpilogueList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_prologueEpilogueList ;
 
} ; // End of GGS_prologueEpilogueList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_prologueEpilogueList : public cGenericAbstractEnumerator {
  public: cEnumerator_prologueEpilogueList (const GGS_prologueEpilogueList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_prologueEpilogueList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prologueEpilogueList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_prologueEpilogueList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticInstructionListAST mProperty_mInstructionList ;
  public: inline GGS_semanticInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfInstructionList ;
  public: inline GGS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_prologueEpilogueList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GGS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_prologueEpilogueList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_prologueEpilogueList_2E_element (const GGS_semanticInstructionListAST & in_mInstructionList,
                                               const GGS_location & in_mEndOfInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prologueEpilogueList_2E_element init_21__21_ (const class GGS_semanticInstructionListAST & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prologueEpilogueList_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prologueEpilogueList_2E_element class_func_new (const class GGS_semanticInstructionListAST & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_prologueEpilogueList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programRuleList list
//
//--------------------------------------------------------------------------------------------------

class GGS_programRuleList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_programRuleList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_programRuleList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSourceFileExtension,
                                                 const class GGS_lstring & in_mSourceFileHelp,
                                                 const class GGS_lstring & in_mSourceFileVariableName,
                                                 const class GGS_bool & in_mSourceFileVariableNameIsUnused,
                                                 const class GGS_lstring & in_mReferenceGrammar,
                                                 const class GGS_semanticInstructionListAST & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programRuleList init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programRuleList extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_programRuleList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_programRuleList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_bool & inOperand3,
                                                                     const class GGS_lstring & inOperand4,
                                                                     const class GGS_semanticInstructionListAST & inOperand5,
                                                                     const class GGS_location & inOperand6
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_programRuleList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_lstring & inOperand2,
                                                     const class GGS_bool & inOperand3,
                                                     const class GGS_lstring & inOperand4,
                                                     const class GGS_semanticInstructionListAST & inOperand5,
                                                     const class GGS_location & inOperand6
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_programRuleList add_operation (const GGS_programRuleList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               class GGS_bool constinArgument3,
                                               class GGS_lstring constinArgument4,
                                               class GGS_semanticInstructionListAST constinArgument5,
                                               class GGS_location constinArgument6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_bool constinArgument3,
                                                      class GGS_lstring constinArgument4,
                                                      class GGS_semanticInstructionListAST constinArgument5,
                                                      class GGS_location constinArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 class GGS_bool & outArgument3,
                                                 class GGS_lstring & outArgument4,
                                                 class GGS_semanticInstructionListAST & outArgument5,
                                                 class GGS_location & outArgument6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                class GGS_bool & outArgument3,
                                                class GGS_lstring & outArgument4,
                                                class GGS_semanticInstructionListAST & outArgument5,
                                                class GGS_location & outArgument6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_bool & outArgument3,
                                                      class GGS_lstring & outArgument4,
                                                      class GGS_semanticInstructionListAST & outArgument5,
                                                      class GGS_location & outArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_semanticInstructionListAST constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReferenceGrammarAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileExtensionAtIndex (class GGS_lstring constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileHelpAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileVariableNameAtIndex (class GGS_lstring constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileVariableNameIsUnusedAtIndex (class GGS_bool constinArgument0,
                                                                                  class GGS_uint constinArgument1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              class GGS_bool & outArgument3,
                                              class GGS_lstring & outArgument4,
                                              class GGS_semanticInstructionListAST & outArgument5,
                                              class GGS_location & outArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             class GGS_bool & outArgument3,
                                             class GGS_lstring & outArgument4,
                                             class GGS_semanticInstructionListAST & outArgument5,
                                             class GGS_location & outArgument6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mReferenceGrammarAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSourceFileExtensionAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSourceFileHelpAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSourceFileVariableNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mSourceFileVariableNameIsUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programRuleList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programRuleList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_programRuleList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_programRuleList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_programRuleList ;
 
} ; // End of GGS_programRuleList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_programRuleList : public cGenericAbstractEnumerator {
  public: cEnumerator_programRuleList (const GGS_programRuleList & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mSourceFileExtension (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSourceFileHelp (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSourceFileVariableName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mReferenceGrammar (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programRuleList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programRuleList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_programRuleList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSourceFileExtension ;
  public: inline GGS_lstring readProperty_mSourceFileExtension (void) const {
    return mProperty_mSourceFileExtension ;
  }

  public: GGS_lstring mProperty_mSourceFileHelp ;
  public: inline GGS_lstring readProperty_mSourceFileHelp (void) const {
    return mProperty_mSourceFileHelp ;
  }

  public: GGS_lstring mProperty_mSourceFileVariableName ;
  public: inline GGS_lstring readProperty_mSourceFileVariableName (void) const {
    return mProperty_mSourceFileVariableName ;
  }

  public: GGS_bool mProperty_mSourceFileVariableNameIsUnused ;
  public: inline GGS_bool readProperty_mSourceFileVariableNameIsUnused (void) const {
    return mProperty_mSourceFileVariableNameIsUnused ;
  }

  public: GGS_lstring mProperty_mReferenceGrammar ;
  public: inline GGS_lstring readProperty_mReferenceGrammar (void) const {
    return mProperty_mReferenceGrammar ;
  }

  public: GGS_semanticInstructionListAST mProperty_mInstructionList ;
  public: inline GGS_semanticInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfInstructionList ;
  public: inline GGS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_programRuleList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSourceFileExtension (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileExtension = inValue ;
  }

  public: inline void setter_setMSourceFileHelp (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileHelp = inValue ;
  }

  public: inline void setter_setMSourceFileVariableName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileVariableName = inValue ;
  }

  public: inline void setter_setMSourceFileVariableNameIsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileVariableNameIsUnused = inValue ;
  }

  public: inline void setter_setMReferenceGrammar (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReferenceGrammar = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_programRuleList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_programRuleList_2E_element (const GGS_lstring & in_mSourceFileExtension,
                                          const GGS_lstring & in_mSourceFileHelp,
                                          const GGS_lstring & in_mSourceFileVariableName,
                                          const GGS_bool & in_mSourceFileVariableNameIsUnused,
                                          const GGS_lstring & in_mReferenceGrammar,
                                          const GGS_semanticInstructionListAST & in_mInstructionList,
                                          const GGS_location & in_mEndOfInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_programRuleList_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstring & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  const class GGS_lstring & inOperand4,
                                                                                  const class GGS_semanticInstructionListAST & inOperand5,
                                                                                  const class GGS_location & inOperand6,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_programRuleList_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_programRuleList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      const class GGS_bool & inOperand3,
                                                                      const class GGS_lstring & inOperand4,
                                                                      const class GGS_semanticInstructionListAST & inOperand5,
                                                                      const class GGS_location & inOperand6,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_programRuleList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgasDeclarationAST struct
//
//--------------------------------------------------------------------------------------------------

class GGS_galgasDeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticDeclarationListAST mProperty_mDeclarationList ;
  public: inline GGS_semanticDeclarationListAST readProperty_mDeclarationList (void) const {
    return mProperty_mDeclarationList ;
  }

  public: GGS_stringset mProperty_implicitTypeDeclarationSet ;
  public: inline GGS_stringset readProperty_implicitTypeDeclarationSet (void) const {
    return mProperty_implicitTypeDeclarationSet ;
  }

  public: GGS_galgas_33_SyntaxComponentListAST mProperty_mSyntaxComponentList ;
  public: inline GGS_galgas_33_SyntaxComponentListAST readProperty_mSyntaxComponentList (void) const {
    return mProperty_mSyntaxComponentList ;
  }

  public: GGS_syntaxExtensions mProperty_mSyntaxExtensions ;
  public: inline GGS_syntaxExtensions readProperty_mSyntaxExtensions (void) const {
    return mProperty_mSyntaxExtensions ;
  }

  public: GGS_galgasGUIComponentListAST mProperty_mGUIComponentList ;
  public: inline GGS_galgasGUIComponentListAST readProperty_mGUIComponentList (void) const {
    return mProperty_mGUIComponentList ;
  }

  public: GGS_prologueEpilogueList mProperty_mPrologueDeclarationList ;
  public: inline GGS_prologueEpilogueList readProperty_mPrologueDeclarationList (void) const {
    return mProperty_mPrologueDeclarationList ;
  }

  public: GGS_programRuleList mProperty_mSourceRuleList ;
  public: inline GGS_programRuleList readProperty_mSourceRuleList (void) const {
    return mProperty_mSourceRuleList ;
  }

  public: GGS_prologueEpilogueList mProperty_mEpilogueDeclarationList ;
  public: inline GGS_prologueEpilogueList readProperty_mEpilogueDeclarationList (void) const {
    return mProperty_mEpilogueDeclarationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgasDeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationList (const GGS_semanticDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationList = inValue ;
  }

  public: inline void setter_setImplicitTypeDeclarationSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_implicitTypeDeclarationSet = inValue ;
  }

  public: inline void setter_setMSyntaxComponentList (const GGS_galgas_33_SyntaxComponentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentList = inValue ;
  }

  public: inline void setter_setMSyntaxExtensions (const GGS_syntaxExtensions & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxExtensions = inValue ;
  }

  public: inline void setter_setMGUIComponentList (const GGS_galgasGUIComponentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGUIComponentList = inValue ;
  }

  public: inline void setter_setMPrologueDeclarationList (const GGS_prologueEpilogueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPrologueDeclarationList = inValue ;
  }

  public: inline void setter_setMSourceRuleList (const GGS_programRuleList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceRuleList = inValue ;
  }

  public: inline void setter_setMEpilogueDeclarationList (const GGS_prologueEpilogueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEpilogueDeclarationList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_galgasDeclarationAST (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgasDeclarationAST (const GGS_semanticDeclarationListAST & in_mDeclarationList,
                                    const GGS_stringset & in_implicitTypeDeclarationSet,
                                    const GGS_galgas_33_SyntaxComponentListAST & in_mSyntaxComponentList,
                                    const GGS_syntaxExtensions & in_mSyntaxExtensions,
                                    const GGS_galgasGUIComponentListAST & in_mGUIComponentList,
                                    const GGS_prologueEpilogueList & in_mPrologueDeclarationList,
                                    const GGS_programRuleList & in_mSourceRuleList,
                                    const GGS_prologueEpilogueList & in_mEpilogueDeclarationList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgasDeclarationAST init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgasDeclarationAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgasDeclarationAST class_func_new (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_galgasDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@functionSignature initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_functionSignature & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@functionSignature subcriptSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_subcriptSignature (const class GGS_functionSignature & inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodSignature list
//
//--------------------------------------------------------------------------------------------------

class GGS_optionalMethodSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_optionalMethodSignature (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_optionalMethodSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_bool & in_mInputArgument,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GGS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionalMethodSignature init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalMethodSignature extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalMethodSignature class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_optionalMethodSignature class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                             const class GGS_string & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_optionalMethodSignature inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_bool & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_unifiedTypeMapEntry & inOperand2,
                                                     const class GGS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_optionalMethodSignature add_operation (const GGS_optionalMethodSignature & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_bool constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_unifiedTypeMapEntry constinArgument2,
                                               class GGS_string constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_bool constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_unifiedTypeMapEntry constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_bool & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_unifiedTypeMapEntry & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_bool & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_unifiedTypeMapEntry & outArgument2,
                                                class GGS_string & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_bool & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_unifiedTypeMapEntry & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GGS_string constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputArgumentAtIndex (class GGS_bool constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_bool & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_unifiedTypeMapEntry & outArgument2,
                                              class GGS_string & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_bool & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_unifiedTypeMapEntry & outArgument2,
                                             class GGS_string & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mInputArgumentAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_optionalMethodSignature getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_optionalMethodSignature getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_optionalMethodSignature getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_optionalMethodSignature_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_optionalMethodSignature ;
 
} ; // End of GGS_optionalMethodSignature class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_optionalMethodSignature : public cGenericAbstractEnumerator {
  public: cEnumerator_optionalMethodSignature (const GGS_optionalMethodSignature & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_bool current_mInputArgument (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_optionalMethodSignature_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodSignature ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodSignature_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_optionalMethodSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mInputArgument ;
  public: inline GGS_bool readProperty_mInputArgument (void) const {
    return mProperty_mInputArgument ;
  }

  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GGS_string mProperty_mFormalArgumentName ;
  public: inline GGS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_optionalMethodSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInputArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputArgument = inValue ;
  }

  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_optionalMethodSignature_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_optionalMethodSignature_2E_element (const GGS_bool & in_mInputArgument,
                                                  const GGS_lstring & in_mFormalSelector,
                                                  const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                  const GGS_string & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionalMethodSignature_2E_element init_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalMethodSignature_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalMethodSignature_2E_element class_func_new (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_optionalMethodSignature_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodSignature_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterSignature_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_formalParameterSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GGS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GGS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GGS_string mProperty_mFormalArgumentName ;
  public: inline GGS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formalParameterSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GGS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_formalParameterSignature_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalParameterSignature_2E_element (const GGS_lstring & in_mFormalSelector,
                                                   const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                   const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                   const GGS_string & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalParameterSignature_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                               const class GGS_formalArgumentPassingModeAST & inOperand2,
                                                                               const class GGS_string & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalParameterSignature_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formalParameterSignature_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                               const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                               const class GGS_formalArgumentPassingModeAST & inOperand2,
                                                                               const class GGS_string & inOperand3,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_formalParameterSignature_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typedPropertyList initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS_typedPropertyList & inObject,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_fileprivateAccess struct
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_fileprivateAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_fileprivateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_AccessControl_2E_fileprivateAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_fileprivateAccess (const GGS_location & in_declarationLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_fileprivateAccess init_21_ (const class GGS_location & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_fileprivateAccess extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControl_2E_fileprivateAccess class_func_new (const class GGS_location & inOperand0,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_fileprivateAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: AccessControl.fileprivateAccess? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_fileprivateAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_fileprivateAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_fileprivateAccess_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_AccessControl_2E_fileprivateAccess_3F_ (const GGS_AccessControl_2E_fileprivateAccess & inValue) ;
  public: static GGS_AccessControl_2E_fileprivateAccess_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_fileprivateAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_fileprivateAccess_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_fileprivateAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_fileprivateSetAccess struct
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_fileprivateSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_fileprivateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_AccessControl_2E_fileprivateSetAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_fileprivateSetAccess (const GGS_location & in_declarationLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_fileprivateSetAccess init_21_ (const class GGS_location & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_fileprivateSetAccess extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControl_2E_fileprivateSetAccess class_func_new (const class GGS_location & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_fileprivateSetAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: AccessControl.fileprivateSetAccess? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_fileprivateSetAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_fileprivateSetAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_fileprivateSetAccess_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_AccessControl_2E_fileprivateSetAccess_3F_ (const GGS_AccessControl_2E_fileprivateSetAccess & inValue) ;
  public: static GGS_AccessControl_2E_fileprivateSetAccess_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_fileprivateSetAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_fileprivateSetAccess_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_fileprivateSetAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_privateAccess struct
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_privateAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_privateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_AccessControl_2E_privateAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_privateAccess (const GGS_unifiedTypeMapEntry & in_declaringType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_privateAccess init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_privateAccess extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControl_2E_privateAccess class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_privateAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: AccessControl.privateAccess? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_privateAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_privateAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_privateAccess_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_AccessControl_2E_privateAccess_3F_ (const GGS_AccessControl_2E_privateAccess & inValue) ;
  public: static GGS_AccessControl_2E_privateAccess_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_privateAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_privateAccess_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_privateAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_privateSetAccess struct
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_privateSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_privateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_AccessControl_2E_privateSetAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_privateSetAccess (const GGS_unifiedTypeMapEntry & in_declaringType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_privateSetAccess init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_privateSetAccess extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControl_2E_privateSetAccess class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_privateSetAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: AccessControl.privateSetAccess? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_privateSetAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_privateSetAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_privateSetAccess_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_AccessControl_2E_privateSetAccess_3F_ (const GGS_AccessControl_2E_privateSetAccess & inValue) ;
  public: static GGS_AccessControl_2E_privateSetAccess_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_privateSetAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_privateSetAccess_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_privateSetAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_protectedAccess struct
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_protectedAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_protectedAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_AccessControl_2E_protectedAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_protectedAccess (const GGS_unifiedTypeMapEntry & in_declaringType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_protectedAccess init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_protectedAccess extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControl_2E_protectedAccess class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_protectedAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: AccessControl.protectedAccess? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_protectedAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_protectedAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_protectedAccess_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_AccessControl_2E_protectedAccess_3F_ (const GGS_AccessControl_2E_protectedAccess & inValue) ;
  public: static GGS_AccessControl_2E_protectedAccess_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_protectedAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_protectedAccess_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_protectedAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_protectedSetAccess struct
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_protectedSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_protectedSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_AccessControl_2E_protectedSetAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_protectedSetAccess (const GGS_unifiedTypeMapEntry & in_declaringType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_protectedSetAccess init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_protectedSetAccess extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControl_2E_protectedSetAccess class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_protectedSetAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: AccessControl.protectedSetAccess? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_protectedSetAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_protectedSetAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_protectedSetAccess_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_AccessControl_2E_protectedSetAccess_3F_ (const GGS_AccessControl_2E_protectedSetAccess & inValue) ;
  public: static GGS_AccessControl_2E_protectedSetAccess_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_protectedSetAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl_2E_protectedSetAccess_3F_ extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_AccessControl_2E_protectedSetAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantIndexMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_constantIndexMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_associatedValueDescriptorList mProperty_mAssociatedTypeList ;
  public: inline GGS_associatedValueDescriptorList readProperty_mAssociatedTypeList (void) const {
    return mProperty_mAssociatedTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constantIndexMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMAssociatedTypeList (const GGS_associatedValueDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedTypeList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_constantIndexMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantIndexMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_uint & in_mIndex,
                                           const GGS_associatedValueDescriptorList & in_mAssociatedTypeList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantIndexMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_uint & inOperand1,
                                                                   const class GGS_associatedValueDescriptorList & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantIndexMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantIndexMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       const class GGS_associatedValueDescriptorList & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constantIndexMap_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constantIndexMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: constantIndexMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_constantIndexMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constantIndexMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constantIndexMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_constantIndexMap_2E_element_3F_ (const GGS_constantIndexMap_2E_element & inValue) ;
  public: static GGS_constantIndexMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_constantIndexMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantIndexMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constantIndexMap_2E_element_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constantIndexMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineArgumentMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_routineArgumentMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineArgumentMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_routineArgumentMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_routineArgumentMap (void) ;

//--------------------------------- Handle copy
  public: GGS_routineArgumentMap (const GGS_routineArgumentMap & inSource) ;
  public: GGS_routineArgumentMap & operator = (const GGS_routineArgumentMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineArgumentMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineArgumentMap extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineArgumentMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_routineArgumentMap class_func_mapWithMapToOverride (const class GGS_routineArgumentMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_formalParameterSignature & inOperand1,
                                                     const class GGS_bool & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_routineArgumentMap add_operation (const GGS_routineArgumentMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_formalParameterSignature constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsFilePrivateForKey (class GGS_bool constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineSignatureForKey (class GGS_formalParameterSignature constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_formalParameterSignature & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsFilePrivateForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterSignature getter_mRoutineSignatureForKey (const class GGS_string & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineArgumentMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_routineArgumentMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineArgumentMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GGS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_routineArgumentMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineArgumentMap ;
 
} ; // End of GGS_routineArgumentMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineArgumentMap : public cGenericAbstractEnumerator {
  public: cEnumerator_routineArgumentMap (const GGS_routineArgumentMap & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignature current_mRoutineSignature (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsFilePrivate (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineArgumentMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineArgumentMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@internalRoutineMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_internalRoutineMap : public cMapElement {
//--- Map attributes
  public: GGS_routineArgumentMap mProperty_mArgumentMap ;

//--- Constructors
  public: cMapElement_internalRoutineMap (const GGS_internalRoutineMap_2E_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_internalRoutineMap (const GGS_lstring & inKey,
                                          const GGS_routineArgumentMap & in_mArgumentMap
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @internalRoutineMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_internalRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_routineArgumentMap mProperty_mArgumentMap ;
  public: inline GGS_routineArgumentMap readProperty_mArgumentMap (void) const {
    return mProperty_mArgumentMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_internalRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentMap (const GGS_routineArgumentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_internalRoutineMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_internalRoutineMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_routineArgumentMap & in_mArgumentMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_internalRoutineMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_routineArgumentMap & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_internalRoutineMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_internalRoutineMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_routineArgumentMap & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_internalRoutineMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: internalRoutineMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_internalRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_internalRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_internalRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_internalRoutineMap_2E_element_3F_ (const GGS_internalRoutineMap_2E_element & inValue) ;
  public: static GGS_internalRoutineMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_internalRoutineMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_internalRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_internalRoutineMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_internalRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@routineArgumentMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_routineArgumentMap : public cMapElement {
//--- Map attributes
  public: GGS_formalParameterSignature mProperty_mRoutineSignature ;
  public: GGS_bool mProperty_mIsFilePrivate ;

//--- Constructors
  public: cMapElement_routineArgumentMap (const GGS_routineArgumentMap_2E_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_routineArgumentMap (const GGS_lstring & inKey,
                                          const GGS_formalParameterSignature & in_mRoutineSignature,
                                          const GGS_bool & in_mIsFilePrivate
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineArgumentMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_routineArgumentMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterSignature mProperty_mRoutineSignature ;
  public: inline GGS_formalParameterSignature readProperty_mRoutineSignature (void) const {
    return mProperty_mRoutineSignature ;
  }

  public: GGS_bool mProperty_mIsFilePrivate ;
  public: inline GGS_bool readProperty_mIsFilePrivate (void) const {
    return mProperty_mIsFilePrivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineArgumentMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineSignature (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineSignature = inValue ;
  }

  public: inline void setter_setMIsFilePrivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsFilePrivate = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineArgumentMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineArgumentMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_formalParameterSignature & in_mRoutineSignature,
                                             const GGS_bool & in_mIsFilePrivate) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineArgumentMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_formalParameterSignature & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineArgumentMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineArgumentMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_formalParameterSignature & inOperand1,
                                                                         const class GGS_bool & inOperand2,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_routineArgumentMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineArgumentMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: routineArgumentMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_routineArgumentMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineArgumentMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineArgumentMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_routineArgumentMap_2E_element_3F_ (const GGS_routineArgumentMap_2E_element & inValue) ;
  public: static GGS_routineArgumentMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_routineArgumentMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineArgumentMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_routineArgumentMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineArgumentMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @acceptableParameterList list
//
//--------------------------------------------------------------------------------------------------

class GGS_acceptableParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_acceptableParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_acceptableParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_formalParameterSignature & in_mRoutineSignature,
                                                 const class GGS_bool & in_mIsFilePrivate
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_acceptableParameterList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_acceptableParameterList extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_acceptableParameterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_acceptableParameterList class_func_listWithValue (const class GGS_formalParameterSignature & inOperand0,
                                                                             const class GGS_bool & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_acceptableParameterList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_formalParameterSignature & inOperand0,
                                                     const class GGS_bool & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_acceptableParameterList add_operation (const GGS_acceptableParameterList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_formalParameterSignature constinArgument0,
                                               class GGS_bool constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_formalParameterSignature constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_formalParameterSignature & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_formalParameterSignature & outArgument0,
                                                class GGS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_formalParameterSignature & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsFilePrivateAtIndex (class GGS_bool constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineSignatureAtIndex (class GGS_formalParameterSignature constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_formalParameterSignature & outArgument0,
                                              class GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_formalParameterSignature & outArgument0,
                                             class GGS_bool & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsFilePrivateAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterSignature getter_mRoutineSignatureAtIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_acceptableParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_acceptableParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_acceptableParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_acceptableParameterList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_acceptableParameterList ;
 
} ; // End of GGS_acceptableParameterList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_acceptableParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_acceptableParameterList (const GGS_acceptableParameterList & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_formalParameterSignature current_mRoutineSignature (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsFilePrivate (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_acceptableParameterList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_acceptableParameterList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @acceptableParameterList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_acceptableParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_formalParameterSignature mProperty_mRoutineSignature ;
  public: inline GGS_formalParameterSignature readProperty_mRoutineSignature (void) const {
    return mProperty_mRoutineSignature ;
  }

  public: GGS_bool mProperty_mIsFilePrivate ;
  public: inline GGS_bool readProperty_mIsFilePrivate (void) const {
    return mProperty_mIsFilePrivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_acceptableParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineSignature (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineSignature = inValue ;
  }

  public: inline void setter_setMIsFilePrivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsFilePrivate = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_acceptableParameterList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_acceptableParameterList_2E_element (const GGS_formalParameterSignature & in_mRoutineSignature,
                                                  const GGS_bool & in_mIsFilePrivate) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_acceptableParameterList_2E_element init_21__21_ (const class GGS_formalParameterSignature & inOperand0,
                                                                      const class GGS_bool & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_acceptableParameterList_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_acceptableParameterList_2E_element class_func_new (const class GGS_formalParameterSignature & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_acceptableParameterList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_acceptableParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@location sourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_sourceFile (const class GGS_location & inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@location commaSourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_commaSourceFile (const class GGS_location & inObject,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (class cPtr_semanticInstructionAST * inObject,
                                                            class GGS_unifiedTypeMap & io_ioTypeMap,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExpressionInSemanticContext (class cPtr_semanticExpressionAST * inObject,
                                                           class GGS_unifiedTypeMap & io_ioTypeMap,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionListAST enterInstructionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionListInSemanticContext (const class GGS_semanticInstructionListAST inObject,
                                                            class GGS_unifiedTypeMap & io_ioTypeMap,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarLabelMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_grammarLabelMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_grammarLabelMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_grammarLabelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_grammarLabelMap (void) ;

//--------------------------------- Handle copy
  public: GGS_grammarLabelMap (const GGS_grammarLabelMap & inSource) ;
  public: GGS_grammarLabelMap & operator = (const GGS_grammarLabelMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarLabelMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarLabelMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarLabelMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_grammarLabelMap class_func_mapWithMapToOverride (const class GGS_grammarLabelMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_formalParameterSignature & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_grammarLabelMap add_operation (const GGS_grammarLabelMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_formalParameterSignature constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelSignatureForKey (class GGS_formalParameterSignature constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_formalParameterSignature & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_formalParameterSignature getter_mLabelSignatureForKey (const class GGS_string & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_grammarLabelMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_grammarLabelMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_grammarLabelMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_grammarLabelMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_grammarLabelMap ;
 
} ; // End of GGS_grammarLabelMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_grammarLabelMap : public cGenericAbstractEnumerator {
  public: cEnumerator_grammarLabelMap (const GGS_grammarLabelMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_formalParameterSignature current_mLabelSignature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_grammarLabelMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@grammarLabelMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_grammarLabelMap : public cMapElement {
//--- Map attributes
  public: GGS_formalParameterSignature mProperty_mLabelSignature ;

//--- Constructors
  public: cMapElement_grammarLabelMap (const GGS_grammarLabelMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_grammarLabelMap (const GGS_lstring & inKey,
                                       const GGS_formalParameterSignature & in_mLabelSignature
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarLabelMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarLabelMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterSignature mProperty_mLabelSignature ;
  public: inline GGS_formalParameterSignature readProperty_mLabelSignature (void) const {
    return mProperty_mLabelSignature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_grammarLabelMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelSignature (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelSignature = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_grammarLabelMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_grammarLabelMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_formalParameterSignature & in_mLabelSignature) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarLabelMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_formalParameterSignature & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarLabelMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarLabelMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_formalParameterSignature & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarLabelMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: grammarLabelMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarLabelMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_grammarLabelMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_grammarLabelMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_grammarLabelMap_2E_element_3F_ (const GGS_grammarLabelMap_2E_element & inValue) ;
  public: static GGS_grammarLabelMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_grammarLabelMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarLabelMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarLabelMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@grammarMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_grammarMap : public cMapElement {
//--- Map attributes
  public: GGS_grammarLabelMap mProperty_mLabelMap ;
  public: GGS_bool mProperty_mHasIndexing ;
  public: GGS_bool mProperty_mHasTranslateFeature ;

//--- Constructors
  public: cMapElement_grammarMap (const GGS_grammarMap_2E_element & inValue
                                  COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_grammarMap (const GGS_lstring & inKey,
                                  const GGS_grammarLabelMap & in_mLabelMap,
                                  const GGS_bool & in_mHasIndexing,
                                  const GGS_bool & in_mHasTranslateFeature
                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_grammarLabelMap mProperty_mLabelMap ;
  public: inline GGS_grammarLabelMap readProperty_mLabelMap (void) const {
    return mProperty_mLabelMap ;
  }

  public: GGS_bool mProperty_mHasIndexing ;
  public: inline GGS_bool readProperty_mHasIndexing (void) const {
    return mProperty_mHasIndexing ;
  }

  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: inline GGS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_grammarMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelMap (const GGS_grammarLabelMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelMap = inValue ;
  }

  public: inline void setter_setMHasIndexing (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasIndexing = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_grammarMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_grammarMap_2E_element (const GGS_lstring & in_lkey,
                                     const GGS_grammarLabelMap & in_mLabelMap,
                                     const GGS_bool & in_mHasIndexing,
                                     const GGS_bool & in_mHasTranslateFeature) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_grammarLabelMap & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 const class GGS_bool & inOperand3,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarMap_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                 const class GGS_grammarLabelMap & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 const class GGS_bool & inOperand3,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: grammarMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_grammarMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_grammarMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_grammarMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_grammarMap_2E_element_3F_ (const GGS_grammarMap_2E_element & inValue) ;
  public: static GGS_grammarMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_grammarMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_grammarMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@functionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_functionMap : public cMapElement {
//--- Map attributes
  public: GGS_functionSignature mProperty_mFunctionSignature ;
  public: GGS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GGS_bool mProperty_mIsInternal ;

//--- Constructors
  public: cMapElement_functionMap (const GGS_functionMap_2E_element & inValue
                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_functionMap (const GGS_lstring & inKey,
                                   const GGS_functionSignature & in_mFunctionSignature,
                                   const GGS_unifiedTypeMapEntry & in_mResultType,
                                   const GGS_bool & in_mIsInternal
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_functionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_functionSignature mProperty_mFunctionSignature ;
  public: inline GGS_functionSignature readProperty_mFunctionSignature (void) const {
    return mProperty_mFunctionSignature ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mResultType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

  public: GGS_bool mProperty_mIsInternal ;
  public: inline GGS_bool readProperty_mIsInternal (void) const {
    return mProperty_mIsInternal ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_functionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFunctionSignature (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionSignature = inValue ;
  }

  public: inline void setter_setMResultType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

  public: inline void setter_setMIsInternal (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsInternal = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_functionMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_functionMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_functionSignature & in_mFunctionSignature,
                                      const GGS_unifiedTypeMapEntry & in_mResultType,
                                      const GGS_bool & in_mIsInternal) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_functionSignature & inOperand1,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                  const class GGS_bool & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_functionSignature & inOperand1,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                  const class GGS_bool & inOperand3,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_functionMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: functionMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_functionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_functionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_functionMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_functionMap_2E_element_3F_ (const GGS_functionMap_2E_element & inValue) ;
  public: static GGS_functionMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_functionMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_functionMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperFileMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperFileMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_wrapperFileMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_wrapperFileMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_wrapperFileMap (void) ;

//--------------------------------- Handle copy
  public: GGS_wrapperFileMap (const GGS_wrapperFileMap & inSource) ;
  public: GGS_wrapperFileMap & operator = (const GGS_wrapperFileMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperFileMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperFileMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_wrapperFileMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_wrapperFileMap class_func_mapWithMapToOverride (const class GGS_wrapperFileMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_bool & inOperand2,
                                                     const class GGS_uint & inOperand3,
                                                     const class GGS_uint & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_wrapperFileMap add_operation (const GGS_wrapperFileMap & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  class GGS_uint constinArgument3,
                                                  class GGS_uint constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAbsoluteFilePathForKey (class GGS_string constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsTextFileForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWrapperDirectoryIndexForKey (class GGS_uint constinArgument0,
                                                                        class GGS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWrapperFileIndexForKey (class GGS_uint constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_uint & outArgument3,
                                                  class GGS_uint & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mAbsoluteFilePathForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsTextFileForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mWrapperDirectoryIndexForKey (const class GGS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mWrapperFileIndexForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_wrapperFileMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_wrapperFileMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_wrapperFileMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GGS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_wrapperFileMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_wrapperFileMap ;
 
} ; // End of GGS_wrapperFileMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_wrapperFileMap : public cGenericAbstractEnumerator {
  public: cEnumerator_wrapperFileMap (const GGS_wrapperFileMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mAbsoluteFilePath (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsTextFile (LOCATION_ARGS) const ;
  public: class GGS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mWrapperFileIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_wrapperFileMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@wrapperFileMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperFileMap : public cMapElement {
//--- Map attributes
  public: GGS_string mProperty_mAbsoluteFilePath ;
  public: GGS_bool mProperty_mIsTextFile ;
  public: GGS_uint mProperty_mWrapperDirectoryIndex ;
  public: GGS_uint mProperty_mWrapperFileIndex ;

//--- Constructors
  public: cMapElement_wrapperFileMap (const GGS_wrapperFileMap_2E_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_wrapperFileMap (const GGS_lstring & inKey,
                                      const GGS_string & in_mAbsoluteFilePath,
                                      const GGS_bool & in_mIsTextFile,
                                      const GGS_uint & in_mWrapperDirectoryIndex,
                                      const GGS_uint & in_mWrapperFileIndex
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperFileMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_wrapperFileMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mAbsoluteFilePath ;
  public: inline GGS_string readProperty_mAbsoluteFilePath (void) const {
    return mProperty_mAbsoluteFilePath ;
  }

  public: GGS_bool mProperty_mIsTextFile ;
  public: inline GGS_bool readProperty_mIsTextFile (void) const {
    return mProperty_mIsTextFile ;
  }

  public: GGS_uint mProperty_mWrapperDirectoryIndex ;
  public: inline GGS_uint readProperty_mWrapperDirectoryIndex (void) const {
    return mProperty_mWrapperDirectoryIndex ;
  }

  public: GGS_uint mProperty_mWrapperFileIndex ;
  public: inline GGS_uint readProperty_mWrapperFileIndex (void) const {
    return mProperty_mWrapperFileIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_wrapperFileMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAbsoluteFilePath (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAbsoluteFilePath = inValue ;
  }

  public: inline void setter_setMIsTextFile (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsTextFile = inValue ;
  }

  public: inline void setter_setMWrapperDirectoryIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperDirectoryIndex = inValue ;
  }

  public: inline void setter_setMWrapperFileIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperFileIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_wrapperFileMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_wrapperFileMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_string & in_mAbsoluteFilePath,
                                         const GGS_bool & in_mIsTextFile,
                                         const GGS_uint & in_mWrapperDirectoryIndex,
                                         const GGS_uint & in_mWrapperFileIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperFileMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_bool & inOperand2,
                                                                         const class GGS_uint & inOperand3,
                                                                         const class GGS_uint & inOperand4,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperFileMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_wrapperFileMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     const class GGS_uint & inOperand3,
                                                                     const class GGS_uint & inOperand4,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_wrapperFileMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: wrapperFileMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_wrapperFileMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_wrapperFileMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_wrapperFileMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_wrapperFileMap_2E_element_3F_ (const GGS_wrapperFileMap_2E_element & inValue) ;
  public: static GGS_wrapperFileMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_wrapperFileMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperFileMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_wrapperFileMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperDirectoryMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperDirectoryMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_wrapperDirectoryMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_wrapperDirectoryMap (void) ;

//--------------------------------- Handle copy
  public: GGS_wrapperDirectoryMap (const GGS_wrapperDirectoryMap & inSource) ;
  public: GGS_wrapperDirectoryMap & operator = (const GGS_wrapperDirectoryMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperDirectoryMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperDirectoryMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_wrapperDirectoryMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_wrapperDirectoryMap class_func_mapWithMapToOverride (const class GGS_wrapperDirectoryMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_wrapperFileMap & inOperand1,
                                                     const class GGS_wrapperDirectoryMap & inOperand2,
                                                     const class GGS_uint & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_wrapperDirectoryMap add_operation (const GGS_wrapperDirectoryMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_wrapperFileMap constinArgument1,
                                                  class GGS_wrapperDirectoryMap constinArgument2,
                                                  class GGS_uint constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDirectoryMapForKey (class GGS_wrapperDirectoryMap constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularFileMapForKey (class GGS_wrapperFileMap constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWrapperDirectoryIndexForKey (class GGS_uint constinArgument0,
                                                                        class GGS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_wrapperFileMap & outArgument1,
                                                  class GGS_wrapperDirectoryMap & outArgument2,
                                                  class GGS_uint & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_wrapperDirectoryMap getter_mDirectoryMapForKey (const class GGS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_wrapperFileMap getter_mRegularFileMapForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mWrapperDirectoryIndexForKey (const class GGS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_wrapperDirectoryMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_wrapperDirectoryMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_wrapperDirectoryMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GGS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_wrapperDirectoryMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_wrapperDirectoryMap ;
 
} ; // End of GGS_wrapperDirectoryMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_wrapperDirectoryMap : public cGenericAbstractEnumerator {
  public: cEnumerator_wrapperDirectoryMap (const GGS_wrapperDirectoryMap & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_wrapperFileMap current_mRegularFileMap (LOCATION_ARGS) const ;
  public: class GGS_wrapperDirectoryMap current_mDirectoryMap (LOCATION_ARGS) const ;
  public: class GGS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_wrapperDirectoryMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@wrapperDirectoryMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperDirectoryMap : public cMapElement {
//--- Map attributes
  public: GGS_wrapperFileMap mProperty_mRegularFileMap ;
  public: GGS_wrapperDirectoryMap mProperty_mDirectoryMap ;
  public: GGS_uint mProperty_mWrapperDirectoryIndex ;

//--- Constructors
  public: cMapElement_wrapperDirectoryMap (const GGS_wrapperDirectoryMap_2E_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_wrapperDirectoryMap (const GGS_lstring & inKey,
                                           const GGS_wrapperFileMap & in_mRegularFileMap,
                                           const GGS_wrapperDirectoryMap & in_mDirectoryMap,
                                           const GGS_uint & in_mWrapperDirectoryIndex
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperDirectoryMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_wrapperDirectoryMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_wrapperFileMap mProperty_mRegularFileMap ;
  public: inline GGS_wrapperFileMap readProperty_mRegularFileMap (void) const {
    return mProperty_mRegularFileMap ;
  }

  public: GGS_wrapperDirectoryMap mProperty_mDirectoryMap ;
  public: inline GGS_wrapperDirectoryMap readProperty_mDirectoryMap (void) const {
    return mProperty_mDirectoryMap ;
  }

  public: GGS_uint mProperty_mWrapperDirectoryIndex ;
  public: inline GGS_uint readProperty_mWrapperDirectoryIndex (void) const {
    return mProperty_mWrapperDirectoryIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_wrapperDirectoryMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegularFileMap (const GGS_wrapperFileMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegularFileMap = inValue ;
  }

  public: inline void setter_setMDirectoryMap (const GGS_wrapperDirectoryMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDirectoryMap = inValue ;
  }

  public: inline void setter_setMWrapperDirectoryIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperDirectoryIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_wrapperDirectoryMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_wrapperDirectoryMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_wrapperFileMap & in_mRegularFileMap,
                                              const GGS_wrapperDirectoryMap & in_mDirectoryMap,
                                              const GGS_uint & in_mWrapperDirectoryIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperDirectoryMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_wrapperFileMap & inOperand1,
                                                                          const class GGS_wrapperDirectoryMap & inOperand2,
                                                                          const class GGS_uint & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperDirectoryMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_wrapperDirectoryMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_wrapperFileMap & inOperand1,
                                                                          const class GGS_wrapperDirectoryMap & inOperand2,
                                                                          const class GGS_uint & inOperand3,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_wrapperDirectoryMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: wrapperDirectoryMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_wrapperDirectoryMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_wrapperDirectoryMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_wrapperDirectoryMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_wrapperDirectoryMap_2E_element_3F_ (const GGS_wrapperDirectoryMap_2E_element & inValue) ;
  public: static GGS_wrapperDirectoryMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_wrapperDirectoryMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_wrapperDirectoryMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_wrapperDirectoryMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperTemplateMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateMap (void) ;

//--------------------------------- Handle copy
  public: GGS_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inSource) ;
  public: GGS_filewrapperTemplateMap & operator = (const GGS_filewrapperTemplateMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperTemplateMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperTemplateMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_filewrapperTemplateMap class_func_mapWithMapToOverride (const class GGS_filewrapperTemplateMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_functionSignature & inOperand1,
                                                     const class GGS_lstring & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_filewrapperTemplateMap add_operation (const GGS_filewrapperTemplateMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_functionSignature constinArgument1,
                                                  class GGS_lstring constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplatePathForKey (class GGS_lstring constinArgument0,
                                                                          class GGS_string constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTemplateSignatureForKey (class GGS_functionSignature constinArgument0,
                                                                    class GGS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_functionSignature & outArgument1,
                                                  class GGS_lstring & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFilewrapperTemplatePathForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_functionSignature getter_mTemplateSignatureForKey (const class GGS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_filewrapperTemplateMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_filewrapperTemplateMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_filewrapperTemplateMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GGS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_filewrapperTemplateMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_filewrapperTemplateMap ;
 
} ; // End of GGS_filewrapperTemplateMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_filewrapperTemplateMap : public cGenericAbstractEnumerator {
  public: cEnumerator_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_functionSignature current_mTemplateSignature (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_filewrapperTemplateMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@filewrapperTemplateMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperTemplateMap : public cMapElement {
//--- Map attributes
  public: GGS_functionSignature mProperty_mTemplateSignature ;
  public: GGS_lstring mProperty_mFilewrapperTemplatePath ;

//--- Constructors
  public: cMapElement_filewrapperTemplateMap (const GGS_filewrapperTemplateMap_2E_element & inValue
                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_filewrapperTemplateMap (const GGS_lstring & inKey,
                                              const GGS_functionSignature & in_mTemplateSignature,
                                              const GGS_lstring & in_mFilewrapperTemplatePath
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_functionSignature mProperty_mTemplateSignature ;
  public: inline GGS_functionSignature readProperty_mTemplateSignature (void) const {
    return mProperty_mTemplateSignature ;
  }

  public: GGS_lstring mProperty_mFilewrapperTemplatePath ;
  public: inline GGS_lstring readProperty_mFilewrapperTemplatePath (void) const {
    return mProperty_mFilewrapperTemplatePath ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTemplateSignature (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateSignature = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplatePath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplatePath = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_filewrapperTemplateMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_filewrapperTemplateMap_2E_element (const GGS_lstring & in_lkey,
                                                 const GGS_functionSignature & in_mTemplateSignature,
                                                 const GGS_lstring & in_mFilewrapperTemplatePath) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_functionSignature & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperTemplateMap_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperTemplateMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_functionSignature & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_filewrapperTemplateMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: filewrapperTemplateMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_filewrapperTemplateMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_filewrapperTemplateMap_2E_element_3F_ (const GGS_filewrapperTemplateMap_2E_element & inValue) ;
  public: static GGS_filewrapperTemplateMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_filewrapperTemplateMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperTemplateMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_filewrapperTemplateMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@filewrapperMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperMap : public cMapElement {
//--- Map attributes
  public: GGS_lstring mProperty_mFilewrapperPath ;
  public: GGS_lstringlist mProperty_mFilewrapperExtensionList ;
  public: GGS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: GGS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: GGS_filewrapperTemplateMap mProperty_mFilewrapperTemplateMap ;
  public: GGS_bool mProperty_mIsInternal ;

//--- Constructors
  public: cMapElement_filewrapperMap (const GGS_filewrapperMap_2E_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_filewrapperMap (const GGS_lstring & inKey,
                                      const GGS_lstring & in_mFilewrapperPath,
                                      const GGS_lstringlist & in_mFilewrapperExtensionList,
                                      const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                      const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                      const GGS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                      const GGS_bool & in_mIsInternal
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mFilewrapperPath ;
  public: inline GGS_lstring readProperty_mFilewrapperPath (void) const {
    return mProperty_mFilewrapperPath ;
  }

  public: GGS_lstringlist mProperty_mFilewrapperExtensionList ;
  public: inline GGS_lstringlist readProperty_mFilewrapperExtensionList (void) const {
    return mProperty_mFilewrapperExtensionList ;
  }

  public: GGS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: inline GGS_wrapperFileMap readProperty_mFilewrapperFileMap (void) const {
    return mProperty_mFilewrapperFileMap ;
  }

  public: GGS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: inline GGS_wrapperDirectoryMap readProperty_mFilewrapperDirectoryMap (void) const {
    return mProperty_mFilewrapperDirectoryMap ;
  }

  public: GGS_filewrapperTemplateMap mProperty_mFilewrapperTemplateMap ;
  public: inline GGS_filewrapperTemplateMap readProperty_mFilewrapperTemplateMap (void) const {
    return mProperty_mFilewrapperTemplateMap ;
  }

  public: GGS_bool mProperty_mIsInternal ;
  public: inline GGS_bool readProperty_mIsInternal (void) const {
    return mProperty_mIsInternal ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_filewrapperMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFilewrapperPath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperPath = inValue ;
  }

  public: inline void setter_setMFilewrapperExtensionList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperExtensionList = inValue ;
  }

  public: inline void setter_setMFilewrapperFileMap (const GGS_wrapperFileMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperFileMap = inValue ;
  }

  public: inline void setter_setMFilewrapperDirectoryMap (const GGS_wrapperDirectoryMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperDirectoryMap = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateMap (const GGS_filewrapperTemplateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateMap = inValue ;
  }

  public: inline void setter_setMIsInternal (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsInternal = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_filewrapperMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_filewrapperMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_lstring & in_mFilewrapperPath,
                                         const GGS_lstringlist & in_mFilewrapperExtensionList,
                                         const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                         const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                         const GGS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                         const GGS_bool & in_mIsInternal) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperMap_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstringlist & inOperand2,
                                                                                 const class GGS_wrapperFileMap & inOperand3,
                                                                                 const class GGS_wrapperDirectoryMap & inOperand4,
                                                                                 const class GGS_filewrapperTemplateMap & inOperand5,
                                                                                 const class GGS_bool & inOperand6,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstringlist & inOperand2,
                                                                     const class GGS_wrapperFileMap & inOperand3,
                                                                     const class GGS_wrapperDirectoryMap & inOperand4,
                                                                     const class GGS_filewrapperTemplateMap & inOperand5,
                                                                     const class GGS_bool & inOperand6,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_filewrapperMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: filewrapperMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_filewrapperMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_filewrapperMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_filewrapperMap_2E_element_3F_ (const GGS_filewrapperMap_2E_element & inValue) ;
  public: static GGS_filewrapperMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_filewrapperMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_filewrapperMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@optionComponentMapForSemanticAnalysis' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_optionComponentMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public: GGS_bool mProperty_mIsPredefined ;
  public: GGS_commandLineOptionMap mProperty_mBoolOptionMap ;
  public: GGS_commandLineOptionMap mProperty_mUIntOptionMap ;
  public: GGS_commandLineOptionMap mProperty_mStringOptionMap ;
  public: GGS_commandLineOptionMap mProperty_mStringListOptionMap ;

//--- Constructors
  public: cMapElement_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inValue
                                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_optionComponentMapForSemanticAnalysis (const GGS_lstring & inKey,
                                                             const GGS_bool & in_mIsPredefined,
                                                             const GGS_commandLineOptionMap & in_mBoolOptionMap,
                                                             const GGS_commandLineOptionMap & in_mUIntOptionMap,
                                                             const GGS_commandLineOptionMap & in_mStringOptionMap,
                                                             const GGS_commandLineOptionMap & in_mStringListOptionMap
                                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentMapForSemanticAnalysis_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentMapForSemanticAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsPredefined ;
  public: inline GGS_bool readProperty_mIsPredefined (void) const {
    return mProperty_mIsPredefined ;
  }

  public: GGS_commandLineOptionMap mProperty_mBoolOptionMap ;
  public: inline GGS_commandLineOptionMap readProperty_mBoolOptionMap (void) const {
    return mProperty_mBoolOptionMap ;
  }

  public: GGS_commandLineOptionMap mProperty_mUIntOptionMap ;
  public: inline GGS_commandLineOptionMap readProperty_mUIntOptionMap (void) const {
    return mProperty_mUIntOptionMap ;
  }

  public: GGS_commandLineOptionMap mProperty_mStringOptionMap ;
  public: inline GGS_commandLineOptionMap readProperty_mStringOptionMap (void) const {
    return mProperty_mStringOptionMap ;
  }

  public: GGS_commandLineOptionMap mProperty_mStringListOptionMap ;
  public: inline GGS_commandLineOptionMap readProperty_mStringListOptionMap (void) const {
    return mProperty_mStringListOptionMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPredefined (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPredefined = inValue ;
  }

  public: inline void setter_setMBoolOptionMap (const GGS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoolOptionMap = inValue ;
  }

  public: inline void setter_setMUIntOptionMap (const GGS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUIntOptionMap = inValue ;
  }

  public: inline void setter_setMStringOptionMap (const GGS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringOptionMap = inValue ;
  }

  public: inline void setter_setMStringListOptionMap (const GGS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringListOptionMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_optionComponentMapForSemanticAnalysis_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                const GGS_bool & in_mIsPredefined,
                                                                const GGS_commandLineOptionMap & in_mBoolOptionMap,
                                                                const GGS_commandLineOptionMap & in_mUIntOptionMap,
                                                                const GGS_commandLineOptionMap & in_mStringOptionMap,
                                                                const GGS_commandLineOptionMap & in_mStringListOptionMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionComponentMapForSemanticAnalysis_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_bool & inOperand1,
                                                                                                    const class GGS_commandLineOptionMap & inOperand2,
                                                                                                    const class GGS_commandLineOptionMap & inOperand3,
                                                                                                    const class GGS_commandLineOptionMap & inOperand4,
                                                                                                    const class GGS_commandLineOptionMap & inOperand5,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionComponentMapForSemanticAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionComponentMapForSemanticAnalysis_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_commandLineOptionMap & inOperand2,
                                                                                            const class GGS_commandLineOptionMap & inOperand3,
                                                                                            const class GGS_commandLineOptionMap & inOperand4,
                                                                                            const class GGS_commandLineOptionMap & inOperand5,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_optionComponentMapForSemanticAnalysis_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: optionComponentMapForSemanticAnalysis.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_optionComponentMapForSemanticAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inValue) ;
  public: static GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_optionComponentMapForSemanticAnalysis_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2E_element_3F_ ;

