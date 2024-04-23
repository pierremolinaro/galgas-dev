#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @stringsetPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringsetPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_stringsetPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_stringsetPredefinedTypeAST (const class cPtr_stringsetPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_stringsetPredefinedTypeAST init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_stringsetPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_stringsetPredefinedTypeAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_string & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_stringsetPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_stringsetPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @stringsetPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_stringsetPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void stringsetPredefinedTypeAST_init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GALGAS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initializers
  public: virtual class GALGAS_initializerSignatureList getter_initializers (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter supportsCollectionValue
  public: virtual class GALGAS_bool getter_supportsCollectionValue (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getAddAssignArgumentList
  public: virtual void method_getAddAssignArgumentList (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_functionSignature & arg_outAddAssignArgumentList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getEnumerationList
  public: virtual void method_getEnumerationList (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_enumerationDescriptorList & arg_outEnumerationList,
           class GALGAS_string & arg_outEnumeratedType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_stringsetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_stringsetPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                           const GALGAS_string & in_mPredefinedTypeName
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
// Phase 1: @stringsetPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringsetPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_stringsetPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_stringsetPredefinedTypeAST_2D_weak (const class GALGAS_stringsetPredefinedTypeAST & inSource) ;

  public: GALGAS_stringsetPredefinedTypeAST_2D_weak & operator = (const class GALGAS_stringsetPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_stringsetPredefinedTypeAST bang_stringsetPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_stringsetPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_stringsetPredefinedTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_stringsetPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_stringsetPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sintPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sintPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_sintPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sintPredefinedTypeAST (const class cPtr_sintPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sintPredefinedTypeAST init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sintPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sintPredefinedTypeAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sintPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sintPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sintPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sintPredefinedTypeAST_init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                               const class GALGAS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GALGAS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_sintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sintPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                      const GALGAS_string & in_mPredefinedTypeName
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
// Phase 1: @sintPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sintPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sintPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sintPredefinedTypeAST_2D_weak (const class GALGAS_sintPredefinedTypeAST & inSource) ;

  public: GALGAS_sintPredefinedTypeAST_2D_weak & operator = (const class GALGAS_sintPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sintPredefinedTypeAST bang_sintPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sintPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sintPredefinedTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sintPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sintPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sint_36__34_PredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sint_36__34_PredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_sint_36__34_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sint_36__34_PredefinedTypeAST (const class cPtr_sint_36__34_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sint_36__34_PredefinedTypeAST init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sint_36__34_PredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sint_36__34_PredefinedTypeAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sint_36__34_PredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sint64PredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sint_36__34_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sint_36__34_PredefinedTypeAST_init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GALGAS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_sint_36__34_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sint_36__34_PredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                              const GALGAS_string & in_mPredefinedTypeName
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
// Phase 1: @sint_36__34_PredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sint_36__34_PredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (const class GALGAS_sint_36__34_PredefinedTypeAST & inSource) ;

  public: GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & operator = (const class GALGAS_sint_36__34_PredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sint_36__34_PredefinedTypeAST bang_sint_36__34_PredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sint_36__34_PredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sint_36__34_PredefinedTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sint_36__34_PredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @stringPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_stringPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_stringPredefinedTypeAST (const class cPtr_stringPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_stringPredefinedTypeAST init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_stringPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_stringPredefinedTypeAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_stringPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_stringPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @stringPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_stringPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void stringPredefinedTypeAST_init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_string & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GALGAS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GALGAS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getOptionalMethodMap
  public: virtual void method_getOptionalMethodMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_optionalMethodMap & arg_outMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_stringPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_stringPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                        const GALGAS_string & in_mPredefinedTypeName
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
// Phase 1: @stringPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_stringPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_stringPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_stringPredefinedTypeAST_2D_weak (const class GALGAS_stringPredefinedTypeAST & inSource) ;

  public: GALGAS_stringPredefinedTypeAST_2D_weak & operator = (const class GALGAS_stringPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_stringPredefinedTypeAST bang_stringPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_stringPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_stringPredefinedTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_stringPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_stringPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @timerPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_timerPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_timerPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_timerPredefinedTypeAST (const class cPtr_timerPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_timerPredefinedTypeAST init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_timerPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_timerPredefinedTypeAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_string & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_timerPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_timerPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @timerPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_timerPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void timerPredefinedTypeAST_init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                const class GALGAS_string & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GALGAS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter initializers
  public: virtual class GALGAS_initializerSignatureList getter_initializers (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_timerPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_timerPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                       const GALGAS_string & in_mPredefinedTypeName
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
// Phase 1: @timerPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_timerPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_timerPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_timerPredefinedTypeAST_2D_weak (const class GALGAS_timerPredefinedTypeAST & inSource) ;

  public: GALGAS_timerPredefinedTypeAST_2D_weak & operator = (const class GALGAS_timerPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_timerPredefinedTypeAST bang_timerPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_timerPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_timerPredefinedTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_timerPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_timerPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typePredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typePredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_typePredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_typePredefinedTypeAST (const class cPtr_typePredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typePredefinedTypeAST init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typePredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typePredefinedTypeAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typePredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typePredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @typePredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_typePredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typePredefinedTypeAST_init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                               const class GALGAS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GALGAS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_typePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typePredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                      const GALGAS_string & in_mPredefinedTypeName
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
// Phase 1: @typePredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typePredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typePredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typePredefinedTypeAST_2D_weak (const class GALGAS_typePredefinedTypeAST & inSource) ;

  public: GALGAS_typePredefinedTypeAST_2D_weak & operator = (const class GALGAS_typePredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typePredefinedTypeAST bang_typePredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typePredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typePredefinedTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typePredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typePredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uintPredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uintPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_uintPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_uintPredefinedTypeAST (const class cPtr_uintPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_uintPredefinedTypeAST init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uintPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_uintPredefinedTypeAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_uintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uintPredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @uintPredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_uintPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void uintPredefinedTypeAST_init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                               const class GALGAS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GALGAS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_uintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_uintPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                      const GALGAS_string & in_mPredefinedTypeName
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
// Phase 1: @uintPredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uintPredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_uintPredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_uintPredefinedTypeAST_2D_weak (const class GALGAS_uintPredefinedTypeAST & inSource) ;

  public: GALGAS_uintPredefinedTypeAST_2D_weak & operator = (const class GALGAS_uintPredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_uintPredefinedTypeAST bang_uintPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uintPredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_uintPredefinedTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_uintPredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uintPredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uint_36__34_PredefinedTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint_36__34_PredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GALGAS_uint_36__34_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_uint_36__34_PredefinedTypeAST (const class cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_uint_36__34_PredefinedTypeAST init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uint_36__34_PredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_uint_36__34_PredefinedTypeAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uint_36__34_PredefinedTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @uint64PredefinedTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_uint_36__34_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void uint_36__34_PredefinedTypeAST_init_21_isPredefined_21_ (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GALGAS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GALGAS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GALGAS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GALGAS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_uint_36__34_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_uint_36__34_PredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                              const GALGAS_string & in_mPredefinedTypeName
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
// Phase 1: @uint_36__34_PredefinedTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint_36__34_PredefinedTypeAST_2D_weak : public GALGAS_predefinedTypeAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (const class GALGAS_uint_36__34_PredefinedTypeAST & inSource) ;

  public: GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & operator = (const class GALGAS_uint_36__34_PredefinedTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_uint_36__34_PredefinedTypeAST bang_uint_36__34_PredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uint_36__34_PredefinedTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_uint_36__34_PredefinedTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uint_36__34_PredefinedTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayTypeDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_arrayTypeDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_arrayTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_arrayTypeDeclarationAST (const class cPtr_arrayTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_arrayTypeName (void) const ;

  public: class GALGAS_lstring readProperty_elementTypeName (void) const ;

  public: class GALGAS_bool readProperty_isUsefull (void) const ;

  public: class GALGAS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_arrayTypeDeclarationAST init_21_isPredefined_21__21__21_isUsefull_21_equatable (const class GALGAS_bool & inOperand0,
                                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                                        const class GALGAS_lstring & inOperand2,
                                                                                                        const class GALGAS_bool & inOperand3,
                                                                                                        const class GALGAS_bool & inOperand4,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayTypeDeclarationAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_arrayTypeDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_bool & inOperand3,
                                                                      const class GALGAS_bool & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_arrayTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_arrayTypeDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayTypeDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_arrayTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (const class GALGAS_bool & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_lstring & inOperand2,
                                                                                               const class GALGAS_bool & inOperand3,
                                                                                               const class GALGAS_bool & inOperand4,
                                                                                               Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GALGAS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_arrayTypeName ;
  public: GALGAS_lstring mProperty_elementTypeName ;
  public: GALGAS_bool mProperty_isUsefull ;
  public: GALGAS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_arrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_arrayTypeDeclarationAST (const GALGAS_bool & in_isPredefined,
                                        const GALGAS_lstring & in_arrayTypeName,
                                        const GALGAS_lstring & in_elementTypeName,
                                        const GALGAS_bool & in_isUsefull,
                                        const GALGAS_bool & in_equatable
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
// Phase 1: @arrayTypeDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_arrayTypeDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_arrayTypeDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_arrayTypeDeclarationAST_2D_weak (const class GALGAS_arrayTypeDeclarationAST & inSource) ;

  public: GALGAS_arrayTypeDeclarationAST_2D_weak & operator = (const class GALGAS_arrayTypeDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_arrayTypeDeclarationAST bang_arrayTypeDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayTypeDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_arrayTypeDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_arrayTypeDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_arrayTypeDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolsetDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolsetDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_boolsetDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolsetDeclarationAST (const class cPtr_boolsetDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mBoolsetTypeName (void) const ;

  public: class GALGAS_lstringlist readProperty_mFlagList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_boolsetDeclarationAST init_21_isPredefined_21__21_ (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstringlist & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolsetDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolsetDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstringlist & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolsetDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolsetDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolsetDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_boolsetDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolsetDeclarationAST_init_21_isPredefined_21__21_ (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstringlist & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mBoolsetTypeName ;
  public: GALGAS_lstringlist mProperty_mFlagList ;


//--- Default constructor
  public: cPtr_boolsetDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolsetDeclarationAST (const GALGAS_bool & in_isPredefined,
                                      const GALGAS_lstring & in_mBoolsetTypeName,
                                      const GALGAS_lstringlist & in_mFlagList
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
// Phase 1: @boolsetDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolsetDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolsetDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolsetDeclarationAST_2D_weak (const class GALGAS_boolsetDeclarationAST & inSource) ;

  public: GALGAS_boolsetDeclarationAST_2D_weak & operator = (const class GALGAS_boolsetDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolsetDeclarationAST bang_boolsetDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolsetDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolsetDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolsetDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolsetDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyInCollectionListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyInCollectionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_propertyInCollectionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_propertyInCollectionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_bool & in_isConstant,
                                                 const class GALGAS_lstring & in_typeName,
                                                 const class GALGAS_lstring & in_name,
                                                 const class GALGAS_AccessControlAST & in_accessControl,
                                                 const class GALGAS_bool & in_hasSelector,
                                                 const class GALGAS_propertyInCollectionInitializationAST & in_initialization
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyInCollectionListAST init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyInCollectionListAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyInCollectionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_propertyInCollectionListAST class_func_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_AccessControlAST & inOperand3,
                                                                                    const class GALGAS_bool & inOperand4,
                                                                                    const class GALGAS_propertyInCollectionInitializationAST & inOperand5
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_propertyInCollectionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_AccessControlAST & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_propertyInCollectionInitializationAST & inOperand5
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST add_operation (const GALGAS_propertyInCollectionListAST & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_bool constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               class GALGAS_AccessControlAST constinArgument3,
                                               class GALGAS_bool constinArgument4,
                                               class GALGAS_propertyInCollectionInitializationAST constinArgument5,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_AccessControlAST constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_propertyInCollectionInitializationAST constinArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_AccessControlAST & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 class GALGAS_propertyInCollectionInitializationAST & outArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_AccessControlAST & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                class GALGAS_propertyInCollectionInitializationAST & outArgument5,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_AccessControlAST & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_propertyInCollectionInitializationAST & outArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setAccessControlAtIndex (class GALGAS_AccessControlAST constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setHasSelectorAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setInitializationAtIndex (class GALGAS_propertyInCollectionInitializationAST constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsConstantAtIndex (class GALGAS_bool constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNameAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_AccessControlAST & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_propertyInCollectionInitializationAST & outArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_AccessControlAST & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             class GALGAS_propertyInCollectionInitializationAST & outArgument5,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_AccessControlAST getter_accessControlAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_hasSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionInitializationAST getter_initializationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConstantAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_nameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_typeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_propertyInCollectionListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertyInCollectionListAST ;
 
} ; // End of GALGAS_propertyInCollectionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyInCollectionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bool current_isConstant (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_typeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_name (LOCATION_ARGS) const ;
  public: class GALGAS_AccessControlAST current_accessControl (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_hasSelector (LOCATION_ARGS) const ;
  public: class GALGAS_propertyInCollectionInitializationAST current_initialization (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyInCollectionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST ;

//--------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @AccessControlAST enum                                           *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControlAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_AccessControlAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_publicAccess,
    kEnum_protectedAccess,
    kEnum_protectedSetAccess,
    kEnum_privateAccess,
    kEnum_privateSetAccess,
    kEnum_fileprivateAccess,
    kEnum_fileprivateSetAccess
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControlAST extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControlAST class_func_fileprivateAccess (const class GALGAS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControlAST class_func_fileprivateSetAccess (const class GALGAS_location & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_AccessControlAST class_func_privateAccess (LOCATION_ARGS) ;

  public: static class GALGAS_AccessControlAST class_func_privateSetAccess (LOCATION_ARGS) ;

  public: static class GALGAS_AccessControlAST class_func_protectedAccess (LOCATION_ARGS) ;

  public: static class GALGAS_AccessControlAST class_func_protectedSetAccess (LOCATION_ARGS) ;

  public: static class GALGAS_AccessControlAST class_func_publicAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_fileprivateAccess (class GALGAS_location & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fileprivateSetAccess (class GALGAS_location & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProtectedAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProtectedSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPublicAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_fileprivateAccess (class GALGAS_location & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fileprivateSetAccess (class GALGAS_location & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_privateAccess () const ;

  public: VIRTUAL_IN_DEBUG bool optional_privateSetAccess () const ;

  public: VIRTUAL_IN_DEBUG bool optional_protectedAccess () const ;

  public: VIRTUAL_IN_DEBUG bool optional_protectedSetAccess () const ;

  public: VIRTUAL_IN_DEBUG bool optional_publicAccess () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_AccessControlAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @AccessControlAST enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControlAST_fileprivateAccess : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControlAST_fileprivateAccess (const GALGAS_location inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_AccessControlAST_fileprivateAccess (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess (const GALGAS_location inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_semanticExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticExpressionAST (const class cPtr_semanticExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticExpressionAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticExpressionAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
//                                 Phase 1: @propertyInCollectionInitializationAST enum                                *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyInCollectionInitializationAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_propertyInCollectionInitializationAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_some
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyInCollectionInitializationAST extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyInCollectionInitializationAST class_func_none (LOCATION_ARGS) ;

  public: static class GALGAS_propertyInCollectionInitializationAST class_func_some (const class GALGAS_semanticExpressionAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_propertyInCollectionInitializationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_some (class GALGAS_semanticExpressionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSome (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_none () const ;

  public: VIRTUAL_IN_DEBUG bool optional_some (class GALGAS_semanticExpressionAST & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyInCollectionInitializationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyInCollectionInitializationAST enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyInCollectionInitializationAST_some : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyInCollectionInitializationAST_some (const GALGAS_semanticExpressionAST inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyInCollectionInitializationAST_some (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyInCollectionListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyInCollectionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_isConstant ;
  public: inline GALGAS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

  public: GALGAS_lstring mProperty_typeName ;
  public: inline GALGAS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GALGAS_lstring mProperty_name ;
  public: inline GALGAS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GALGAS_AccessControlAST mProperty_accessControl ;
  public: inline GALGAS_AccessControlAST readProperty_accessControl (void) const {
    return mProperty_accessControl ;
  }

  public: GALGAS_bool mProperty_hasSelector ;
  public: inline GALGAS_bool readProperty_hasSelector (void) const {
    return mProperty_hasSelector ;
  }

  public: GALGAS_propertyInCollectionInitializationAST mProperty_initialization ;
  public: inline GALGAS_propertyInCollectionInitializationAST readProperty_initialization (void) const {
    return mProperty_initialization ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_propertyInCollectionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsConstant (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

  public: inline void setter_setTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setAccessControl (const GALGAS_AccessControlAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_accessControl = inValue ;
  }

  public: inline void setter_setHasSelector (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_hasSelector = inValue ;
  }

  public: inline void setter_setInitialization (const GALGAS_propertyInCollectionInitializationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initialization = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_propertyInCollectionListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyInCollectionListAST_2D_element (const GALGAS_bool & in_isConstant,
                                                         const GALGAS_lstring & in_typeName,
                                                         const GALGAS_lstring & in_name,
                                                         const GALGAS_AccessControlAST & in_accessControl,
                                                         const GALGAS_bool & in_hasSelector,
                                                         const GALGAS_propertyInCollectionInitializationAST & in_initialization) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyInCollectionListAST_2D_element init_21_isConstant_21__21__21__21_hasSelector_21_initialization (const class GALGAS_bool & inOperand0,
                                                                                                                                const class GALGAS_lstring & inOperand1,
                                                                                                                                const class GALGAS_lstring & inOperand2,
                                                                                                                                const class GALGAS_AccessControlAST & inOperand3,
                                                                                                                                const class GALGAS_bool & inOperand4,
                                                                                                                                const class GALGAS_propertyInCollectionInitializationAST & inOperand5,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyInCollectionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyInCollectionListAST_2D_element class_func_new (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_AccessControlAST & inOperand3,
                                                                                     const class GALGAS_bool & inOperand4,
                                                                                     const class GALGAS_propertyInCollectionInitializationAST & inOperand5,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyInCollectionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_classDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_classDeclarationAST (const class cPtr_classDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mIsAbstract (void) const ;

  public: class GALGAS_bool readProperty_mIsReference (void) const ;

  public: class GALGAS_lstring readProperty_mClassTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mSuperClassName (void) const ;

  public: class GALGAS_bool readProperty_mGenerateInSeparateFile (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GALGAS_bool readProperty_clonable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_classDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                              const class GALGAS_bool & inOperand1,
                                                                                              const class GALGAS_bool & inOperand2,
                                                                                              const class GALGAS_lstring & inOperand3,
                                                                                              const class GALGAS_lstring & inOperand4,
                                                                                              const class GALGAS_bool & inOperand5,
                                                                                              const class GALGAS_propertyInCollectionListAST & inOperand6,
                                                                                              const class GALGAS_bool & inOperand7,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_classDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_bool & inOperand2,
                                                                  const class GALGAS_lstring & inOperand3,
                                                                  const class GALGAS_lstring & inOperand4,
                                                                  const class GALGAS_bool & inOperand5,
                                                                  const class GALGAS_propertyInCollectionListAST & inOperand6,
                                                                  const class GALGAS_bool & inOperand7
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_classDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_classDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @classDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_classDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_bool & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_lstring & inOperand3,
                                                                                     const class GALGAS_lstring & inOperand4,
                                                                                     const class GALGAS_bool & inOperand5,
                                                                                     const class GALGAS_propertyInCollectionListAST & inOperand6,
                                                                                     const class GALGAS_bool & inOperand7,
                                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_bool mProperty_mIsReference ;
  public: GALGAS_lstring mProperty_mClassTypeName ;
  public: GALGAS_lstring mProperty_mSuperClassName ;
  public: GALGAS_bool mProperty_mGenerateInSeparateFile ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_bool mProperty_clonable ;


//--- Default constructor
  public: cPtr_classDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classDeclarationAST (const GALGAS_bool & in_isPredefined,
                                    const GALGAS_bool & in_mIsAbstract,
                                    const GALGAS_bool & in_mIsReference,
                                    const GALGAS_lstring & in_mClassTypeName,
                                    const GALGAS_lstring & in_mSuperClassName,
                                    const GALGAS_bool & in_mGenerateInSeparateFile,
                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                    const GALGAS_bool & in_clonable
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
// Phase 1: @classDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_classDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_classDeclarationAST_2D_weak (const class GALGAS_classDeclarationAST & inSource) ;

  public: GALGAS_classDeclarationAST_2D_weak & operator = (const class GALGAS_classDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_classDeclarationAST bang_classDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_classDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_classDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_classDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typedPropertyList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typedPropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_typeEntry ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_typeEntry (void) const {
    return mProperty_typeEntry ;
  }

  public: GALGAS_lstring mProperty_name ;
  public: inline GALGAS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GALGAS_propertyInCollectionInitializationAST mProperty_initialization ;
  public: inline GALGAS_propertyInCollectionInitializationAST readProperty_initialization (void) const {
    return mProperty_initialization ;
  }

  public: GALGAS_bool mProperty_hasSetter ;
  public: inline GALGAS_bool readProperty_hasSetter (void) const {
    return mProperty_hasSetter ;
  }

  public: GALGAS_bool mProperty_hasSelector ;
  public: inline GALGAS_bool readProperty_hasSelector (void) const {
    return mProperty_hasSelector ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typedPropertyList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeEntry (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeEntry = inValue ;
  }

  public: inline void setter_setName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setInitialization (const GALGAS_propertyInCollectionInitializationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initialization = inValue ;
  }

  public: inline void setter_setHasSetter (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_hasSetter = inValue ;
  }

  public: inline void setter_setHasSelector (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_hasSelector = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typedPropertyList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typedPropertyList_2D_element (const GALGAS_unifiedTypeMapEntry & in_typeEntry,
                                               const GALGAS_lstring & in_name,
                                               const GALGAS_propertyInCollectionInitializationAST & in_initialization,
                                               const GALGAS_bool & in_hasSetter,
                                               const GALGAS_bool & in_hasSelector) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typedPropertyList_2D_element init_21__21__21__21_hasSetter_21_hasSelector (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                                   const class GALGAS_propertyInCollectionInitializationAST & inOperand2,
                                                                                                   const class GALGAS_bool & inOperand3,
                                                                                                   const class GALGAS_bool & inOperand4,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typedPropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typedPropertyList_2D_element class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_propertyInCollectionInitializationAST & inOperand2,
                                                                           const class GALGAS_bool & inOperand3,
                                                                           const class GALGAS_bool & inOperand4,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typedPropertyList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedPropertyList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@initializerMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_initializerMap : public cMapElement {
//--- Map attributes
  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;

//--- Constructors
  public: cMapElement_initializerMap (const GALGAS_initializerMap_2D_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_initializerMap (const GALGAS_lstring & inKey,
                                      const GALGAS_functionSignature & in_mArgumentTypeList
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
// Phase 1: @initializerMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_initializerMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GALGAS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_initializerMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_initializerMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_initializerMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_functionSignature & in_mArgumentTypeList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_initializerMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_functionSignature & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_initializerMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_initializerMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_functionSignature & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_initializerMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @weakReferenceDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_weakReferenceDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_weakReferenceDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_weakReferenceDeclarationAST (const class cPtr_weakReferenceDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mClassTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mWeakReferenceTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mSuperWeakReferenceTypeName (void) const ;

  public: class GALGAS_bool readProperty_mGenerateInSeparateFile (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_weakReferenceDeclarationAST init_21_isPredefined_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_lstring & inOperand2,
                                                                                              const class GALGAS_lstring & inOperand3,
                                                                                              const class GALGAS_bool & inOperand4,
                                                                                              const class GALGAS_propertyInCollectionListAST & inOperand5,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_weakReferenceDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_weakReferenceDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_lstring & inOperand3,
                                                                          const class GALGAS_bool & inOperand4,
                                                                          const class GALGAS_propertyInCollectionListAST & inOperand5
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_weakReferenceDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_weakReferenceDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @weakReferenceDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_weakReferenceDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_lstring & inOperand3,
                                                                                     const class GALGAS_bool & inOperand4,
                                                                                     const class GALGAS_propertyInCollectionListAST & inOperand5,
                                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mClassTypeName ;
  public: GALGAS_lstring mProperty_mWeakReferenceTypeName ;
  public: GALGAS_lstring mProperty_mSuperWeakReferenceTypeName ;
  public: GALGAS_bool mProperty_mGenerateInSeparateFile ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;


//--- Default constructor
  public: cPtr_weakReferenceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_weakReferenceDeclarationAST (const GALGAS_bool & in_isPredefined,
                                            const GALGAS_lstring & in_mClassTypeName,
                                            const GALGAS_lstring & in_mWeakReferenceTypeName,
                                            const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                            const GALGAS_bool & in_mGenerateInSeparateFile,
                                            const GALGAS_propertyInCollectionListAST & in_mPropertyList
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
// Phase 1: @weakReferenceDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_weakReferenceDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_weakReferenceDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_weakReferenceDeclarationAST_2D_weak (const class GALGAS_weakReferenceDeclarationAST & inSource) ;

  public: GALGAS_weakReferenceDeclarationAST_2D_weak & operator = (const class GALGAS_weakReferenceDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_weakReferenceDeclarationAST bang_weakReferenceDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_weakReferenceDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_weakReferenceDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_weakReferenceDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_weakReferenceDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_enumConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_enumConstantList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mConstantName,
                                                 const class GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enumConstantList init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantList extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumConstantList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_enumConstantList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS__32_lstringlist & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumConstantList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS__32_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_enumConstantList add_operation (const GALGAS_enumConstantList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS__32_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS__32_lstringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS__32_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS__32_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS__32_lstringlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedValueDefinitionListAtIndex (class GALGAS__32_lstringlist constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS__32_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS__32_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mAssociatedValueDefinitionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_enumConstantList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_enumConstantList ;
 
} ; // End of GALGAS_enumConstantList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_enumConstantList : public cGenericAbstractEnumerator {
  public: cEnumerator_enumConstantList (const GALGAS_enumConstantList & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GALGAS__32_lstringlist current_mAssociatedValueDefinitionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mConstantName ;
  public: inline GALGAS_lstring readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GALGAS__32_lstringlist mProperty_mAssociatedValueDefinitionList ;
  public: inline GALGAS__32_lstringlist readProperty_mAssociatedValueDefinitionList (void) const {
    return mProperty_mAssociatedValueDefinitionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_enumConstantList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMAssociatedValueDefinitionList (const GALGAS__32_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedValueDefinitionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_enumConstantList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_enumConstantList_2D_element (const GALGAS_lstring & in_mConstantName,
                                              const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enumConstantList_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS__32_lstringlist & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumConstantList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS__32_lstringlist & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumConstantList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @structComparison enum                                           *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_structComparison (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_equatable,
    kEnum_comparable
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structComparison extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structComparison class_func_comparable (LOCATION_ARGS) ;

  public: static class GALGAS_structComparison class_func_equatable (LOCATION_ARGS) ;

  public: static class GALGAS_structComparison class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComparable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEquatable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_comparable () const ;

  public: VIRTUAL_IN_DEBUG bool optional_equatable () const ;

  public: VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structComparison class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structComparison ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_enumDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enumDeclarationAST (const class cPtr_enumDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mEnumTypeName (void) const ;

  public: class GALGAS_enumConstantList readProperty_mConstantList (void) const ;

  public: class GALGAS_structComparison readProperty_comparison (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enumDeclarationAST init_21_isPredefined_21__21__21_comparison (const class GALGAS_bool & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_enumConstantList & inOperand2,
                                                                                       const class GALGAS_structComparison & inOperand3,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_enumConstantList & inOperand2,
                                                                 const class GALGAS_structComparison & inOperand3
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enumDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_enumConstantList & inOperand2,
                                                                              const class GALGAS_structComparison & inOperand3,
                                                                              Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mEnumTypeName ;
  public: GALGAS_enumConstantList mProperty_mConstantList ;
  public: GALGAS_structComparison mProperty_comparison ;


//--- Default constructor
  public: cPtr_enumDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumDeclarationAST (const GALGAS_bool & in_isPredefined,
                                   const GALGAS_lstring & in_mEnumTypeName,
                                   const GALGAS_enumConstantList & in_mConstantList,
                                   const GALGAS_structComparison & in_comparison
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
// Phase 1: @enumDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumDeclarationAST_2D_weak (const class GALGAS_enumDeclarationAST & inSource) ;

  public: GALGAS_enumDeclarationAST_2D_weak & operator = (const class GALGAS_enumDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumDeclarationAST bang_enumDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumConstantListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_enumConstantListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_enumConstantListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mConstantName,
                                                 const class GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enumConstantListForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantListForGeneration extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumConstantListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_enumConstantListForGeneration class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                                      const class GALGAS_unifiedTypeMapEntryList & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumConstantListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntryList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_enumConstantListForGeneration add_operation (const GALGAS_enumConstantListForGeneration & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_unifiedTypeMapEntryList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_unifiedTypeMapEntryList constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedValueTypeListAtIndex (class GALGAS_unifiedTypeMapEntryList constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_mAssociatedValueTypeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_enumConstantListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_enumConstantListForGeneration ;
 
} ; // End of GALGAS_enumConstantListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_enumConstantListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_enumConstantListForGeneration (const GALGAS_enumConstantListForGeneration & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mConstantName (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntryList current_mAssociatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumConstantListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapEntryList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntryList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntryList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_unifiedTypeMapEntryList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mEntry
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMapEntryList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapEntryList extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapEntryList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_unifiedTypeMapEntryList class_func_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_unifiedTypeMapEntryList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapEntryList add_operation (const GALGAS_unifiedTypeMapEntryList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntryAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mEntryAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_unifiedTypeMapEntryList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_unifiedTypeMapEntryList ;
 
} ; // End of GALGAS_unifiedTypeMapEntryList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_unifiedTypeMapEntryList : public cGenericAbstractEnumerator {
  public: cEnumerator_unifiedTypeMapEntryList (const GALGAS_unifiedTypeMapEntryList & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mEntry (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_unifiedTypeMapEntryList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumConstantListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mConstantName ;
  public: inline GALGAS_string readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GALGAS_unifiedTypeMapEntryList mProperty_mAssociatedValueTypeList ;
  public: inline GALGAS_unifiedTypeMapEntryList readProperty_mAssociatedValueTypeList (void) const {
    return mProperty_mAssociatedValueTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_enumConstantListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMAssociatedValueTypeList (const GALGAS_unifiedTypeMapEntryList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedValueTypeList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_enumConstantListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_enumConstantListForGeneration_2D_element (const GALGAS_string & in_mConstantName,
                                                           const GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enumConstantListForGeneration_2D_element init_21__21_ (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_unifiedTypeMapEntryList & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumConstantListForGeneration_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_unifiedTypeMapEntryList & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumConstantListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapEntryList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntryList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mEntry ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mEntry (void) const {
    return mProperty_mEntry ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntryList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntry (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntry = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_unifiedTypeMapEntryList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeMapEntryList_2D_element (const GALGAS_unifiedTypeMapEntry & in_mEntry) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMapEntryList_2D_element init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapEntryList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapEntryList_2D_element class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unifiedTypeMapEntryList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapEntryList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeNameFormalParameterNameList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeNameFormalParameterNameList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_typeNameFormalParameterNameList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_typeNameFormalParameterNameList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_lstring & in_mFormalParameterTypeName,
                                                 const class GALGAS_lstring & in_mFormalParameterName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeNameFormalParameterNameList init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeNameFormalParameterNameList extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeNameFormalParameterNameList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_typeNameFormalParameterNameList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_lstring & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typeNameFormalParameterNameList add_operation (const GALGAS_typeNameFormalParameterNameList & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalParameterTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_typeNameFormalParameterNameList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_typeNameFormalParameterNameList ;
 
} ; // End of GALGAS_typeNameFormalParameterNameList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_typeNameFormalParameterNameList : public cGenericAbstractEnumerator {
  public: cEnumerator_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList & inEnumeratedObject,
                                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalParameterTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalParameterName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typeNameFormalParameterNameList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeNameFormalParameterNameList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeNameFormalParameterNameList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_lstring mProperty_mFormalParameterTypeName ;
  public: inline GALGAS_lstring readProperty_mFormalParameterTypeName (void) const {
    return mProperty_mFormalParameterTypeName ;
  }

  public: GALGAS_lstring mProperty_mFormalParameterName ;
  public: inline GALGAS_lstring readProperty_mFormalParameterName (void) const {
    return mProperty_mFormalParameterName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeNameFormalParameterNameList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalParameterTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterTypeName = inValue ;
  }

  public: inline void setter_setMFormalParameterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeNameFormalParameterNameList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeNameFormalParameterNameList_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                             const GALGAS_lstring & in_mFormalParameterTypeName,
                                                             const GALGAS_lstring & in_mFormalParameterName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeNameFormalParameterNameList_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeNameFormalParameterNameList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeNameFormalParameterNameList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_lstring & inOperand2,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeNameFormalParameterNameList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeConstructorList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeConstructorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externTypeConstructorList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externTypeConstructorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeConstructorList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeConstructorList extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeConstructorList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externTypeConstructorList class_func_listWithValue (const class GALGAS_typeNameFormalParameterNameList & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeConstructorList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeNameFormalParameterNameList & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externTypeConstructorList add_operation (const GALGAS_externTypeConstructorList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_typeNameFormalParameterNameList constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeNameFormalParameterNameList constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeNameFormalParameterNameList & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeNameFormalParameterNameList & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeNameFormalParameterNameList & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GALGAS_typeNameFormalParameterNameList constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeNameFormalParameterNameList & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeNameFormalParameterNameList & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_mParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_externTypeConstructorList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_externTypeConstructorList ;
 
} ; // End of GALGAS_externTypeConstructorList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_externTypeConstructorList : public cGenericAbstractEnumerator {
  public: cEnumerator_externTypeConstructorList (const GALGAS_externTypeConstructorList & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externTypeConstructorList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeConstructorList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeConstructorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_typeNameFormalParameterNameList mProperty_mParameterList ;
  public: inline GALGAS_typeNameFormalParameterNameList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_externTypeConstructorList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterList (const GALGAS_typeNameFormalParameterNameList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_externTypeConstructorList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_externTypeConstructorList_2D_element (const GALGAS_typeNameFormalParameterNameList & in_mParameterList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeConstructorList_2D_element init_21_ (const class GALGAS_typeNameFormalParameterNameList & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeConstructorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeConstructorList_2D_element class_func_new (const class GALGAS_typeNameFormalParameterNameList & inOperand0,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externTypeConstructorList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeGetterList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeGetterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externTypeGetterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externTypeGetterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mGetterName,
                                                 const class GALGAS_lstring & in_mResultTypeName,
                                                 const class GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeGetterList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeGetterList extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeGetterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externTypeGetterList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeGetterList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externTypeGetterList add_operation (const GALGAS_externTypeGetterList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_typeNameFormalParameterNameList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_typeNameFormalParameterNameList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGetterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GALGAS_typeNameFormalParameterNameList constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGetterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_mParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_externTypeGetterList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_externTypeGetterList ;
 
} ; // End of GALGAS_externTypeGetterList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_externTypeGetterList : public cGenericAbstractEnumerator {
  public: cEnumerator_externTypeGetterList (const GALGAS_externTypeGetterList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mGetterName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externTypeGetterList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeGetterList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeGetterList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeGetterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mGetterName ;
  public: inline GALGAS_lstring readProperty_mGetterName (void) const {
    return mProperty_mGetterName ;
  }

  public: GALGAS_lstring mProperty_mResultTypeName ;
  public: inline GALGAS_lstring readProperty_mResultTypeName (void) const {
    return mProperty_mResultTypeName ;
  }

  public: GALGAS_typeNameFormalParameterNameList mProperty_mParameterList ;
  public: inline GALGAS_typeNameFormalParameterNameList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_externTypeGetterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGetterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterName = inValue ;
  }

  public: inline void setter_setMResultTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultTypeName = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_typeNameFormalParameterNameList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_externTypeGetterList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_externTypeGetterList_2D_element (const GALGAS_lstring & in_mGetterName,
                                                  const GALGAS_lstring & in_mResultTypeName,
                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeGetterList_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_typeNameFormalParameterNameList & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeGetterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeGetterList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_typeNameFormalParameterNameList & inOperand2,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externTypeGetterList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeGetterList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeSetterList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeSetterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externTypeSetterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externTypeSetterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSetterName,
                                                 const class GALGAS_formalParameterListAST & in_mFormalParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeSetterList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeSetterList extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeSetterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externTypeSetterList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_formalParameterListAST & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeSetterList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externTypeSetterList add_operation (const GALGAS_externTypeSetterList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_formalParameterListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalParameterListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalParameterListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalParameterListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListAtIndex (class GALGAS_formalParameterListAST constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSetterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalParameterListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_externTypeSetterList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_externTypeSetterList ;
 
} ; // End of GALGAS_externTypeSetterList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_externTypeSetterList : public cGenericAbstractEnumerator {
  public: cEnumerator_externTypeSetterList (const GALGAS_externTypeSetterList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSetterName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externTypeSetterList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeSetterList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_formalParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_formalParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                 const class GALGAS_lstring & in_mFormalArgumentTypeName,
                                                 const class GALGAS_lstring & in_mFormalArgumentName,
                                                 const class GALGAS_bool & in_mIsUnused
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_formalParameterListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterListAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalParameterListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_formalParameterListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2,
                                                                               const class GALGAS_lstring & inOperand3,
                                                                               const class GALGAS_bool & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalParameterListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST add_operation (const GALGAS_formalParameterListAST & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_formalArgumentPassingModeAST constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               class GALGAS_lstring constinArgument3,
                                               class GALGAS_bool constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalArgumentPassingModeAST constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentPassingModeAtIndex (class GALGAS_formalArgumentPassingModeAST constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_formalParameterListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_formalParameterListAST ;
 
} ; // End of GALGAS_formalParameterListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_formalParameterListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_formalParameterListAST (const GALGAS_formalParameterListAST & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_formalParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeSetterList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeSetterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSetterName ;
  public: inline GALGAS_lstring readProperty_mSetterName (void) const {
    return mProperty_mSetterName ;
  }

  public: GALGAS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GALGAS_formalParameterListAST readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_externTypeSetterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSetterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetterName = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_externTypeSetterList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_externTypeSetterList_2D_element (const GALGAS_lstring & in_mSetterName,
                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeSetterList_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_formalParameterListAST & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeSetterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeSetterList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_formalParameterListAST & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externTypeSetterList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeSetterList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                     Phase 1: @formalArgumentPassingModeAST enum                                     *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalArgumentPassingModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_formalArgumentPassingModeAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_argumentVarIn,
    kEnum_argumentOut,
    kEnum_argumentInOut,
    kEnum_argumentConstantIn
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalArgumentPassingModeAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalArgumentPassingModeAST class_func_argumentConstantIn (LOCATION_ARGS) ;

  public: static class GALGAS_formalArgumentPassingModeAST class_func_argumentInOut (LOCATION_ARGS) ;

  public: static class GALGAS_formalArgumentPassingModeAST class_func_argumentOut (LOCATION_ARGS) ;

  public: static class GALGAS_formalArgumentPassingModeAST class_func_argumentVarIn (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_formalArgumentPassingModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArgumentConstantIn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArgumentInOut (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArgumentOut (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArgumentVarIn (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_argumentConstantIn () const ;

  public: VIRTUAL_IN_DEBUG bool optional_argumentInOut () const ;

  public: VIRTUAL_IN_DEBUG bool optional_argumentOut () const ;

  public: VIRTUAL_IN_DEBUG bool optional_argumentVarIn () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formalArgumentPassingModeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GALGAS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentTypeName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentTypeName (void) const {
    return mProperty_mFormalArgumentTypeName ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GALGAS_bool mProperty_mIsUnused ;
  public: inline GALGAS_bool readProperty_mIsUnused (void) const {
    return mProperty_mIsUnused ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_formalParameterListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GALGAS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMFormalArgumentTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMIsUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsUnused = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_formalParameterListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_formalParameterListAST_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                    const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                    const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                    const GALGAS_bool & in_mIsUnused) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_formalParameterListAST_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_lstring & inOperand3,
                                                                                    const class GALGAS_bool & inOperand4,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalParameterListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_lstring & inOperand3,
                                                                                const class GALGAS_bool & inOperand4,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formalParameterListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeMethodList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeMethodList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externTypeMethodList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externTypeMethodList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMethodName,
                                                 const class GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                 const class GALGAS_location & in_mDeclarationLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeMethodList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeMethodList extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeMethodList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externTypeMethodList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_formalParameterListAST & inOperand1,
                                                                             const class GALGAS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeMethodList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externTypeMethodList add_operation (const GALGAS_externTypeMethodList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_formalParameterListAST constinArgument1,
                                               class GALGAS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalParameterListAST constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalParameterListAST & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalParameterListAST & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationLocationAtIndex (class GALGAS_location constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListAtIndex (class GALGAS_formalParameterListAST constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMethodNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalParameterListAST & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mDeclarationLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_externTypeMethodList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_externTypeMethodList ;
 
} ; // End of GALGAS_externTypeMethodList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_externTypeMethodList : public cGenericAbstractEnumerator {
  public: cEnumerator_externTypeMethodList (const GALGAS_externTypeMethodList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externTypeMethodList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeMethodList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeMethodList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeMethodList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMethodName ;
  public: inline GALGAS_lstring readProperty_mMethodName (void) const {
    return mProperty_mMethodName ;
  }

  public: GALGAS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GALGAS_formalParameterListAST readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

  public: GALGAS_location mProperty_mDeclarationLocation ;
  public: inline GALGAS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_externTypeMethodList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMethodName = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_externTypeMethodList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_externTypeMethodList_2D_element (const GALGAS_lstring & in_mMethodName,
                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                  const GALGAS_location & in_mDeclarationLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeMethodList_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_formalParameterListAST & inOperand1,
                                                                          const class GALGAS_location & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeMethodList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeMethodList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_formalParameterListAST & inOperand1,
                                                                              const class GALGAS_location & inOperand2,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externTypeMethodList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeMethodList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_externTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_externTypeDeclarationAST (const class cPtr_externTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mExternTypeName (void) const ;

  public: class GALGAS_string readProperty_mCppPreDeclarationCode (void) const ;

  public: class GALGAS_string readProperty_mCppClassCode (void) const ;

  public: class GALGAS_externTypeConstructorList readProperty_externTypeInitializerList (void) const ;

  public: class GALGAS_externTypeGetterList readProperty_mExternTypeGetterList (void) const ;

  public: class GALGAS_externTypeSetterList readProperty_mExternTypeSetterList (void) const ;

  public: class GALGAS_externTypeMethodList readProperty_mExternTypeMethodList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                                   const class GALGAS_string & inOperand2,
                                                                                                   const class GALGAS_string & inOperand3,
                                                                                                   const class GALGAS_externTypeConstructorList & inOperand4,
                                                                                                   const class GALGAS_externTypeGetterList & inOperand5,
                                                                                                   const class GALGAS_externTypeSetterList & inOperand6,
                                                                                                   const class GALGAS_externTypeMethodList & inOperand7,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_string & inOperand2,
                                                                       const class GALGAS_string & inOperand3,
                                                                       const class GALGAS_externTypeConstructorList & inOperand4,
                                                                       const class GALGAS_externTypeGetterList & inOperand5,
                                                                       const class GALGAS_externTypeSetterList & inOperand6,
                                                                       const class GALGAS_externTypeMethodList & inOperand7
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externTypeDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externTypeDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_externTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_string & inOperand2,
                                                                                          const class GALGAS_string & inOperand3,
                                                                                          const class GALGAS_externTypeConstructorList & inOperand4,
                                                                                          const class GALGAS_externTypeGetterList & inOperand5,
                                                                                          const class GALGAS_externTypeSetterList & inOperand6,
                                                                                          const class GALGAS_externTypeMethodList & inOperand7,
                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mExternTypeName ;
  public: GALGAS_string mProperty_mCppPreDeclarationCode ;
  public: GALGAS_string mProperty_mCppClassCode ;
  public: GALGAS_externTypeConstructorList mProperty_externTypeInitializerList ;
  public: GALGAS_externTypeGetterList mProperty_mExternTypeGetterList ;
  public: GALGAS_externTypeSetterList mProperty_mExternTypeSetterList ;
  public: GALGAS_externTypeMethodList mProperty_mExternTypeMethodList ;


//--- Default constructor
  public: cPtr_externTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externTypeDeclarationAST (const GALGAS_bool & in_isPredefined,
                                         const GALGAS_lstring & in_mExternTypeName,
                                         const GALGAS_string & in_mCppPreDeclarationCode,
                                         const GALGAS_string & in_mCppClassCode,
                                         const GALGAS_externTypeConstructorList & in_externTypeInitializerList,
                                         const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                         const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                         const GALGAS_externTypeMethodList & in_mExternTypeMethodList
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
// Phase 1: @externTypeDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_externTypeDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_externTypeDeclarationAST_2D_weak (const class GALGAS_externTypeDeclarationAST & inSource) ;

  public: GALGAS_externTypeDeclarationAST_2D_weak & operator = (const class GALGAS_externTypeDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_externTypeDeclarationAST bang_externTypeDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externTypeDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externTypeDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphInsertModifierList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_graphInsertModifierList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_graphInsertModifierList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_graphInsertModifierList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mInsertModifierName,
                                                 const class GALGAS_lstring & in_mInsertErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_graphInsertModifierList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphInsertModifierList extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_graphInsertModifierList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_graphInsertModifierList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_graphInsertModifierList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_graphInsertModifierList add_operation (const GALGAS_graphInsertModifierList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertModifierNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInsertErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInsertModifierNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_graphInsertModifierList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_graphInsertModifierList ;
 
} ; // End of GALGAS_graphInsertModifierList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_graphInsertModifierList : public cGenericAbstractEnumerator {
  public: cEnumerator_graphInsertModifierList (const GALGAS_graphInsertModifierList & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mInsertModifierName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mInsertErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_graphInsertModifierList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphInsertModifierList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphInsertModifierList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_graphInsertModifierList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mInsertModifierName ;
  public: inline GALGAS_lstring readProperty_mInsertModifierName (void) const {
    return mProperty_mInsertModifierName ;
  }

  public: GALGAS_lstring mProperty_mInsertErrorMessage ;
  public: inline GALGAS_lstring readProperty_mInsertErrorMessage (void) const {
    return mProperty_mInsertErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_graphInsertModifierList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertModifierName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertModifierName = inValue ;
  }

  public: inline void setter_setMInsertErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_graphInsertModifierList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_graphInsertModifierList_2D_element (const GALGAS_lstring & in_mInsertModifierName,
                                                     const GALGAS_lstring & in_mInsertErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_graphInsertModifierList_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphInsertModifierList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_graphInsertModifierList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_graphInsertModifierList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphInsertModifierList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_graphDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_graphDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_graphDeclarationAST (const class cPtr_graphDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mGraphTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAssociatedListTypeName (void) const ;

  public: class GALGAS_graphInsertModifierList readProperty_mInsertModifierList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_graphDeclarationAST init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstring & inOperand2,
                                                                              const class GALGAS_graphInsertModifierList & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_graphDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_graphInsertModifierList & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_graphDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_graphDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @graphDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_graphDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void graphDeclarationAST_init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_graphInsertModifierList & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mGraphTypeName ;
  public: GALGAS_lstring mProperty_mAssociatedListTypeName ;
  public: GALGAS_graphInsertModifierList mProperty_mInsertModifierList ;


//--- Default constructor
  public: cPtr_graphDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_graphDeclarationAST (const GALGAS_bool & in_isPredefined,
                                    const GALGAS_lstring & in_mGraphTypeName,
                                    const GALGAS_lstring & in_mAssociatedListTypeName,
                                    const GALGAS_graphInsertModifierList & in_mInsertModifierList
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
// Phase 1: @graphDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_graphDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_graphDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_graphDeclarationAST_2D_weak (const class GALGAS_graphDeclarationAST & inSource) ;

  public: GALGAS_graphDeclarationAST_2D_weak & operator = (const class GALGAS_graphDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_graphDeclarationAST bang_graphDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_graphDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_graphDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_graphDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_listDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_listDeclarationAST (const class cPtr_listDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mListTypeName (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GALGAS_bool readProperty_usefullList (void) const ;

  public: class GALGAS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_listDeclarationAST init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GALGAS_bool & inOperand0,
                                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                                     const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                                                     const class GALGAS_bool & inOperand3,
                                                                                                     const class GALGAS_bool & inOperand4,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_listDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                 const class GALGAS_bool & inOperand3,
                                                                 const class GALGAS_bool & inOperand4
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_listDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_listDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GALGAS_bool & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                                            const class GALGAS_bool & inOperand3,
                                                                                            const class GALGAS_bool & inOperand4,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GALGAS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mListTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_bool mProperty_usefullList ;
  public: GALGAS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_listDeclarationAST (const GALGAS_bool & in_isPredefined,
                                   const GALGAS_lstring & in_mListTypeName,
                                   const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                   const GALGAS_bool & in_usefullList,
                                   const GALGAS_bool & in_equatable
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
// Phase 1: @listDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_listDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_listDeclarationAST_2D_weak (const class GALGAS_listDeclarationAST & inSource) ;

  public: GALGAS_listDeclarationAST_2D_weak & operator = (const class GALGAS_listDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_listDeclarationAST bang_listDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_listDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_listDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_listDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dictDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dictDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_dictDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dictDeclarationAST (const class cPtr_dictDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mDictTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mKeyTypeName (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GALGAS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_dictDeclarationAST init_21_isPredefined_21__21__21__21_equatable (const class GALGAS_bool & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_lstring & inOperand2,
                                                                                          const class GALGAS_propertyInCollectionListAST & inOperand3,
                                                                                          const class GALGAS_bool & inOperand4,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dictDeclarationAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dictDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_propertyInCollectionListAST & inOperand3,
                                                                 const class GALGAS_bool & inOperand4
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dictDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dictDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dictDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dictDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const class GALGAS_bool & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_propertyInCollectionListAST & inOperand3,
                                                                                 const class GALGAS_bool & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GALGAS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDictTypeName ;
  public: GALGAS_lstring mProperty_mKeyTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_dictDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dictDeclarationAST (const GALGAS_bool & in_isPredefined,
                                   const GALGAS_lstring & in_mDictTypeName,
                                   const GALGAS_lstring & in_mKeyTypeName,
                                   const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                   const GALGAS_bool & in_equatable
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
// Phase 1: @dictDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dictDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dictDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dictDeclarationAST_2D_weak (const class GALGAS_dictDeclarationAST & inSource) ;

  public: GALGAS_dictDeclarationAST_2D_weak & operator = (const class GALGAS_dictDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dictDeclarationAST bang_dictDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dictDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dictDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dictDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dictDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @insertMethodListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_insertMethodListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_insertMethodListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_insertMethodListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mInsertMethodName,
                                                 const class GALGAS_lstring & in_mErrorMessage,
                                                 const class GALGAS_lstring & in_mShadowErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_insertMethodListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_insertMethodListAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_insertMethodListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_insertMethodListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_insertMethodListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST add_operation (const GALGAS_insertMethodListAST & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMShadowErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInsertMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mShadowErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_insertMethodListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_insertMethodListAST ;
 
} ; // End of GALGAS_insertMethodListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_insertMethodListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_insertMethodListAST (const GALGAS_insertMethodListAST & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mInsertMethodName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mShadowErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_insertMethodListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @insertMethodListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_insertMethodListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mInsertMethodName ;
  public: inline GALGAS_lstring readProperty_mInsertMethodName (void) const {
    return mProperty_mInsertMethodName ;
  }

  public: GALGAS_lstring mProperty_mErrorMessage ;
  public: inline GALGAS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

  public: GALGAS_lstring mProperty_mShadowErrorMessage ;
  public: inline GALGAS_lstring readProperty_mShadowErrorMessage (void) const {
    return mProperty_mShadowErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_insertMethodListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

  public: inline void setter_setMShadowErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mShadowErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_insertMethodListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_insertMethodListAST_2D_element (const GALGAS_lstring & in_mInsertMethodName,
                                                 const GALGAS_lstring & in_mErrorMessage,
                                                 const GALGAS_lstring & in_mShadowErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_insertMethodListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_insertMethodListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_insertMethodListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_insertMethodListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapSearchMethodListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mapSearchMethodListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSearchMethodName ;
  public: inline GALGAS_lstring readProperty_mSearchMethodName (void) const {
    return mProperty_mSearchMethodName ;
  }

  public: GALGAS_lstring mProperty_mErrorMessage ;
  public: inline GALGAS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_mapSearchMethodListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSearchMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSearchMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_mapSearchMethodListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_mapSearchMethodListAST_2D_element (const GALGAS_lstring & in_mSearchMethodName,
                                                    const GALGAS_lstring & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_mapSearchMethodListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mapSearchMethodListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_mapSearchMethodListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_mapSearchMethodListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapSearchMethodListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapRemoveMethodListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mapRemoveMethodListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_mapRemoveMethodListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_mapRemoveMethodListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMethodName,
                                                 const class GALGAS_lstring & in_mErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_mapRemoveMethodListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mapRemoveMethodListAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_mapRemoveMethodListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_mapRemoveMethodListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_mapRemoveMethodListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_mapRemoveMethodListAST add_operation (const GALGAS_mapRemoveMethodListAST & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMethodNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_mapRemoveMethodListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_mapRemoveMethodListAST ;
 
} ; // End of GALGAS_mapRemoveMethodListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_mapRemoveMethodListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_mapRemoveMethodListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapRemoveMethodListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapRemoveMethodListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mapRemoveMethodListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMethodName ;
  public: inline GALGAS_lstring readProperty_mMethodName (void) const {
    return mProperty_mMethodName ;
  }

  public: GALGAS_lstring mProperty_mErrorMessage ;
  public: inline GALGAS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_mapRemoveMethodListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_mapRemoveMethodListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_mapRemoveMethodListAST_2D_element (const GALGAS_lstring & in_mMethodName,
                                                    const GALGAS_lstring & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_mapRemoveMethodListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mapRemoveMethodListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_mapRemoveMethodListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_mapRemoveMethodListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapRemoveMethodListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @insertOrReplaceDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_insertOrReplaceDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_insertOrReplaceDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_insertOrReplaceDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_insertOrReplaceDeclarationListAST init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_insertOrReplaceDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_insertOrReplaceDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_insertOrReplaceDeclarationListAST class_func_listWithValue (const class GALGAS_location & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_insertOrReplaceDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_insertOrReplaceDeclarationListAST add_operation (const GALGAS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_location constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertOrReplaceDeclarationLocationAtIndex (class GALGAS_location constinArgument0,
                                                                                      class GALGAS_uint constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInsertOrReplaceDeclarationLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertOrReplaceDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertOrReplaceDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertOrReplaceDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_insertOrReplaceDeclarationListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_insertOrReplaceDeclarationListAST ;
 
} ; // End of GALGAS_insertOrReplaceDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_insertOrReplaceDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST & inEnumeratedObject,
                                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_location current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_insertOrReplaceDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @insertOrReplaceDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_insertOrReplaceDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_mInsertOrReplaceDeclarationLocation ;
  public: inline GALGAS_location readProperty_mInsertOrReplaceDeclarationLocation (void) const {
    return mProperty_mInsertOrReplaceDeclarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertOrReplaceDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertOrReplaceDeclarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_insertOrReplaceDeclarationListAST_2D_element (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_insertOrReplaceDeclarationListAST_2D_element init_21_ (const class GALGAS_location & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_insertOrReplaceDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_insertOrReplaceDeclarationListAST_2D_element class_func_new (const class GALGAS_location & inOperand0,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_insertOrReplaceDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_mapDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_mapDeclarationAST (const class cPtr_mapDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mMapTypeName (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GALGAS_insertMethodListAST readProperty_mInsertMethodList (void) const ;

  public: class GALGAS_mapSearchMethodListAST readProperty_mSearchMethodList (void) const ;

  public: class GALGAS_mapRemoveMethodListAST readProperty_mRemoveMethodList (void) const ;

  public: class GALGAS_insertOrReplaceDeclarationListAST readProperty_mInsertOrReplaceDeclarationListAST (void) const ;

  public: class GALGAS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_mapDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_equatable (const class GALGAS_bool & inOperand0,
                                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                                     const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                                                     const class GALGAS_insertMethodListAST & inOperand3,
                                                                                                     const class GALGAS_mapSearchMethodListAST & inOperand4,
                                                                                                     const class GALGAS_mapRemoveMethodListAST & inOperand5,
                                                                                                     const class GALGAS_insertOrReplaceDeclarationListAST & inOperand6,
                                                                                                     const class GALGAS_bool & inOperand7,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_mapDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                const class GALGAS_lstring & inOperand1,
                                                                const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                const class GALGAS_insertMethodListAST & inOperand3,
                                                                const class GALGAS_mapSearchMethodListAST & inOperand4,
                                                                const class GALGAS_mapRemoveMethodListAST & inOperand5,
                                                                const class GALGAS_insertOrReplaceDeclarationListAST & inOperand6,
                                                                const class GALGAS_bool & inOperand7
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_mapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_mapDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mapDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_mapDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_equatable (const class GALGAS_bool & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                                            const class GALGAS_insertMethodListAST & inOperand3,
                                                                                            const class GALGAS_mapSearchMethodListAST & inOperand4,
                                                                                            const class GALGAS_mapRemoveMethodListAST & inOperand5,
                                                                                            const class GALGAS_insertOrReplaceDeclarationListAST & inOperand6,
                                                                                            const class GALGAS_bool & inOperand7,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GALGAS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mMapTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public: GALGAS_mapRemoveMethodListAST mProperty_mRemoveMethodList ;
  public: GALGAS_insertOrReplaceDeclarationListAST mProperty_mInsertOrReplaceDeclarationListAST ;
  public: GALGAS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_mapDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_mapDeclarationAST (const GALGAS_bool & in_isPredefined,
                                  const GALGAS_lstring & in_mMapTypeName,
                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                  const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                  const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                  const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                  const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                  const GALGAS_bool & in_equatable
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
// Phase 1: @mapDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mapDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_mapDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_mapDeclarationAST_2D_weak (const class GALGAS_mapDeclarationAST & inSource) ;

  public: GALGAS_mapDeclarationAST_2D_weak & operator = (const class GALGAS_mapDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_mapDeclarationAST bang_mapDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mapDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_mapDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_mapDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_mapDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @insertMethodMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_insertMethodMap ;

//--------------------------------------------------------------------------------------------------

class GALGAS_insertMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_insertMethodMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_insertMethodMap (const GALGAS_insertMethodMap & inSource) ;
  public: GALGAS_insertMethodMap & operator = (const GALGAS_insertMethodMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_insertMethodMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_insertMethodMap extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_insertMethodMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_insertMethodMap class_func_mapWithMapToOverride (const class GALGAS_insertMethodMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_insertMethodMap add_operation (const GALGAS_insertMethodMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_insertMethodMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_insertMethodMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_insertMethodMap ;
 
} ; // End of GALGAS_insertMethodMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_insertMethodMap : public cGenericAbstractEnumerator {
  public: cEnumerator_insertMethodMap (const GALGAS_insertMethodMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_insertMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@insertMethodMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_insertMethodMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_insertMethodMap (const GALGAS_insertMethodMap_2D_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_insertMethodMap (const GALGAS_lstring & inKey
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
// Phase 1: @insertMethodMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_insertMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_insertMethodMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_insertMethodMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_insertMethodMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_insertMethodMap_2D_element init_21_ (const class GALGAS_lstring & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_insertMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_insertMethodMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_insertMethodMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @searchMethodMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_searchMethodMap ;

//--------------------------------------------------------------------------------------------------

class GALGAS_searchMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_searchMethodMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_searchMethodMap (const GALGAS_searchMethodMap & inSource) ;
  public: GALGAS_searchMethodMap & operator = (const GALGAS_searchMethodMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_searchMethodMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_searchMethodMap extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_searchMethodMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_searchMethodMap class_func_mapWithMapToOverride (const class GALGAS_searchMethodMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_searchMethodMap add_operation (const GALGAS_searchMethodMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_searchMethodMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_searchMethodMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_searchMethodMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_searchMethodMap ;
 
} ; // End of GALGAS_searchMethodMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_searchMethodMap : public cGenericAbstractEnumerator {
  public: cEnumerator_searchMethodMap (const GALGAS_searchMethodMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_searchMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@searchMethodMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_searchMethodMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_searchMethodMap (const GALGAS_searchMethodMap_2D_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_searchMethodMap (const GALGAS_lstring & inKey
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
// Phase 1: @searchMethodMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_searchMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_searchMethodMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_searchMethodMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_searchMethodMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_searchMethodMap_2D_element init_21_ (const class GALGAS_lstring & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_searchMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_searchMethodMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_searchMethodMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalTypeDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalTypeDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_optionalTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_optionalTypeDeclarationAST (const class cPtr_optionalTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_optionalTypeName (void) const ;

  public: class GALGAS_lstring readProperty_unwrappedTypeName (void) const ;

  public: class GALGAS_bool readProperty_isUsefull (void) const ;

  public: class GALGAS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionalTypeDeclarationAST init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull_21_equatable (const class GALGAS_bool & inOperand0,
                                                                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                                                                            const class GALGAS_lstring & inOperand2,
                                                                                                                                            const class GALGAS_bool & inOperand3,
                                                                                                                                            const class GALGAS_bool & inOperand4,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalTypeDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalTypeDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_bool & inOperand3,
                                                                         const class GALGAS_bool & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionalTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalTypeDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionalTypeDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_optionalTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull_21_equatable (const class GALGAS_bool & inOperand0,
                                                                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                                                                   const class GALGAS_bool & inOperand3,
                                                                                                                                   const class GALGAS_bool & inOperand4,
                                                                                                                                   Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GALGAS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_optionalTypeName ;
  public: GALGAS_lstring mProperty_unwrappedTypeName ;
  public: GALGAS_bool mProperty_isUsefull ;
  public: GALGAS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_optionalTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionalTypeDeclarationAST (const GALGAS_bool & in_isPredefined,
                                           const GALGAS_lstring & in_optionalTypeName,
                                           const GALGAS_lstring & in_unwrappedTypeName,
                                           const GALGAS_bool & in_isUsefull,
                                           const GALGAS_bool & in_equatable
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
// Phase 1: @optionalTypeDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalTypeDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionalTypeDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionalTypeDeclarationAST_2D_weak (const class GALGAS_optionalTypeDeclarationAST & inSource) ;

  public: GALGAS_optionalTypeDeclarationAST_2D_weak & operator = (const class GALGAS_optionalTypeDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionalTypeDeclarationAST bang_optionalTypeDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalTypeDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalTypeDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionalTypeDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalTypeDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListSortDescriptorListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortedListSortDescriptorListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_sortedListSortDescriptorListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_sortedListSortDescriptorListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSortedAttributeName,
                                                 const class GALGAS_bool & in_mAscending
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sortedListSortDescriptorListAST init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListSortDescriptorListAST extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sortedListSortDescriptorListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_sortedListSortDescriptorListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_bool & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sortedListSortDescriptorListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_sortedListSortDescriptorListAST add_operation (const GALGAS_sortedListSortDescriptorListAST & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_bool constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAscendingAtIndex (class GALGAS_bool constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortedAttributeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAscendingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSortedAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sortedListSortDescriptorListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_sortedListSortDescriptorListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_sortedListSortDescriptorListAST ;
 
} ; // End of GALGAS_sortedListSortDescriptorListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_sortedListSortDescriptorListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_sortedListSortDescriptorListAST (const GALGAS_sortedListSortDescriptorListAST & inEnumeratedObject,
                                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_sortedListSortDescriptorListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListSortDescriptorListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortedListSortDescriptorListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSortedAttributeName ;
  public: inline GALGAS_lstring readProperty_mSortedAttributeName (void) const {
    return mProperty_mSortedAttributeName ;
  }

  public: GALGAS_bool mProperty_mAscending ;
  public: inline GALGAS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sortedListSortDescriptorListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSortedAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortedAttributeName = inValue ;
  }

  public: inline void setter_setMAscending (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sortedListSortDescriptorListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sortedListSortDescriptorListAST_2D_element (const GALGAS_lstring & in_mSortedAttributeName,
                                                             const GALGAS_bool & in_mAscending) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sortedListSortDescriptorListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListSortDescriptorListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sortedListSortDescriptorListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_bool & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sortedListSortDescriptorListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortedListDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_sortedListDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sortedListDeclarationAST (const class cPtr_sortedListDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mSortedListTypeName (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GALGAS_sortedListSortDescriptorListAST readProperty_mSortDescriptorList (void) const ;

  public: class GALGAS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sortedListDeclarationAST init_21_isPredefined_21__21__21__21_equatable (const class GALGAS_bool & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1,
                                                                                                const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                                                const class GALGAS_sortedListSortDescriptorListAST & inOperand3,
                                                                                                const class GALGAS_bool & inOperand4,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sortedListDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                       const class GALGAS_sortedListSortDescriptorListAST & inOperand3,
                                                                       const class GALGAS_bool & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sortedListDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sortedListDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sortedListDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const class GALGAS_bool & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                                       const class GALGAS_sortedListSortDescriptorListAST & inOperand3,
                                                                                       const class GALGAS_bool & inOperand4,
                                                                                       Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GALGAS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mSortedListTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GALGAS_sortedListSortDescriptorListAST mProperty_mSortDescriptorList ;
  public: GALGAS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_sortedListDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sortedListDeclarationAST (const GALGAS_bool & in_isPredefined,
                                         const GALGAS_lstring & in_mSortedListTypeName,
                                         const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                         const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                         const GALGAS_bool & in_equatable
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
// Phase 1: @sortedListDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortedListDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sortedListDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sortedListDeclarationAST_2D_weak (const class GALGAS_sortedListDeclarationAST & inSource) ;

  public: GALGAS_sortedListDeclarationAST_2D_weak & operator = (const class GALGAS_sortedListDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sortedListDeclarationAST bang_sortedListDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sortedListDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sortedListDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sortedListDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortDescriptorListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortDescriptorListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_sortDescriptorListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_sortDescriptorListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                 const class GALGAS_string & in_mAttributeName,
                                                 const class GALGAS_bool & in_mAscendingOrder
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sortDescriptorListForGeneration init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortDescriptorListForGeneration extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sortDescriptorListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_sortDescriptorListForGeneration class_func_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                        const class GALGAS_string & inOperand1,
                                                                                        const class GALGAS_bool & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sortDescriptorListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_sortDescriptorListForGeneration add_operation (const GALGAS_sortDescriptorListForGeneration & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAscendingOrderAtIndex (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeTypeIndexAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAscendingOrderAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mAttributeTypeIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sortDescriptorListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sortDescriptorListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sortDescriptorListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_sortDescriptorListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_sortDescriptorListForGeneration ;
 
} ; // End of GALGAS_sortDescriptorListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_sortDescriptorListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_sortDescriptorListForGeneration (const GALGAS_sortDescriptorListForGeneration & inEnumeratedObject,
                                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mAttributeTypeIndex (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mAttributeName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mAscendingOrder (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_sortDescriptorListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortDescriptorListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortDescriptorListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mAttributeTypeIndex ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mAttributeTypeIndex (void) const {
    return mProperty_mAttributeTypeIndex ;
  }

  public: GALGAS_string mProperty_mAttributeName ;
  public: inline GALGAS_string readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GALGAS_bool mProperty_mAscendingOrder ;
  public: inline GALGAS_bool readProperty_mAscendingOrder (void) const {
    return mProperty_mAscendingOrder ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sortDescriptorListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeTypeIndex (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeTypeIndex = inValue ;
  }

  public: inline void setter_setMAttributeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMAscendingOrder (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscendingOrder = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sortDescriptorListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sortDescriptorListForGeneration_2D_element (const GALGAS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                             const GALGAS_string & in_mAttributeName,
                                                             const GALGAS_bool & in_mAscendingOrder) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sortDescriptorListForGeneration_2D_element init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortDescriptorListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sortDescriptorListForGeneration_2D_element class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                         const class GALGAS_string & inOperand1,
                                                                                         const class GALGAS_bool & inOperand2,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sortDescriptorListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_structDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_structDeclarationAST (const class cPtr_structDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_structTypeName (void) const ;

  public: class GALGAS_propertyInCollectionListAST readProperty_mStructurePropertyListAST (void) const ;

  public: class GALGAS_string readProperty_enumeratedElementTypeName (void) const ;

  public: class GALGAS_structComparison readProperty_comparison (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_structDeclarationAST init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison (const class GALGAS_bool & inOperand0,
                                                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                                                      const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                                                                      const class GALGAS_string & inOperand3,
                                                                                                                      const class GALGAS_structComparison & inOperand4,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                   const class GALGAS_string & inOperand3,
                                                                   const class GALGAS_structComparison & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_structDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison (const class GALGAS_bool & inOperand0,
                                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                                             const class GALGAS_propertyInCollectionListAST & inOperand2,
                                                                                                             const class GALGAS_string & inOperand3,
                                                                                                             const class GALGAS_structComparison & inOperand4,
                                                                                                             Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_structTypeName ;
  public: GALGAS_propertyInCollectionListAST mProperty_mStructurePropertyListAST ;
  public: GALGAS_string mProperty_enumeratedElementTypeName ;
  public: GALGAS_structComparison mProperty_comparison ;


//--- Default constructor
  public: cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structDeclarationAST (const GALGAS_bool & in_isPredefined,
                                     const GALGAS_lstring & in_structTypeName,
                                     const GALGAS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                     const GALGAS_string & in_enumeratedElementTypeName,
                                     const GALGAS_structComparison & in_comparison
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
// Phase 1: @structDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structDeclarationAST_2D_weak (const class GALGAS_structDeclarationAST & inSource) ;

  public: GALGAS_structDeclarationAST_2D_weak & operator = (const class GALGAS_structDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structDeclarationAST bang_structDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionGetterAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionGetterAST (const class cPtr_abstractExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionGetterName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionGetterReturnedTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_abstractExtensionGetterAST init_21_isPredefined_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_lstring & inOperand2,
                                                                                         const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                                         const class GALGAS_lstring & inOperand4,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionGetterAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractExtensionGetterAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                         const class GALGAS_lstring & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractExtensionGetterAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionGetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionGetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_formalInputParameterListAST & inOperand3,
                                                                                const class GALGAS_lstring & inOperand4,
                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterName ;
  public: GALGAS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public: GALGAS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;


//--- Default constructor
  public: cPtr_abstractExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractExtensionGetterAST (const GALGAS_bool & in_isPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                           const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                           const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
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
// Phase 1: @abstractExtensionGetterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionGetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionGetterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionGetterAST_2D_weak (const class GALGAS_abstractExtensionGetterAST & inSource) ;

  public: GALGAS_abstractExtensionGetterAST_2D_weak & operator = (const class GALGAS_abstractExtensionGetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionGetterAST bang_abstractExtensionGetterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionGetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractExtensionGetterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractExtensionGetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractExtensionGetterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalInputParameterListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalInputParameterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_formalInputParameterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_formalInputParameterListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GALGAS_string & in_mFormalArgumentCppName,
                                                 const class GALGAS_lstring & in_mFormalArgumentName,
                                                 const class GALGAS_bool & in_mIsConstant
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_formalInputParameterListForGeneration init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalInputParameterListForGeneration extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalInputParameterListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_formalInputParameterListForGeneration class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                              const class GALGAS_string & inOperand2,
                                                                                              const class GALGAS_lstring & inOperand3,
                                                                                              const class GALGAS_bool & inOperand4
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalInputParameterListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration add_operation (const GALGAS_formalInputParameterListForGeneration & inOperand,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_unifiedTypeMapEntry constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               class GALGAS_lstring constinArgument3,
                                               class GALGAS_bool constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentCppNameAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsConstantAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_unifiedTypeMapEntry & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_unifiedTypeMapEntry & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsConstantAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_formalInputParameterListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_formalInputParameterListForGeneration ;
 
} ; // End of GALGAS_formalInputParameterListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_formalInputParameterListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration & inEnumeratedObject,
                                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsConstant (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_formalInputParameterListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalInputParameterListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalInputParameterListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GALGAS_string mProperty_mFormalArgumentCppName ;
  public: inline GALGAS_string readProperty_mFormalArgumentCppName (void) const {
    return mProperty_mFormalArgumentCppName ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GALGAS_bool mProperty_mIsConstant ;
  public: inline GALGAS_bool readProperty_mIsConstant (void) const {
    return mProperty_mIsConstant ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_formalInputParameterListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentCppName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMIsConstant (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_formalInputParameterListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_formalInputParameterListForGeneration_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                                   const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                   const GALGAS_string & in_mFormalArgumentCppName,
                                                                   const GALGAS_lstring & in_mFormalArgumentName,
                                                                   const GALGAS_bool & in_mIsConstant) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_formalInputParameterListForGeneration_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                                   const class GALGAS_string & inOperand2,
                                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                                   const class GALGAS_bool & inOperand4,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalInputParameterListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalInputParameterListForGeneration_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                               const class GALGAS_string & inOperand2,
                                                                                               const class GALGAS_lstring & inOperand3,
                                                                                               const class GALGAS_bool & inOperand4,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formalInputParameterListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionMethodAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionMethodAST (const class cPtr_abstractExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mAbstractExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListAST readProperty_mAbstractExtensionMethodFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_abstractExtensionMethodAST init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_formalParameterListAST & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionMethodAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractExtensionMethodAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_formalParameterListAST & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractExtensionMethodAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionMethodAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionMethodAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_formalParameterListAST & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mAbstractExtensionMethodName ;
  public: GALGAS_formalParameterListAST mProperty_mAbstractExtensionMethodFormalParameterList ;


//--- Default constructor
  public: cPtr_abstractExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractExtensionMethodAST (const GALGAS_bool & in_isPredefined,
                                           const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                           const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList
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
// Phase 1: @abstractExtensionMethodAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionMethodAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionMethodAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionMethodAST_2D_weak (const class GALGAS_abstractExtensionMethodAST & inSource) ;

  public: GALGAS_abstractExtensionMethodAST_2D_weak & operator = (const class GALGAS_abstractExtensionMethodAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionMethodAST bang_abstractExtensionMethodAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionMethodAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractExtensionMethodAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractExtensionMethodAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractExtensionMethodAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalParameterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_formalParameterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_formalParameterListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GALGAS_lstring & in_mFormalArgumentName,
                                                 const class GALGAS_string & in_mFormalArgumentCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_formalParameterListForGeneration init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterListForGeneration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalParameterListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_formalParameterListForGeneration class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                         const class GALGAS_lstring & inOperand3,
                                                                                         const class GALGAS_string & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalParameterListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_string & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration add_operation (const GALGAS_formalParameterListForGeneration & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_formalArgumentPassingModeAST constinArgument1,
                                               class GALGAS_unifiedTypeMapEntry constinArgument2,
                                               class GALGAS_lstring constinArgument3,
                                               class GALGAS_string constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalArgumentPassingModeAST constinArgument1,
                                                      class GALGAS_unifiedTypeMapEntry constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_string constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                 class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_string & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                class GALGAS_string & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                      class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_string & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentCppNameAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentPassingModeAtIndex (class GALGAS_formalArgumentPassingModeAST constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                              class GALGAS_unifiedTypeMapEntry & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                             class GALGAS_unifiedTypeMapEntry & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             class GALGAS_string & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_formalParameterListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_formalParameterListForGeneration ;
 
} ; // End of GALGAS_formalParameterListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_formalParameterListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_formalParameterListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalParameterListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GALGAS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GALGAS_string mProperty_mFormalArgumentCppName ;
  public: inline GALGAS_string readProperty_mFormalArgumentCppName (void) const {
    return mProperty_mFormalArgumentCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_formalParameterListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GALGAS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMFormalArgumentCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentCppName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_formalParameterListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_formalParameterListForGeneration_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                              const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                              const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                              const GALGAS_lstring & in_mFormalArgumentName,
                                                              const GALGAS_string & in_mFormalArgumentCppName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_formalParameterListForGeneration_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                              const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                              const class GALGAS_lstring & inOperand3,
                                                                                              const class GALGAS_string & inOperand4,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalParameterListForGeneration_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                          const class GALGAS_lstring & inOperand3,
                                                                                          const class GALGAS_string & inOperand4,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formalParameterListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration_2D_element ;

