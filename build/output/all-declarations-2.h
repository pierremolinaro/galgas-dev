#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxExtensions struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxExtensions : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_syntaxExtensionsDictionary mProperty_dictionary ;
  public: inline GGS_syntaxExtensionsDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxExtensions (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_syntaxExtensionsDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxExtensions (const GGS_syntaxExtensionsDictionary & in_dictionary) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxExtensions (const GGS_syntaxExtensions & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxExtensions & operator = (const GGS_syntaxExtensions & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxExtensions init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxExtensions extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@syntaxExtensions listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxExtensionListAST extensionGetter_listForKey (const class GGS_syntaxExtensions & inObject,
                                                                       const class GGS_string & constinArgument0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_semanticExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_semanticExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_semanticExpressionAST_2E_weak (const class GGS_semanticExpressionAST & inSource) ;

  public: GGS_semanticExpressionAST_2E_weak & operator = (const class GGS_semanticExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_semanticExpressionAST_2E_weak init_nil (void) {
    GGS_semanticExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_semanticExpressionAST bang_semanticExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_semanticExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_semanticExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalArgumentPassingModeAST string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_formalArgumentPassingModeAST & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalArgumentPassingModeAST formalArgumentMessage' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_formalArgumentMessage (const class GGS_formalArgumentPassingModeAST & inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalParameterListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_formalParameterListAST final {
  public: DownEnumerator_formalParameterListAST (const class GGS_formalParameterListAST & inList) ;

  public: ~ DownEnumerator_formalParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_formalParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_formalParameterListAST (const DownEnumerator_formalParameterListAST &) = delete ;
  private: DownEnumerator_formalParameterListAST & operator = (const DownEnumerator_formalParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_formalParameterListAST final {
  public: UpEnumerator_formalParameterListAST (const class GGS_formalParameterListAST & inList)  ;

  public: ~ UpEnumerator_formalParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_formalParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_formalParameterListAST (const UpEnumerator_formalParameterListAST &) = delete ;
  private: UpEnumerator_formalParameterListAST & operator = (const UpEnumerator_formalParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @formalParameterListAST list
//--------------------------------------------------------------------------------------------------

class GGS_formalParameterListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_formalParameterListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_formalParameterListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_formalParameterListAST (void) = default ;

//--- Copy
  public: GGS_formalParameterListAST (const GGS_formalParameterListAST &) = default ;
  public: GGS_formalParameterListAST & operator = (const GGS_formalParameterListAST &) = default ;

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
  public : inline GenericArray <GGS_formalParameterListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_formalParameterListAST subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_formalParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                 const class GGS_lstring & in_mFormalArgumentTypeName,
                                                 const class GGS_lstring & in_mFormalArgumentName,
                                                 const class GGS_bool & in_mIsUnused
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalParameterListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalParameterListAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formalParameterListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_formalArgumentPassingModeAST & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_lstring & inOperand3,
                                                                            const class GGS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_formalParameterListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_formalArgumentPassingModeAST & inOperand1,
                                   const class GGS_lstring & inOperand2,
                                   const class GGS_lstring & inOperand3,
                                   const class GGS_bool & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_formalParameterListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_formalParameterListAST add_operation (const GGS_formalParameterListAST & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_formalArgumentPassingModeAST constinArgument1,
                              class GGS_lstring constinArgument2,
                              class GGS_lstring constinArgument3,
                              class GGS_bool constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_formalArgumentPassingModeAST constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_lstring constinArgument3,
                                     class GGS_bool constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_formalArgumentPassingModeAST & outArgument1,
                                class GGS_lstring & outArgument2,
                                class GGS_lstring & outArgument3,
                                class GGS_bool & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_formalArgumentPassingModeAST & outArgument1,
                               class GGS_lstring & outArgument2,
                               class GGS_lstring & outArgument3,
                               class GGS_bool & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_formalArgumentPassingModeAST & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_lstring & outArgument3,
                                     class GGS_bool & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentNameAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentPassingModeAtIndex (class GGS_formalArgumentPassingModeAST constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsUnusedAtIndex (class GGS_bool constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_formalArgumentPassingModeAST & outArgument1,
                             class GGS_lstring & outArgument2,
                             class GGS_lstring & outArgument3,
                             class GGS_bool & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_formalArgumentPassingModeAST & outArgument1,
                            class GGS_lstring & outArgument2,
                            class GGS_lstring & outArgument3,
                            class GGS_bool & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_formalParameterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_formalParameterListAST ;
  friend class DownEnumerator_formalParameterListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalParameterListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_formalParameterListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GGS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
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
  public: GGS_formalParameterListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GGS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalParameterListAST_2E_element (const GGS_lstring & in_mFormalSelector,
                                                 const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                 const GGS_lstring & in_mFormalArgumentTypeName,
                                                 const GGS_lstring & in_mFormalArgumentName,
                                                 const GGS_bool & in_mIsUnused) ;

//--------------------------------- Copy constructor
  public: GGS_formalParameterListAST_2E_element (const GGS_formalParameterListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formalParameterListAST_2E_element & operator = (const GGS_formalParameterListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalParameterListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_formalArgumentPassingModeAST & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_lstring & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalParameterListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalInputParameterListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_formalInputParameterListAST final {
  public: DownEnumerator_formalInputParameterListAST (const class GGS_formalInputParameterListAST & inList) ;

  public: ~ DownEnumerator_formalInputParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsUnused (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalInputParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_formalInputParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_formalInputParameterListAST (const DownEnumerator_formalInputParameterListAST &) = delete ;
  private: DownEnumerator_formalInputParameterListAST & operator = (const DownEnumerator_formalInputParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_formalInputParameterListAST final {
  public: UpEnumerator_formalInputParameterListAST (const class GGS_formalInputParameterListAST & inList)  ;

  public: ~ UpEnumerator_formalInputParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsUnused (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalInputParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_formalInputParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_formalInputParameterListAST (const UpEnumerator_formalInputParameterListAST &) = delete ;
  private: UpEnumerator_formalInputParameterListAST & operator = (const UpEnumerator_formalInputParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @formalInputParameterListAST list
//--------------------------------------------------------------------------------------------------

class GGS_formalInputParameterListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_formalInputParameterListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_formalInputParameterListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_formalInputParameterListAST (void) = default ;

//--- Copy
  public: GGS_formalInputParameterListAST (const GGS_formalInputParameterListAST &) = default ;
  public: GGS_formalInputParameterListAST & operator = (const GGS_formalInputParameterListAST &) = default ;

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
  public : inline GenericArray <GGS_formalInputParameterListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_formalInputParameterListAST subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_formalInputParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_lstring & in_mFormalArgumentTypeName,
                                                 const class GGS_lstring & in_mFormalArgumentName,
                                                 const class GGS_bool & in_mIsUnused,
                                                 const class GGS_bool & in_mIsConstant
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalInputParameterListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalInputParameterListAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formalInputParameterListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 const class GGS_bool & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_formalInputParameterListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_lstring & inOperand2,
                                   const class GGS_bool & inOperand3,
                                   const class GGS_bool & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_formalInputParameterListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_formalInputParameterListAST add_operation (const GGS_formalInputParameterListAST & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_lstring constinArgument2,
                              class GGS_bool constinArgument3,
                              class GGS_bool constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_bool constinArgument3,
                                     class GGS_bool constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_lstring & outArgument2,
                                class GGS_bool & outArgument3,
                                class GGS_bool & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_lstring & outArgument2,
                               class GGS_bool & outArgument3,
                               class GGS_bool & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_bool & outArgument3,
                                     class GGS_bool & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentNameAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsConstantAtIndex (class GGS_bool constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsUnusedAtIndex (class GGS_bool constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_lstring & outArgument2,
                             class GGS_bool & outArgument3,
                             class GGS_bool & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_lstring & outArgument2,
                            class GGS_bool & outArgument3,
                            class GGS_bool & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsConstantAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_formalInputParameterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalInputParameterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalInputParameterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_formalInputParameterListAST ;
  friend class DownEnumerator_formalInputParameterListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalInputParameterListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalInputParameterListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_formalInputParameterListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
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

  public: GGS_bool mProperty_mIsConstant ;
  public: inline GGS_bool readProperty_mIsConstant (void) const {
    return mProperty_mIsConstant ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formalInputParameterListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
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

  public: inline void setter_setMIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalInputParameterListAST_2E_element (const GGS_lstring & in_mFormalSelector,
                                                      const GGS_lstring & in_mFormalArgumentTypeName,
                                                      const GGS_lstring & in_mFormalArgumentName,
                                                      const GGS_bool & in_mIsUnused,
                                                      const GGS_bool & in_mIsConstant) ;

//--------------------------------- Copy constructor
  public: GGS_formalInputParameterListAST_2E_element (const GGS_formalInputParameterListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formalInputParameterListAST_2E_element & operator = (const GGS_formalInputParameterListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalInputParameterListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_bool & inOperand3,
                                                                                      const class GGS_bool & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalInputParameterListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalInputParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractInputParameter reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractInputParameter : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractInputParameter (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractInputParameter (const class cPtr_abstractInputParameter * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractInputParameter init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractInputParameter extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractInputParameter & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInputParameter ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractInputParameter class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractInputParameter : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractInputParameter_init (Compiler * inCompiler) ;


//--- Extension method analyzeInputParameter
  public: virtual void method_analyzeInputParameter (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_lexicalTypeEnum arg_inRequiredLexicalType,
           const class GGS_string arg_inLexicalAttributeName,
           class GGS_terminalCheckAssignementList & arg_ioTerminalCheckAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractInputParameter (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractInputParameter_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractInputParameter_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractInputParameter_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractInputParameter_2E_weak (const class GGS_abstractInputParameter & inSource) ;

  public: GGS_abstractInputParameter_2E_weak & operator = (const class GGS_abstractInputParameter & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_abstractInputParameter unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInputParameter_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputParameterAnonymousVariable reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterAnonymousVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputParameterAnonymousVariable class
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



//--- Constructor
  public: cPtr_inputParameterAnonymousVariable (Compiler * inCompiler
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
// Phase 1: @inputParameterAnonymousVariable_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterAnonymousVariable_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterAnonymousVariable_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterAnonymousVariable_2E_weak (const class GGS_inputParameterAnonymousVariable & inSource) ;

  public: GGS_inputParameterAnonymousVariable_2E_weak & operator = (const class GGS_inputParameterAnonymousVariable & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_inputParameterAnonymousVariable unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputParameterVariable reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputParameterVariable class
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
  public: cPtr_inputParameterVariable (const GGS_lstring & in_mActualParameterName,
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
// Phase 1: @inputParameterVariable_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterVariable_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterVariable_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterVariable_2E_weak (const class GGS_inputParameterVariable & inSource) ;

  public: GGS_inputParameterVariable_2E_weak & operator = (const class GGS_inputParameterVariable & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_inputParameterVariable unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterVariable_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputParameterDeclaredVariable reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputParameterDeclaredVariable class
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
                                               const GGS_lstring & in_mActualParameterName,
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
// Phase 1: @inputParameterDeclaredVariable_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredVariable_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredVariable_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterDeclaredVariable_2E_weak (const class GGS_inputParameterDeclaredVariable & inSource) ;

  public: GGS_inputParameterDeclaredVariable_2E_weak & operator = (const class GGS_inputParameterDeclaredVariable & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_inputParameterDeclaredVariable unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inputParameterDeclaredConstant reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inputParameterDeclaredConstant & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inputParameterDeclaredConstant class
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
                                               const GGS_lstring & in_mActualParameterName,
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
// Phase 1: @inputParameterDeclaredConstant_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inputParameterDeclaredConstant_2E_weak : public GGS_abstractInputParameter_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inputParameterDeclaredConstant_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inputParameterDeclaredConstant_2E_weak (const class GGS_inputParameterDeclaredConstant & inSource) ;

  public: GGS_inputParameterDeclaredConstant_2E_weak & operator = (const class GGS_inputParameterDeclaredConstant & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_inputParameterDeclaredConstant unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualInputParameterListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_actualInputParameterListAST final {
  public: DownEnumerator_actualInputParameterListAST (const class GGS_actualInputParameterListAST & inList) ;

  public: ~ DownEnumerator_actualInputParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GGS_abstractInputParameter current_mInputParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actualInputParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_actualInputParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_actualInputParameterListAST (const DownEnumerator_actualInputParameterListAST &) = delete ;
  private: DownEnumerator_actualInputParameterListAST & operator = (const DownEnumerator_actualInputParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_actualInputParameterListAST final {
  public: UpEnumerator_actualInputParameterListAST (const class GGS_actualInputParameterListAST & inList)  ;

  public: ~ UpEnumerator_actualInputParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GGS_abstractInputParameter current_mInputParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_actualInputParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_actualInputParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_actualInputParameterListAST (const UpEnumerator_actualInputParameterListAST &) = delete ;
  private: UpEnumerator_actualInputParameterListAST & operator = (const UpEnumerator_actualInputParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @actualInputParameterListAST list
//--------------------------------------------------------------------------------------------------

class GGS_actualInputParameterListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_actualInputParameterListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_actualInputParameterListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_actualInputParameterListAST (void) = default ;

//--- Copy
  public: GGS_actualInputParameterListAST (const GGS_actualInputParameterListAST &) = default ;
  public: GGS_actualInputParameterListAST & operator = (const GGS_actualInputParameterListAST &) = default ;

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
  public : inline GenericArray <GGS_actualInputParameterListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_actualInputParameterListAST subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_actualInputParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_actualInputParameterListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_abstractInputParameter & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_actualInputParameterListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_abstractInputParameter & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_actualInputParameterListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_actualInputParameterListAST add_operation (const GGS_actualInputParameterListAST & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_abstractInputParameter constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_abstractInputParameter constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_abstractInputParameter & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_abstractInputParameter & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_abstractInputParameter & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMActualSelectorAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMInputParameterAtIndex (class GGS_abstractInputParameter constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_abstractInputParameter & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_abstractInputParameter & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mActualSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_abstractInputParameter getter_mInputParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_actualInputParameterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_actualInputParameterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_actualInputParameterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_actualInputParameterListAST ;
  friend class DownEnumerator_actualInputParameterListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualInputParameterListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualInputParameterListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actualInputParameterListAST_2E_element (const GGS_lstring & in_mActualSelector,
                                                      const GGS_abstractInputParameter & in_mInputParameter) ;

//--------------------------------- Copy constructor
  public: GGS_actualInputParameterListAST_2E_element (const GGS_actualInputParameterListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_actualInputParameterListAST_2E_element & operator = (const GGS_actualInputParameterListAST_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualInputParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_semanticDeclarationListAST final {
  public: DownEnumerator_semanticDeclarationListAST (const class GGS_semanticDeclarationListAST & inList) ;

  public: ~ DownEnumerator_semanticDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationAST current_mSemanticDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_semanticDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_semanticDeclarationListAST (const DownEnumerator_semanticDeclarationListAST &) = delete ;
  private: DownEnumerator_semanticDeclarationListAST & operator = (const DownEnumerator_semanticDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_semanticDeclarationListAST final {
  public: UpEnumerator_semanticDeclarationListAST (const class GGS_semanticDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_semanticDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticDeclarationAST current_mSemanticDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_semanticDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_semanticDeclarationListAST (const UpEnumerator_semanticDeclarationListAST &) = delete ;
  private: UpEnumerator_semanticDeclarationListAST & operator = (const UpEnumerator_semanticDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @semanticDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_semanticDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_semanticDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_semanticDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_semanticDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_semanticDeclarationListAST (const GGS_semanticDeclarationListAST &) = default ;
  public: GGS_semanticDeclarationListAST & operator = (const GGS_semanticDeclarationListAST &) = default ;

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
  public : inline GenericArray <GGS_semanticDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_semanticDeclarationListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_semanticDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_semanticDeclarationListAST class_func_listWithValue (const class GGS_semanticDeclarationAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_semanticDeclarationListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_semanticDeclarationAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_semanticDeclarationListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_semanticDeclarationListAST add_operation (const GGS_semanticDeclarationListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticDeclarationAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_semanticDeclarationAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticDeclarationAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticDeclarationAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticDeclarationAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMSemanticDeclarationAtIndex (class GGS_semanticDeclarationAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_semanticDeclarationAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_semanticDeclarationAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationAST getter_mSemanticDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_semanticDeclarationListAST ;
  friend class DownEnumerator_semanticDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticDeclarationListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticDeclarationListAST_2E_element (const GGS_semanticDeclarationAST & in_mSemanticDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_semanticDeclarationListAST_2E_element (const GGS_semanticDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticDeclarationListAST_2E_element & operator = (const GGS_semanticDeclarationListAST_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externFunctionDeclarationAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @externFunctionDeclarationAST class
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
                                             const GGS_bool & in_usefullFunc,
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
// Phase 1: @externFunctionDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externFunctionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externFunctionDeclarationAST_2E_weak (const class GGS_externFunctionDeclarationAST & inSource) ;

  public: GGS_externFunctionDeclarationAST_2E_weak & operator = (const class GGS_externFunctionDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_externFunctionDeclarationAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionDeclarationAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionDeclarationAST class
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
                                       const GGS_bool & in_mIsInternal,
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
// Phase 1: @functionDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST_2E_weak : public GGS_externFunctionDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionDeclarationAST_2E_weak (const class GGS_functionDeclarationAST & inSource) ;

  public: GGS_functionDeclarationAST_2E_weak & operator = (const class GGS_functionDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_functionDeclarationAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @onceFunctionDeclarationAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_onceFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @onceFunctionDeclarationAST class
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
                                           const GGS_bool & in_mIsUsefull,
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
// Phase 1: @onceFunctionDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_onceFunctionDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_onceFunctionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_onceFunctionDeclarationAST_2E_weak (const class GGS_onceFunctionDeclarationAST & inSource) ;

  public: GGS_onceFunctionDeclarationAST_2E_weak & operator = (const class GGS_onceFunctionDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_onceFunctionDeclarationAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalTemplateInputParameterListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_formalTemplateInputParameterListAST final {
  public: DownEnumerator_formalTemplateInputParameterListAST (const class GGS_formalTemplateInputParameterListAST & inList) ;

  public: ~ DownEnumerator_formalTemplateInputParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalTemplateSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalTemplateInputParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_formalTemplateInputParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_formalTemplateInputParameterListAST (const DownEnumerator_formalTemplateInputParameterListAST &) = delete ;
  private: DownEnumerator_formalTemplateInputParameterListAST & operator = (const DownEnumerator_formalTemplateInputParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_formalTemplateInputParameterListAST final {
  public: UpEnumerator_formalTemplateInputParameterListAST (const class GGS_formalTemplateInputParameterListAST & inList)  ;

  public: ~ UpEnumerator_formalTemplateInputParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFormalTemplateSelector (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalTemplateInputParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_formalTemplateInputParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_formalTemplateInputParameterListAST (const UpEnumerator_formalTemplateInputParameterListAST &) = delete ;
  private: UpEnumerator_formalTemplateInputParameterListAST & operator = (const UpEnumerator_formalTemplateInputParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @formalTemplateInputParameterListAST list
//--------------------------------------------------------------------------------------------------

class GGS_formalTemplateInputParameterListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_formalTemplateInputParameterListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_formalTemplateInputParameterListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_formalTemplateInputParameterListAST (void) = default ;

//--- Copy
  public: GGS_formalTemplateInputParameterListAST (const GGS_formalTemplateInputParameterListAST &) = default ;
  public: GGS_formalTemplateInputParameterListAST & operator = (const GGS_formalTemplateInputParameterListAST &) = default ;

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
  public : inline GenericArray <GGS_formalTemplateInputParameterListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_formalTemplateInputParameterListAST subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_formalTemplateInputParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_formalTemplateInputParameterListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_lstring & inOperand2,
                                                                                         const class GGS_bool & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_formalTemplateInputParameterListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_lstring & inOperand2,
                                   const class GGS_bool & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_formalTemplateInputParameterListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_formalTemplateInputParameterListAST add_operation (const GGS_formalTemplateInputParameterListAST & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_lstring constinArgument2,
                              class GGS_bool constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_bool constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_lstring & outArgument2,
                                class GGS_bool & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_lstring & outArgument2,
                               class GGS_bool & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_bool & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentNameAtIndex (class GGS_lstring constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalTemplateSelectorAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsUnusedAtIndex (class GGS_bool constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_lstring & outArgument2,
                             class GGS_bool & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_lstring & outArgument2,
                            class GGS_bool & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFormalTemplateSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_formalTemplateInputParameterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalTemplateInputParameterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalTemplateInputParameterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_formalTemplateInputParameterListAST ;
  friend class DownEnumerator_formalTemplateInputParameterListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalTemplateInputParameterListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalTemplateInputParameterListAST_2E_element (const GGS_lstring & in_mFormalTemplateSelector,
                                                              const GGS_lstring & in_mFormalArgumentTypeName,
                                                              const GGS_lstring & in_mFormalArgumentName,
                                                              const GGS_bool & in_mIsUnused) ;

//--------------------------------- Copy constructor
  public: GGS_formalTemplateInputParameterListAST_2E_element (const GGS_formalTemplateInputParameterListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formalTemplateInputParameterListAST_2E_element & operator = (const GGS_formalTemplateInputParameterListAST_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_filewrapperTemplateListAST final {
  public: DownEnumerator_filewrapperTemplateListAST (const class GGS_filewrapperTemplateListAST & inList) ;

  public: ~ DownEnumerator_filewrapperTemplateListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
  public: class GGS_formalTemplateInputParameterListAST current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_filewrapperTemplateListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_filewrapperTemplateListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_filewrapperTemplateListAST (const DownEnumerator_filewrapperTemplateListAST &) = delete ;
  private: DownEnumerator_filewrapperTemplateListAST & operator = (const DownEnumerator_filewrapperTemplateListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_filewrapperTemplateListAST final {
  public: UpEnumerator_filewrapperTemplateListAST (const class GGS_filewrapperTemplateListAST & inList)  ;

  public: ~ UpEnumerator_filewrapperTemplateListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
  public: class GGS_formalTemplateInputParameterListAST current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_filewrapperTemplateListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_filewrapperTemplateListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_filewrapperTemplateListAST (const UpEnumerator_filewrapperTemplateListAST &) = delete ;
  private: UpEnumerator_filewrapperTemplateListAST & operator = (const UpEnumerator_filewrapperTemplateListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @filewrapperTemplateListAST list
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_filewrapperTemplateListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_filewrapperTemplateListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_filewrapperTemplateListAST (void) = default ;

//--- Copy
  public: GGS_filewrapperTemplateListAST (const GGS_filewrapperTemplateListAST &) = default ;
  public: GGS_filewrapperTemplateListAST & operator = (const GGS_filewrapperTemplateListAST &) = default ;

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
  public : inline GenericArray <GGS_filewrapperTemplateListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_filewrapperTemplateListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_filewrapperTemplateListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_filewrapperTemplateListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_formalTemplateInputParameterListAST & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_filewrapperTemplateListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_formalTemplateInputParameterListAST & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_filewrapperTemplateListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_filewrapperTemplateListAST add_operation (const GGS_filewrapperTemplateListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_formalTemplateInputParameterListAST constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_formalTemplateInputParameterListAST constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_formalTemplateInputParameterListAST & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_formalTemplateInputParameterListAST & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_formalTemplateInputParameterListAST & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperTemplateFormalInputParametersAtIndex (class GGS_formalTemplateInputParameterListAST constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperTemplateNameAtIndex (class GGS_lstring constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperTemplatePathAtIndex (class GGS_lstring constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_formalTemplateInputParameterListAST & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_formalTemplateInputParameterListAST & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_formalTemplateInputParameterListAST getter_mFilewrapperTemplateFormalInputParametersAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFilewrapperTemplateNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFilewrapperTemplatePathAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_filewrapperTemplateListAST ;
  friend class DownEnumerator_filewrapperTemplateListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_filewrapperTemplateListAST_2E_element (const GGS_lstring & in_mFilewrapperTemplateName,
                                                     const GGS_lstring & in_mFilewrapperTemplatePath,
                                                     const GGS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters) ;

//--------------------------------- Copy constructor
  public: GGS_filewrapperTemplateListAST_2E_element (const GGS_filewrapperTemplateListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_filewrapperTemplateListAST_2E_element & operator = (const GGS_filewrapperTemplateListAST_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperDeclarationAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperDeclarationAST class
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
                                          const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
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
// Phase 1: @filewrapperDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperDeclarationAST_2E_weak (const class GGS_filewrapperDeclarationAST & inSource) ;

  public: GGS_filewrapperDeclarationAST_2E_weak & operator = (const class GGS_filewrapperDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_filewrapperDeclarationAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxInstructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxInstructionList final {
  public: DownEnumerator_syntaxInstructionList (const class GGS_syntaxInstructionList & inList) ;

  public: ~ DownEnumerator_syntaxInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syntaxInstructionList (const DownEnumerator_syntaxInstructionList &) = delete ;
  private: DownEnumerator_syntaxInstructionList & operator = (const DownEnumerator_syntaxInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxInstructionList final {
  public: UpEnumerator_syntaxInstructionList (const class GGS_syntaxInstructionList & inList)  ;

  public: ~ UpEnumerator_syntaxInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syntaxInstructionList (const UpEnumerator_syntaxInstructionList &) = delete ;
  private: UpEnumerator_syntaxInstructionList & operator = (const UpEnumerator_syntaxInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionList list
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syntaxInstructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_syntaxInstructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_syntaxInstructionList (void) = default ;

//--- Copy
  public: GGS_syntaxInstructionList (const GGS_syntaxInstructionList &) = default ;
  public: GGS_syntaxInstructionList & operator = (const GGS_syntaxInstructionList &) = default ;

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
  public : inline GenericArray <GGS_syntaxInstructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syntaxInstructionList subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syntaxInstructionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_syntaxInstructionList class_func_listWithValue (const class GGS_syntaxInstructionAST & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_syntaxInstructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_syntaxInstructionAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_syntaxInstructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_syntaxInstructionList add_operation (const GGS_syntaxInstructionList & inOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_syntaxInstructionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_syntaxInstructionAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_syntaxInstructionAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_syntaxInstructionAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_syntaxInstructionAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_syntaxInstructionAST constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_syntaxInstructionAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_syntaxInstructionAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionAST getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxInstructionList ;
  friend class DownEnumerator_syntaxInstructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxInstructionList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxInstructionList_2E_element (const GGS_syntaxInstructionAST & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxInstructionList_2E_element (const GGS_syntaxInstructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxInstructionList_2E_element & operator = (const GGS_syntaxInstructionList_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalLabelListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonTerminalLabelListAST final {
  public: DownEnumerator_nonTerminalLabelListAST (const class GGS_nonTerminalLabelListAST & inList) ;

  public: ~ DownEnumerator_nonTerminalLabelListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonTerminalLabelListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_nonTerminalLabelListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_nonTerminalLabelListAST (const DownEnumerator_nonTerminalLabelListAST &) = delete ;
  private: DownEnumerator_nonTerminalLabelListAST & operator = (const DownEnumerator_nonTerminalLabelListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalLabelListAST final {
  public: UpEnumerator_nonTerminalLabelListAST (const class GGS_nonTerminalLabelListAST & inList)  ;

  public: ~ UpEnumerator_nonTerminalLabelListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_nonTerminalLabelListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_nonTerminalLabelListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_nonTerminalLabelListAST (const UpEnumerator_nonTerminalLabelListAST &) = delete ;
  private: UpEnumerator_nonTerminalLabelListAST & operator = (const UpEnumerator_nonTerminalLabelListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @nonTerminalLabelListAST list
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalLabelListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_nonTerminalLabelListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_nonTerminalLabelListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_nonTerminalLabelListAST (void) = default ;

//--- Copy
  public: GGS_nonTerminalLabelListAST (const GGS_nonTerminalLabelListAST &) = default ;
  public: GGS_nonTerminalLabelListAST & operator = (const GGS_nonTerminalLabelListAST &) = default ;

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
  public : inline GenericArray <GGS_nonTerminalLabelListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_nonTerminalLabelListAST subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_nonTerminalLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_nonTerminalLabelListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_formalParameterListAST & inOperand1,
                                                                             const class GGS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_nonTerminalLabelListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_formalParameterListAST & inOperand1,
                                   const class GGS_location & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_nonTerminalLabelListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_nonTerminalLabelListAST add_operation (const GGS_nonTerminalLabelListAST & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_formalParameterListAST constinArgument1,
                              class GGS_location constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_formalParameterListAST constinArgument1,
                                     class GGS_location constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_formalParameterListAST & outArgument1,
                                class GGS_location & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_formalParameterListAST & outArgument1,
                               class GGS_location & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_formalParameterListAST & outArgument1,
                                     class GGS_location & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfArgumentLocationAtIndex (class GGS_location constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentListAtIndex (class GGS_formalParameterListAST constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLabelNameAtIndex (class GGS_lstring constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_formalParameterListAST & outArgument1,
                             class GGS_location & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_formalParameterListAST & outArgument1,
                            class GGS_location & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfArgumentLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterListAST getter_mFormalArgumentListAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mLabelNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_nonTerminalLabelListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonTerminalLabelListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonTerminalLabelListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalLabelListAST ;
  friend class DownEnumerator_nonTerminalLabelListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalLabelListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonTerminalLabelListAST_2E_element (const GGS_lstring & in_mLabelName,
                                                  const GGS_formalParameterListAST & in_mFormalArgumentList,
                                                  const GGS_location & in_mEndOfArgumentLocation) ;

//--------------------------------- Copy constructor
  public: GGS_nonTerminalLabelListAST_2E_element (const GGS_nonTerminalLabelListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonTerminalLabelListAST_2E_element & operator = (const GGS_nonTerminalLabelListAST_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonterminalDeclarationListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonterminalDeclarationListAST_2E_element (const GGS_lstring & in_mNonterminalName,
                                                        const GGS_nonTerminalLabelListAST & in_mLabels) ;

//--------------------------------- Copy constructor
  public: GGS_nonterminalDeclarationListAST_2E_element (const GGS_nonterminalDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonterminalDeclarationListAST_2E_element & operator = (const GGS_nonterminalDeclarationListAST_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxRuleLabelListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxRuleLabelListAST final {
  public: DownEnumerator_syntaxRuleLabelListAST (const class GGS_syntaxRuleLabelListAST & inList) ;

  public: ~ DownEnumerator_syntaxRuleLabelListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalArguments (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxRuleLabelListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxRuleLabelListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syntaxRuleLabelListAST (const DownEnumerator_syntaxRuleLabelListAST &) = delete ;
  private: DownEnumerator_syntaxRuleLabelListAST & operator = (const DownEnumerator_syntaxRuleLabelListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxRuleLabelListAST final {
  public: UpEnumerator_syntaxRuleLabelListAST (const class GGS_syntaxRuleLabelListAST & inList)  ;

  public: ~ UpEnumerator_syntaxRuleLabelListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GGS_formalParameterListAST current_mFormalArguments (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxRuleLabelListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxRuleLabelListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syntaxRuleLabelListAST (const UpEnumerator_syntaxRuleLabelListAST &) = delete ;
  private: UpEnumerator_syntaxRuleLabelListAST & operator = (const UpEnumerator_syntaxRuleLabelListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syntaxRuleLabelListAST list
//--------------------------------------------------------------------------------------------------

class GGS_syntaxRuleLabelListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syntaxRuleLabelListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_syntaxRuleLabelListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_syntaxRuleLabelListAST (void) = default ;

//--- Copy
  public: GGS_syntaxRuleLabelListAST (const GGS_syntaxRuleLabelListAST &) = default ;
  public: GGS_syntaxRuleLabelListAST & operator = (const GGS_syntaxRuleLabelListAST &) = default ;

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
  public : inline GenericArray <GGS_syntaxRuleLabelListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syntaxRuleLabelListAST subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syntaxRuleLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_syntaxRuleLabelListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_formalParameterListAST & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_syntaxInstructionList & inOperand3,
                                                                            const class GGS_location & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_syntaxRuleLabelListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_formalParameterListAST & inOperand1,
                                   const class GGS_location & inOperand2,
                                   const class GGS_syntaxInstructionList & inOperand3,
                                   const class GGS_location & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_syntaxRuleLabelListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_syntaxRuleLabelListAST add_operation (const GGS_syntaxRuleLabelListAST & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_formalParameterListAST constinArgument1,
                              class GGS_location constinArgument2,
                              class GGS_syntaxInstructionList constinArgument3,
                              class GGS_location constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_formalParameterListAST constinArgument1,
                                     class GGS_location constinArgument2,
                                     class GGS_syntaxInstructionList constinArgument3,
                                     class GGS_location constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_formalParameterListAST & outArgument1,
                                class GGS_location & outArgument2,
                                class GGS_syntaxInstructionList & outArgument3,
                                class GGS_location & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_formalParameterListAST & outArgument1,
                               class GGS_location & outArgument2,
                               class GGS_syntaxInstructionList & outArgument3,
                               class GGS_location & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_formalParameterListAST & outArgument1,
                                     class GGS_location & outArgument2,
                                     class GGS_syntaxInstructionList & outArgument3,
                                     class GGS_location & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfArgumentLocationAtIndex (class GGS_location constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfInstructionListAtIndex (class GGS_location constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentsAtIndex (class GGS_formalParameterListAST constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMLabelNameAtIndex (class GGS_lstring constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxInstructionListAtIndex (class GGS_syntaxInstructionList constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_formalParameterListAST & outArgument1,
                             class GGS_location & outArgument2,
                             class GGS_syntaxInstructionList & outArgument3,
                             class GGS_location & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_formalParameterListAST & outArgument1,
                            class GGS_location & outArgument2,
                            class GGS_syntaxInstructionList & outArgument3,
                            class GGS_location & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfArgumentLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_formalParameterListAST getter_mFormalArgumentsAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mLabelNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionList getter_mSyntaxInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_syntaxRuleLabelListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxRuleLabelListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxRuleLabelListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxRuleLabelListAST ;
  friend class DownEnumerator_syntaxRuleLabelListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxRuleLabelListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxRuleLabelListAST_2E_element (const GGS_lstring & in_mLabelName,
                                                 const GGS_formalParameterListAST & in_mFormalArguments,
                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                 const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                 const GGS_location & in_mEndOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxRuleLabelListAST_2E_element (const GGS_syntaxRuleLabelListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxRuleLabelListAST_2E_element & operator = (const GGS_syntaxRuleLabelListAST_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxRuleListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxRuleListAST_2E_element (const GGS_lstring & in_mNonterminalName,
                                            const GGS_syntaxRuleLabelListAST & in_mLabelList) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxRuleListAST_2E_element (const GGS_syntaxRuleListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxRuleListAST_2E_element & operator = (const GGS_syntaxRuleListAST_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listOfSyntaxInstructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_listOfSyntaxInstructionList final {
  public: DownEnumerator_listOfSyntaxInstructionList (const class GGS_listOfSyntaxInstructionList & inList) ;

  public: ~ DownEnumerator_listOfSyntaxInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOf_5F_instructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_listOfSyntaxInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_listOfSyntaxInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_listOfSyntaxInstructionList (const DownEnumerator_listOfSyntaxInstructionList &) = delete ;
  private: DownEnumerator_listOfSyntaxInstructionList & operator = (const DownEnumerator_listOfSyntaxInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_listOfSyntaxInstructionList final {
  public: UpEnumerator_listOfSyntaxInstructionList (const class GGS_listOfSyntaxInstructionList & inList)  ;

  public: ~ UpEnumerator_listOfSyntaxInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOf_5F_instructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_listOfSyntaxInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_listOfSyntaxInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_listOfSyntaxInstructionList (const UpEnumerator_listOfSyntaxInstructionList &) = delete ;
  private: UpEnumerator_listOfSyntaxInstructionList & operator = (const UpEnumerator_listOfSyntaxInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @listOfSyntaxInstructionList list
//--------------------------------------------------------------------------------------------------

class GGS_listOfSyntaxInstructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_listOfSyntaxInstructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_listOfSyntaxInstructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_listOfSyntaxInstructionList (void) = default ;

//--- Copy
  public: GGS_listOfSyntaxInstructionList (const GGS_listOfSyntaxInstructionList &) = default ;
  public: GGS_listOfSyntaxInstructionList & operator = (const GGS_listOfSyntaxInstructionList &) = default ;

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
  public : inline GenericArray <GGS_listOfSyntaxInstructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_listOfSyntaxInstructionList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_listOfSyntaxInstructionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_listOfSyntaxInstructionList class_func_listWithValue (const class GGS_syntaxInstructionList & inOperand0,
                                                                                 const class GGS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_listOfSyntaxInstructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_syntaxInstructionList & inOperand0,
                                   const class GGS_location & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_listOfSyntaxInstructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_listOfSyntaxInstructionList add_operation (const GGS_listOfSyntaxInstructionList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_syntaxInstructionList constinArgument0,
                              class GGS_location constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_syntaxInstructionList constinArgument0,
                                     class GGS_location constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_syntaxInstructionList & outArgument0,
                                class GGS_location & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_syntaxInstructionList & outArgument0,
                               class GGS_location & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_syntaxInstructionList & outArgument0,
                                     class GGS_location & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOf_5F_instructionsAtIndex (class GGS_location constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxInstructionListAtIndex (class GGS_syntaxInstructionList constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_syntaxInstructionList & outArgument0,
                             class GGS_location & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_syntaxInstructionList & outArgument0,
                            class GGS_location & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOf_5F_instructionsAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxInstructionList getter_mSyntaxInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_listOfSyntaxInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_listOfSyntaxInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_listOfSyntaxInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_listOfSyntaxInstructionList ;
  friend class DownEnumerator_listOfSyntaxInstructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @listOfSyntaxInstructionList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_listOfSyntaxInstructionList_2E_element (const GGS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                      const GGS_location & in_mEndOf_5F_instructions) ;

//--------------------------------- Copy constructor
  public: GGS_listOfSyntaxInstructionList_2E_element (const GGS_listOfSyntaxInstructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_listOfSyntaxInstructionList_2E_element & operator = (const GGS_listOfSyntaxInstructionList_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_SyntaxComponentAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_SyntaxComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @galgas3SyntaxComponentAST class
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
                                             const GGS_bool & in_mHasTranslateFeature,
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
// Phase 1: @galgas_33_SyntaxComponentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_galgas_33_SyntaxComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_galgas_33_SyntaxComponentAST_2E_weak (const class GGS_galgas_33_SyntaxComponentAST & inSource) ;

  public: GGS_galgas_33_SyntaxComponentAST_2E_weak & operator = (const class GGS_galgas_33_SyntaxComponentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_galgas_33_SyntaxComponentAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_GrammarComponentAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_galgas_33_GrammarComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @galgas3GrammarComponentAST class
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
                                              const GGS_bool & in_mHasTranslateFeature,
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
// Phase 1: @galgas_33_GrammarComponentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_GrammarComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_galgas_33_GrammarComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_galgas_33_GrammarComponentAST_2E_weak (const class GGS_galgas_33_GrammarComponentAST & inSource) ;

  public: GGS_galgas_33_GrammarComponentAST_2E_weak & operator = (const class GGS_galgas_33_GrammarComponentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

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
  public: GGS_galgas_33_GrammarComponentAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_SyntaxComponentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_galgas_33_SyntaxComponentListAST final {
  public: DownEnumerator_galgas_33_SyntaxComponentListAST (const class GGS_galgas_33_SyntaxComponentListAST & inList) ;

  public: ~ DownEnumerator_galgas_33_SyntaxComponentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mImportedLexiqueFilePath (LOCATION_ARGS) const ;
  public: class GGS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GGS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_galgas_33_SyntaxComponentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_galgas_33_SyntaxComponentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_galgas_33_SyntaxComponentListAST (const DownEnumerator_galgas_33_SyntaxComponentListAST &) = delete ;
  private: DownEnumerator_galgas_33_SyntaxComponentListAST & operator = (const DownEnumerator_galgas_33_SyntaxComponentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_galgas_33_SyntaxComponentListAST final {
  public: UpEnumerator_galgas_33_SyntaxComponentListAST (const class GGS_galgas_33_SyntaxComponentListAST & inList)  ;

  public: ~ UpEnumerator_galgas_33_SyntaxComponentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mImportedLexiqueFilePath (LOCATION_ARGS) const ;
  public: class GGS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GGS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_galgas_33_SyntaxComponentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_galgas_33_SyntaxComponentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_galgas_33_SyntaxComponentListAST (const UpEnumerator_galgas_33_SyntaxComponentListAST &) = delete ;
  private: UpEnumerator_galgas_33_SyntaxComponentListAST & operator = (const UpEnumerator_galgas_33_SyntaxComponentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @galgas3SyntaxComponentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_galgas_33_SyntaxComponentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_galgas_33_SyntaxComponentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_galgas_33_SyntaxComponentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_galgas_33_SyntaxComponentListAST (void) = default ;

//--- Copy
  public: GGS_galgas_33_SyntaxComponentListAST (const GGS_galgas_33_SyntaxComponentListAST &) = default ;
  public: GGS_galgas_33_SyntaxComponentListAST & operator = (const GGS_galgas_33_SyntaxComponentListAST &) = default ;

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
  public : inline GenericArray <GGS_galgas_33_SyntaxComponentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_galgas_33_SyntaxComponentListAST subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_galgas_33_SyntaxComponentListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_galgas_33_SyntaxComponentListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_nonterminalDeclarationListAST & inOperand2,
                                                                                      const class GGS_syntaxRuleListAST & inOperand3,
                                                                                      const class GGS_bool & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_galgas_33_SyntaxComponentListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_nonterminalDeclarationListAST & inOperand2,
                                   const class GGS_syntaxRuleListAST & inOperand3,
                                   const class GGS_bool & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_galgas_33_SyntaxComponentListAST add_operation (const GGS_galgas_33_SyntaxComponentListAST & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_nonterminalDeclarationListAST constinArgument2,
                              class GGS_syntaxRuleListAST constinArgument3,
                              class GGS_bool constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_nonterminalDeclarationListAST constinArgument2,
                                     class GGS_syntaxRuleListAST constinArgument3,
                                     class GGS_bool constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_nonterminalDeclarationListAST & outArgument2,
                                class GGS_syntaxRuleListAST & outArgument3,
                                class GGS_bool & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_nonterminalDeclarationListAST & outArgument2,
                               class GGS_syntaxRuleListAST & outArgument3,
                               class GGS_bool & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_nonterminalDeclarationListAST & outArgument2,
                                     class GGS_syntaxRuleListAST & outArgument3,
                                     class GGS_bool & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasTranslateFeatureAtIndex (class GGS_bool constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMImportedLexiqueFilePathAtIndex (class GGS_lstring constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMNonterminalDeclarationListAtIndex (class GGS_nonterminalDeclarationListAST constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMRuleListAtIndex (class GGS_syntaxRuleListAST constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMSyntaxComponentNameAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_nonterminalDeclarationListAST & outArgument2,
                             class GGS_syntaxRuleListAST & outArgument3,
                             class GGS_bool & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_nonterminalDeclarationListAST & outArgument2,
                            class GGS_syntaxRuleListAST & outArgument3,
                            class GGS_bool & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHasTranslateFeatureAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mImportedLexiqueFilePathAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxRuleListAST getter_mRuleListAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSyntaxComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_galgas_33_SyntaxComponentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_galgas_33_SyntaxComponentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_galgas_33_SyntaxComponentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_galgas_33_SyntaxComponentListAST ;
  friend class DownEnumerator_galgas_33_SyntaxComponentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgas_33_SyntaxComponentListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element (const GGS_lstring & in_mSyntaxComponentName,
                                                           const GGS_lstring & in_mImportedLexiqueFilePath,
                                                           const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                           const GGS_syntaxRuleListAST & in_mRuleList,
                                                           const GGS_bool & in_mHasTranslateFeature) ;

//--------------------------------- Copy constructor
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgas_33_SyntaxComponentListAST_2E_element & operator = (const GGS_galgas_33_SyntaxComponentListAST_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prologueEpilogueList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_prologueEpilogueList final {
  public: DownEnumerator_prologueEpilogueList (const class GGS_prologueEpilogueList & inList) ;

  public: ~ DownEnumerator_prologueEpilogueList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_prologueEpilogueList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_prologueEpilogueList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_prologueEpilogueList (const DownEnumerator_prologueEpilogueList &) = delete ;
  private: DownEnumerator_prologueEpilogueList & operator = (const DownEnumerator_prologueEpilogueList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_prologueEpilogueList final {
  public: UpEnumerator_prologueEpilogueList (const class GGS_prologueEpilogueList & inList)  ;

  public: ~ UpEnumerator_prologueEpilogueList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_prologueEpilogueList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_prologueEpilogueList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_prologueEpilogueList (const UpEnumerator_prologueEpilogueList &) = delete ;
  private: UpEnumerator_prologueEpilogueList & operator = (const UpEnumerator_prologueEpilogueList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @prologueEpilogueList list
//--------------------------------------------------------------------------------------------------

class GGS_prologueEpilogueList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_prologueEpilogueList_2E_element> mArray ;

//--- Default constructor
  public: GGS_prologueEpilogueList (void) ;

//--- Destructor
  public: virtual ~ GGS_prologueEpilogueList (void) = default ;

//--- Copy
  public: GGS_prologueEpilogueList (const GGS_prologueEpilogueList &) = default ;
  public: GGS_prologueEpilogueList & operator = (const GGS_prologueEpilogueList &) = default ;

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
  public : inline GenericArray <GGS_prologueEpilogueList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_prologueEpilogueList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_prologueEpilogueList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_prologueEpilogueList class_func_listWithValue (const class GGS_semanticInstructionListAST & inOperand0,
                                                                          const class GGS_location & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_prologueEpilogueList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_semanticInstructionListAST & inOperand0,
                                   const class GGS_location & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_prologueEpilogueList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_prologueEpilogueList add_operation (const GGS_prologueEpilogueList & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_semanticInstructionListAST constinArgument0,
                              class GGS_location constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_semanticInstructionListAST constinArgument0,
                                     class GGS_location constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_semanticInstructionListAST & outArgument0,
                                class GGS_location & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_semanticInstructionListAST & outArgument0,
                               class GGS_location & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_semanticInstructionListAST & outArgument0,
                                     class GGS_location & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfInstructionListAtIndex (class GGS_location constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_semanticInstructionListAST constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_semanticInstructionListAST & outArgument0,
                             class GGS_location & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_semanticInstructionListAST & outArgument0,
                            class GGS_location & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_prologueEpilogueList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_prologueEpilogueList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_prologueEpilogueList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_prologueEpilogueList ;
  friend class DownEnumerator_prologueEpilogueList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prologueEpilogueList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prologueEpilogueList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_prologueEpilogueList_2E_element (const GGS_semanticInstructionListAST & in_mInstructionList,
                                               const GGS_location & in_mEndOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_prologueEpilogueList_2E_element (const GGS_prologueEpilogueList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_prologueEpilogueList_2E_element & operator = (const GGS_prologueEpilogueList_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programRuleList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_programRuleList final {
  public: DownEnumerator_programRuleList (const class GGS_programRuleList & inList) ;

  public: ~ DownEnumerator_programRuleList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSourceFileExtension (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSourceFileHelp (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSourceFileVariableName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mReferenceGrammar (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programRuleList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_programRuleList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_programRuleList (const DownEnumerator_programRuleList &) = delete ;
  private: DownEnumerator_programRuleList & operator = (const DownEnumerator_programRuleList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_programRuleList final {
  public: UpEnumerator_programRuleList (const class GGS_programRuleList & inList)  ;

  public: ~ UpEnumerator_programRuleList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSourceFileExtension (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSourceFileHelp (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSourceFileVariableName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mReferenceGrammar (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_programRuleList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_programRuleList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_programRuleList (const UpEnumerator_programRuleList &) = delete ;
  private: UpEnumerator_programRuleList & operator = (const UpEnumerator_programRuleList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @programRuleList list
//--------------------------------------------------------------------------------------------------

class GGS_programRuleList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_programRuleList_2E_element> mArray ;

//--- Default constructor
  public: GGS_programRuleList (void) ;

//--- Destructor
  public: virtual ~ GGS_programRuleList (void) = default ;

//--- Copy
  public: GGS_programRuleList (const GGS_programRuleList &) = default ;
  public: GGS_programRuleList & operator = (const GGS_programRuleList &) = default ;

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
  public : inline GenericArray <GGS_programRuleList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_programRuleList subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_programRuleList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_programRuleList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_bool & inOperand3,
                                                                     const class GGS_lstring & inOperand4,
                                                                     const class GGS_semanticInstructionListAST & inOperand5,
                                                                     const class GGS_location & inOperand6
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_programRuleList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_lstring & inOperand2,
                                   const class GGS_bool & inOperand3,
                                   const class GGS_lstring & inOperand4,
                                   const class GGS_semanticInstructionListAST & inOperand5,
                                   const class GGS_location & inOperand6
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_programRuleList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_programRuleList add_operation (const GGS_programRuleList & inOperand,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_lstring constinArgument2,
                              class GGS_bool constinArgument3,
                              class GGS_lstring constinArgument4,
                              class GGS_semanticInstructionListAST constinArgument5,
                              class GGS_location constinArgument6,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_lstring constinArgument2,
                                     class GGS_bool constinArgument3,
                                     class GGS_lstring constinArgument4,
                                     class GGS_semanticInstructionListAST constinArgument5,
                                     class GGS_location constinArgument6,
                                     class GGS_uint constinArgument7,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_lstring & outArgument2,
                                class GGS_bool & outArgument3,
                                class GGS_lstring & outArgument4,
                                class GGS_semanticInstructionListAST & outArgument5,
                                class GGS_location & outArgument6,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_lstring & outArgument2,
                               class GGS_bool & outArgument3,
                               class GGS_lstring & outArgument4,
                               class GGS_semanticInstructionListAST & outArgument5,
                               class GGS_location & outArgument6,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_lstring & outArgument2,
                                     class GGS_bool & outArgument3,
                                     class GGS_lstring & outArgument4,
                                     class GGS_semanticInstructionListAST & outArgument5,
                                     class GGS_location & outArgument6,
                                     class GGS_uint constinArgument7,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfInstructionListAtIndex (class GGS_location constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_semanticInstructionListAST constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMReferenceGrammarAtIndex (class GGS_lstring constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: void setter_setMSourceFileExtensionAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMSourceFileHelpAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMSourceFileVariableNameAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMSourceFileVariableNameIsUnusedAtIndex (class GGS_bool constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_lstring & outArgument2,
                             class GGS_bool & outArgument3,
                             class GGS_lstring & outArgument4,
                             class GGS_semanticInstructionListAST & outArgument5,
                             class GGS_location & outArgument6,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
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
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mReferenceGrammarAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSourceFileExtensionAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSourceFileHelpAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSourceFileVariableNameAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mSourceFileVariableNameIsUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_programRuleList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_programRuleList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_programRuleList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_programRuleList ;
  friend class DownEnumerator_programRuleList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programRuleList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @programRuleList_2E_element struct
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

//--------------------------------- Copy constructor
  public: GGS_programRuleList_2E_element (const GGS_programRuleList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_programRuleList_2E_element & operator = (const GGS_programRuleList_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programRuleList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgasGUIComponentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_galgasGUIComponentListAST final {
  public: DownEnumerator_galgasGUIComponentListAST (const class GGS_galgasGUIComponentListAST & inList) ;

  public: ~ DownEnumerator_galgasGUIComponentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mGUIComponentName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mImportedOptionList (LOCATION_ARGS) const ;
  public: class GGS_guiSimpleAttributeListAST current_mGlobalSimpleAttributeList (LOCATION_ARGS) const ;
  public: class GGS_withLexiqueListAST current_mWithLexiqueList (LOCATION_ARGS) const ;
  public: class GGS_projectIndexingDescriptorList current_mProjectIndexingDescriptorList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_galgasGUIComponentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_galgasGUIComponentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_galgasGUIComponentListAST (const DownEnumerator_galgasGUIComponentListAST &) = delete ;
  private: DownEnumerator_galgasGUIComponentListAST & operator = (const DownEnumerator_galgasGUIComponentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_galgasGUIComponentListAST final {
  public: UpEnumerator_galgasGUIComponentListAST (const class GGS_galgasGUIComponentListAST & inList)  ;

  public: ~ UpEnumerator_galgasGUIComponentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mGUIComponentName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mImportedOptionList (LOCATION_ARGS) const ;
  public: class GGS_guiSimpleAttributeListAST current_mGlobalSimpleAttributeList (LOCATION_ARGS) const ;
  public: class GGS_withLexiqueListAST current_mWithLexiqueList (LOCATION_ARGS) const ;
  public: class GGS_projectIndexingDescriptorList current_mProjectIndexingDescriptorList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_galgasGUIComponentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_galgasGUIComponentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_galgasGUIComponentListAST (const UpEnumerator_galgasGUIComponentListAST &) = delete ;
  private: UpEnumerator_galgasGUIComponentListAST & operator = (const UpEnumerator_galgasGUIComponentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @galgasGUIComponentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_galgasGUIComponentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_galgasGUIComponentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_galgasGUIComponentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_galgasGUIComponentListAST (void) = default ;

//--- Copy
  public: GGS_galgasGUIComponentListAST (const GGS_galgasGUIComponentListAST &) = default ;
  public: GGS_galgasGUIComponentListAST & operator = (const GGS_galgasGUIComponentListAST &) = default ;

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
  public : inline GenericArray <GGS_galgasGUIComponentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_galgasGUIComponentListAST subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_galgasGUIComponentListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mGUIComponentName,
                                                 const class GGS_lstringlist & in_mImportedOptionList,
                                                 const class GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                 const class GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                 const class GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgasGUIComponentListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgasGUIComponentListAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_galgasGUIComponentListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstringlist & inOperand1,
                                                                               const class GGS_guiSimpleAttributeListAST & inOperand2,
                                                                               const class GGS_withLexiqueListAST & inOperand3,
                                                                               const class GGS_projectIndexingDescriptorList & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_galgasGUIComponentListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstringlist & inOperand1,
                                   const class GGS_guiSimpleAttributeListAST & inOperand2,
                                   const class GGS_withLexiqueListAST & inOperand3,
                                   const class GGS_projectIndexingDescriptorList & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_galgasGUIComponentListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_galgasGUIComponentListAST add_operation (const GGS_galgasGUIComponentListAST & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstringlist constinArgument1,
                              class GGS_guiSimpleAttributeListAST constinArgument2,
                              class GGS_withLexiqueListAST constinArgument3,
                              class GGS_projectIndexingDescriptorList constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstringlist constinArgument1,
                                     class GGS_guiSimpleAttributeListAST constinArgument2,
                                     class GGS_withLexiqueListAST constinArgument3,
                                     class GGS_projectIndexingDescriptorList constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstringlist & outArgument1,
                                class GGS_guiSimpleAttributeListAST & outArgument2,
                                class GGS_withLexiqueListAST & outArgument3,
                                class GGS_projectIndexingDescriptorList & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstringlist & outArgument1,
                               class GGS_guiSimpleAttributeListAST & outArgument2,
                               class GGS_withLexiqueListAST & outArgument3,
                               class GGS_projectIndexingDescriptorList & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstringlist & outArgument1,
                                     class GGS_guiSimpleAttributeListAST & outArgument2,
                                     class GGS_withLexiqueListAST & outArgument3,
                                     class GGS_projectIndexingDescriptorList & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMGUIComponentNameAtIndex (class GGS_lstring constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: void setter_setMGlobalSimpleAttributeListAtIndex (class GGS_guiSimpleAttributeListAST constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMImportedOptionListAtIndex (class GGS_lstringlist constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMProjectIndexingDescriptorListAtIndex (class GGS_projectIndexingDescriptorList constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMWithLexiqueListAtIndex (class GGS_withLexiqueListAST constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstringlist & outArgument1,
                             class GGS_guiSimpleAttributeListAST & outArgument2,
                             class GGS_withLexiqueListAST & outArgument3,
                             class GGS_projectIndexingDescriptorList & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstringlist & outArgument1,
                            class GGS_guiSimpleAttributeListAST & outArgument2,
                            class GGS_withLexiqueListAST & outArgument3,
                            class GGS_projectIndexingDescriptorList & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mGUIComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_guiSimpleAttributeListAST getter_mGlobalSimpleAttributeListAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mImportedOptionListAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_projectIndexingDescriptorList getter_mProjectIndexingDescriptorListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_withLexiqueListAST getter_mWithLexiqueListAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_galgasGUIComponentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_galgasGUIComponentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_galgasGUIComponentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_galgasGUIComponentListAST ;
  friend class DownEnumerator_galgasGUIComponentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasGUIComponentListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guiSimpleAttributeListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_guiSimpleAttributeListAST final {
  public: DownEnumerator_guiSimpleAttributeListAST (const class GGS_guiSimpleAttributeListAST & inList) ;

  public: ~ DownEnumerator_guiSimpleAttributeListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mKey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiSimpleAttributeListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_guiSimpleAttributeListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_guiSimpleAttributeListAST (const DownEnumerator_guiSimpleAttributeListAST &) = delete ;
  private: DownEnumerator_guiSimpleAttributeListAST & operator = (const DownEnumerator_guiSimpleAttributeListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_guiSimpleAttributeListAST final {
  public: UpEnumerator_guiSimpleAttributeListAST (const class GGS_guiSimpleAttributeListAST & inList)  ;

  public: ~ UpEnumerator_guiSimpleAttributeListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mKey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guiSimpleAttributeListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_guiSimpleAttributeListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_guiSimpleAttributeListAST (const UpEnumerator_guiSimpleAttributeListAST &) = delete ;
  private: UpEnumerator_guiSimpleAttributeListAST & operator = (const UpEnumerator_guiSimpleAttributeListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @guiSimpleAttributeListAST list
//--------------------------------------------------------------------------------------------------

class GGS_guiSimpleAttributeListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_guiSimpleAttributeListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_guiSimpleAttributeListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_guiSimpleAttributeListAST (void) = default ;

//--- Copy
  public: GGS_guiSimpleAttributeListAST (const GGS_guiSimpleAttributeListAST &) = default ;
  public: GGS_guiSimpleAttributeListAST & operator = (const GGS_guiSimpleAttributeListAST &) = default ;

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
  public : inline GenericArray <GGS_guiSimpleAttributeListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_guiSimpleAttributeListAST subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_guiSimpleAttributeListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mKey,
                                                 const class GGS_lstring & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guiSimpleAttributeListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guiSimpleAttributeListAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guiSimpleAttributeListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_guiSimpleAttributeListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_guiSimpleAttributeListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_guiSimpleAttributeListAST add_operation (const GGS_guiSimpleAttributeListAST & inOperand,
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

  public: void setter_setMKeyAtIndex (class GGS_lstring constinArgument0,
                                      class GGS_uint constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMValueAtIndex (class GGS_lstring constinArgument0,
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

  public: class GGS_lstring getter_mKeyAtIndex (const class GGS_uint & constinOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_guiSimpleAttributeListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_guiSimpleAttributeListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_guiSimpleAttributeListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_guiSimpleAttributeListAST ;
  friend class DownEnumerator_guiSimpleAttributeListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @projectIndexingDescriptorList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_projectIndexingDescriptorList final {
  public: DownEnumerator_projectIndexingDescriptorList (const class GGS_projectIndexingDescriptorList & inList) ;

  public: ~ DownEnumerator_projectIndexingDescriptorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mProjectFileExtension (LOCATION_ARGS) const ;
  public: class GGS_lstring current_indexingPathSuffix (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_projectIndexingDescriptorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_projectIndexingDescriptorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_projectIndexingDescriptorList (const DownEnumerator_projectIndexingDescriptorList &) = delete ;
  private: DownEnumerator_projectIndexingDescriptorList & operator = (const DownEnumerator_projectIndexingDescriptorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_projectIndexingDescriptorList final {
  public: UpEnumerator_projectIndexingDescriptorList (const class GGS_projectIndexingDescriptorList & inList)  ;

  public: ~ UpEnumerator_projectIndexingDescriptorList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mProjectFileExtension (LOCATION_ARGS) const ;
  public: class GGS_lstring current_indexingPathSuffix (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_projectIndexingDescriptorList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_projectIndexingDescriptorList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_projectIndexingDescriptorList (const UpEnumerator_projectIndexingDescriptorList &) = delete ;
  private: UpEnumerator_projectIndexingDescriptorList & operator = (const UpEnumerator_projectIndexingDescriptorList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @projectIndexingDescriptorList list
//--------------------------------------------------------------------------------------------------

class GGS_projectIndexingDescriptorList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_projectIndexingDescriptorList_2E_element> mArray ;

//--- Default constructor
  public: GGS_projectIndexingDescriptorList (void) ;

//--- Destructor
  public: virtual ~ GGS_projectIndexingDescriptorList (void) = default ;

//--- Copy
  public: GGS_projectIndexingDescriptorList (const GGS_projectIndexingDescriptorList &) = default ;
  public: GGS_projectIndexingDescriptorList & operator = (const GGS_projectIndexingDescriptorList &) = default ;

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
  public : inline GenericArray <GGS_projectIndexingDescriptorList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_projectIndexingDescriptorList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_projectIndexingDescriptorList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mProjectFileExtension,
                                                 const class GGS_lstring & in_indexingPathSuffix
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_projectIndexingDescriptorList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_projectIndexingDescriptorList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_projectIndexingDescriptorList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_projectIndexingDescriptorList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_projectIndexingDescriptorList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_projectIndexingDescriptorList add_operation (const GGS_projectIndexingDescriptorList & inOperand,
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

  public: void setter_setIndexingPathSuffixAtIndex (class GGS_lstring constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMProjectFileExtensionAtIndex (class GGS_lstring constinArgument0,
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

  public: class GGS_lstring getter_indexingPathSuffixAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mProjectFileExtensionAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_projectIndexingDescriptorList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_projectIndexingDescriptorList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_projectIndexingDescriptorList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_projectIndexingDescriptorList ;
  friend class DownEnumerator_projectIndexingDescriptorList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectIndexingDescriptorList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @withLexiqueListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_withLexiqueListAST final {
  public: DownEnumerator_withLexiqueListAST (const class GGS_withLexiqueListAST & inList) ;

  public: ~ DownEnumerator_withLexiqueListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLexiqueFileName (LOCATION_ARGS) const ;
  public: class GGS_guiLabelListAST current_mLabels (LOCATION_ARGS) const ;
  public: class GGS_guiSimpleAttributeListAST current_mSimpleAttributes (LOCATION_ARGS) const ;
  public: class GGS_guiCompoundAttributeListAST current_mCompoundAttributes (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_withLexiqueListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_withLexiqueListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_withLexiqueListAST (const DownEnumerator_withLexiqueListAST &) = delete ;
  private: DownEnumerator_withLexiqueListAST & operator = (const DownEnumerator_withLexiqueListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_withLexiqueListAST final {
  public: UpEnumerator_withLexiqueListAST (const class GGS_withLexiqueListAST & inList)  ;

  public: ~ UpEnumerator_withLexiqueListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLexiqueFileName (LOCATION_ARGS) const ;
  public: class GGS_guiLabelListAST current_mLabels (LOCATION_ARGS) const ;
  public: class GGS_guiSimpleAttributeListAST current_mSimpleAttributes (LOCATION_ARGS) const ;
  public: class GGS_guiCompoundAttributeListAST current_mCompoundAttributes (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_withLexiqueListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_withLexiqueListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_withLexiqueListAST (const UpEnumerator_withLexiqueListAST &) = delete ;
  private: UpEnumerator_withLexiqueListAST & operator = (const UpEnumerator_withLexiqueListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @withLexiqueListAST list
//--------------------------------------------------------------------------------------------------

class GGS_withLexiqueListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_withLexiqueListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_withLexiqueListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_withLexiqueListAST (void) = default ;

//--- Copy
  public: GGS_withLexiqueListAST (const GGS_withLexiqueListAST &) = default ;
  public: GGS_withLexiqueListAST & operator = (const GGS_withLexiqueListAST &) = default ;

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
  public : inline GenericArray <GGS_withLexiqueListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_withLexiqueListAST subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_withLexiqueListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLexiqueFileName,
                                                 const class GGS_guiLabelListAST & in_mLabels,
                                                 const class GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                 const class GGS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_withLexiqueListAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_withLexiqueListAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_withLexiqueListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                        const class GGS_guiLabelListAST & inOperand1,
                                                                        const class GGS_guiSimpleAttributeListAST & inOperand2,
                                                                        const class GGS_guiCompoundAttributeListAST & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_withLexiqueListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_guiLabelListAST & inOperand1,
                                   const class GGS_guiSimpleAttributeListAST & inOperand2,
                                   const class GGS_guiCompoundAttributeListAST & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_withLexiqueListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_withLexiqueListAST add_operation (const GGS_withLexiqueListAST & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_guiLabelListAST constinArgument1,
                              class GGS_guiSimpleAttributeListAST constinArgument2,
                              class GGS_guiCompoundAttributeListAST constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_guiLabelListAST constinArgument1,
                                     class GGS_guiSimpleAttributeListAST constinArgument2,
                                     class GGS_guiCompoundAttributeListAST constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_guiLabelListAST & outArgument1,
                                class GGS_guiSimpleAttributeListAST & outArgument2,
                                class GGS_guiCompoundAttributeListAST & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_guiLabelListAST & outArgument1,
                               class GGS_guiSimpleAttributeListAST & outArgument2,
                               class GGS_guiCompoundAttributeListAST & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_guiLabelListAST & outArgument1,
                                     class GGS_guiSimpleAttributeListAST & outArgument2,
                                     class GGS_guiCompoundAttributeListAST & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMCompoundAttributesAtIndex (class GGS_guiCompoundAttributeListAST constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLabelsAtIndex (class GGS_guiLabelListAST constinArgument0,
                                         class GGS_uint constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexiqueFileNameAtIndex (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMSimpleAttributesAtIndex (class GGS_guiSimpleAttributeListAST constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_guiLabelListAST & outArgument1,
                             class GGS_guiSimpleAttributeListAST & outArgument2,
                             class GGS_guiCompoundAttributeListAST & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_guiLabelListAST & outArgument1,
                            class GGS_guiSimpleAttributeListAST & outArgument2,
                            class GGS_guiCompoundAttributeListAST & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_guiCompoundAttributeListAST getter_mCompoundAttributesAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_guiLabelListAST getter_mLabelsAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mLexiqueFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_guiSimpleAttributeListAST getter_mSimpleAttributesAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_withLexiqueListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_withLexiqueListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_withLexiqueListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_withLexiqueListAST ;
  friend class DownEnumerator_withLexiqueListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_withLexiqueListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @galgasGUIComponentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_galgasGUIComponentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mGUIComponentName ;
  public: inline GGS_lstring readProperty_mGUIComponentName (void) const {
    return mProperty_mGUIComponentName ;
  }

  public: GGS_lstringlist mProperty_mImportedOptionList ;
  public: inline GGS_lstringlist readProperty_mImportedOptionList (void) const {
    return mProperty_mImportedOptionList ;
  }

  public: GGS_guiSimpleAttributeListAST mProperty_mGlobalSimpleAttributeList ;
  public: inline GGS_guiSimpleAttributeListAST readProperty_mGlobalSimpleAttributeList (void) const {
    return mProperty_mGlobalSimpleAttributeList ;
  }

  public: GGS_withLexiqueListAST mProperty_mWithLexiqueList ;
  public: inline GGS_withLexiqueListAST readProperty_mWithLexiqueList (void) const {
    return mProperty_mWithLexiqueList ;
  }

  public: GGS_projectIndexingDescriptorList mProperty_mProjectIndexingDescriptorList ;
  public: inline GGS_projectIndexingDescriptorList readProperty_mProjectIndexingDescriptorList (void) const {
    return mProperty_mProjectIndexingDescriptorList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_galgasGUIComponentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGUIComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGUIComponentName = inValue ;
  }

  public: inline void setter_setMImportedOptionList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedOptionList = inValue ;
  }

  public: inline void setter_setMGlobalSimpleAttributeList (const GGS_guiSimpleAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalSimpleAttributeList = inValue ;
  }

  public: inline void setter_setMWithLexiqueList (const GGS_withLexiqueListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWithLexiqueList = inValue ;
  }

  public: inline void setter_setMProjectIndexingDescriptorList (const GGS_projectIndexingDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProjectIndexingDescriptorList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_galgasGUIComponentListAST_2E_element (const GGS_lstring & in_mGUIComponentName,
                                                    const GGS_lstringlist & in_mImportedOptionList,
                                                    const GGS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                    const GGS_withLexiqueListAST & in_mWithLexiqueList,
                                                    const GGS_projectIndexingDescriptorList & in_mProjectIndexingDescriptorList) ;

//--------------------------------- Copy constructor
  public: GGS_galgasGUIComponentListAST_2E_element (const GGS_galgasGUIComponentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_galgasGUIComponentListAST_2E_element & operator = (const GGS_galgasGUIComponentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_galgasGUIComponentListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstringlist & inOperand1,
                                                                                    const class GGS_guiSimpleAttributeListAST & inOperand2,
                                                                                    const class GGS_withLexiqueListAST & inOperand3,
                                                                                    const class GGS_projectIndexingDescriptorList & inOperand4,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_galgasGUIComponentListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasGUIComponentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE galgasScanner_33_
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_galgasScanner_33_ : public cToken {
  public: BigSigned mLexicalAttribute_bigintValue ;
  public: utf32 mLexicalAttribute_charValue ;
  public: double mLexicalAttribute_floatValue ;
  public: String mLexicalAttribute_identifierString ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_galgasScanner_33_ (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_galgasScanner_33_ : public Lexique {
//--- Constructors
  public: Lexique_galgasScanner_33_ (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_galgasScanner_33_ (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_galgasScanner_33_ (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_double_2E_xxx = 2 ;
  public: static const int32_t kToken_literalInt = 3 ;
  public: static const int32_t kToken__27_char_27_ = 4 ;
  public: static const int32_t kToken__24_terminal_24_ = 5 ;
  public: static const int32_t kToken_comment = 6 ;
  public: static const int32_t kToken_commentMark = 7 ;
  public: static const int32_t kToken__40_type = 8 ;
  public: static const int32_t kToken__3F_selector_3A_ = 9 ;
  public: static const int32_t kToken__3F_ = 10 ;
  public: static const int32_t kToken__3F__21_selector_3A_ = 11 ;
  public: static const int32_t kToken__3F__21_ = 12 ;
  public: static const int32_t kToken__21_selector_3A_ = 13 ;
  public: static const int32_t kToken__21_ = 14 ;
  public: static const int32_t kToken__21__3F_selector_3A_ = 15 ;
  public: static const int32_t kToken__21__3F_ = 16 ;
  public: static const int32_t kToken__3C_ = 17 ;
  public: static const int32_t kToken__3C__3D_ = 18 ;
  public: static const int32_t kToken__3C__3C_ = 19 ;
  public: static const int32_t kToken__3C_non_5F_terminal_3E_ = 20 ;
  public: static const int32_t kToken__22_string_22_ = 21 ;
  public: static const int32_t kToken_abstract = 22 ;
  public: static const int32_t kToken_after = 23 ;
  public: static const int32_t kToken_as = 24 ;
  public: static const int32_t kToken_bang = 25 ;
  public: static const int32_t kToken_before = 26 ;
  public: static const int32_t kToken_between = 27 ;
  public: static const int32_t kToken_block = 28 ;
  public: static const int32_t kToken_boolset = 29 ;
  public: static const int32_t kToken_case = 30 ;
  public: static const int32_t kToken_class = 31 ;
  public: static const int32_t kToken_default = 32 ;
  public: static const int32_t kToken_dict = 33 ;
  public: static const int32_t kToken_do = 34 ;
  public: static const int32_t kToken_drop = 35 ;
  public: static const int32_t kToken_else = 36 ;
  public: static const int32_t kToken_elsif = 37 ;
  public: static const int32_t kToken_end = 38 ;
  public: static const int32_t kToken_enum = 39 ;
  public: static const int32_t kToken_error = 40 ;
  public: static const int32_t kToken_extension = 41 ;
  public: static const int32_t kToken_extern = 42 ;
  public: static const int32_t kToken_false = 43 ;
  public: static const int32_t kToken_fileprivate = 44 ;
  public: static const int32_t kToken_filewrapper = 45 ;
  public: static const int32_t kToken_for = 46 ;
  public: static const int32_t kToken_final = 47 ;
  public: static const int32_t kToken_fixit = 48 ;
  public: static const int32_t kToken_func = 49 ;
  public: static const int32_t kToken_getter = 50 ;
  public: static const int32_t kToken_grammar = 51 ;
  public: static const int32_t kToken_graph = 52 ;
  public: static const int32_t kToken_guard = 53 ;
  public: static const int32_t kToken_gui = 54 ;
  public: static const int32_t kToken_if = 55 ;
  public: static const int32_t kToken_in = 56 ;
  public: static const int32_t kToken_indexing = 57 ;
  public: static const int32_t kToken_init = 58 ;
  public: static const int32_t kToken_insert = 59 ;
  public: static const int32_t kToken_is = 60 ;
  public: static const int32_t kToken_json = 61 ;
  public: static const int32_t kToken_label = 62 ;
  public: static const int32_t kToken_let = 63 ;
  public: static const int32_t kToken_lexique = 64 ;
  public: static const int32_t kToken_list = 65 ;
  public: static const int32_t kToken_log = 66 ;
  public: static const int32_t kToken_loop = 67 ;
  public: static const int32_t kToken_map = 68 ;
  public: static const int32_t kToken_message = 69 ;
  public: static const int32_t kToken_method = 70 ;
  public: static const int32_t kToken_mod = 71 ;
  public: static const int32_t kToken_mutating = 72 ;
  public: static const int32_t kToken_nil = 73 ;
  public: static const int32_t kToken_not = 74 ;
  public: static const int32_t kToken_on = 75 ;
  public: static const int32_t kToken_operator = 76 ;
  public: static const int32_t kToken_option = 77 ;
  public: static const int32_t kToken_or = 78 ;
  public: static const int32_t kToken_override = 79 ;
  public: static const int32_t kToken_parse = 80 ;
  public: static const int32_t kToken_public = 81 ;
  public: static const int32_t kToken_protected = 82 ;
  public: static const int32_t kToken_private = 83 ;
  public: static const int32_t kToken_proc = 84 ;
  public: static const int32_t kToken_project = 85 ;
  public: static const int32_t kToken_remove = 86 ;
  public: static const int32_t kToken_repeat = 87 ;
  public: static const int32_t kToken_replace = 88 ;
  public: static const int32_t kToken_rewind = 89 ;
  public: static const int32_t kToken_rule = 90 ;
  public: static const int32_t kToken_search = 91 ;
  public: static const int32_t kToken_select = 92 ;
  public: static const int32_t kToken_self = 93 ;
  public: static const int32_t kToken_send = 94 ;
  public: static const int32_t kToken_setter = 95 ;
  public: static const int32_t kToken_sortedlist = 96 ;
  public: static const int32_t kToken_spoil = 97 ;
  public: static const int32_t kToken_struct = 98 ;
  public: static const int32_t kToken_style = 99 ;
  public: static const int32_t kToken_super = 100 ;
  public: static const int32_t kToken_switch = 101 ;
  public: static const int32_t kToken_syntax = 102 ;
  public: static const int32_t kToken_tag = 103 ;
  public: static const int32_t kToken_template = 104 ;
  public: static const int32_t kToken_then = 105 ;
  public: static const int32_t kToken_true = 106 ;
  public: static const int32_t kToken_typealias = 107 ;
  public: static const int32_t kToken_unused = 108 ;
  public: static const int32_t kToken_var = 109 ;
  public: static const int32_t kToken_warning = 110 ;
  public: static const int32_t kToken_weak = 111 ;
  public: static const int32_t kToken_while = 112 ;
  public: static const int32_t kToken_with = 113 ;
  public: static const int32_t kToken__25_applicationBundleBase = 114 ;
  public: static const int32_t kToken__25_clonable = 115 ;
  public: static const int32_t kToken__25_codeblocks_2D_linux_33__32_ = 116 ;
  public: static const int32_t kToken__25_codeblocks_2D_linux_36__34_ = 117 ;
  public: static const int32_t kToken__25_codeblocks_2D_windows = 118 ;
  public: static const int32_t kToken__25_comparable = 119 ;
  public: static const int32_t kToken__25_equatable = 120 ;
  public: static const int32_t kToken__25_from = 121 ;
  public: static const int32_t kToken__25_generatedInSeparateFile = 122 ;
  public: static const int32_t kToken__25_initArgLabel = 123 ;
  public: static const int32_t kToken__25_libpmAtPath = 124 ;
  public: static const int32_t kToken__25_MacSwiftApp = 125 ;
  public: static const int32_t kToken__25_macCodeSign = 126 ;
  public: static const int32_t kToken__25_makefile_2D_macosx = 127 ;
  public: static const int32_t kToken__25_makefile_2D_unix = 128 ;
  public: static const int32_t kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx = 129 ;
  public: static const int32_t kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx = 130 ;
  public: static const int32_t kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx = 131 ;
  public: static const int32_t kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx = 132 ;
  public: static const int32_t kToken__25_nonAtomicSelection = 133 ;
  public: static const int32_t kToken__25_once = 134 ;
  public: static const int32_t kToken__25_preserved = 135 ;
  public: static const int32_t kToken__25_quietOutputByDefault = 136 ;
  public: static const int32_t kToken__25_searchSubscript = 137 ;
  public: static const int32_t kToken__25_templateEndMark = 138 ;
  public: static const int32_t kToken__25_translate = 139 ;
  public: static const int32_t kToken__25_usefull = 140 ;
  public: static const int32_t kToken__2A_ = 141 ;
  public: static const int32_t kToken__2C_ = 142 ;
  public: static const int32_t kToken__2B_ = 143 ;
  public: static const int32_t kToken__26__2B_ = 144 ;
  public: static const int32_t kToken__26__2D_ = 145 ;
  public: static const int32_t kToken__26__2A_ = 146 ;
  public: static const int32_t kToken__26__2F_ = 147 ;
  public: static const int32_t kToken__3E_ = 148 ;
  public: static const int32_t kToken__3B_ = 149 ;
  public: static const int32_t kToken__3A_ = 150 ;
  public: static const int32_t kToken__3A__3E_ = 151 ;
  public: static const int32_t kToken__2D_ = 152 ;
  public: static const int32_t kToken__28_ = 153 ;
  public: static const int32_t kToken__29_ = 154 ;
  public: static const int32_t kToken__2D__3E_ = 155 ;
  public: static const int32_t kToken__3D__3D_ = 156 ;
  public: static const int32_t kToken__3D_ = 157 ;
  public: static const int32_t kToken__26__26_ = 158 ;
  public: static const int32_t kToken__5B_ = 159 ;
  public: static const int32_t kToken__5D_ = 160 ;
  public: static const int32_t kToken__2B__2B__3D_ = 161 ;
  public: static const int32_t kToken__2E_ = 162 ;
  public: static const int32_t kToken__2E__2E__2E_ = 163 ;
  public: static const int32_t kToken__2E__2E__3C_ = 164 ;
  public: static const int32_t kToken__40__7B_ = 165 ;
  public: static const int32_t kToken__40__28_ = 166 ;
  public: static const int32_t kToken__40__5B_ = 167 ;
  public: static const int32_t kToken__2B__3D_ = 168 ;
  public: static const int32_t kToken__2D__3D_ = 169 ;
  public: static const int32_t kToken__2A__3D_ = 170 ;
  public: static const int32_t kToken__2F__3D_ = 171 ;
  public: static const int32_t kToken__26__3D_ = 172 ;
  public: static const int32_t kToken__7C__3D_ = 173 ;
  public: static const int32_t kToken__5E__3D_ = 174 ;
  public: static const int32_t kToken__2F_ = 175 ;
  public: static const int32_t kToken__21__3D_ = 176 ;
  public: static const int32_t kToken__3E__3D_ = 177 ;
  public: static const int32_t kToken__26_ = 178 ;
  public: static const int32_t kToken__7B_ = 179 ;
  public: static const int32_t kToken__7D_ = 180 ;
  public: static const int32_t kToken__60_ = 181 ;
  public: static const int32_t kToken__7C__7C_ = 182 ;
  public: static const int32_t kToken__7C_ = 183 ;
  public: static const int32_t kToken__5E_ = 184 ;
  public: static const int32_t kToken__3E__3E_ = 185 ;
  public: static const int32_t kToken__7E_ = 186 ;
  public: static const int32_t kToken__3D__3D__3D_ = 187 ;
  public: static const int32_t kToken__21__3D__3D_ = 188 ;
  public: static const int32_t kToken__3F__5E_ = 189 ;
  public: static const int32_t kToken__21__5E_ = 190 ;

//--- Key words table 'galgasKeyWordList'
  public: static int32_t search_into_galgasKeyWordList (const String & inSearchedString) ;

//--- Key words table 'attributeKeyWordList'
  public: static int32_t search_into_attributeKeyWordList (const String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public: static int32_t search_into_galgasDelimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_ldouble synthetizedAttribute_floatValue (void) const ;
  public: GGS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: BigSigned attributeValue_bigintValue (void) const ;
  public: utf32 attributeValue_charValue (void) const ;
  public: double attributeValue_floatValue (void) const ;
  public: String attributeValue_identifierString (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys
public: static const uint32_t kIndexing_classDefinition = 0 ;
public: static const uint32_t kIndexing_enumDefinition = 1 ;
public: static const uint32_t kIndexing_structDefinition = 2 ;
public: static const uint32_t kIndexing_listDefinition = 3 ;
public: static const uint32_t kIndexing_sortedListDefinition = 4 ;
public: static const uint32_t kIndexing_mapDefinition = 5 ;
public: static const uint32_t kIndexing_dictionaryDefinition = 6 ;
public: static const uint32_t kIndexing_externTypeDefinition = 7 ;
public: static const uint32_t kIndexing_filewrapperDefinition = 8 ;
public: static const uint32_t kIndexing_filewrapperReference = 9 ;
public: static const uint32_t kIndexing_graphDefinition = 10 ;
public: static const uint32_t kIndexing_classReferencedAsSuperClass = 11 ;
public: static const uint32_t kIndexing_typeReferenceInConstructor = 12 ;
public: static const uint32_t kIndexing_typeReferenceInTypeMethod = 13 ;
public: static const uint32_t kIndexing_routineDefinition = 14 ;
public: static const uint32_t kIndexing_routineCall = 15 ;
public: static const uint32_t kIndexing_functionDefinition = 16 ;
public: static const uint32_t kIndexing_functionCall = 17 ;
public: static const uint32_t kIndexing_terminalDeclaration = 18 ;
public: static const uint32_t kIndexing_terminalReference = 19 ;
public: static const uint32_t kIndexing_ruleDefinition = 20 ;
public: static const uint32_t kIndexing_ruleReference = 21 ;
public: static const uint32_t kIndexing_abstractExtensionSetterDefinition = 22 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionSetter = 23 ;
public: static const uint32_t kIndexing_overrideabstractExtensionSetterDefinition = 24 ;
public: static const uint32_t kIndexing_extensionSetterDefinition = 25 ;
public: static const uint32_t kIndexing_typeReferenceExtensionSetter = 26 ;
public: static const uint32_t kIndexing_overrideExtensionSetterDefinition = 27 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionSetterDefinition = 28 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionSetter = 29 ;
public: static const uint32_t kIndexing_abstractExtensionMethodDefinition = 30 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionMethod = 31 ;
public: static const uint32_t kIndexing_overrideAbstractExtensionMethodDefinition = 32 ;
public: static const uint32_t kIndexing_extensionMethodDefinition = 33 ;
public: static const uint32_t kIndexing_typeReferenceExtensionMethod = 34 ;
public: static const uint32_t kIndexing_overrideExtensionMethodDefinition = 35 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionMethodDefinition = 36 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionMethod = 37 ;
public: static const uint32_t kIndexing_abstractExtensionGetterDefinition = 38 ;
public: static const uint32_t kIndexing_typeReferenceAbstractExtensionGetter = 39 ;
public: static const uint32_t kIndexing_overrideAbstractExtensionGetterDefinition = 40 ;
public: static const uint32_t kIndexing_typeReferenceOverrideAbstractExtensionGetter = 41 ;
public: static const uint32_t kIndexing_extensionGetterDefinition = 42 ;
public: static const uint32_t kIndexing_typeReferenceExtensionGetter = 43 ;
public: static const uint32_t kIndexing_overrideExtensionGetterDefinition = 44 ;
public: static const uint32_t kIndexing_typeReferenceOverrideExtensionGetter = 45 ;
public: static const uint32_t kIndexing_optionComponentDefinition = 46 ;
public: static const uint32_t kIndexing_optionComponentReference = 47 ;
public: static const uint32_t kIndexing_grammarComponentDefinition = 48 ;
public: static const uint32_t kIndexing_grammarComponentReference = 49 ;
public: static const uint32_t kIndexing_indexingNameDefinition = 50 ;
public: static const uint32_t kIndexing_indexingNameReference = 51 ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_galgasScanner_33_ & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 190 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_galgasScanner_33_ & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

