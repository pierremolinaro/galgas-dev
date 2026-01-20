#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 1: @mySortedList sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_mySortedList final {
//--- Constructor
  public: DownEnumerator_mySortedList (const class GGS_mySortedList & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_string current_mValue (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_mySortedList_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_mySortedList_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_mySortedList (const DownEnumerator_mySortedList &) = delete ;
  private: DownEnumerator_mySortedList & operator = (const DownEnumerator_mySortedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_mySortedList final {
//--- Constructor
  public: UpEnumerator_mySortedList (const class GGS_mySortedList & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_string current_mValue (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_mySortedList_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_mySortedList_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_mySortedList (const UpEnumerator_mySortedList &) = delete ;
  private: UpEnumerator_mySortedList & operator = (const UpEnumerator_mySortedList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mySortedList sorted list
//--------------------------------------------------------------------------------------------------

class GGS_mySortedList final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_mySortedList_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_mySortedList (void) ;

//--- Destructor
  public: virtual ~ GGS_mySortedList (void) = default ;

//--- Handle copy
  public: GGS_mySortedList (const GGS_mySortedList &) = default ;
  public: GGS_mySortedList & operator = (const GGS_mySortedList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_mySortedList_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mySortedList init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mySortedList extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mySortedList class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_mySortedList class_func_sortedListWithValue (const class GGS_string & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_mySortedList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_mySortedList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_string & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_string & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_string & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_string & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_mySortedList ;
  friend class DownEnumerator_mySortedList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mySortedList ;


//----------------------------------------------------------------------------------------------------------------------

