#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_switchInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_switchInstructionAST_2E_weak (const class GGS_switchInstructionAST & inSource) ;

  public: GGS_switchInstructionAST_2E_weak & operator = (const class GGS_switchInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_switchInstructionAST_2E_weak init_nil (void) {
    GGS_switchInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_switchInstructionAST bang_switchInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_switchInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_switchInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extractedAssociatedValuesForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_extractedAssociatedValuesForGeneration final {
  public: DownEnumerator_extractedAssociatedValuesForGeneration (const class GGS_extractedAssociatedValuesForGeneration & inList) ;

  public: ~ DownEnumerator_extractedAssociatedValuesForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GGS_string current_name (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extractedAssociatedValuesForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_extractedAssociatedValuesForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extractedAssociatedValuesForGeneration (const DownEnumerator_extractedAssociatedValuesForGeneration &) = delete ;
  private: DownEnumerator_extractedAssociatedValuesForGeneration & operator = (const DownEnumerator_extractedAssociatedValuesForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extractedAssociatedValuesForGeneration final {
  public: UpEnumerator_extractedAssociatedValuesForGeneration (const class GGS_extractedAssociatedValuesForGeneration & inList)  ;

  public: ~ UpEnumerator_extractedAssociatedValuesForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GGS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GGS_string current_name (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extractedAssociatedValuesForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_extractedAssociatedValuesForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extractedAssociatedValuesForGeneration (const UpEnumerator_extractedAssociatedValuesForGeneration &) = delete ;
  private: UpEnumerator_extractedAssociatedValuesForGeneration & operator = (const UpEnumerator_extractedAssociatedValuesForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @extractedAssociatedValuesForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_extractedAssociatedValuesForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_extractedAssociatedValuesForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_extractedAssociatedValuesForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_extractedAssociatedValuesForGeneration (void) = default ;

//--- Copy
  public: GGS_extractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration &) = default ;
  public: GGS_extractedAssociatedValuesForGeneration & operator = (const GGS_extractedAssociatedValuesForGeneration &) = default ;

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
  public : inline GenericArray <GGS_extractedAssociatedValuesForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_extractedAssociatedValuesForGeneration subList (const int32_t inStart,
                                                               const int32_t inLength,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_extractedAssociatedValuesForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_unifiedTypeMapEntry & in_mType,
                                                 const class GGS_string & in_mCppName,
                                                 const class GGS_string & in_name
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extractedAssociatedValuesForGeneration init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extractedAssociatedValuesForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extractedAssociatedValuesForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_extractedAssociatedValuesForGeneration class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                            const class GGS_string & inOperand1,
                                                                                            const class GGS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_extractedAssociatedValuesForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_extractedAssociatedValuesForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_extractedAssociatedValuesForGeneration add_operation (const GGS_extractedAssociatedValuesForGeneration & inOperand,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GGS_string constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNameAtIndex (class GGS_string constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_nameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extractedAssociatedValuesForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extractedAssociatedValuesForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extractedAssociatedValuesForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extractedAssociatedValuesForGeneration ;
  friend class DownEnumerator_extractedAssociatedValuesForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extractedAssociatedValuesForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extractedAssociatedValuesForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_string mProperty_mCppName ;
  public: inline GGS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

  public: GGS_string mProperty_name ;
  public: inline GGS_string readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extractedAssociatedValuesForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

  public: inline void setter_setName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extractedAssociatedValuesForGeneration_2E_element (const GGS_unifiedTypeMapEntry & in_mType,
                                                                 const GGS_string & in_mCppName,
                                                                 const GGS_string & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_extractedAssociatedValuesForGeneration_2E_element (const GGS_extractedAssociatedValuesForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extractedAssociatedValuesForGeneration_2E_element & operator = (const GGS_extractedAssociatedValuesForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extractedAssociatedValuesForGeneration_2E_element init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                         const class GGS_string & inOperand1,
                                                                                         const class GGS_string & inOperand2,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extractedAssociatedValuesForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extractedAssociatedValuesForGeneration_2E_element class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                             const class GGS_string & inOperand1,
                                                                                             const class GGS_string & inOperand2,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchBranchesForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_switchBranchesForGeneration final {
  public: DownEnumerator_switchBranchesForGeneration (const class GGS_switchBranchesForGeneration & inList) ;

  public: ~ DownEnumerator_switchBranchesForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__5B_lstring_5D_ current_mSwitchConstantList (LOCATION_ARGS) const ;
  public: class GGS_extractedAssociatedValuesForGeneration current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mEndOfBranchLocationIndex (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_mInstructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchBranchesForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchBranchesForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_switchBranchesForGeneration (const DownEnumerator_switchBranchesForGeneration &) = delete ;
  private: DownEnumerator_switchBranchesForGeneration & operator = (const DownEnumerator_switchBranchesForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_switchBranchesForGeneration final {
  public: UpEnumerator_switchBranchesForGeneration (const class GGS_switchBranchesForGeneration & inList)  ;

  public: ~ UpEnumerator_switchBranchesForGeneration (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__5B_lstring_5D_ current_mSwitchConstantList (LOCATION_ARGS) const ;
  public: class GGS_extractedAssociatedValuesForGeneration current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const ;
  public: class GGS_uint current_mEndOfBranchLocationIndex (LOCATION_ARGS) const ;
  public: class GGS_semanticInstructionListForGeneration current_mInstructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchBranchesForGeneration_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchBranchesForGeneration_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_switchBranchesForGeneration (const UpEnumerator_switchBranchesForGeneration &) = delete ;
  private: UpEnumerator_switchBranchesForGeneration & operator = (const UpEnumerator_switchBranchesForGeneration &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @switchBranchesForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_switchBranchesForGeneration : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_switchBranchesForGeneration_2E_element> mArray ;

//--- Default constructor
  public: GGS_switchBranchesForGeneration (void) ;

//--- Destructor
  public: virtual ~ GGS_switchBranchesForGeneration (void) = default ;

//--- Copy
  public: GGS_switchBranchesForGeneration (const GGS_switchBranchesForGeneration &) = default ;
  public: GGS_switchBranchesForGeneration & operator = (const GGS_switchBranchesForGeneration &) = default ;

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
  public : inline GenericArray <GGS_switchBranchesForGeneration_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_switchBranchesForGeneration subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_switchBranchesForGeneration (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                 const class GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                 const class GGS_uint & in_mEndOfBranchLocationIndex,
                                                 const class GGS_semanticInstructionListForGeneration & in_mInstructions
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchBranchesForGeneration init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchBranchesForGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchBranchesForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_switchBranchesForGeneration class_func_listWithValue (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                 const class GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                 const class GGS_uint & inOperand2,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_switchBranchesForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS__5B_lstring_5D_ & inOperand0,
                                                    const class GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                    const class GGS_uint & inOperand2,
                                                    const class GGS_semanticInstructionListForGeneration & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_switchBranchesForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_switchBranchesForGeneration add_operation (const GGS_switchBranchesForGeneration & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS__5B_lstring_5D_ constinArgument0,
                                               class GGS_extractedAssociatedValuesForGeneration constinArgument1,
                                               class GGS_uint constinArgument2,
                                               class GGS_semanticInstructionListForGeneration constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS__5B_lstring_5D_ constinArgument0,
                                                      class GGS_extractedAssociatedValuesForGeneration constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      class GGS_semanticInstructionListForGeneration constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS__5B_lstring_5D_ & outArgument0,
                                                 class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                                 class GGS_uint & outArgument2,
                                                 class GGS_semanticInstructionListForGeneration & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS__5B_lstring_5D_ & outArgument0,
                                                class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                                class GGS_uint & outArgument2,
                                                class GGS_semanticInstructionListForGeneration & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS__5B_lstring_5D_ & outArgument0,
                                                      class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                                      class GGS_uint & outArgument2,
                                                      class GGS_semanticInstructionListForGeneration & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBranchLocationIndexAtIndex (class GGS_uint constinArgument0,
                                                                            class GGS_uint constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtractedAssociatedValuesForGenerationAtIndex (class GGS_extractedAssociatedValuesForGeneration constinArgument0,
                                                                                          class GGS_uint constinArgument1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionsAtIndex (class GGS_semanticInstructionListForGeneration constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSwitchConstantListAtIndex (class GGS__5B_lstring_5D_ constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS__5B_lstring_5D_ & outArgument0,
                                              class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                              class GGS_uint & outArgument2,
                                              class GGS_semanticInstructionListForGeneration & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS__5B_lstring_5D_ & outArgument0,
                                             class GGS_extractedAssociatedValuesForGeneration & outArgument1,
                                             class GGS_uint & outArgument2,
                                             class GGS_semanticInstructionListForGeneration & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mEndOfBranchLocationIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_extractedAssociatedValuesForGeneration getter_mExtractedAssociatedValuesForGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_mInstructionsAtIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__5B_lstring_5D_ getter_mSwitchConstantListAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_switchBranchesForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_switchBranchesForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_switchBranchesForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_switchBranchesForGeneration ;
  friend class DownEnumerator_switchBranchesForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchBranchesForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_switchBranchesForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__5B_lstring_5D_ mProperty_mSwitchConstantList ;
  public: inline GGS__5B_lstring_5D_ readProperty_mSwitchConstantList (void) const {
    return mProperty_mSwitchConstantList ;
  }

  public: GGS_extractedAssociatedValuesForGeneration mProperty_mExtractedAssociatedValuesForGeneration ;
  public: inline GGS_extractedAssociatedValuesForGeneration readProperty_mExtractedAssociatedValuesForGeneration (void) const {
    return mProperty_mExtractedAssociatedValuesForGeneration ;
  }

  public: GGS_uint mProperty_mEndOfBranchLocationIndex ;
  public: inline GGS_uint readProperty_mEndOfBranchLocationIndex (void) const {
    return mProperty_mEndOfBranchLocationIndex ;
  }

  public: GGS_semanticInstructionListForGeneration mProperty_mInstructions ;
  public: inline GGS_semanticInstructionListForGeneration readProperty_mInstructions (void) const {
    return mProperty_mInstructions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_switchBranchesForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSwitchConstantList (const GGS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSwitchConstantList = inValue ;
  }

  public: inline void setter_setMExtractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedAssociatedValuesForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfBranchLocationIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranchLocationIndex = inValue ;
  }

  public: inline void setter_setMInstructions (const GGS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructions = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchBranchesForGeneration_2E_element (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                      const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                      const GGS_uint & in_mEndOfBranchLocationIndex,
                                                      const GGS_semanticInstructionListForGeneration & in_mInstructions) ;

//--------------------------------- Copy constructor
  public: GGS_switchBranchesForGeneration_2E_element (const GGS_switchBranchesForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchBranchesForGeneration_2E_element & operator = (const GGS_switchBranchesForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchBranchesForGeneration_2E_element init_21__21__21__21_ (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                  const class GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                  const class GGS_uint & inOperand2,
                                                                                  const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchBranchesForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchBranchesForGeneration_2E_element class_func_new (const class GGS__5B_lstring_5D_ & inOperand0,
                                                                                  const class GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                  const class GGS_uint & inOperand2,
                                                                                  const class GGS_semanticInstructionListForGeneration & inOperand3,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_switchInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_switchInstructionForGeneration (const class cPtr_switchInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mEnumType (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSwitchExpression (void) const ;

  public: class GGS_switchBranchesForGeneration readProperty_mBranches (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchInstructionForGeneration init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                      const class GGS_switchBranchesForGeneration & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchInstructionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                          const class GGS_switchBranchesForGeneration & inOperand2,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @switchInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_switchInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void switchInstructionForGeneration_init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                const class GGS_switchBranchesForGeneration & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mEnumType ;
  public: GGS_semanticExpressionForGeneration mProperty_mSwitchExpression ;
  public: GGS_switchBranchesForGeneration mProperty_mBranches ;


//--- Default constructor
  public: cPtr_switchInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_switchInstructionForGeneration (const GGS_unifiedTypeMapEntry & in_mEnumType,
                                               const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                                               const GGS_switchBranchesForGeneration & in_mBranches,
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
// Phase 1: @switchInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_switchInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_switchInstructionForGeneration_2E_weak (const class GGS_switchInstructionForGeneration & inSource) ;

  public: GGS_switchInstructionForGeneration_2E_weak & operator = (const class GGS_switchInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_switchInstructionForGeneration_2E_weak init_nil (void) {
    GGS_switchInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_switchInstructionForGeneration bang_switchInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_switchInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_switchInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superMethodCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superMethodCallInstructionAST_2E_weak (const class GGS_superMethodCallInstructionAST & inSource) ;

  public: GGS_superMethodCallInstructionAST_2E_weak & operator = (const class GGS_superMethodCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superMethodCallInstructionAST_2E_weak init_nil (void) {
    GGS_superMethodCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superMethodCallInstructionAST bang_superMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superMethodCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_superMethodCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superMethodCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superMethodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superMethodCallInstructionForGeneration (const class cPtr_superMethodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mMethodName (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mBaseType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superMethodCallInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superMethodCallInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superMethodCallInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                   const class GGS_bool & inOperand3,
                                                                                   const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @superMethodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_superMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void superMethodCallInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_string & inOperand1,
                                                                                 const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mMethodName ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: GGS_unifiedTypeMapEntry mProperty_mBaseType ;


//--- Default constructor
  public: cPtr_superMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superMethodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                        const GGS_string & in_mMethodName,
                                                        const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                        const GGS_bool & in_mHasCompilerArgument,
                                                        const GGS_unifiedTypeMapEntry & in_mBaseType,
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
// Phase 1: @superMethodCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superMethodCallInstructionForGeneration_2E_weak (const class GGS_superMethodCallInstructionForGeneration & inSource) ;

  public: GGS_superMethodCallInstructionForGeneration_2E_weak & operator = (const class GGS_superMethodCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superMethodCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_superMethodCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superMethodCallInstructionForGeneration bang_superMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superMethodCallInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_superMethodCallInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superMethodCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithoutVariantAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithoutVariantAST_2E_weak (const class GGS_loopInstructionWithoutVariantAST & inSource) ;

  public: GGS_loopInstructionWithoutVariantAST_2E_weak & operator = (const class GGS_loopInstructionWithoutVariantAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithoutVariantAST_2E_weak init_nil (void) {
    GGS_loopInstructionWithoutVariantAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithoutVariantAST bang_loopInstructionWithoutVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithoutVariantAST unwrappedValue (void) const ;

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
  public: static GGS_loopInstructionWithoutVariantAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithoutVariantAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithoutVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithoutVariantForGeneration (const class cPtr_loopInstructionWithoutVariantForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mFirstInstructions (void) const ;

  public: class GGS_ifTestListForGeneration readProperty_mLoopExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSecondInstructions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithoutVariantForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand1,
                                                                                      const class GGS_ifTestListForGeneration & inOperand2,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithoutVariantForGeneration extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithoutVariantForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand1,
                                                                                      const class GGS_ifTestListForGeneration & inOperand2,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithoutVariantForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithoutVariantForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithoutVariantForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_semanticInstructionListForGeneration & inOperand1,
                                                                                const class GGS_ifTestListForGeneration & inOperand2,
                                                                                const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_semanticInstructionListForGeneration mProperty_mFirstInstructions ;
  public: GGS_ifTestListForGeneration mProperty_mLoopExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSecondInstructions ;


//--- Default constructor
  public: cPtr_loopInstructionWithoutVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithoutVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                           const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                           const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                           const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
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
// Phase 1: @loopInstructionWithoutVariantForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithoutVariantForGeneration_2E_weak (const class GGS_loopInstructionWithoutVariantForGeneration & inSource) ;

  public: GGS_loopInstructionWithoutVariantForGeneration_2E_weak & operator = (const class GGS_loopInstructionWithoutVariantForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithoutVariantForGeneration_2E_weak init_nil (void) {
    GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithoutVariantForGeneration bang_loopInstructionWithoutVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithoutVariantForGeneration unwrappedValue (void) const ;

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
  public: static GGS_loopInstructionWithoutVariantForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithoutVariantForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeMethodCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeMethodCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeMethodCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeMethodCallInstructionAST_2E_weak (const class GGS_typeMethodCallInstructionAST & inSource) ;

  public: GGS_typeMethodCallInstructionAST_2E_weak & operator = (const class GGS_typeMethodCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typeMethodCallInstructionAST_2E_weak init_nil (void) {
    GGS_typeMethodCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typeMethodCallInstructionAST bang_typeMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typeMethodCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_typeMethodCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeMethodCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeMethodCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeMethodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeMethodCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_typeMethodCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typeMethodCallInstructionForGeneration (const class cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mMethodName (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeMethodCallInstructionForGeneration init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeMethodCallInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeMethodCallInstructionForGeneration class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                  const class GGS_bool & inOperand3,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typeMethodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_typeMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typeMethodCallInstructionForGeneration_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_actualParameterListForGeneration & inOperand2,
                                                                            const class GGS_bool & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mMethodName ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;


//--- Default constructor
  public: cPtr_typeMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typeMethodCallInstructionForGeneration (const GGS_lstring & in_mTypeName,
                                                       const GGS_lstring & in_mMethodName,
                                                       const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                       const GGS_bool & in_mHasCompilerArgument,
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
// Phase 1: @typeMethodCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeMethodCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeMethodCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeMethodCallInstructionForGeneration_2E_weak (const class GGS_typeMethodCallInstructionForGeneration & inSource) ;

  public: GGS_typeMethodCallInstructionForGeneration_2E_weak & operator = (const class GGS_typeMethodCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typeMethodCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_typeMethodCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typeMethodCallInstructionForGeneration bang_typeMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typeMethodCallInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_typeMethodCallInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeMethodCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeMethodCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementAST_2E_fixItInsertAfter struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertAfter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_errorLocation ;
  public: inline GGS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_semanticExpressionAST & in_exp,
                                                   const GGS_location & in_errorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementAST_2E_fixItInsertAfter & operator = (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementAST_2E_fixItInsertAfter init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItInsertAfter extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementAST_2E_fixItInsertAfter class_func_new (const class GGS_semanticExpressionAST & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementAST.fixItInsertAfter? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertAfter_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementAST_2E_fixItInsertAfter mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementAST_2E_fixItInsertAfter_3F_ (const GGS_fixitElementAST_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementAST_2E_fixItInsertAfter_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementAST_2E_fixItInsertAfter unwrappedValue (void) const {
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
  public: static GGS_fixitElementAST_2E_fixItInsertAfter_3F_ extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementAST_2E_fixItInsertBefore struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertBefore : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_errorLocation ;
  public: inline GGS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_semanticExpressionAST & in_exp,
                                                    const GGS_location & in_errorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementAST_2E_fixItInsertBefore & operator = (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementAST_2E_fixItInsertBefore init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                        const class GGS_location & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItInsertBefore extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementAST_2E_fixItInsertBefore class_func_new (const class GGS_semanticExpressionAST & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementAST.fixItInsertBefore? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItInsertBefore_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementAST_2E_fixItInsertBefore mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementAST_2E_fixItInsertBefore_3F_ (const GGS_fixitElementAST_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementAST_2E_fixItInsertBefore_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementAST_2E_fixItInsertBefore unwrappedValue (void) const {
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
  public: static GGS_fixitElementAST_2E_fixItInsertBefore_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementAST_2E_fixItReplace struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItReplace : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_errorLocation ;
  public: inline GGS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItReplace (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementAST_2E_fixItReplace (const GGS_semanticExpressionAST & in_exp,
                                               const GGS_location & in_errorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementAST_2E_fixItReplace (const GGS_fixitElementAST_2E_fixItReplace & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementAST_2E_fixItReplace & operator = (const GGS_fixitElementAST_2E_fixItReplace & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementAST_2E_fixItReplace init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementAST_2E_fixItReplace extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementAST_2E_fixItReplace class_func_new (const class GGS_semanticExpressionAST & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementAST.fixItReplace? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementAST_2E_fixItReplace_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementAST_2E_fixItReplace mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementAST_2E_fixItReplace_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementAST_2E_fixItReplace_3F_ (const GGS_fixitElementAST_2E_fixItReplace & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementAST_2E_fixItReplace_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementAST_2E_fixItReplace unwrappedValue (void) const {
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
  public: static GGS_fixitElementAST_2E_fixItReplace_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @errorInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_errorInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_errorInstructionAST_2E_weak (const class GGS_errorInstructionAST & inSource) ;

  public: GGS_errorInstructionAST_2E_weak & operator = (const class GGS_errorInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_errorInstructionAST_2E_weak init_nil (void) {
    GGS_errorInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_errorInstructionAST bang_errorInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_errorInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_errorInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const class GGS_fixitListAST inObject,
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
// Phase 1: @fixitElementForGeneration_2E_fixItInsertAfter struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertAfter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter & operator = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration_2E_fixItInsertAfter class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementForGeneration.fixItInsertAfter? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItInsertAfter mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItInsertAfter unwrappedValue (void) const {
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
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementForGeneration_2E_fixItInsertBefore struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertBefore : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore & operator = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration_2E_fixItInsertBefore class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementForGeneration.fixItInsertBefore? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItInsertBefore mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItInsertBefore unwrappedValue (void) const {
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
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementForGeneration_2E_fixItReplace struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItReplace : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementForGeneration_2E_fixItReplace & operator = (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItReplace init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItReplace extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration_2E_fixItReplace class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementForGeneration.fixItReplace? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItReplace_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItReplace mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItReplace_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItReplace unwrappedValue (void) const {
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
  public: static GGS_fixitElementForGeneration_2E_fixItReplace_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const class GGS_fixitListForGeneration inObject,
                                    class GGS_stringset & io_ioInclusionSet,
                                    class GGS_uint & io_ioTemporaryVariableIndex,
                                    class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                    const class GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                    class GGS_string & io_ioGeneratedCode,
                                    class GGS_string & out_outFixItArrayCppName,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @errorInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_errorInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_errorInstructionForGeneration (const class cPtr_errorInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mErrorExpression (void) const ;

  public: class GGS_stringlist readProperty_mBuiltVariableCppNameList (void) const ;

  public: class GGS_fixitListForGeneration readProperty_mFixitListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_errorInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GGS_stringlist & inOperand3,
                                                                             const class GGS_fixitListForGeneration & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_errorInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                         const class GGS_stringlist & inOperand3,
                                                                         const class GGS_fixitListForGeneration & inOperand4,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @errorInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_errorInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void errorInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                       const class GGS_stringlist & inOperand3,
                                                                       const class GGS_fixitListForGeneration & inOperand4,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mErrorExpression ;
  public: GGS_stringlist mProperty_mBuiltVariableCppNameList ;
  public: GGS_fixitListForGeneration mProperty_mFixitListForGeneration ;


//--- Default constructor
  public: cPtr_errorInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_errorInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                              const GGS_stringlist & in_mBuiltVariableCppNameList,
                                              const GGS_fixitListForGeneration & in_mFixitListForGeneration,
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
// Phase 1: @errorInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_errorInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_errorInstructionForGeneration_2E_weak (const class GGS_errorInstructionForGeneration & inSource) ;

  public: GGS_errorInstructionForGeneration_2E_weak & operator = (const class GGS_errorInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_errorInstructionForGeneration_2E_weak init_nil (void) {
    GGS_errorInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_errorInstructionForGeneration bang_errorInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_errorInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_errorInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @methodCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_methodCallInstructionAST_2E_weak (const class GGS_methodCallInstructionAST & inSource) ;

  public: GGS_methodCallInstructionAST_2E_weak & operator = (const class GGS_methodCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_methodCallInstructionAST_2E_weak init_nil (void) {
    GGS_methodCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_methodCallInstructionAST bang_methodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_methodCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_methodCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_methodCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @methodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_methodCallInstructionForGeneration (const class cPtr_methodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_string readProperty_mMethodName (void) const ;

  public: class GGS_methodKind readProperty_mKind (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mMethodBaseType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_methodCallInstructionForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                              const class GGS_string & inOperand3,
                                                                                              const class GGS_methodKind & inOperand4,
                                                                                              const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                              const class GGS_bool & inOperand6,
                                                                                              const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_methodCallInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_methodCallInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              const class GGS_methodKind & inOperand4,
                                                                              const class GGS_actualParameterListForGeneration & inOperand5,
                                                                              const class GGS_bool & inOperand6,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @methodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_methodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void methodCallInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                        const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                        const class GGS_string & inOperand3,
                                                                                        const class GGS_methodKind & inOperand4,
                                                                                        const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                        const class GGS_bool & inOperand6,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                        Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_string mProperty_mMethodName ;
  public: GGS_methodKind mProperty_mKind ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: GGS_unifiedTypeMapEntry mProperty_mMethodBaseType ;


//--- Default constructor
  public: cPtr_methodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_methodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                   const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                   const GGS_string & in_mMethodName,
                                                   const GGS_methodKind & in_mKind,
                                                   const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                   const GGS_bool & in_mHasCompilerArgument,
                                                   const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
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
// Phase 1: @methodCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_methodCallInstructionForGeneration_2E_weak (const class GGS_methodCallInstructionForGeneration & inSource) ;

  public: GGS_methodCallInstructionForGeneration_2E_weak & operator = (const class GGS_methodCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_methodCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_methodCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_methodCallInstructionForGeneration bang_methodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_methodCallInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_methodCallInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_methodCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableDeclarationWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationWithAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableDeclarationWithAssignmentAST_2E_weak (const class GGS_localVariableDeclarationWithAssignmentAST & inSource) ;

  public: GGS_localVariableDeclarationWithAssignmentAST_2E_weak & operator = (const class GGS_localVariableDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableDeclarationWithAssignmentAST_2E_weak init_nil (void) {
    GGS_localVariableDeclarationWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableDeclarationWithAssignmentAST bang_localVariableDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableDeclarationWithAssignmentAST unwrappedValue (void) const ;

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
  public: static GGS_localVariableDeclarationWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableDeclarationWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableDeclarationNoAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationNoAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationNoAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableDeclarationNoAssignmentAST_2E_weak (const class GGS_localVariableDeclarationNoAssignmentAST & inSource) ;

  public: GGS_localVariableDeclarationNoAssignmentAST_2E_weak & operator = (const class GGS_localVariableDeclarationNoAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableDeclarationNoAssignmentAST_2E_weak init_nil (void) {
    GGS_localVariableDeclarationNoAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableDeclarationNoAssignmentAST bang_localVariableDeclarationNoAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableDeclarationNoAssignmentAST unwrappedValue (void) const ;

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
  public: static GGS_localVariableDeclarationNoAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableDeclarationNoAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localVariableDeclarationForGeneration (const class cPtr_localVariableDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mVariableType (void) const ;

  public: class GGS_string readProperty_mCppVariableName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableDeclarationForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableDeclarationForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GGS_string & inOperand1,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localVariableDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localVariableDeclarationForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mVariableType ;
  public: GGS_string mProperty_mCppVariableName ;


//--- Default constructor
  public: cPtr_localVariableDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localVariableDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                      const GGS_string & in_mCppVariableName,
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
// Phase 1: @localVariableDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableDeclarationForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableDeclarationForGeneration_2E_weak (const class GGS_localVariableDeclarationForGeneration & inSource) ;

  public: GGS_localVariableDeclarationForGeneration_2E_weak & operator = (const class GGS_localVariableDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_localVariableDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableDeclarationForGeneration bang_localVariableDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_localVariableDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionKind_2E_letVarExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_letVarExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_varName ;
  public: inline GGS_lstring readProperty_varName (void) const {
    return mProperty_varName ;
  }

  public: GGS_bool mProperty_isConstant ;
  public: inline GGS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_endOfExp ;
  public: inline GGS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_letVarExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setVarName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_varName = inValue ;
  }

  public: inline void setter_setIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifExpressionKind_2E_letVarExp (const GGS_lstring & in_varName,
                                             const GGS_bool & in_isConstant,
                                             const GGS_semanticExpressionAST & in_exp,
                                             const GGS_location & in_endOfExp,
                                             const GGS_lstring & in_typeName) ;

//--------------------------------- Copy constructor
  public: GGS_ifExpressionKind_2E_letVarExp (const GGS_ifExpressionKind_2E_letVarExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifExpressionKind_2E_letVarExp & operator = (const GGS_ifExpressionKind_2E_letVarExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionKind_2E_letVarExp init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_bool & inOperand1,
                                                                             const class GGS_semanticExpressionAST & inOperand2,
                                                                             const class GGS_location & inOperand3,
                                                                             const class GGS_lstring & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_letVarExp extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionKind_2E_letVarExp class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         const class GGS_semanticExpressionAST & inOperand2,
                                                                         const class GGS_location & inOperand3,
                                                                         const class GGS_lstring & inOperand4,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifExpressionKind.letVarExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_letVarExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifExpressionKind_2E_letVarExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_letVarExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifExpressionKind_2E_letVarExp_3F_ (const GGS_ifExpressionKind_2E_letVarExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifExpressionKind_2E_letVarExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifExpressionKind_2E_letVarExp unwrappedValue (void) const {
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
  public: static GGS_ifExpressionKind_2E_letVarExp_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionKind_2E_regularExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_regularExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_endOfExp ;
  public: inline GGS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_regularExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifExpressionKind_2E_regularExp (const GGS_semanticExpressionAST & in_exp,
                                              const GGS_location & in_endOfExp) ;

//--------------------------------- Copy constructor
  public: GGS_ifExpressionKind_2E_regularExp (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifExpressionKind_2E_regularExp & operator = (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionKind_2E_regularExp init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                  const class GGS_location & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_regularExp extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionKind_2E_regularExp class_func_new (const class GGS_semanticExpressionAST & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifExpressionKind.regularExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_regularExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifExpressionKind_2E_regularExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_regularExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifExpressionKind_2E_regularExp_3F_ (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifExpressionKind_2E_regularExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifExpressionKind_2E_regularExp unwrappedValue (void) const {
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
  public: static GGS_ifExpressionKind_2E_regularExp_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@CommaSeparatedExpressionList enterExpressionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExpressionListInSemanticContext (const class GGS_CommaSeparatedExpressionList inObject,
                                                           class GGS_unifiedTypeMap & io_ioTypeMap,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@CommaSeparatedExpressionList analyzeSemanticExpressionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeSemanticExpressionList (const class GGS_CommaSeparatedExpressionList inObject,
                                                    const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                    class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const class GGS_analysisContext constin_inAnalysisContext,
                                                    class GGS_unifiedTypeMap & io_ioTypeMap,
                                                    class GGS_localVarManager & io_ioVariableMap,
                                                    class GGS_ifTestListForGeneration & out_outTestListForGeneration,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean???!'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean_3F__3F__3F__21_ (const class GGS_analysisContext constinArgument0,
                                                       const class GGS_location constinArgument1,
                                                       const class GGS_semanticExpressionForGeneration constinArgument2,
                                                       class GGS_semanticExpressionForGeneration & outArgument3,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInitializedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (class GGS_localVarManager & ioObject,
                                                     const class GGS_lstring constin_inVarName,
                                                     const class GGS_unifiedTypeMapEntry constin_inType,
                                                     const class GGS_string constin_inCppName,
                                                     const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInitializedLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (class GGS_localVarManager & ioObject,
                                                     const class GGS_lstring constin_inVarName,
                                                     const class GGS_bool constin_inWarnsIfNotMutated,
                                                     const class GGS_unifiedTypeMapEntry constin_inType,
                                                     const class GGS_string constin_inCppName,
                                                     const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GGS_localVarManager & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (class GGS_localVarManager & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestForGeneration_2E_letVarExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_letVarExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_targetVarCppName ;
  public: inline GGS_string readProperty_targetVarCppName (void) const {
    return mProperty_targetVarCppName ;
  }

  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_targetType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_targetType (void) const {
    return mProperty_targetType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_testType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_testType (void) const {
    return mProperty_testType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_letVarExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTargetVarCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetVarCppName = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setTargetType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetType = inValue ;
  }

  public: inline void setter_setTestType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_testType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestForGeneration_2E_letVarExp (const GGS_string & in_targetVarCppName,
                                                const GGS_semanticExpressionForGeneration & in_exp,
                                                const GGS_unifiedTypeMapEntry & in_targetType,
                                                const GGS_unifiedTypeMapEntry & in_testType) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestForGeneration_2E_letVarExp (const GGS_ifTestForGeneration_2E_letVarExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestForGeneration_2E_letVarExp & operator = (const GGS_ifTestForGeneration_2E_letVarExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestForGeneration_2E_letVarExp init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_letVarExp extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestForGeneration_2E_letVarExp class_func_new (const class GGS_string & inOperand0,
                                                                            const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand3,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifTestForGeneration.letVarExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_letVarExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifTestForGeneration_2E_letVarExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_letVarExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifTestForGeneration_2E_letVarExp_3F_ (const GGS_ifTestForGeneration_2E_letVarExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifTestForGeneration_2E_letVarExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifTestForGeneration_2E_letVarExp unwrappedValue (void) const {
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
  public: static GGS_ifTestForGeneration_2E_letVarExp_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestForGeneration_2E_optionalExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_optionalExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_targetVarCppName ;
  public: inline GGS_string readProperty_targetVarCppName (void) const {
    return mProperty_targetVarCppName ;
  }

  public: GGS_bool mProperty_isConstant ;
  public: inline GGS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_targetType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_targetType (void) const {
    return mProperty_targetType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_optionalExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTargetVarCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetVarCppName = inValue ;
  }

  public: inline void setter_setIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setTargetType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestForGeneration_2E_optionalExp (const GGS_string & in_targetVarCppName,
                                                  const GGS_bool & in_isConstant,
                                                  const GGS_semanticExpressionForGeneration & in_exp,
                                                  const GGS_unifiedTypeMapEntry & in_targetType) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestForGeneration_2E_optionalExp (const GGS_ifTestForGeneration_2E_optionalExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestForGeneration_2E_optionalExp & operator = (const GGS_ifTestForGeneration_2E_optionalExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestForGeneration_2E_optionalExp init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_optionalExp extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestForGeneration_2E_optionalExp class_func_new (const class GGS_string & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand3,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifTestForGeneration.optionalExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_optionalExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifTestForGeneration_2E_optionalExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_optionalExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifTestForGeneration_2E_optionalExp_3F_ (const GGS_ifTestForGeneration_2E_optionalExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifTestForGeneration_2E_optionalExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifTestForGeneration_2E_optionalExp unwrappedValue (void) const {
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
  public: static GGS_ifTestForGeneration_2E_optionalExp_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestForGeneration_2E_regular struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_regular : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_regular (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestForGeneration_2E_regular (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestForGeneration_2E_regular (const GGS_ifTestForGeneration_2E_regular & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestForGeneration_2E_regular & operator = (const GGS_ifTestForGeneration_2E_regular & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestForGeneration_2E_regular init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_regular extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestForGeneration_2E_regular class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifTestForGeneration.regular? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_regular_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifTestForGeneration_2E_regular mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_regular_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifTestForGeneration_2E_regular_3F_ (const GGS_ifTestForGeneration_2E_regular & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifTestForGeneration_2E_regular_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifTestForGeneration_2E_regular unwrappedValue (void) const {
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
  public: static GGS_ifTestForGeneration_2E_regular_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ifTestListForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInstruction (const class GGS_ifTestListForGeneration inObject,
                                          class GGS_stringset & io_ioInclusionSet,
                                          class GGS_uint & io_ioTemporaryVariableIndex,
                                          class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                          class GGS_string & io_ioGeneratedCode,
                                          class GGS_string & out_outTestVar,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalCheckInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckInstructionAST_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_terminalCheckInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_terminalCheckInstructionAST_2E_weak (const class GGS_terminalCheckInstructionAST & inSource) ;

  public: GGS_terminalCheckInstructionAST_2E_weak & operator = (const class GGS_terminalCheckInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_terminalCheckInstructionAST_2E_weak init_nil (void) {
    GGS_terminalCheckInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_terminalCheckInstructionAST bang_terminalCheckInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_terminalCheckInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_terminalCheckInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalCheckInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalCheckInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractSyntaxInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractSyntaxInstructionForGrammarAnalysis : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis (const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mStartLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractSyntaxInstructionForGrammarAnalysis init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractSyntaxInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;

#include "separateHeaderFor_abstractSyntaxInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractSyntaxInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) ;

  public: GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis bang_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalCheckInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_terminalCheckInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_terminalCheckInstructionForGeneration (const class cPtr_terminalCheckInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTerminalName (void) const ;

  public: class GGS_string readProperty_mLexiqueIdentifier (void) const ;

  public: class GGS_terminalCheckAssignementList readProperty_mTerminalCheckAssignementList (void) const ;

  public: class GGS__32_lstringlist readProperty_mIndexingKeyList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalCheckInstructionForGeneration init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_string & inOperand2,
                                                                                             const class GGS_terminalCheckAssignementList & inOperand3,
                                                                                             const class GGS__32_lstringlist & inOperand4,
                                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalCheckInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalCheckInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_string & inOperand2,
                                                                                 const class GGS_terminalCheckAssignementList & inOperand3,
                                                                                 const class GGS__32_lstringlist & inOperand4,
                                                                                 const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                 const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalCheckInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @terminalCheckInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_terminalCheckInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void terminalCheckInstructionForGeneration_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_terminalCheckAssignementList & inOperand3,
                                                                                       const class GGS__32_lstringlist & inOperand4,
                                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                       Compiler * inCompiler) ;


//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg_inPosfix,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTerminalName ;
  public: GGS_string mProperty_mLexiqueIdentifier ;
  public: GGS_terminalCheckAssignementList mProperty_mTerminalCheckAssignementList ;
  public: GGS__32_lstringlist mProperty_mIndexingKeyList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;


//--- Default constructor
  public: cPtr_terminalCheckInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_terminalCheckInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mTerminalName,
                                                      const GGS_string & in_mLexiqueIdentifier,
                                                      const GGS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                      const GGS__32_lstringlist & in_mIndexingKeyList,
                                                      const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                      const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
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
// Phase 1: @terminalCheckInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_terminalCheckInstructionForGeneration_2E_weak : public GGS_syntaxInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_terminalCheckInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_terminalCheckInstructionForGeneration_2E_weak (const class GGS_terminalCheckInstructionForGeneration & inSource) ;

  public: GGS_terminalCheckInstructionForGeneration_2E_weak & operator = (const class GGS_terminalCheckInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_terminalCheckInstructionForGeneration_2E_weak init_nil (void) {
    GGS_terminalCheckInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_terminalCheckInstructionForGeneration bang_terminalCheckInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_terminalCheckInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_terminalCheckInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalCheckInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_terminalCheckInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithVariantAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithVariantAST_2E_weak (const class GGS_loopInstructionWithVariantAST & inSource) ;

  public: GGS_loopInstructionWithVariantAST_2E_weak & operator = (const class GGS_loopInstructionWithVariantAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithVariantAST_2E_weak init_nil (void) {
    GGS_loopInstructionWithVariantAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithVariantAST bang_loopInstructionWithVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithVariantAST unwrappedValue (void) const ;

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
  public: static GGS_loopInstructionWithVariantAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithVariantAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithVariantForGeneration (const class cPtr_loopInstructionWithVariantForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mVariantExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mFirstInstructions (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mLoopExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSecondInstructions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithVariantForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithVariantForGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithVariantForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                   const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                   const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithVariantForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithVariantForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithVariantForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_semanticExpressionForGeneration mProperty_mVariantExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mFirstInstructions ;
  public: GGS_semanticExpressionForGeneration mProperty_mLoopExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSecondInstructions ;


//--- Default constructor
  public: cPtr_loopInstructionWithVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                                                        const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                        const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                                                        const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
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
// Phase 1: @loopInstructionWithVariantForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithVariantForGeneration_2E_weak (const class GGS_loopInstructionWithVariantForGeneration & inSource) ;

  public: GGS_loopInstructionWithVariantForGeneration_2E_weak & operator = (const class GGS_loopInstructionWithVariantForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithVariantForGeneration_2E_weak init_nil (void) {
    GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithVariantForGeneration bang_loopInstructionWithVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithVariantForGeneration unwrappedValue (void) const ;

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
  public: static GGS_loopInstructionWithVariantForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithVariantForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxSendInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxSendInstructionAST_2E_weak : public GGS_syntaxInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syntaxSendInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syntaxSendInstructionAST_2E_weak (const class GGS_syntaxSendInstructionAST & inSource) ;

  public: GGS_syntaxSendInstructionAST_2E_weak & operator = (const class GGS_syntaxSendInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syntaxSendInstructionAST_2E_weak init_nil (void) {
    GGS_syntaxSendInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syntaxSendInstructionAST bang_syntaxSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syntaxSendInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_syntaxSendInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxSendInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxSendInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxSendInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxSendInstructionForGeneration : public GGS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_syntaxSendInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxSendInstructionForGeneration (const class cPtr_syntaxSendInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxSendInstructionForGeneration init_21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxSendInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxSendInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxSendInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syntaxSendInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxSendInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxSendInstructionForGeneration_init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_syntaxSendInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxSendInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                   const GGS_semanticExpressionForGeneration & in_mExpression,
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
// Phase 1: @syntaxSendInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syntaxSendInstructionForGeneration_2E_weak : public GGS_syntaxInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syntaxSendInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syntaxSendInstructionForGeneration_2E_weak (const class GGS_syntaxSendInstructionForGeneration & inSource) ;

  public: GGS_syntaxSendInstructionForGeneration_2E_weak & operator = (const class GGS_syntaxSendInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syntaxSendInstructionForGeneration_2E_weak init_nil (void) {
    GGS_syntaxSendInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syntaxSendInstructionForGeneration bang_syntaxSendInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syntaxSendInstructionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_syntaxSendInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxSendInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxSendInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableOrConstantDeclarationWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (const class GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & operator = (const class GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak init_nil (void) {
    GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST bang_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST unwrappedValue (void) const ;

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
  public: static GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @undefinedLocalConstantDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_undefinedLocalConstantDeclarationAST_2E_weak (const class GGS_undefinedLocalConstantDeclarationAST & inSource) ;

  public: GGS_undefinedLocalConstantDeclarationAST_2E_weak & operator = (const class GGS_undefinedLocalConstantDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_undefinedLocalConstantDeclarationAST_2E_weak init_nil (void) {
    GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_undefinedLocalConstantDeclarationAST bang_undefinedLocalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_undefinedLocalConstantDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_undefinedLocalConstantDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_undefinedLocalConstantDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localConstantDeclarationWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localConstantDeclarationWithAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localConstantDeclarationWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localConstantDeclarationWithAssignmentAST_2E_weak (const class GGS_localConstantDeclarationWithAssignmentAST & inSource) ;

  public: GGS_localConstantDeclarationWithAssignmentAST_2E_weak & operator = (const class GGS_localConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localConstantDeclarationWithAssignmentAST_2E_weak init_nil (void) {
    GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localConstantDeclarationWithAssignmentAST bang_localConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localConstantDeclarationWithAssignmentAST unwrappedValue (void) const ;

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
  public: static GGS_localConstantDeclarationWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localConstantDeclarationWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @undefinedLocalConstantDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_undefinedLocalConstantDeclarationForGeneration (const class cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_string readProperty_mCppVariableName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_undefinedLocalConstantDeclarationForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_undefinedLocalConstantDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_undefinedLocalConstantDeclarationForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                          const class GGS_string & inOperand1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @undefinedLocalConstantDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_undefinedLocalConstantDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void undefinedLocalConstantDeclarationForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_string mProperty_mCppVariableName ;


//--- Default constructor
  public: cPtr_undefinedLocalConstantDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_undefinedLocalConstantDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                               const GGS_string & in_mCppVariableName,
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
// Phase 1: @undefinedLocalConstantDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (const class GGS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

  public: GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & operator = (const class GGS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_undefinedLocalConstantDeclarationForGeneration bang_undefinedLocalConstantDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_undefinedLocalConstantDeclarationForGeneration unwrappedValue (void) const ;

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
  public: static GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableOrConstantDeclarationWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const class cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_bool readProperty_mIsConstant (void) const ;

  public: class GGS_string readProperty_mCppVariableName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                               const class GGS_bool & inOperand1,
                                                                                                               const class GGS_string & inOperand2,
                                                                                                               const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                               const class GGS_bool & inOperand1,
                                                                                                               const class GGS_string & inOperand2,
                                                                                                               const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                               class Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localVariableOrConstantDeclarationWithSourceExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                         const class GGS_bool & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                         Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_bool mProperty_mIsConstant ;
  public: GGS_string mProperty_mCppVariableName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                    const GGS_bool & in_mIsConstant,
                                                                                    const GGS_string & in_mCppVariableName,
                                                                                    const GGS_semanticExpressionForGeneration & in_mSourceExpression,
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
// Phase 1: @localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (const class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) ;

  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & operator = (const class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak init_nil (void) {
    GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration bang_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & operator = (const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak init_nil (void) {
    GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult unwrappedValue (void) const ;

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
  public: static GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone bang_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone unwrappedValue (void) const ;

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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult bang_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult unwrappedValue (void) const ;

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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar unwrappedValue (void) const ;

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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar unwrappedValue (void) const ;

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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak extractObject (const GGS_object & inObject,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst unwrappedValue (void) const ;

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
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak extractObject (const GGS_object & inObject,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInFileInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInFileInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInFileInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInFileInstructionAST_2E_weak (const class GGS_grammarInFileInstructionAST & inSource) ;

  public: GGS_grammarInFileInstructionAST_2E_weak & operator = (const class GGS_grammarInFileInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInFileInstructionAST_2E_weak init_nil (void) {
    GGS_grammarInFileInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInFileInstructionAST bang_grammarInFileInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInFileInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_grammarInFileInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInFileInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInFileInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInStringInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInStringInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInStringInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInStringInstructionAST_2E_weak (const class GGS_grammarInStringInstructionAST & inSource) ;

  public: GGS_grammarInStringInstructionAST_2E_weak & operator = (const class GGS_grammarInStringInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInStringInstructionAST_2E_weak init_nil (void) {
    GGS_grammarInStringInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInStringInstructionAST bang_grammarInStringInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInStringInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_grammarInStringInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInStringInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInStringInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionWithSourceFileForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceFileForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceFileForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionWithSourceFileForGeneration (const class cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceFileExpression (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GGS_stringlist readProperty_mAssignementList (void) const ;

  public: class GGS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionWithSourceFileForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                         const class GGS_string & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                         const class GGS_actualParameterListForGeneration & inOperand4,
                                                                                                         const class GGS_bool & inOperand5,
                                                                                                         const class GGS_stringlist & inOperand6,
                                                                                                         const class GGS_string & inOperand7,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionWithSourceFileForGeneration extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceFileForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_string & inOperand1,
                                                                                         const class GGS_string & inOperand2,
                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                         const class GGS_actualParameterListForGeneration & inOperand4,
                                                                                         const class GGS_bool & inOperand5,
                                                                                         const class GGS_stringlist & inOperand6,
                                                                                         const class GGS_string & inOperand7,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionWithSourceFileForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionWithSourceFileForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionWithSourceFileForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_string & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                   const class GGS_actualParameterListForGeneration & inOperand4,
                                                                                                   const class GGS_bool & inOperand5,
                                                                                                   const class GGS_stringlist & inOperand6,
                                                                                                   const class GGS_string & inOperand7,
                                                                                                   Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLabelName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceFileExpression ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GGS_stringlist mProperty_mAssignementList ;
  public: GGS_string mProperty_mSyntaxDirectedTranslationResultVarName ;


//--- Default constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (const GGS_location & in_mInstructionLocation,
                                                              const GGS_string & in_mGrammarName,
                                                              const GGS_string & in_mLabelName,
                                                              const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                              const GGS_bool & in_mGrammarHasTranslateFeature,
                                                              const GGS_stringlist & in_mAssignementList,
                                                              const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
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
// Phase 1: @grammarInstructionWithSourceFileForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceFileForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (const class GGS_grammarInstructionWithSourceFileForGeneration & inSource) ;

  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & operator = (const class GGS_grammarInstructionWithSourceFileForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionWithSourceFileForGeneration_2E_weak init_nil (void) {
    GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionWithSourceFileForGeneration bang_grammarInstructionWithSourceFileForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionWithSourceFileForGeneration unwrappedValue (void) const ;

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
  public: static GGS_grammarInstructionWithSourceFileForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceFileForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceExpressionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionWithSourceExpressionForGeneration (const class cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceStringExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mNameStringExpression (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GGS_stringlist readProperty_mAssignementList (void) const ;

  public: class GGS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                                   const class GGS_string & inOperand1,
                                                                                                                   const class GGS_string & inOperand2,
                                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                                                   const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                                                   const class GGS_bool & inOperand6,
                                                                                                                   const class GGS_stringlist & inOperand7,
                                                                                                                   const class GGS_string & inOperand8,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceExpressionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                               const class GGS_string & inOperand1,
                                                                                               const class GGS_string & inOperand2,
                                                                                               const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                               const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                               const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                               const class GGS_bool & inOperand6,
                                                                                               const class GGS_stringlist & inOperand7,
                                                                                               const class GGS_string & inOperand8,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionWithSourceExpressionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionWithSourceExpressionForGeneration_init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                             const class GGS_string & inOperand1,
                                                                                                             const class GGS_string & inOperand2,
                                                                                                             const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                             const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                                             const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                                             const class GGS_bool & inOperand6,
                                                                                                             const class GGS_stringlist & inOperand7,
                                                                                                             const class GGS_string & inOperand8,
                                                                                                             Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLabelName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceStringExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mNameStringExpression ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GGS_stringlist mProperty_mAssignementList ;
  public: GGS_string mProperty_mSyntaxDirectedTranslationResultVarName ;


//--- Default constructor
  public: cPtr_grammarInstructionWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceExpressionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_string & in_mGrammarName,
                                                                    const GGS_string & in_mLabelName,
                                                                    const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                    const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                    const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                    const GGS_stringlist & in_mAssignementList,
                                                                    const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
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
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (const class GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & operator = (const class GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak init_nil (void) {
    GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionWithSourceExpressionForGeneration bang_grammarInstructionWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionWithSourceExpressionForGeneration unwrappedValue (void) const ;

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
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectElementListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectElementListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionalTypeName ;
  public: inline GGS_lstring readProperty_mOptionalTypeName (void) const {
    return mProperty_mOptionalTypeName ;
  }

  public: GGS_bool mProperty_mDeclaredAsUnused ;
  public: inline GGS_bool readProperty_mDeclaredAsUnused (void) const {
    return mProperty_mDeclaredAsUnused ;
  }

  public: GGS_lstring mProperty_mOptionalConstantName ;
  public: inline GGS_lstring readProperty_mOptionalConstantName (void) const {
    return mProperty_mOptionalConstantName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionalTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalTypeName = inValue ;
  }

  public: inline void setter_setMDeclaredAsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaredAsUnused = inValue ;
  }

  public: inline void setter_setMOptionalConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalConstantName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_lstring & in_mOptionalTypeName,
                                                                       const GGS_bool & in_mDeclaredAsUnused,
                                                                       const GGS_lstring & in_mOptionalConstantName) ;

//--------------------------------- Copy constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element & operator = (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectElementListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_bool & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectElementListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectElementListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_bool & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractEnumeratedCollectionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractEnumeratedCollectionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractEnumeratedCollectionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractEnumeratedCollectionAST_2E_weak (const class GGS_abstractEnumeratedCollectionAST & inSource) ;

  public: GGS_abstractEnumeratedCollectionAST_2E_weak & operator = (const class GGS_abstractEnumeratedCollectionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractEnumeratedCollectionAST_2E_weak init_nil (void) {
    GGS_abstractEnumeratedCollectionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractEnumeratedCollectionAST bang_abstractEnumeratedCollectionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractEnumeratedCollectionAST unwrappedValue (void) const ;

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
  public: static GGS_abstractEnumeratedCollectionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractEnumeratedCollectionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractEnumeratedCollectionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionImplicitVarInExpAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (const class GGS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

  public: GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionImplicitVarInExpAST bang_enumeratedCollectionImplicitVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumeratedCollectionImplicitVarInExpAST unwrappedValue (void) const ;

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
  public: static GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionVarInExpAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionVarInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionVarInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionVarInExpAST_2E_weak (const class GGS_enumeratedCollectionVarInExpAST & inSource) ;

  public: GGS_enumeratedCollectionVarInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionVarInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionVarInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionVarInExpAST bang_enumeratedCollectionVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumeratedCollectionVarInExpAST unwrappedValue (void) const ;

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
  public: static GGS_enumeratedCollectionVarInExpAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionVarInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionVarInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionCstListInExpAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionCstListInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak (const class GGS_enumeratedCollectionCstListInExpAST & inSource) ;

  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionCstListInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionCstListInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionCstListInExpAST bang_enumeratedCollectionCstListInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumeratedCollectionCstListInExpAST unwrappedValue (void) const ;

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
  public: static GGS_enumeratedCollectionCstListInExpAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionCstListInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionCstListInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mAscending ;
  public: inline GGS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

  public: GGS_abstractEnumeratedCollectionAST mProperty_mEnumeratedCollection ;
  public: inline GGS_abstractEnumeratedCollectionAST readProperty_mEnumeratedCollection (void) const {
    return mProperty_mEnumeratedCollection ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAscending (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

  public: inline void setter_setMEnumeratedCollection (const GGS_abstractEnumeratedCollectionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedCollection = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_bool & in_mAscending,
                                                                const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection) ;

//--------------------------------- Copy constructor
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element & operator = (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectListAST_2E_element init_21__21_ (const class GGS_bool & inOperand0,
                                                                                    const class GGS_abstractEnumeratedCollectionAST & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectListAST_2E_element class_func_new (const class GGS_bool & inOperand0,
                                                                                            const class GGS_abstractEnumeratedCollectionAST & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionAST_2E_weak (const class GGS_forInstructionAST & inSource) ;

  public: GGS_forInstructionAST_2E_weak & operator = (const class GGS_forInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionAST_2E_weak init_nil (void) {
    GGS_forInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionAST bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_forInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;

