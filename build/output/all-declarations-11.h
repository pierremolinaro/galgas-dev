#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @timerPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_timerPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_timerPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_timerPredefinedTypeAST_2E_weak (const class GGS_timerPredefinedTypeAST & inSource) ;

  public: GGS_timerPredefinedTypeAST_2E_weak & operator = (const class GGS_timerPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_timerPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_timerPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_timerPredefinedTypeAST bang_timerPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_timerPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_timerPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_timerPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_timerPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_typePredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_typePredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typePredefinedTypeAST (const class cPtr_typePredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typePredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePredefinedTypeAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typePredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typePredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_typePredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typePredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_typePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typePredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @typePredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typePredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typePredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typePredefinedTypeAST_2E_weak (const class GGS_typePredefinedTypeAST & inSource) ;

  public: GGS_typePredefinedTypeAST_2E_weak & operator = (const class GGS_typePredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typePredefinedTypeAST_2E_weak init_nil (void) {
    GGS_typePredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typePredefinedTypeAST bang_typePredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typePredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_typePredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typePredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typePredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum structComparison
//--------------------------------------------------------------------------------------------------

class GGS_structComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_structComparison (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_none,
    enum_equatable,
    enum_comparable
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structComparison extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structComparison class_func_comparable (LOCATION_ARGS) ;

  public: static class GGS_structComparison class_func_equatable (LOCATION_ARGS) ;

  public: static class GGS_structComparison class_func_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isComparable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEquatable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structComparison ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyInCollectionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyInCollectionListAST final {
  public: DownEnumerator_propertyInCollectionListAST (const class GGS_propertyInCollectionListAST & inList) ;

  public: ~ DownEnumerator_propertyInCollectionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyMutability current_mutability (LOCATION_ARGS) const ;
  public: class GGS_lstring current_typeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS_AccessControlAST current_accessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_hasSelector (LOCATION_ARGS) const ;
  public: class GGS_propertyInCollectionInitializationAST current_initialization (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyInCollectionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyInCollectionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyInCollectionListAST (const DownEnumerator_propertyInCollectionListAST &) = delete ;
  private: DownEnumerator_propertyInCollectionListAST & operator = (const DownEnumerator_propertyInCollectionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyInCollectionListAST final {
  public: UpEnumerator_propertyInCollectionListAST (const class GGS_propertyInCollectionListAST & inList)  ;

  public: ~ UpEnumerator_propertyInCollectionListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_propertyMutability current_mutability (LOCATION_ARGS) const ;
  public: class GGS_lstring current_typeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS_AccessControlAST current_accessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_hasSelector (LOCATION_ARGS) const ;
  public: class GGS_propertyInCollectionInitializationAST current_initialization (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyInCollectionListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyInCollectionListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyInCollectionListAST (const UpEnumerator_propertyInCollectionListAST &) = delete ;
  private: UpEnumerator_propertyInCollectionListAST & operator = (const UpEnumerator_propertyInCollectionListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @propertyInCollectionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_propertyInCollectionListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_propertyInCollectionListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_propertyInCollectionListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_propertyInCollectionListAST (void) = default ;

//--- Copy
  public: GGS_propertyInCollectionListAST (const GGS_propertyInCollectionListAST &) = default ;
  public: GGS_propertyInCollectionListAST & operator = (const GGS_propertyInCollectionListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_propertyInCollectionListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_propertyInCollectionListAST subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_propertyInCollectionListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_propertyMutability & in_mutability,
                                                 const class GGS_lstring & in_typeName,
                                                 const class GGS_lstring & in_name,
                                                 const class GGS_AccessControlAST & in_accessControl,
                                                 const class GGS_bool & in_hasSelector,
                                                 const class GGS_propertyInCollectionInitializationAST & in_initialization
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyInCollectionListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyInCollectionListAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyInCollectionListAST class_func_listWithValue (const class GGS_propertyMutability & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_AccessControlAST & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 const class GGS_propertyInCollectionInitializationAST & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_propertyInCollectionListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_propertyMutability & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_lstring & inOperand2,
                                   const class GGS_AccessControlAST & inOperand3,
                                   const class GGS_bool & inOperand4,
                                   const class GGS_propertyInCollectionInitializationAST & inOperand5
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_propertyInCollectionListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_propertyInCollectionListAST add_operation (const GGS_propertyInCollectionListAST & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_propertyMutability constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_lstring constinArgument2,
                              class GGS_AccessControlAST constinArgument3,
                              class GGS_bool constinArgument4,
                              class GGS_propertyInCollectionInitializationAST constinArgument5,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_propertyMutability constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_AccessControlAST constinArgument3,
                                     class GGS_bool constinArgument4,
                                     class GGS_propertyInCollectionInitializationAST constinArgument5,
                                     class GGS_uint constinArgument6,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_propertyMutability & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_lstring & outArgument2,
                                class GGS_AccessControlAST & outArgument3,
                                class GGS_bool & outArgument4,
                                class GGS_propertyInCollectionInitializationAST & outArgument5,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_propertyMutability & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_lstring & outArgument2,
                               class GGS_AccessControlAST & outArgument3,
                               class GGS_bool & outArgument4,
                               class GGS_propertyInCollectionInitializationAST & outArgument5,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_propertyMutability & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_AccessControlAST & outArgument3,
                                     class GGS_bool & outArgument4,
                                     class GGS_propertyInCollectionInitializationAST & outArgument5,
                                     class GGS_uint constinArgument6,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setAccessControlAtIndex (class GGS_AccessControlAST constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setHasSelectorAtIndex (class GGS_bool constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setInitializationAtIndex (class GGS_propertyInCollectionInitializationAST constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMutabilityAtIndex (class GGS_propertyMutability constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setNameAtIndex (class GGS_lstring constinArgument0,
                                      class GGS_uint constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setTypeNameAtIndex (class GGS_lstring constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_propertyMutability & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_lstring & outArgument2,
                             class GGS_AccessControlAST & outArgument3,
                             class GGS_bool & outArgument4,
                             class GGS_propertyInCollectionInitializationAST & outArgument5,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_propertyMutability & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_lstring & outArgument2,
                            class GGS_AccessControlAST & outArgument3,
                            class GGS_bool & outArgument4,
                            class GGS_propertyInCollectionInitializationAST & outArgument5,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_AccessControlAST getter_accessControlAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionInitializationAST getter_initializationAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyMutability getter_mutabilityAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_nameAtIndex (const class GGS_uint & constinOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_propertyInCollectionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_typeNameAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyInCollectionListAST ;
  friend class DownEnumerator_propertyInCollectionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST ;

//--------------------------------------------------------------------------------------------------
//   enum propertyMutability
//--------------------------------------------------------------------------------------------------

class GGS_propertyMutability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertyMutability (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_constantProperty,
    enum_mutableProperty,
    enum_weakProperty
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMutability extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMutability class_func_constantProperty (LOCATION_ARGS) ;

  public: static class GGS_propertyMutability class_func_mutableProperty (LOCATION_ARGS) ;

  public: static class GGS_propertyMutability class_func_weakProperty (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isConstantProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMutableProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isWeakProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMutability ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyInCollectionListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyInCollectionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_propertyMutability mProperty_mutability ;
  public: inline GGS_propertyMutability readProperty_mutability (void) const {
    return mProperty_mutability ;
  }

  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GGS_AccessControlAST mProperty_accessControl ;
  public: inline GGS_AccessControlAST readProperty_accessControl (void) const {
    return mProperty_accessControl ;
  }

  public: GGS_bool mProperty_hasSelector ;
  public: inline GGS_bool readProperty_hasSelector (void) const {
    return mProperty_hasSelector ;
  }

  public: GGS_propertyInCollectionInitializationAST mProperty_initialization ;
  public: inline GGS_propertyInCollectionInitializationAST readProperty_initialization (void) const {
    return mProperty_initialization ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyInCollectionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMutability (const GGS_propertyMutability & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mutability = inValue ;
  }

  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setAccessControl (const GGS_AccessControlAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_accessControl = inValue ;
  }

  public: inline void setter_setHasSelector (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_hasSelector = inValue ;
  }

  public: inline void setter_setInitialization (const GGS_propertyInCollectionInitializationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initialization = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyInCollectionListAST_2E_element (const GGS_propertyMutability & in_mutability,
                                                      const GGS_lstring & in_typeName,
                                                      const GGS_lstring & in_name,
                                                      const GGS_AccessControlAST & in_accessControl,
                                                      const GGS_bool & in_hasSelector,
                                                      const GGS_propertyInCollectionInitializationAST & in_initialization) ;

//--------------------------------- Copy constructor
  public: GGS_propertyInCollectionListAST_2E_element (const GGS_propertyInCollectionListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyInCollectionListAST_2E_element & operator = (const GGS_propertyInCollectionListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyInCollectionListAST_2E_element init_21_mutability_21__21__21__21_hasSelector_21_initialization (const class GGS_propertyMutability & inOperand0,
                                                                                                                             const class GGS_lstring & inOperand1,
                                                                                                                             const class GGS_lstring & inOperand2,
                                                                                                                             const class GGS_AccessControlAST & inOperand3,
                                                                                                                             const class GGS_bool & inOperand4,
                                                                                                                             const class GGS_propertyInCollectionInitializationAST & inOperand5,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyInCollectionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_structDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_structDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structDeclarationAST (const class cPtr_structDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_structTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mStructurePropertyListAST (void) const ;

  public: class GGS_string readProperty_enumeratedElementTypeName (void) const ;

  public: class GGS_structComparison readProperty_comparison (void) const ;

  public: class GGS_bool readProperty_isUsefullStruct (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structDeclarationAST init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const class GGS_bool & inOperand0,
                                                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                                                      const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                                                      const class GGS_string & inOperand3,
                                                                                                                                      const class GGS_structComparison & inOperand4,
                                                                                                                                      const class GGS_bool & inOperand5,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structDeclarationAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_structDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_lstring & inOperand1,
                                                                                                                                const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                                                const class GGS_string & inOperand3,
                                                                                                                                const class GGS_structComparison & inOperand4,
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
  public: GGS_lstring mProperty_structTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mStructurePropertyListAST ;
  public: GGS_string mProperty_enumeratedElementTypeName ;
  public: GGS_structComparison mProperty_comparison ;
  public: GGS_bool mProperty_isUsefullStruct ;


//--- Default constructor
  public: cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structDeclarationAST (const GGS_bool & in_isPredefined,
                                     const GGS_lstring & in_structTypeName,
                                     const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                     const GGS_string & in_enumeratedElementTypeName,
                                     const GGS_structComparison & in_comparison,
                                     const GGS_bool & in_isUsefullStruct,
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
// Phase 1: @structDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_structDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structDeclarationAST_2E_weak (const class GGS_structDeclarationAST & inSource) ;

  public: GGS_structDeclarationAST_2E_weak & operator = (const class GGS_structDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structDeclarationAST_2E_weak init_nil (void) {
    GGS_structDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structDeclarationAST bang_structDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_structDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_structDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_structTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_structTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structTypeForGeneration (const class cPtr_structTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_typedPropertyList readProperty_mTypedPropertyList (void) const ;

  public: class GGS_typedPropertyList readProperty_mConstructorArgumentList (void) const ;

  public: class GGS_string readProperty_mConstructorInitializationCode (void) const ;

  public: class GGS_bool readProperty_mConstructorNeedsCompilerVar (void) const ;

  public: class GGS_bool readProperty_synthetizeAnInitializer (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structTypeForGeneration init_21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GGS_typedPropertyList & inOperand1,
                                                                           const class GGS_typedPropertyList & inOperand2,
                                                                           const class GGS_string & inOperand3,
                                                                           const class GGS_bool & inOperand4,
                                                                           const class GGS_bool & inOperand5,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structTypeForGeneration extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_structTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structTypeForGeneration_init_21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                     const class GGS_typedPropertyList & inOperand1,
                                                                     const class GGS_typedPropertyList & inOperand2,
                                                                     const class GGS_string & inOperand3,
                                                                     const class GGS_bool & inOperand4,
                                                                     const class GGS_bool & inOperand5,
                                                                     Compiler * inCompiler) ;


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
  public: GGS_typedPropertyList mProperty_mTypedPropertyList ;
  public: GGS_typedPropertyList mProperty_mConstructorArgumentList ;
  public: GGS_string mProperty_mConstructorInitializationCode ;
  public: GGS_bool mProperty_mConstructorNeedsCompilerVar ;
  public: GGS_bool mProperty_synthetizeAnInitializer ;


//--- Default constructor
  public: cPtr_structTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                        const GGS_typedPropertyList & in_mTypedPropertyList,
                                        const GGS_typedPropertyList & in_mConstructorArgumentList,
                                        const GGS_string & in_mConstructorInitializationCode,
                                        const GGS_bool & in_mConstructorNeedsCompilerVar,
                                        const GGS_bool & in_synthetizeAnInitializer,
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
// Phase 1: @structTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_structTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structTypeForGeneration_2E_weak (const class GGS_structTypeForGeneration & inSource) ;

  public: GGS_structTypeForGeneration_2E_weak & operator = (const class GGS_structTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structTypeForGeneration_2E_weak init_nil (void) {
    GGS_structTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structTypeForGeneration bang_structTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_structTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_structTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @stringPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_stringPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_stringPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_stringPredefinedTypeAST (const class cPtr_stringPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_stringPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_stringPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @stringPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_stringPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void stringPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

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

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_stringPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_stringPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @stringPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_stringPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_stringPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_stringPredefinedTypeAST_2E_weak (const class GGS_stringPredefinedTypeAST & inSource) ;

  public: GGS_stringPredefinedTypeAST_2E_weak & operator = (const class GGS_stringPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_stringPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_stringPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_stringPredefinedTypeAST bang_stringPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_stringPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_stringPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_stringPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bigintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_bigintPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_bigintPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bigintPredefinedTypeAST (const class cPtr_bigintPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bigintPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bigintPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bigintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bigintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_bigintPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bigintPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_bigintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bigintPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @bigintPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bigintPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bigintPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bigintPredefinedTypeAST_2E_weak (const class GGS_bigintPredefinedTypeAST & inSource) ;

  public: GGS_bigintPredefinedTypeAST_2E_weak & operator = (const class GGS_bigintPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bigintPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_bigintPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bigintPredefinedTypeAST bang_bigintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bigintPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_bigintPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bigintPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bigintPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @locationPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_locationPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_locationPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_locationPredefinedTypeAST (const class cPtr_locationPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_locationPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_locationPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_locationPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @locationPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_locationPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void locationPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_locationPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_locationPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @locationPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_locationPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_locationPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_locationPredefinedTypeAST_2E_weak (const class GGS_locationPredefinedTypeAST & inSource) ;

  public: GGS_locationPredefinedTypeAST_2E_weak & operator = (const class GGS_locationPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_locationPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_locationPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_locationPredefinedTypeAST bang_locationPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_locationPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_locationPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_locationPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_locationPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_locationPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_listDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_listDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_listDeclarationAST (const class cPtr_listDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mListTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_usefullList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listDeclarationAST init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GGS_bool & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                  const class GGS_bool & inOperand3,
                                                                                                  const class GGS_bool & inOperand4,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @listDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                            const class GGS_bool & inOperand3,
                                                                                            const class GGS_bool & inOperand4,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_mListTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_bool mProperty_usefullList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_listDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_lstring & in_mListTypeName,
                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                   const GGS_bool & in_usefullList,
                                   const GGS_bool & in_equatable,
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
// Phase 1: @listDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_listDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_listDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_listDeclarationAST_2E_weak (const class GGS_listDeclarationAST & inSource) ;

  public: GGS_listDeclarationAST_2E_weak & operator = (const class GGS_listDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_listDeclarationAST_2E_weak init_nil (void) {
    GGS_listDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_listDeclarationAST bang_listDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_listDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_listDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_listTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_listTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_listTypeForGeneration (const class cPtr_listTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mListElementTypeIndex (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listTypeForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                             const class GGS_unifiedTypeMapEntry & inOperand1,
                                                             const class GGS_typedPropertyList & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listTypeForGeneration extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @listTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_listTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void listTypeForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                       const class GGS_unifiedTypeMapEntry & inOperand1,
                                                       const class GGS_typedPropertyList & inOperand2,
                                                       Compiler * inCompiler) ;


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
  public: GGS_unifiedTypeMapEntry mProperty_mListElementTypeIndex ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;


//--- Default constructor
  public: cPtr_listTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_listTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                      const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                      const GGS_typedPropertyList & in_mTypedAttributeList,
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
// Phase 1: @listTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_listTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_listTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_listTypeForGeneration_2E_weak (const class GGS_listTypeForGeneration & inSource) ;

  public: GGS_listTypeForGeneration_2E_weak & operator = (const class GGS_listTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_listTypeForGeneration_2E_weak init_nil (void) {
    GGS_listTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_listTypeForGeneration bang_listTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_listTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_listTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @weakReferenceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_weakReferenceDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_weakReferenceDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_weakReferenceDeclarationAST (const class cPtr_weakReferenceDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mClassTypeName (void) const ;

  public: class GGS_lstring readProperty_mWeakReferenceTypeName (void) const ;

  public: class GGS_lstring readProperty_mSuperWeakReferenceTypeName (void) const ;

  public: class GGS_bool readProperty_mGenerateInSeparateFile (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_weakReferenceDeclarationAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_lstring & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_weakReferenceDeclarationAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_weakReferenceDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @weakReferenceDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_weakReferenceDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
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
  public: GGS_lstring mProperty_mClassTypeName ;
  public: GGS_lstring mProperty_mWeakReferenceTypeName ;
  public: GGS_lstring mProperty_mSuperWeakReferenceTypeName ;
  public: GGS_bool mProperty_mGenerateInSeparateFile ;


//--- Default constructor
  public: cPtr_weakReferenceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_weakReferenceDeclarationAST (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_mClassTypeName,
                                            const GGS_lstring & in_mWeakReferenceTypeName,
                                            const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                            const GGS_bool & in_mGenerateInSeparateFile,
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
// Phase 1: @weakReferenceDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_weakReferenceDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_weakReferenceDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_weakReferenceDeclarationAST_2E_weak (const class GGS_weakReferenceDeclarationAST & inSource) ;

  public: GGS_weakReferenceDeclarationAST_2E_weak & operator = (const class GGS_weakReferenceDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_weakReferenceDeclarationAST_2E_weak init_nil (void) {
    GGS_weakReferenceDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_weakReferenceDeclarationAST bang_weakReferenceDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_weakReferenceDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_weakReferenceDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_weakReferenceDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_weakReferenceDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @weakReferenceTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_weakReferenceTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_weakReferenceTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_weakReferenceTypeForGeneration (const class cPtr_weakReferenceTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mReferenceClassType (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mSuperClass (void) const ;

  public: class GGS_bool readProperty_generateHeaderInSeparateFile (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_optionalClassTypeOrNull (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_weakReferenceTypeForGeneration init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GGS_bool & inOperand3,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_weakReferenceTypeForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_weakReferenceTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @weakReferenceTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_weakReferenceTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void weakReferenceTypeForGeneration_init_21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                        Compiler * inCompiler) ;


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
  public: GGS_unifiedTypeMapEntry mProperty_mReferenceClassType ;
  public: GGS_unifiedTypeMapEntry mProperty_mSuperClass ;
  public: GGS_bool mProperty_generateHeaderInSeparateFile ;
  public: GGS_unifiedTypeMapEntry mProperty_optionalClassTypeOrNull ;


//--- Default constructor
  public: cPtr_weakReferenceTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_weakReferenceTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                               const GGS_unifiedTypeMapEntry & in_mReferenceClassType,
                                               const GGS_unifiedTypeMapEntry & in_mSuperClass,
                                               const GGS_bool & in_generateHeaderInSeparateFile,
                                               const GGS_unifiedTypeMapEntry & in_optionalClassTypeOrNull,
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
// Phase 1: @weakReferenceTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_weakReferenceTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_weakReferenceTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_weakReferenceTypeForGeneration_2E_weak (const class GGS_weakReferenceTypeForGeneration & inSource) ;

  public: GGS_weakReferenceTypeForGeneration_2E_weak & operator = (const class GGS_weakReferenceTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_weakReferenceTypeForGeneration_2E_weak init_nil (void) {
    GGS_weakReferenceTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_weakReferenceTypeForGeneration bang_weakReferenceTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_weakReferenceTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_weakReferenceTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_weakReferenceTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_weakReferenceTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@propertyInCollectionListAST buildPropertyInitializationCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildPropertyInitializationCode (const class GGS_propertyInCollectionListAST inObject,
                                                      const class GGS_lstring constin_inTypeNameForUsefulness,
                                                      const class GGS_semanticContext constin_inSemanticContext,
                                                      const class GGS_predefinedTypes constin_inPredefinedTypes,
                                                      class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      class GGS_unifiedTypeMap & io_ioTypeMap,
                                                      class GGS_stringset & out_outUnusedVariableCppNameSet,
                                                      class GGS_string & out_outInitializationCode,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compilerCppName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_compilerCppName (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall???&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (const class GGS_unifiedTypeMapEntry constinArgument0,
                                                                        const class GGS_unifiedTypeMapEntry constinArgument1,
                                                                        const class GGS_location constinArgument2,
                                                                        class GGS_semanticExpressionForGeneration & ioArgument3,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @uint_36__34_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_uint_36__34_PredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_uint_36__34_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_uint_36__34_PredefinedTypeAST (const class cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_uint_36__34_PredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uint_36__34_PredefinedTypeAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_uint_36__34_PredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @uint64PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_uint_36__34_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void uint_36__34_PredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_uint_36__34_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_uint_36__34_PredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @uint_36__34_PredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_uint_36__34_PredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_uint_36__34_PredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_uint_36__34_PredefinedTypeAST_2E_weak (const class GGS_uint_36__34_PredefinedTypeAST & inSource) ;

  public: GGS_uint_36__34_PredefinedTypeAST_2E_weak & operator = (const class GGS_uint_36__34_PredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_uint_36__34_PredefinedTypeAST_2E_weak init_nil (void) {
    GGS_uint_36__34_PredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_uint_36__34_PredefinedTypeAST bang_uint_36__34_PredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_uint_36__34_PredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_uint_36__34_PredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_uint_36__34_PredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_uint_36__34_PredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [associatedValue] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_associatedValue_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_associatedValue_5D_ (const class GGS__5B_associatedValue_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_associatedValue_5D_ (const DownEnumerator__5B_associatedValue_5D_ &) = delete ;
  private: DownEnumerator__5B_associatedValue_5D_ & operator = (const DownEnumerator__5B_associatedValue_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//--- 
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

//--- Current element access
  public: class GGS_associatedValue current (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_associatedValue> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_associatedValue_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_associatedValue_5D_ (const class GGS__5B_associatedValue_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_associatedValue_5D_ (const UpEnumerator__5B_associatedValue_5D_ &) = delete ;
  private: UpEnumerator__5B_associatedValue_5D_ & operator = (const UpEnumerator__5B_associatedValue_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }
  
//--- 
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GGS_associatedValue current (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_associatedValue> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_associatedValue_5D_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_associatedValue> mSharedArray ;

//--------------------------------- Default constructor
  public: GGS__5B_associatedValue_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_associatedValue_5D_ (const GGS__5B_associatedValue_5D_ & inSource) ;
  public: GGS__5B_associatedValue_5D_ & operator = (const GGS__5B_associatedValue_5D_ & inSource) ;

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_associatedValue_5D_ ;
  friend class DownEnumerator__5B_associatedValue_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_associatedValue_5D_ init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__5B_associatedValue_5D_ extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_associatedValue_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_associatedValue & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_associatedValue_5D_ add_operation (const GGS__5B_associatedValue_5D_ & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_associatedValue constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_associatedValue constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_associatedValue & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_associatedValue & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_associatedValue & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_associatedValue & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_associatedValue & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_associatedValue readSubscript__3F_ (const class GGS_uint & in0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_associatedValue_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @associatedValue struct
//--------------------------------------------------------------------------------------------------

class GGS_associatedValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_weakQualifier ;
  public: inline GGS_bool readProperty_weakQualifier (void) const {
    return mProperty_weakQualifier ;
  }

  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_lstring mProperty_valueName ;
  public: inline GGS_lstring readProperty_valueName (void) const {
    return mProperty_valueName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_associatedValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setWeakQualifier (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_weakQualifier = inValue ;
  }

  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setValueName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_valueName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_associatedValue (const GGS_bool & in_weakQualifier,
                               const GGS_lstring & in_typeName,
                               const GGS_lstring & in_valueName) ;

//--------------------------------- Copy constructor
  public: GGS_associatedValue (const GGS_associatedValue & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_associatedValue & operator = (const GGS_associatedValue & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_associatedValue init_21__21__21_ (const class GGS_bool & inOperand0,
                                                       const class GGS_lstring & inOperand1,
                                                       const class GGS_lstring & inOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_associatedValue extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumConstantList final {
  public: DownEnumerator_enumConstantList (const class GGS_enumConstantList & inList) ;

  public: ~ DownEnumerator_enumConstantList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS__5B_associatedValue_5D_ current_associatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumConstantList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumConstantList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumConstantList (const DownEnumerator_enumConstantList &) = delete ;
  private: DownEnumerator_enumConstantList & operator = (const DownEnumerator_enumConstantList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumConstantList final {
  public: UpEnumerator_enumConstantList (const class GGS_enumConstantList & inList)  ;

  public: ~ UpEnumerator_enumConstantList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_name (LOCATION_ARGS) const ;
  public: class GGS__5B_associatedValue_5D_ current_associatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumConstantList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumConstantList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumConstantList (const UpEnumerator_enumConstantList &) = delete ;
  private: UpEnumerator_enumConstantList & operator = (const UpEnumerator_enumConstantList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @enumConstantList list
//--------------------------------------------------------------------------------------------------

class GGS_enumConstantList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_enumConstantList_2E_element> mArray ;

//--- Default constructor
  public: GGS_enumConstantList (void) ;

//--- Destructor
  public: virtual ~ GGS_enumConstantList (void) = default ;

//--- Copy
  public: GGS_enumConstantList (const GGS_enumConstantList &) = default ;
  public: GGS_enumConstantList & operator = (const GGS_enumConstantList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_enumConstantList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_enumConstantList subList (const int32_t inStart,
                                         const int32_t inLength,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_enumConstantList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_name,
                                                 const class GGS__5B_associatedValue_5D_ & in_associatedValueTypeList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumConstantList init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumConstantList extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumConstantList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                      const class GGS__5B_associatedValue_5D_ & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_enumConstantList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS__5B_associatedValue_5D_ & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_enumConstantList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_enumConstantList add_operation (const GGS_enumConstantList & inOperand,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS__5B_associatedValue_5D_ constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS__5B_associatedValue_5D_ constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS__5B_associatedValue_5D_ & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS__5B_associatedValue_5D_ & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS__5B_associatedValue_5D_ & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setAssociatedValueTypeListAtIndex (class GGS__5B_associatedValue_5D_ constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setNameAtIndex (class GGS_lstring constinArgument0,
                                      class GGS_uint constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS__5B_associatedValue_5D_ & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS__5B_associatedValue_5D_ & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS__5B_associatedValue_5D_ getter_associatedValueTypeListAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_nameAtIndex (const class GGS_uint & constinOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_enumConstantList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumConstantList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumConstantList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumConstantList ;
  friend class DownEnumerator_enumConstantList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumConstantList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GGS__5B_associatedValue_5D_ mProperty_associatedValueTypeList ;
  public: inline GGS__5B_associatedValue_5D_ readProperty_associatedValueTypeList (void) const {
    return mProperty_associatedValueTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumConstantList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setAssociatedValueTypeList (const GGS__5B_associatedValue_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_associatedValueTypeList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumConstantList_2E_element (const GGS_lstring & in_name,
                                           const GGS__5B_associatedValue_5D_ & in_associatedValueTypeList) ;

//--------------------------------- Copy constructor
  public: GGS_enumConstantList_2E_element (const GGS_enumConstantList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumConstantList_2E_element & operator = (const GGS_enumConstantList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumConstantList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS__5B_associatedValue_5D_ & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumConstantList_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_enumDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumDeclarationAST (const class cPtr_enumDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_enumTypeName (void) const ;

  public: class GGS_enumConstantList readProperty_mConstantList (void) const ;

  public: class GGS_structComparison readProperty_comparison (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumDeclarationAST init_21_isPredefined_21__21__21_comparison (const class GGS_bool & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    const class GGS_enumConstantList & inOperand2,
                                                                                    const class GGS_structComparison & inOperand3,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (const class GGS_bool & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              const class GGS_enumConstantList & inOperand2,
                                                                              const class GGS_structComparison & inOperand3,
                                                                              Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_enumTypeName ;
  public: GGS_enumConstantList mProperty_mConstantList ;
  public: GGS_structComparison mProperty_comparison ;


//--- Default constructor
  public: cPtr_enumDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_lstring & in_enumTypeName,
                                   const GGS_enumConstantList & in_mConstantList,
                                   const GGS_structComparison & in_comparison,
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
// Phase 1: @enumDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumDeclarationAST_2E_weak (const class GGS_enumDeclarationAST & inSource) ;

  public: GGS_enumDeclarationAST_2E_weak & operator = (const class GGS_enumDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumDeclarationAST_2E_weak init_nil (void) {
    GGS_enumDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumDeclarationAST bang_enumDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_enumDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumConstantListForGeneration final {
  public: DownEnumerator_enumConstantListForGeneration (const class GGS_enumConstantListForGeneration & inList) ;

  public: ~ DownEnumerator_enumConstantListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_name (LOCATION_ARGS) const ;
  public: class GGS_associatedValueDescriptorList current_associatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumConstantListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumConstantListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumConstantListForGeneration (const DownEnumerator_enumConstantListForGeneration &) = delete ;
  private: DownEnumerator_enumConstantListForGeneration & operator = (const DownEnumerator_enumConstantListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumConstantListForGeneration final {
  public: UpEnumerator_enumConstantListForGeneration (const class GGS_enumConstantListForGeneration & inList)  ;

  public: ~ UpEnumerator_enumConstantListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_name (LOCATION_ARGS) const ;
  public: class GGS_associatedValueDescriptorList current_associatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumConstantListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumConstantListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumConstantListForGeneration (const UpEnumerator_enumConstantListForGeneration &) = delete ;
  private: UpEnumerator_enumConstantListForGeneration & operator = (const UpEnumerator_enumConstantListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @enumConstantListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_enumConstantListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_enumConstantListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_enumConstantListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_enumConstantListForGeneration (void) = default ;

//--- Copy
  public: GGS_enumConstantListForGeneration (const GGS_enumConstantListForGeneration &) = default ;
  public: GGS_enumConstantListForGeneration & operator = (const GGS_enumConstantListForGeneration &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_enumConstantListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_enumConstantListForGeneration subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_enumConstantListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_name,
                                                 const class GGS_associatedValueDescriptorList & in_associatedValueTypeList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumConstantListForGeneration init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumConstantListForGeneration extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumConstantListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                   const class GGS_associatedValueDescriptorList & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_enumConstantListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_associatedValueDescriptorList & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_enumConstantListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_enumConstantListForGeneration add_operation (const GGS_enumConstantListForGeneration & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_associatedValueDescriptorList constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_associatedValueDescriptorList constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_associatedValueDescriptorList & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_associatedValueDescriptorList & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_associatedValueDescriptorList & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setAssociatedValueTypeListAtIndex (class GGS_associatedValueDescriptorList constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setNameAtIndex (class GGS_string constinArgument0,
                                      class GGS_uint constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_associatedValueDescriptorList & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_associatedValueDescriptorList & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_associatedValueDescriptorList getter_associatedValueTypeListAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_nameAtIndex (const class GGS_uint & constinOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_enumConstantListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumConstantListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumConstantListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumConstantListForGeneration ;
  friend class DownEnumerator_enumConstantListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumConstantListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumConstantListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_name ;
  public: inline GGS_string readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GGS_associatedValueDescriptorList mProperty_associatedValueTypeList ;
  public: inline GGS_associatedValueDescriptorList readProperty_associatedValueTypeList (void) const {
    return mProperty_associatedValueTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumConstantListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setAssociatedValueTypeList (const GGS_associatedValueDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_associatedValueTypeList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumConstantListForGeneration_2E_element (const GGS_string & in_name,
                                                        const GGS_associatedValueDescriptorList & in_associatedValueTypeList) ;

//--------------------------------- Copy constructor
  public: GGS_enumConstantListForGeneration_2E_element (const GGS_enumConstantListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumConstantListForGeneration_2E_element & operator = (const GGS_enumConstantListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumConstantListForGeneration_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_associatedValueDescriptorList & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumConstantListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_enumTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumTypeForGeneration (const class cPtr_enumTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_enumConstantListForGeneration readProperty_constantList (void) const ;

  public: class GGS__5B_unifiedTypeMapEntry_5D_ readProperty_associatedValuesTypes (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumTypeForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                             const class GGS_enumConstantListForGeneration & inOperand1,
                                                             const class GGS__5B_unifiedTypeMapEntry_5D_ & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumTypeForGeneration extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_enumTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumTypeForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                       const class GGS_enumConstantListForGeneration & inOperand1,
                                                       const class GGS__5B_unifiedTypeMapEntry_5D_ & inOperand2,
                                                       Compiler * inCompiler) ;


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
  public: GGS_enumConstantListForGeneration mProperty_constantList ;
  public: GGS__5B_unifiedTypeMapEntry_5D_ mProperty_associatedValuesTypes ;


//--- Default constructor
  public: cPtr_enumTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                      const GGS_enumConstantListForGeneration & in_constantList,
                                      const GGS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
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
// Phase 1: @enumTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumTypeForGeneration_2E_weak (const class GGS_enumTypeForGeneration & inSource) ;

  public: GGS_enumTypeForGeneration_2E_weak & operator = (const class GGS_enumTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumTypeForGeneration_2E_weak init_nil (void) {
    GGS_enumTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumTypeForGeneration bang_enumTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_enumTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphInsertModifierList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_graphInsertModifierList final {
  public: DownEnumerator_graphInsertModifierList (const class GGS_graphInsertModifierList & inList) ;

  public: ~ DownEnumerator_graphInsertModifierList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInsertModifierName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mInsertErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_graphInsertModifierList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_graphInsertModifierList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_graphInsertModifierList (const DownEnumerator_graphInsertModifierList &) = delete ;
  private: DownEnumerator_graphInsertModifierList & operator = (const DownEnumerator_graphInsertModifierList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_graphInsertModifierList final {
  public: UpEnumerator_graphInsertModifierList (const class GGS_graphInsertModifierList & inList)  ;

  public: ~ UpEnumerator_graphInsertModifierList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInsertModifierName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mInsertErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_graphInsertModifierList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_graphInsertModifierList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_graphInsertModifierList (const UpEnumerator_graphInsertModifierList &) = delete ;
  private: UpEnumerator_graphInsertModifierList & operator = (const UpEnumerator_graphInsertModifierList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @graphInsertModifierList list
//--------------------------------------------------------------------------------------------------

class GGS_graphInsertModifierList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_graphInsertModifierList_2E_element> mArray ;

//--- Default constructor
  public: GGS_graphInsertModifierList (void) ;

//--- Destructor
  public: virtual ~ GGS_graphInsertModifierList (void) = default ;

//--- Copy
  public: GGS_graphInsertModifierList (const GGS_graphInsertModifierList &) = default ;
  public: GGS_graphInsertModifierList & operator = (const GGS_graphInsertModifierList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_graphInsertModifierList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_graphInsertModifierList subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_graphInsertModifierList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInsertModifierName,
                                                 const class GGS_lstring & in_mInsertErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphInsertModifierList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphInsertModifierList extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphInsertModifierList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_graphInsertModifierList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_graphInsertModifierList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_graphInsertModifierList add_operation (const GGS_graphInsertModifierList & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInsertErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInsertModifierNameAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mInsertErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mInsertModifierNameAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_graphInsertModifierList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_graphInsertModifierList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_graphInsertModifierList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_graphInsertModifierList ;
  friend class DownEnumerator_graphInsertModifierList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphInsertModifierList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphInsertModifierList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_graphInsertModifierList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mInsertModifierName ;
  public: inline GGS_lstring readProperty_mInsertModifierName (void) const {
    return mProperty_mInsertModifierName ;
  }

  public: GGS_lstring mProperty_mInsertErrorMessage ;
  public: inline GGS_lstring readProperty_mInsertErrorMessage (void) const {
    return mProperty_mInsertErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_graphInsertModifierList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertModifierName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertModifierName = inValue ;
  }

  public: inline void setter_setMInsertErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertErrorMessage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_graphInsertModifierList_2E_element (const GGS_lstring & in_mInsertModifierName,
                                                  const GGS_lstring & in_mInsertErrorMessage) ;

//--------------------------------- Copy constructor
  public: GGS_graphInsertModifierList_2E_element (const GGS_graphInsertModifierList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_graphInsertModifierList_2E_element & operator = (const GGS_graphInsertModifierList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphInsertModifierList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphInsertModifierList_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphInsertModifierList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_graphDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_graphDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_graphDeclarationAST (const class cPtr_graphDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGraphTypeName (void) const ;

  public: class GGS_lstring readProperty_mAssociatedListTypeName (void) const ;

  public: class GGS_graphInsertModifierList readProperty_mInsertModifierList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphDeclarationAST init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_graphInsertModifierList & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_graphDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @graphDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_graphDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void graphDeclarationAST_init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_graphInsertModifierList & inOperand3,
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
  public: GGS_lstring mProperty_mGraphTypeName ;
  public: GGS_lstring mProperty_mAssociatedListTypeName ;
  public: GGS_graphInsertModifierList mProperty_mInsertModifierList ;


//--- Default constructor
  public: cPtr_graphDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_graphDeclarationAST (const GGS_bool & in_isPredefined,
                                    const GGS_lstring & in_mGraphTypeName,
                                    const GGS_lstring & in_mAssociatedListTypeName,
                                    const GGS_graphInsertModifierList & in_mInsertModifierList,
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
// Phase 1: @graphDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_graphDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_graphDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_graphDeclarationAST_2E_weak (const class GGS_graphDeclarationAST & inSource) ;

  public: GGS_graphDeclarationAST_2E_weak & operator = (const class GGS_graphDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_graphDeclarationAST_2E_weak init_nil (void) {
    GGS_graphDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_graphDeclarationAST bang_graphDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_graphDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_graphDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_graphDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_graphDeclarationForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_graphDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_graphDeclarationForGeneration (const class cPtr_graphDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mAssociatedListTypeEntry (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mAssociatedListElementTypeEntry (void) const ;

  public: class GGS_graphInsertModifierList readProperty_mInsertModifierList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphDeclarationForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                         const class GGS_graphInsertModifierList & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_graphDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @graphDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_graphDeclarationForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void graphDeclarationForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                   const class GGS_graphInsertModifierList & inOperand3,
                                                                   Compiler * inCompiler) ;


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
  public: GGS_unifiedTypeMapEntry mProperty_mAssociatedListTypeEntry ;
  public: GGS_unifiedTypeMapEntry mProperty_mAssociatedListElementTypeEntry ;
  public: GGS_graphInsertModifierList mProperty_mInsertModifierList ;


//--- Default constructor
  public: cPtr_graphDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_graphDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                              const GGS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                                              const GGS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                                              const GGS_graphInsertModifierList & in_mInsertModifierList,
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
// Phase 1: @graphDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_graphDeclarationForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_graphDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_graphDeclarationForGeneration_2E_weak (const class GGS_graphDeclarationForGeneration & inSource) ;

  public: GGS_graphDeclarationForGeneration_2E_weak & operator = (const class GGS_graphDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_graphDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_graphDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_graphDeclarationForGeneration bang_graphDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_graphDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_graphDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_graphDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionalTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionalTypeDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_optionalTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionalTypeDeclarationAST (const class cPtr_optionalTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_optionalTypeName (void) const ;

  public: class GGS_lstring readProperty_unwrappedTypeName (void) const ;

  public: class GGS_bool readProperty_isUsefull (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionalTypeDeclarationAST init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const class GGS_bool & inOperand0,
                                                                                                                            const class GGS_lstring & inOperand1,
                                                                                                                            const class GGS_lstring & inOperand2,
                                                                                                                            const class GGS_bool & inOperand3,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalTypeDeclarationAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionalTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionalTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_optionalTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const class GGS_bool & inOperand0,
                                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                                      const class GGS_lstring & inOperand2,
                                                                                                                      const class GGS_bool & inOperand3,
                                                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_optionalTypeName ;
  public: GGS_lstring mProperty_unwrappedTypeName ;
  public: GGS_bool mProperty_isUsefull ;


//--- Default constructor
  public: cPtr_optionalTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionalTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                           const GGS_lstring & in_optionalTypeName,
                                           const GGS_lstring & in_unwrappedTypeName,
                                           const GGS_bool & in_isUsefull,
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
// Phase 1: @optionalTypeDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionalTypeDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionalTypeDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionalTypeDeclarationAST_2E_weak (const class GGS_optionalTypeDeclarationAST & inSource) ;

  public: GGS_optionalTypeDeclarationAST_2E_weak & operator = (const class GGS_optionalTypeDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionalTypeDeclarationAST_2E_weak init_nil (void) {
    GGS_optionalTypeDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionalTypeDeclarationAST bang_optionalTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionalTypeDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_optionalTypeDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalTypeDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionalTypeDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optionalTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionalTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_optionalTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionalTypeForGeneration (const class cPtr_optionalTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_unwrappedType (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_weakType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionalTypeForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                 const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalTypeForGeneration extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionalTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @optionalTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_optionalTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionalTypeForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                           const class GGS_unifiedTypeMapEntry & inOperand1,
                                                           const class GGS_unifiedTypeMapEntry & inOperand2,
                                                           Compiler * inCompiler) ;


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
  public: GGS_unifiedTypeMapEntry mProperty_unwrappedType ;
  public: GGS_unifiedTypeMapEntry mProperty_weakType ;


//--- Default constructor
  public: cPtr_optionalTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionalTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                          const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                          const GGS_unifiedTypeMapEntry & in_weakType,
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
// Phase 1: @optionalTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_optionalTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionalTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionalTypeForGeneration_2E_weak (const class GGS_optionalTypeForGeneration & inSource) ;

  public: GGS_optionalTypeForGeneration_2E_weak & operator = (const class GGS_optionalTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionalTypeForGeneration_2E_weak init_nil (void) {
    GGS_optionalTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionalTypeForGeneration bang_optionalTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_optionalTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_optionalTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionalTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_functionPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_functionPredefinedTypeAST (const class cPtr_functionPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_functionPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_functionPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @functionPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionPredefinedTypeAST_2E_weak (const class GGS_functionPredefinedTypeAST & inSource) ;

  public: GGS_functionPredefinedTypeAST_2E_weak & operator = (const class GGS_functionPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_functionPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_functionPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_functionPredefinedTypeAST bang_functionPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_functionPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_functionPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sint_36__34_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_sint_36__34_PredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_sint_36__34_PredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sint_36__34_PredefinedTypeAST (const class cPtr_sint_36__34_PredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sint_36__34_PredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sint_36__34_PredefinedTypeAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sint_36__34_PredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sint64PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_sint_36__34_PredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sint_36__34_PredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_sint_36__34_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sint_36__34_PredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @sint_36__34_PredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sint_36__34_PredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sint_36__34_PredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sint_36__34_PredefinedTypeAST_2E_weak (const class GGS_sint_36__34_PredefinedTypeAST & inSource) ;

  public: GGS_sint_36__34_PredefinedTypeAST_2E_weak & operator = (const class GGS_sint_36__34_PredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sint_36__34_PredefinedTypeAST_2E_weak init_nil (void) {
    GGS_sint_36__34_PredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sint_36__34_PredefinedTypeAST bang_sint_36__34_PredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sint_36__34_PredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_sint_36__34_PredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sint_36__34_PredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sint_36__34_PredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_sintPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_sintPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sintPredefinedTypeAST (const class cPtr_sintPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sintPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sintPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_sintPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sintPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_sintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sintPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @sintPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sintPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sintPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sintPredefinedTypeAST_2E_weak (const class GGS_sintPredefinedTypeAST & inSource) ;

  public: GGS_sintPredefinedTypeAST_2E_weak & operator = (const class GGS_sintPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sintPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_sintPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sintPredefinedTypeAST bang_sintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sintPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_sintPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sintPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sintPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertSetterListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_insertSetterListAST final {
  public: DownEnumerator_insertSetterListAST (const class GGS_insertSetterListAST & inList) ;

  public: ~ DownEnumerator_insertSetterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInsertMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mShadowErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertSetterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_insertSetterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_insertSetterListAST (const DownEnumerator_insertSetterListAST &) = delete ;
  private: DownEnumerator_insertSetterListAST & operator = (const DownEnumerator_insertSetterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_insertSetterListAST final {
  public: UpEnumerator_insertSetterListAST (const class GGS_insertSetterListAST & inList)  ;

  public: ~ UpEnumerator_insertSetterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInsertMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mShadowErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertSetterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_insertSetterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_insertSetterListAST (const UpEnumerator_insertSetterListAST &) = delete ;
  private: UpEnumerator_insertSetterListAST & operator = (const UpEnumerator_insertSetterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @insertSetterListAST list
//--------------------------------------------------------------------------------------------------

class GGS_insertSetterListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_insertSetterListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_insertSetterListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_insertSetterListAST (void) = default ;

//--- Copy
  public: GGS_insertSetterListAST (const GGS_insertSetterListAST &) = default ;
  public: GGS_insertSetterListAST & operator = (const GGS_insertSetterListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_insertSetterListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_insertSetterListAST subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_insertSetterListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInsertMethodName,
                                                 const class GGS_lstring & in_mErrorMessage,
                                                 const class GGS_lstring & in_mShadowErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertSetterListAST init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertSetterListAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertSetterListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstring & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_insertSetterListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_lstring & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_insertSetterListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_insertSetterListAST add_operation (const GGS_insertSetterListAST & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_lstring constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_lstring & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_lstring & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMInsertMethodNameAtIndex (class GGS_lstring constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: void setter_setMShadowErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_lstring & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_lstring & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mInsertMethodNameAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mShadowErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_insertSetterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_insertSetterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_insertSetterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_insertSetterListAST ;
  friend class DownEnumerator_insertSetterListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertSetterListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertSetterListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_insertSetterListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mInsertMethodName ;
  public: inline GGS_lstring readProperty_mInsertMethodName (void) const {
    return mProperty_mInsertMethodName ;
  }

  public: GGS_lstring mProperty_mErrorMessage ;
  public: inline GGS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

  public: GGS_lstring mProperty_mShadowErrorMessage ;
  public: inline GGS_lstring readProperty_mShadowErrorMessage (void) const {
    return mProperty_mShadowErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_insertSetterListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertMethodName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

  public: inline void setter_setMShadowErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mShadowErrorMessage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_insertSetterListAST_2E_element (const GGS_lstring & in_mInsertMethodName,
                                              const GGS_lstring & in_mErrorMessage,
                                              const GGS_lstring & in_mShadowErrorMessage) ;

//--------------------------------- Copy constructor
  public: GGS_insertSetterListAST_2E_element (const GGS_insertSetterListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_insertSetterListAST_2E_element & operator = (const GGS_insertSetterListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertSetterListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertSetterListAST_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertSetterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapAccessorListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_mapAccessorListAST final {
  public: DownEnumerator_mapAccessorListAST (const class GGS_mapAccessorListAST & inList) ;

  public: ~ DownEnumerator_mapAccessorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapAccessorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_mapAccessorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_mapAccessorListAST (const DownEnumerator_mapAccessorListAST &) = delete ;
  private: DownEnumerator_mapAccessorListAST & operator = (const DownEnumerator_mapAccessorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_mapAccessorListAST final {
  public: UpEnumerator_mapAccessorListAST (const class GGS_mapAccessorListAST & inList)  ;

  public: ~ UpEnumerator_mapAccessorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapAccessorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_mapAccessorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_mapAccessorListAST (const UpEnumerator_mapAccessorListAST &) = delete ;
  private: UpEnumerator_mapAccessorListAST & operator = (const UpEnumerator_mapAccessorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @mapAccessorListAST list
//--------------------------------------------------------------------------------------------------

class GGS_mapAccessorListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_mapAccessorListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_mapAccessorListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_mapAccessorListAST (void) = default ;

//--- Copy
  public: GGS_mapAccessorListAST (const GGS_mapAccessorListAST &) = default ;
  public: GGS_mapAccessorListAST & operator = (const GGS_mapAccessorListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_mapAccessorListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_mapAccessorListAST subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_mapAccessorListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_lstring & in_mErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapAccessorListAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapAccessorListAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapAccessorListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_mapAccessorListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_mapAccessorListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_mapAccessorListAST add_operation (const GGS_mapAccessorListAST & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_mapAccessorListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_mapAccessorListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_mapAccessorListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_mapAccessorListAST ;
  friend class DownEnumerator_mapAccessorListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapAccessorListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapAccessorListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_mapAccessorListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_lstring mProperty_mErrorMessage ;
  public: inline GGS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mapAccessorListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mapAccessorListAST_2E_element (const GGS_lstring & in_mName,
                                             const GGS_lstring & in_mErrorMessage) ;

//--------------------------------- Copy constructor
  public: GGS_mapAccessorListAST_2E_element (const GGS_mapAccessorListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_mapAccessorListAST_2E_element & operator = (const GGS_mapAccessorListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapAccessorListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapAccessorListAST_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapAccessorListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertOrReplaceDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_insertOrReplaceDeclarationListAST final {
  public: DownEnumerator_insertOrReplaceDeclarationListAST (const class GGS_insertOrReplaceDeclarationListAST & inList) ;

  public: ~ DownEnumerator_insertOrReplaceDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertOrReplaceDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_insertOrReplaceDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_insertOrReplaceDeclarationListAST (const DownEnumerator_insertOrReplaceDeclarationListAST &) = delete ;
  private: DownEnumerator_insertOrReplaceDeclarationListAST & operator = (const DownEnumerator_insertOrReplaceDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_insertOrReplaceDeclarationListAST final {
  public: UpEnumerator_insertOrReplaceDeclarationListAST (const class GGS_insertOrReplaceDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_insertOrReplaceDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertOrReplaceDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_insertOrReplaceDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_insertOrReplaceDeclarationListAST (const UpEnumerator_insertOrReplaceDeclarationListAST &) = delete ;
  private: UpEnumerator_insertOrReplaceDeclarationListAST & operator = (const UpEnumerator_insertOrReplaceDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @insertOrReplaceDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_insertOrReplaceDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_insertOrReplaceDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_insertOrReplaceDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_insertOrReplaceDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST &) = default ;
  public: GGS_insertOrReplaceDeclarationListAST & operator = (const GGS_insertOrReplaceDeclarationListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_insertOrReplaceDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_insertOrReplaceDeclarationListAST subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_insertOrReplaceDeclarationListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_location & in_mInsertOrReplaceDeclarationLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertOrReplaceDeclarationListAST init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertOrReplaceDeclarationListAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertOrReplaceDeclarationListAST class_func_listWithValue (const class GGS_location & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_insertOrReplaceDeclarationListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_location & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_insertOrReplaceDeclarationListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_insertOrReplaceDeclarationListAST add_operation (const GGS_insertOrReplaceDeclarationListAST & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_location constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_location constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_location & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_location & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_location & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInsertOrReplaceDeclarationLocationAtIndex (class GGS_location constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_location & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_location & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mInsertOrReplaceDeclarationLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_insertOrReplaceDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_insertOrReplaceDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_insertOrReplaceDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_insertOrReplaceDeclarationListAST ;
  friend class DownEnumerator_insertOrReplaceDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertOrReplaceDeclarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_insertOrReplaceDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mInsertOrReplaceDeclarationLocation ;
  public: inline GGS_location readProperty_mInsertOrReplaceDeclarationLocation (void) const {
    return mProperty_mInsertOrReplaceDeclarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_insertOrReplaceDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertOrReplaceDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertOrReplaceDeclarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_insertOrReplaceDeclarationListAST_2E_element (const GGS_location & in_mInsertOrReplaceDeclarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_insertOrReplaceDeclarationListAST_2E_element (const GGS_insertOrReplaceDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_insertOrReplaceDeclarationListAST_2E_element & operator = (const GGS_insertOrReplaceDeclarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertOrReplaceDeclarationListAST_2E_element init_21_ (const class GGS_location & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertOrReplaceDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertMethodMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_insertMethodMap final {

  public: DownEnumerator_insertMethodMap (const class GGS_insertMethodMap & inMap) ;

  public: ~ DownEnumerator_insertMethodMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_insertMethodMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_insertMethodMap (const DownEnumerator_insertMethodMap &) = delete ;
  private: DownEnumerator_insertMethodMap & operator = (const DownEnumerator_insertMethodMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_insertMethodMap final {
  public: UpEnumerator_insertMethodMap (const class GGS_insertMethodMap & inMap)  ;

  public: ~ UpEnumerator_insertMethodMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_insertMethodMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_insertMethodMap (const UpEnumerator_insertMethodMap &) = delete ;
  private: UpEnumerator_insertMethodMap & operator = (const UpEnumerator_insertMethodMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_insertMethodMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_insertMethodMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_insertMethodMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_insertMethodMap (void) ;

//--- Handle copy
  public: GGS_insertMethodMap (const GGS_insertMethodMap & inSource) ;
  public: GGS_insertMethodMap & operator = (const GGS_insertMethodMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_insertMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertMethodMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertMethodMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertMethodMap class_func_mapWithMapToOverride (const class GGS_insertMethodMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_insertMethodMap getter_overriddenMap (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_insertMethodMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_insertMethodMap ;
  friend class DownEnumerator_insertMethodMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertMethodMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertMethodMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_insertMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_insertMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_insertMethodMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_insertMethodMap_2E_element (const GGS_insertMethodMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_insertMethodMap_2E_element & operator = (const GGS_insertMethodMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertMethodMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertMethodMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: insertMethodMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_insertMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_insertMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_insertMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_insertMethodMap_2E_element_3F_ (const GGS_insertMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_insertMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_insertMethodMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_insertMethodMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @searchMethodMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_searchMethodMap final {

  public: DownEnumerator_searchMethodMap (const class GGS_searchMethodMap & inMap) ;

  public: ~ DownEnumerator_searchMethodMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_searchMethodMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_searchMethodMap (const DownEnumerator_searchMethodMap &) = delete ;
  private: DownEnumerator_searchMethodMap & operator = (const DownEnumerator_searchMethodMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_searchMethodMap final {
  public: UpEnumerator_searchMethodMap (const class GGS_searchMethodMap & inMap)  ;

  public: ~ UpEnumerator_searchMethodMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_searchMethodMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_searchMethodMap (const UpEnumerator_searchMethodMap &) = delete ;
  private: UpEnumerator_searchMethodMap & operator = (const UpEnumerator_searchMethodMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_searchMethodMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_searchMethodMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_searchMethodMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_searchMethodMap (void) ;

//--- Handle copy
  public: GGS_searchMethodMap (const GGS_searchMethodMap & inSource) ;
  public: GGS_searchMethodMap & operator = (const GGS_searchMethodMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_searchMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_searchMethodMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_searchMethodMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_searchMethodMap class_func_mapWithMapToOverride (const class GGS_searchMethodMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_searchMethodMap getter_overriddenMap (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_searchMethodMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_searchMethodMap ;
  friend class DownEnumerator_searchMethodMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_searchMethodMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @searchMethodMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_searchMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_searchMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_searchMethodMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_searchMethodMap_2E_element (const GGS_searchMethodMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_searchMethodMap_2E_element & operator = (const GGS_searchMethodMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_searchMethodMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_searchMethodMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_searchMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: searchMethodMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_searchMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_searchMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_searchMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_searchMethodMap_2E_element_3F_ (const GGS_searchMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_searchMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_searchMethodMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_searchMethodMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_searchMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_mapDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_mapDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_mapDeclarationAST (const class cPtr_mapDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMapTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_insertSetterListAST readProperty_mInsertSetterList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mSearchMethodList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mSearchSubscriptList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mRemoveSetterList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mReplaceSetterList (void) const ;

  public: class GGS_insertOrReplaceDeclarationListAST readProperty_mInsertOrReplaceDeclarationListAST (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                                          const class GGS_lstring & inOperand1,
                                                                                                          const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                          const class GGS_insertSetterListAST & inOperand3,
                                                                                                          const class GGS_mapAccessorListAST & inOperand4,
                                                                                                          const class GGS_mapAccessorListAST & inOperand5,
                                                                                                          const class GGS_mapAccessorListAST & inOperand6,
                                                                                                          const class GGS_mapAccessorListAST & inOperand7,
                                                                                                          const class GGS_insertOrReplaceDeclarationListAST & inOperand8,
                                                                                                          const class GGS_bool & inOperand9,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapDeclarationAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_mapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @mapDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_mapDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                                    const class GGS_lstring & inOperand1,
                                                                                                    const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                    const class GGS_insertSetterListAST & inOperand3,
                                                                                                    const class GGS_mapAccessorListAST & inOperand4,
                                                                                                    const class GGS_mapAccessorListAST & inOperand5,
                                                                                                    const class GGS_mapAccessorListAST & inOperand6,
                                                                                                    const class GGS_mapAccessorListAST & inOperand7,
                                                                                                    const class GGS_insertOrReplaceDeclarationListAST & inOperand8,
                                                                                                    const class GGS_bool & inOperand9,
                                                                                                    Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_mMapTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_insertSetterListAST mProperty_mInsertSetterList ;
  public: GGS_mapAccessorListAST mProperty_mSearchMethodList ;
  public: GGS_mapAccessorListAST mProperty_mSearchSubscriptList ;
  public: GGS_mapAccessorListAST mProperty_mRemoveSetterList ;
  public: GGS_mapAccessorListAST mProperty_mReplaceSetterList ;
  public: GGS_insertOrReplaceDeclarationListAST mProperty_mInsertOrReplaceDeclarationListAST ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_mapDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_mapDeclarationAST (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mMapTypeName,
                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                  const GGS_insertSetterListAST & in_mInsertSetterList,
                                  const GGS_mapAccessorListAST & in_mSearchMethodList,
                                  const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                  const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                  const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                  const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                  const GGS_bool & in_equatable,
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
// Phase 1: @mapDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_mapDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_mapDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_mapDeclarationAST_2E_weak (const class GGS_mapDeclarationAST & inSource) ;

  public: GGS_mapDeclarationAST_2E_weak & operator = (const class GGS_mapDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_mapDeclarationAST_2E_weak init_nil (void) {
    GGS_mapDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_mapDeclarationAST bang_mapDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_mapDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_mapDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_mapDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_mapTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_mapTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_mapTypeForGeneration (const class cPtr_mapTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mElementTypeEntry (void) const ;

  public: class GGS_lstring readProperty_mMapTypeName (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GGS_insertSetterListAST readProperty_mInsertSetterList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mSearchMethodList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mSearchSubscriptList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mRemoveSetterList (void) const ;

  public: class GGS_mapAccessorListAST readProperty_mReplaceSetterList (void) const ;

  public: class GGS_bool readProperty_mHasInsertOrReplaceModifier (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mOptionalElementTypeEntry (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapTypeForGeneration init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                            const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_typedPropertyList & inOperand3,
                                                                                            const class GGS_insertSetterListAST & inOperand4,
                                                                                            const class GGS_mapAccessorListAST & inOperand5,
                                                                                            const class GGS_mapAccessorListAST & inOperand6,
                                                                                            const class GGS_mapAccessorListAST & inOperand7,
                                                                                            const class GGS_mapAccessorListAST & inOperand8,
                                                                                            const class GGS_bool & inOperand9,
                                                                                            const class GGS_unifiedTypeMapEntry & inOperand10,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapTypeForGeneration extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_mapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @mapTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_mapTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void mapTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                      const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_typedPropertyList & inOperand3,
                                                                                      const class GGS_insertSetterListAST & inOperand4,
                                                                                      const class GGS_mapAccessorListAST & inOperand5,
                                                                                      const class GGS_mapAccessorListAST & inOperand6,
                                                                                      const class GGS_mapAccessorListAST & inOperand7,
                                                                                      const class GGS_mapAccessorListAST & inOperand8,
                                                                                      const class GGS_bool & inOperand9,
                                                                                      const class GGS_unifiedTypeMapEntry & inOperand10,
                                                                                      Compiler * inCompiler) ;


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
  public: GGS_unifiedTypeMapEntry mProperty_mElementTypeEntry ;
  public: GGS_lstring mProperty_mMapTypeName ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GGS_insertSetterListAST mProperty_mInsertSetterList ;
  public: GGS_mapAccessorListAST mProperty_mSearchMethodList ;
  public: GGS_mapAccessorListAST mProperty_mSearchSubscriptList ;
  public: GGS_mapAccessorListAST mProperty_mRemoveSetterList ;
  public: GGS_mapAccessorListAST mProperty_mReplaceSetterList ;
  public: GGS_bool mProperty_mHasInsertOrReplaceModifier ;
  public: GGS_unifiedTypeMapEntry mProperty_mOptionalElementTypeEntry ;


//--- Default constructor
  public: cPtr_mapTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_mapTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                     const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                     const GGS_lstring & in_mMapTypeName,
                                     const GGS_typedPropertyList & in_mTypedAttributeList,
                                     const GGS_insertSetterListAST & in_mInsertSetterList,
                                     const GGS_mapAccessorListAST & in_mSearchMethodList,
                                     const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                     const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                     const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                     const GGS_bool & in_mHasInsertOrReplaceModifier,
                                     const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
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
// Phase 1: @mapTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_mapTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_mapTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_mapTypeForGeneration_2E_weak (const class GGS_mapTypeForGeneration & inSource) ;

  public: GGS_mapTypeForGeneration_2E_weak & operator = (const class GGS_mapTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_mapTypeForGeneration_2E_weak init_nil (void) {
    GGS_mapTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_mapTypeForGeneration bang_mapTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_mapTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_mapTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_mapTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @charPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_charPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_charPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_charPredefinedTypeAST (const class cPtr_charPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_charPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_charPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_charPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @charPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_charPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void charPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_charPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_charPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @charPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_charPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_charPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_charPredefinedTypeAST_2E_weak (const class GGS_charPredefinedTypeAST & inSource) ;

  public: GGS_charPredefinedTypeAST_2E_weak & operator = (const class GGS_charPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_charPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_charPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_charPredefinedTypeAST bang_charPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_charPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_charPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_charPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_charPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @uintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_uintPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_uintPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_uintPredefinedTypeAST (const class cPtr_uintPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_uintPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uintPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_uintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @uintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_uintPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void uintPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: cPtr_uintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_uintPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @uintPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_uintPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_uintPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_uintPredefinedTypeAST_2E_weak (const class GGS_uintPredefinedTypeAST & inSource) ;

  public: GGS_uintPredefinedTypeAST_2E_weak & operator = (const class GGS_uintPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_uintPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_uintPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_uintPredefinedTypeAST bang_uintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_uintPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_uintPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_uintPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_uintPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_filewrapperPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperPredefinedTypeAST (const class cPtr_filewrapperPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapperPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_filewrapperPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @filewrapperPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperPredefinedTypeAST_2E_weak (const class GGS_filewrapperPredefinedTypeAST & inSource) ;

  public: GGS_filewrapperPredefinedTypeAST_2E_weak & operator = (const class GGS_filewrapperPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_filewrapperPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperPredefinedTypeAST bang_filewrapperPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_filewrapperPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @objectPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_objectPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_objectPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_objectPredefinedTypeAST (const class cPtr_objectPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @objectPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_objectPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void objectPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_objectPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_objectPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @objectPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_objectPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_objectPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_objectPredefinedTypeAST_2E_weak (const class GGS_objectPredefinedTypeAST & inSource) ;

  public: GGS_objectPredefinedTypeAST_2E_weak & operator = (const class GGS_objectPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_objectPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_objectPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_objectPredefinedTypeAST bang_objectPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_objectPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_objectPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @doublePredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_doublePredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_doublePredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_doublePredefinedTypeAST (const class cPtr_doublePredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_doublePredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_doublePredefinedTypeAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_doublePredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @doublePredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_doublePredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void doublePredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_doublePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_doublePredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @doublePredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_doublePredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_doublePredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_doublePredefinedTypeAST_2E_weak (const class GGS_doublePredefinedTypeAST & inSource) ;

  public: GGS_doublePredefinedTypeAST_2E_weak & operator = (const class GGS_doublePredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_doublePredefinedTypeAST_2E_weak init_nil (void) {
    GGS_doublePredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_doublePredefinedTypeAST bang_doublePredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_doublePredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_doublePredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_doublePredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_doublePredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolsetDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolsetDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_boolsetDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolsetDeclarationAST (const class cPtr_boolsetDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mBoolsetTypeName (void) const ;

  public: class GGS_lstringlist readProperty_mFlagList (void) const ;

  public: class GGS_bool readProperty_isEquatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolsetDeclarationAST init_21_isPredefined_21__21__21_isEquatable (const class GGS_bool & inOperand0,
                                                                                        const class GGS_lstring & inOperand1,
                                                                                        const class GGS_lstringlist & inOperand2,
                                                                                        const class GGS_bool & inOperand3,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolsetDeclarationAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolsetDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolsetDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_boolsetDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolsetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (const class GGS_bool & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstringlist & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
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
  public: GGS_lstring mProperty_mBoolsetTypeName ;
  public: GGS_lstringlist mProperty_mFlagList ;
  public: GGS_bool mProperty_isEquatable ;


//--- Default constructor
  public: cPtr_boolsetDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolsetDeclarationAST (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mBoolsetTypeName,
                                      const GGS_lstringlist & in_mFlagList,
                                      const GGS_bool & in_isEquatable,
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
// Phase 1: @boolsetDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolsetDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolsetDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolsetDeclarationAST_2E_weak (const class GGS_boolsetDeclarationAST & inSource) ;

  public: GGS_boolsetDeclarationAST_2E_weak & operator = (const class GGS_boolsetDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolsetDeclarationAST_2E_weak init_nil (void) {
    GGS_boolsetDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolsetDeclarationAST bang_boolsetDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolsetDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_boolsetDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolsetDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolsetDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolsetTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolsetTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_boolsetTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolsetTypeForGeneration (const class cPtr_boolsetTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstringlist readProperty_mFlagList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolsetTypeForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                const class GGS_lstringlist & inOperand1,
                                                                const class GGS_bool & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolsetTypeForGeneration extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolsetTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolsetTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_boolsetTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolsetTypeForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                          const class GGS_lstringlist & inOperand1,
                                                          const class GGS_bool & inOperand2,
                                                          Compiler * inCompiler) ;


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
  public: GGS_lstringlist mProperty_mFlagList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_boolsetTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolsetTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                         const GGS_lstringlist & in_mFlagList,
                                         const GGS_bool & in_equatable,
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
// Phase 1: @boolsetTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolsetTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolsetTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolsetTypeForGeneration_2E_weak (const class GGS_boolsetTypeForGeneration & inSource) ;

  public: GGS_boolsetTypeForGeneration_2E_weak & operator = (const class GGS_boolsetTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolsetTypeForGeneration_2E_weak init_nil (void) {
    GGS_boolsetTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolsetTypeForGeneration bang_boolsetTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolsetTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_boolsetTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolsetTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolsetTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @applicationPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_applicationPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_applicationPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_applicationPredefinedTypeAST (const class cPtr_applicationPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_applicationPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_applicationPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_applicationPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @applicationPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_applicationPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void applicationPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter typeKind
  public: virtual class GGS_typeKindEnum getter_typeKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getClassMethodMap
  public: virtual void method_getClassMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classMethodMap & arg_outClassMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_applicationPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_applicationPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @applicationPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_applicationPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_applicationPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_applicationPredefinedTypeAST_2E_weak (const class GGS_applicationPredefinedTypeAST & inSource) ;

  public: GGS_applicationPredefinedTypeAST_2E_weak & operator = (const class GGS_applicationPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_applicationPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_applicationPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_applicationPredefinedTypeAST bang_applicationPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_applicationPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_applicationPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_applicationPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_applicationPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_boolPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolPredefinedTypeAST (const class cPtr_boolPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_boolPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension getter cppDeclarationString
  public: virtual class GGS_string getter_cppDeclarationString (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getSupportedOperatorFlags
  public: virtual class GGS_typeFeatures getter_getSupportedOperatorFlags (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method getClassFunctionMap
  public: virtual void method_getClassFunctionMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_classFunctionMap & arg_outClassFunctionMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_boolPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @boolPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolPredefinedTypeAST_2E_weak (const class GGS_boolPredefinedTypeAST & inSource) ;

  public: GGS_boolPredefinedTypeAST_2E_weak & operator = (const class GGS_boolPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_boolPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolPredefinedTypeAST bang_boolPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_boolPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_classDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_classDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classDeclarationAST (const class cPtr_classDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_bool readProperty_mIsFinal (void) const ;

  public: class GGS_lstring readProperty_mClassTypeName (void) const ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;

  public: class GGS_bool readProperty_mGenerateInSeparateFile (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_clonable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_lstring & inOperand4,
                                                                                           const class GGS_bool & inOperand5,
                                                                                           const class GGS_propertyInCollectionListAST & inOperand6,
                                                                                           const class GGS_bool & inOperand7,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_classDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                     const class GGS_bool & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     const class GGS_lstring & inOperand3,
                                                                                     const class GGS_lstring & inOperand4,
                                                                                     const class GGS_bool & inOperand5,
                                                                                     const class GGS_propertyInCollectionListAST & inOperand6,
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
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_bool mProperty_mIsFinal ;
  public: GGS_lstring mProperty_mClassTypeName ;
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mGenerateInSeparateFile ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_bool mProperty_clonable ;


//--- Default constructor
  public: cPtr_classDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classDeclarationAST (const GGS_bool & in_isPredefined,
                                    const GGS_bool & in_mIsAbstract,
                                    const GGS_bool & in_mIsFinal,
                                    const GGS_lstring & in_mClassTypeName,
                                    const GGS_lstring & in_mSuperClassName,
                                    const GGS_bool & in_mGenerateInSeparateFile,
                                    const GGS_propertyInCollectionListAST & in_mPropertyList,
                                    const GGS_bool & in_clonable,
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
// Phase 1: @classDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_classDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_classDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_classDeclarationAST_2E_weak (const class GGS_classDeclarationAST & inSource) ;

  public: GGS_classDeclarationAST_2E_weak & operator = (const class GGS_classDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_classDeclarationAST_2E_weak init_nil (void) {
    GGS_classDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_classDeclarationAST bang_classDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_classDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_classDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_classTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_classTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classTypeForGeneration (const class cPtr_classTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mSuperClass (void) const ;

  public: class GGS_typedPropertyList readProperty_mAllTypedAttributeList (void) const ;

  public: class GGS_typedPropertyList readProperty_mCurrentTypedAttributeList (void) const ;

  public: class GGS_bool readProperty_generateHeaderInSeparateFile (void) const ;

  public: class GGS_bool readProperty_initializerNeedsCompilerVariable (void) const ;

  public: class GGS_string readProperty_propertyInitializationCode (void) const ;

  public: class GGS_typedPropertyList readProperty_synthetizedInitializerArgumentList (void) const ;

  public: class GGS_typedPropertyList readProperty_inheritedSynthetizedInitializerArgumentList (void) const ;

  public: class GGS_initializerMap readProperty_initializerMap (void) const ;

  public: class GGS_bool readProperty_clonable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classTypeForGeneration init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                  const class GGS_typedPropertyList & inOperand3,
                                                                                                  const class GGS_typedPropertyList & inOperand4,
                                                                                                  const class GGS_bool & inOperand5,
                                                                                                  const class GGS_bool & inOperand6,
                                                                                                  const class GGS_string & inOperand7,
                                                                                                  const class GGS_typedPropertyList & inOperand8,
                                                                                                  const class GGS_typedPropertyList & inOperand9,
                                                                                                  const class GGS_initializerMap & inOperand10,
                                                                                                  const class GGS_bool & inOperand11,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classTypeForGeneration extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_classTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                            const class GGS_typedPropertyList & inOperand3,
                                                                                            const class GGS_typedPropertyList & inOperand4,
                                                                                            const class GGS_bool & inOperand5,
                                                                                            const class GGS_bool & inOperand6,
                                                                                            const class GGS_string & inOperand7,
                                                                                            const class GGS_typedPropertyList & inOperand8,
                                                                                            const class GGS_typedPropertyList & inOperand9,
                                                                                            const class GGS_initializerMap & inOperand10,
                                                                                            const class GGS_bool & inOperand11,
                                                                                            Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GGS_string arg_inOutputDirectory,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_unifiedTypeMapEntry mProperty_mSuperClass ;
  public: GGS_typedPropertyList mProperty_mAllTypedAttributeList ;
  public: GGS_typedPropertyList mProperty_mCurrentTypedAttributeList ;
  public: GGS_bool mProperty_generateHeaderInSeparateFile ;
  public: GGS_bool mProperty_initializerNeedsCompilerVariable ;
  public: GGS_string mProperty_propertyInitializationCode ;
  public: GGS_typedPropertyList mProperty_synthetizedInitializerArgumentList ;
  public: GGS_typedPropertyList mProperty_inheritedSynthetizedInitializerArgumentList ;
  public: GGS_initializerMap mProperty_initializerMap ;
  public: GGS_bool mProperty_clonable ;


//--- Default constructor
  public: cPtr_classTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                       const GGS_bool & in_mIsAbstract,
                                       const GGS_unifiedTypeMapEntry & in_mSuperClass,
                                       const GGS_typedPropertyList & in_mAllTypedAttributeList,
                                       const GGS_typedPropertyList & in_mCurrentTypedAttributeList,
                                       const GGS_bool & in_generateHeaderInSeparateFile,
                                       const GGS_bool & in_initializerNeedsCompilerVariable,
                                       const GGS_string & in_propertyInitializationCode,
                                       const GGS_typedPropertyList & in_synthetizedInitializerArgumentList,
                                       const GGS_typedPropertyList & in_inheritedSynthetizedInitializerArgumentList,
                                       const GGS_initializerMap & in_initializerMap,
                                       const GGS_bool & in_clonable,
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
// Phase 1: @classTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_classTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_classTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_classTypeForGeneration_2E_weak (const class GGS_classTypeForGeneration & inSource) ;

  public: GGS_classTypeForGeneration_2E_weak & operator = (const class GGS_classTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_classTypeForGeneration_2E_weak init_nil (void) {
    GGS_classTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_classTypeForGeneration bang_classTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_classTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_classTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum callExtensionGetter_typeKind (const cPtr_predefinedTypeAST * inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@predefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_cppDeclarationString (const class cPtr_predefinedTypeAST * inObject,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

class GGS__5B_formalInputParameterListAST_5D_ callExtensionGetter_initializers (const cPtr_predefinedTypeAST * inObject,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassFunctionMap (class cPtr_predefinedTypeAST * inObject,
                                              class GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                              class GGS_classFunctionMap & out_outClassFunctionMap,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getGetterMap (class cPtr_predefinedTypeAST * inObject,
                                       class GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       class GGS_getterMap & out_outGetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getSetterMap (class cPtr_predefinedTypeAST * inObject,
                                       class GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       class GGS_setterMap & out_outSetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getInstanceMethodMap (class cPtr_predefinedTypeAST * inObject,
                                               class GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               class GGS_instanceMethodMap & out_outInstanceMethodMap,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassMethodMap (class cPtr_predefinedTypeAST * inObject,
                                            class GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            class GGS_classMethodMap & out_outClassMethodMap,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

class GGS_typeFeatures callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_supportsCollectionValue (const cPtr_predefinedTypeAST * inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getAddAssignArgumentList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getAddAssignArgumentList (class cPtr_predefinedTypeAST * inObject,
                                                   class GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                   class GGS_functionSignature & out_outAddAssignArgumentList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@predefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getEnumerationList (class cPtr_predefinedTypeAST * inObject,
                                             class GGS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                             class GGS_enumerationDescriptorList & out_outEnumerationList,
                                             class GGS_string & out_outEnumeratedType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dictDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_dictDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_dictDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dictDeclarationAST (const class cPtr_dictDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDictTypeName (void) const ;

  public: class GGS_lstring readProperty_mKeyTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dictDeclarationAST init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_propertyInCollectionListAST & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dictDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dictDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dictDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_dictDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_propertyInCollectionListAST & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_mDictTypeName ;
  public: GGS_lstring mProperty_mKeyTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_dictDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dictDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_lstring & in_mDictTypeName,
                                   const GGS_lstring & in_mKeyTypeName,
                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                   const GGS_bool & in_equatable,
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
// Phase 1: @dictDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dictDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dictDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dictDeclarationAST_2E_weak (const class GGS_dictDeclarationAST & inSource) ;

  public: GGS_dictDeclarationAST_2E_weak & operator = (const class GGS_dictDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dictDeclarationAST_2E_weak init_nil (void) {
    GGS_dictDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dictDeclarationAST bang_dictDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dictDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_dictDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dictDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dictDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dictTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_dictTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_dictTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dictTypeForGeneration (const class cPtr_dictTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mElementTypeEntry (void) const ;

  public: class GGS_lstring readProperty_mDictTypeName (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GGS_lstring readProperty_mKeyTypeName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mOptionalElementTypeEntry (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dictTypeForGeneration init_21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_typedPropertyList & inOperand3,
                                                                         const class GGS_lstring & inOperand4,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dictTypeForGeneration extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dictTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dictTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_dictTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dictTypeForGeneration_init_21__21__21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                   const class GGS_lstring & inOperand2,
                                                                   const class GGS_typedPropertyList & inOperand3,
                                                                   const class GGS_lstring & inOperand4,
                                                                   const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                   Compiler * inCompiler) ;


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
  public: GGS_unifiedTypeMapEntry mProperty_mElementTypeEntry ;
  public: GGS_lstring mProperty_mDictTypeName ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GGS_lstring mProperty_mKeyTypeName ;
  public: GGS_unifiedTypeMapEntry mProperty_mOptionalElementTypeEntry ;


//--- Default constructor
  public: cPtr_dictTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dictTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                      const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                      const GGS_lstring & in_mDictTypeName,
                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                      const GGS_lstring & in_mKeyTypeName,
                                      const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
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
// Phase 1: @dictTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dictTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dictTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dictTypeForGeneration_2E_weak (const class GGS_dictTypeForGeneration & inSource) ;

  public: GGS_dictTypeForGeneration_2E_weak & operator = (const class GGS_dictTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dictTypeForGeneration_2E_weak init_nil (void) {
    GGS_dictTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dictTypeForGeneration bang_dictTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dictTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_dictTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dictTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dictTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dataPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_dataPredefinedTypeAST : public GGS_predefinedTypeAST {
//--------------------------------- Default constructor
  public: GGS_dataPredefinedTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dataPredefinedTypeAST (const class cPtr_dataPredefinedTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dataPredefinedTypeAST init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dataPredefinedTypeAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dataPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dataPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_dataPredefinedTypeAST : public cPtr_predefinedTypeAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dataPredefinedTypeAST_init_21_isPredefined_21_ (const class GGS_bool & inOperand0,
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

//--- Extension method getEnumerationList
  public: virtual void method_getEnumerationList (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_enumerationDescriptorList & arg_outEnumerationList,
           class GGS_string & arg_outEnumeratedType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getGetterMap
  public: virtual void method_getGetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_getterMap & arg_outGetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getInstanceMethodMap
  public: virtual void method_getInstanceMethodMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_instanceMethodMap & arg_outInstanceMethodMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getSetterMap
  public: virtual void method_getSetterMap (class GGS_unifiedTypeMap & arg_ioUnifiedTypeMap,
           class GGS_setterMap & arg_outSetterMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_dataPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dataPredefinedTypeAST (const GGS_bool & in_isPredefined,
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
// Phase 1: @dataPredefinedTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dataPredefinedTypeAST_2E_weak : public GGS_predefinedTypeAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dataPredefinedTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dataPredefinedTypeAST_2E_weak (const class GGS_dataPredefinedTypeAST & inSource) ;

  public: GGS_dataPredefinedTypeAST_2E_weak & operator = (const class GGS_dataPredefinedTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dataPredefinedTypeAST_2E_weak init_nil (void) {
    GGS_dataPredefinedTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dataPredefinedTypeAST bang_dataPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dataPredefinedTypeAST unwrappedValue (void) const ;

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
  public: static GGS_dataPredefinedTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dataPredefinedTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dataPredefinedTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedListSortDescriptorListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_sortedListSortDescriptorListAST final {
  public: DownEnumerator_sortedListSortDescriptorListAST (const class GGS_sortedListSortDescriptorListAST & inList) ;

  public: ~ DownEnumerator_sortedListSortDescriptorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortedListSortDescriptorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sortedListSortDescriptorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sortedListSortDescriptorListAST (const DownEnumerator_sortedListSortDescriptorListAST &) = delete ;
  private: DownEnumerator_sortedListSortDescriptorListAST & operator = (const DownEnumerator_sortedListSortDescriptorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sortedListSortDescriptorListAST final {
  public: UpEnumerator_sortedListSortDescriptorListAST (const class GGS_sortedListSortDescriptorListAST & inList)  ;

  public: ~ UpEnumerator_sortedListSortDescriptorListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortedListSortDescriptorListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sortedListSortDescriptorListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sortedListSortDescriptorListAST (const UpEnumerator_sortedListSortDescriptorListAST &) = delete ;
  private: UpEnumerator_sortedListSortDescriptorListAST & operator = (const UpEnumerator_sortedListSortDescriptorListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @sortedListSortDescriptorListAST list
//--------------------------------------------------------------------------------------------------

class GGS_sortedListSortDescriptorListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_sortedListSortDescriptorListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_sortedListSortDescriptorListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_sortedListSortDescriptorListAST (void) = default ;

//--- Copy
  public: GGS_sortedListSortDescriptorListAST (const GGS_sortedListSortDescriptorListAST &) = default ;
  public: GGS_sortedListSortDescriptorListAST & operator = (const GGS_sortedListSortDescriptorListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_sortedListSortDescriptorListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_sortedListSortDescriptorListAST subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_sortedListSortDescriptorListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSortedAttributeName,
                                                 const class GGS_bool & in_mAscending
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedListSortDescriptorListAST init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListSortDescriptorListAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortedListSortDescriptorListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_bool & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_sortedListSortDescriptorListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_bool & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_sortedListSortDescriptorListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_sortedListSortDescriptorListAST add_operation (const GGS_sortedListSortDescriptorListAST & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_bool constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_bool constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_bool & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_bool & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_bool & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAscendingAtIndex (class GGS_bool constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMSortedAttributeNameAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_bool & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_bool & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_mAscendingAtIndex (const class GGS_uint & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSortedAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_sortedListSortDescriptorListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_sortedListSortDescriptorListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_sortedListSortDescriptorListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sortedListSortDescriptorListAST ;
  friend class DownEnumerator_sortedListSortDescriptorListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedListSortDescriptorListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_sortedListSortDescriptorListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSortedAttributeName ;
  public: inline GGS_lstring readProperty_mSortedAttributeName (void) const {
    return mProperty_mSortedAttributeName ;
  }

  public: GGS_bool mProperty_mAscending ;
  public: inline GGS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sortedListSortDescriptorListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSortedAttributeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortedAttributeName = inValue ;
  }

  public: inline void setter_setMAscending (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sortedListSortDescriptorListAST_2E_element (const GGS_lstring & in_mSortedAttributeName,
                                                          const GGS_bool & in_mAscending) ;

//--------------------------------- Copy constructor
  public: GGS_sortedListSortDescriptorListAST_2E_element (const GGS_sortedListSortDescriptorListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sortedListSortDescriptorListAST_2E_element & operator = (const GGS_sortedListSortDescriptorListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedListSortDescriptorListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListSortDescriptorListAST_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedListDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_sortedListDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_sortedListDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sortedListDeclarationAST (const class cPtr_sortedListDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSortedListTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_sortedListSortDescriptorListAST readProperty_mSortDescriptorList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedListDeclarationAST init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                             const class GGS_sortedListSortDescriptorListAST & inOperand3,
                                                                                             const class GGS_bool & inOperand4,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListDeclarationAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedListDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sortedListDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_sortedListDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                       const class GGS_sortedListSortDescriptorListAST & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: GGS_lstring mProperty_mSortedListTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_sortedListSortDescriptorListAST mProperty_mSortDescriptorList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_sortedListDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sortedListDeclarationAST (const GGS_bool & in_isPredefined,
                                         const GGS_lstring & in_mSortedListTypeName,
                                         const GGS_propertyInCollectionListAST & in_mPropertyList,
                                         const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                         const GGS_bool & in_equatable,
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
// Phase 1: @sortedListDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sortedListDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sortedListDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sortedListDeclarationAST_2E_weak (const class GGS_sortedListDeclarationAST & inSource) ;

  public: GGS_sortedListDeclarationAST_2E_weak & operator = (const class GGS_sortedListDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sortedListDeclarationAST_2E_weak init_nil (void) {
    GGS_sortedListDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sortedListDeclarationAST bang_sortedListDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sortedListDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_sortedListDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortedListDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedListDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortDescriptorListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_sortDescriptorListForGeneration final {
  public: DownEnumerator_sortDescriptorListForGeneration (const class GGS_sortDescriptorListForGeneration & inList) ;

  public: ~ DownEnumerator_sortDescriptorListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mAttributeTypeIndex (LOCATION_ARGS) const ;
  public: class GGS_string current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscendingOrder (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortDescriptorListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sortDescriptorListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sortDescriptorListForGeneration (const DownEnumerator_sortDescriptorListForGeneration &) = delete ;
  private: DownEnumerator_sortDescriptorListForGeneration & operator = (const DownEnumerator_sortDescriptorListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sortDescriptorListForGeneration final {
  public: UpEnumerator_sortDescriptorListForGeneration (const class GGS_sortDescriptorListForGeneration & inList)  ;

  public: ~ UpEnumerator_sortDescriptorListForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mAttributeTypeIndex (LOCATION_ARGS) const ;
  public: class GGS_string current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscendingOrder (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortDescriptorListForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sortDescriptorListForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sortDescriptorListForGeneration (const UpEnumerator_sortDescriptorListForGeneration &) = delete ;
  private: UpEnumerator_sortDescriptorListForGeneration & operator = (const UpEnumerator_sortDescriptorListForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @sortDescriptorListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_sortDescriptorListForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_sortDescriptorListForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_sortDescriptorListForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_sortDescriptorListForGeneration (void) = default ;

//--- Copy
  public: GGS_sortDescriptorListForGeneration (const GGS_sortDescriptorListForGeneration &) = default ;
  public: GGS_sortDescriptorListForGeneration & operator = (const GGS_sortDescriptorListForGeneration &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_sortDescriptorListForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_sortDescriptorListForGeneration subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_sortDescriptorListForGeneration (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                 const class GGS_string & in_mAttributeName,
                                                 const class GGS_bool & in_mAscendingOrder
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortDescriptorListForGeneration init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortDescriptorListForGeneration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortDescriptorListForGeneration class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GGS_string & inOperand1,
                                                                                     const class GGS_bool & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_sortDescriptorListForGeneration inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_unifiedTypeMapEntry & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_bool & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_sortDescriptorListForGeneration_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_sortDescriptorListForGeneration add_operation (const GGS_sortDescriptorListForGeneration & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_bool constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_bool constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_bool & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_bool & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_bool & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAscendingOrderAtIndex (class GGS_bool constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAttributeNameAtIndex (class GGS_string constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMAttributeTypeIndexAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_bool & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_bool & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_mAscendingOrderAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry getter_mAttributeTypeIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_sortDescriptorListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_sortDescriptorListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_sortDescriptorListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sortDescriptorListForGeneration ;
  friend class DownEnumerator_sortDescriptorListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortDescriptorListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_sortDescriptorListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mAttributeTypeIndex ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mAttributeTypeIndex (void) const {
    return mProperty_mAttributeTypeIndex ;
  }

  public: GGS_string mProperty_mAttributeName ;
  public: inline GGS_string readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GGS_bool mProperty_mAscendingOrder ;
  public: inline GGS_bool readProperty_mAscendingOrder (void) const {
    return mProperty_mAscendingOrder ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sortDescriptorListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeTypeIndex (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeTypeIndex = inValue ;
  }

  public: inline void setter_setMAttributeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMAscendingOrder (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscendingOrder = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sortDescriptorListForGeneration_2E_element (const GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                          const GGS_string & in_mAttributeName,
                                                          const GGS_bool & in_mAscendingOrder) ;

//--------------------------------- Copy constructor
  public: GGS_sortDescriptorListForGeneration_2E_element (const GGS_sortDescriptorListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sortDescriptorListForGeneration_2E_element & operator = (const GGS_sortDescriptorListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortDescriptorListForGeneration_2E_element init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortDescriptorListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedListTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_sortedListTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_sortedListTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sortedListTypeForGeneration (const class cPtr_sortedListTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mListElementTypeIndex (void) const ;

  public: class GGS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GGS_sortDescriptorListForGeneration readProperty_mSortDescriptorList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedListTypeForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                       const class GGS_typedPropertyList & inOperand2,
                                                                       const class GGS_sortDescriptorListForGeneration & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListTypeForGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedListTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sortedListTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_sortedListTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sortedListTypeForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                 const class GGS_typedPropertyList & inOperand2,
                                                                 const class GGS_sortDescriptorListForGeneration & inOperand3,
                                                                 Compiler * inCompiler) ;


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
  public: GGS_unifiedTypeMapEntry mProperty_mListElementTypeIndex ;
  public: GGS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GGS_sortDescriptorListForGeneration mProperty_mSortDescriptorList ;


//--- Default constructor
  public: cPtr_sortedListTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sortedListTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                            const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                            const GGS_typedPropertyList & in_mTypedAttributeList,
                                            const GGS_sortDescriptorListForGeneration & in_mSortDescriptorList,
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
// Phase 1: @sortedListTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sortedListTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sortedListTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sortedListTypeForGeneration_2E_weak (const class GGS_sortedListTypeForGeneration & inSource) ;

  public: GGS_sortedListTypeForGeneration_2E_weak & operator = (const class GGS_sortedListTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sortedListTypeForGeneration_2E_weak init_nil (void) {
    GGS_sortedListTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sortedListTypeForGeneration bang_sortedListTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sortedListTypeForGeneration unwrappedValue (void) const ;

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
  public: static GGS_sortedListTypeForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortedListTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedListTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeNameFormalParameterNameList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typeNameFormalParameterNameList final {
  public: DownEnumerator_typeNameFormalParameterNameList (const class GGS_typeNameFormalParameterNameList & inList) ;

  public: ~ DownEnumerator_typeNameFormalParameterNameList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalParameterTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalParameterName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeNameFormalParameterNameList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_typeNameFormalParameterNameList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_typeNameFormalParameterNameList (const DownEnumerator_typeNameFormalParameterNameList &) = delete ;
  private: DownEnumerator_typeNameFormalParameterNameList & operator = (const DownEnumerator_typeNameFormalParameterNameList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typeNameFormalParameterNameList final {
  public: UpEnumerator_typeNameFormalParameterNameList (const class GGS_typeNameFormalParameterNameList & inList)  ;

  public: ~ UpEnumerator_typeNameFormalParameterNameList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalParameterTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalParameterName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeNameFormalParameterNameList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_typeNameFormalParameterNameList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_typeNameFormalParameterNameList (const UpEnumerator_typeNameFormalParameterNameList &) = delete ;
  private: UpEnumerator_typeNameFormalParameterNameList & operator = (const UpEnumerator_typeNameFormalParameterNameList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @typeNameFormalParameterNameList list
//--------------------------------------------------------------------------------------------------

class GGS_typeNameFormalParameterNameList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_typeNameFormalParameterNameList_2E_element> mArray ;

//--- Default constructor
  public: GGS_typeNameFormalParameterNameList (void) ;

//--- Destructor
  public: virtual ~ GGS_typeNameFormalParameterNameList (void) = default ;

//--- Copy
  public: GGS_typeNameFormalParameterNameList (const GGS_typeNameFormalParameterNameList &) = default ;
  public: GGS_typeNameFormalParameterNameList & operator = (const GGS_typeNameFormalParameterNameList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_typeNameFormalParameterNameList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_typeNameFormalParameterNameList subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_typeNameFormalParameterNameList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_lstring & in_mFormalParameterTypeName,
                                                 const class GGS_lstring & in_mFormalParameterName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeNameFormalParameterNameList init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeNameFormalParameterNameList extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeNameFormalParameterNameList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_typeNameFormalParameterNameList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_lstring & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_typeNameFormalParameterNameList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_typeNameFormalParameterNameList add_operation (const GGS_typeNameFormalParameterNameList & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_lstring constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_lstring & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_lstring & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParameterNameAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalParameterTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_lstring & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_lstring & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalParameterTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_typeNameFormalParameterNameList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_typeNameFormalParameterNameList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_typeNameFormalParameterNameList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_typeNameFormalParameterNameList ;
  friend class DownEnumerator_typeNameFormalParameterNameList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeNameFormalParameterNameList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typeNameFormalParameterNameList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_lstring mProperty_mFormalParameterTypeName ;
  public: inline GGS_lstring readProperty_mFormalParameterTypeName (void) const {
    return mProperty_mFormalParameterTypeName ;
  }

  public: GGS_lstring mProperty_mFormalParameterName ;
  public: inline GGS_lstring readProperty_mFormalParameterName (void) const {
    return mProperty_mFormalParameterName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeNameFormalParameterNameList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalParameterTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterTypeName = inValue ;
  }

  public: inline void setter_setMFormalParameterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeNameFormalParameterNameList_2E_element (const GGS_lstring & in_mFormalSelector,
                                                          const GGS_lstring & in_mFormalParameterTypeName,
                                                          const GGS_lstring & in_mFormalParameterName) ;

//--------------------------------- Copy constructor
  public: GGS_typeNameFormalParameterNameList_2E_element (const GGS_typeNameFormalParameterNameList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeNameFormalParameterNameList_2E_element & operator = (const GGS_typeNameFormalParameterNameList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeNameFormalParameterNameList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstring & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeNameFormalParameterNameList_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2E_element ;

