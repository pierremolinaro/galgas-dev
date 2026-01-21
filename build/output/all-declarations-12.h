#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroupList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeGroupList final {
  public: DownEnumerator_XCodeGroupList (const class GGS_XCodeGroupList & inList) ;

  public: ~ DownEnumerator_XCodeGroupList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeGroupList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeGroupList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_XCodeGroupList (const DownEnumerator_XCodeGroupList &) = delete ;
  private: DownEnumerator_XCodeGroupList & operator = (const DownEnumerator_XCodeGroupList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeGroupList final {
  public: UpEnumerator_XCodeGroupList (const class GGS_XCodeGroupList & inList)  ;

  public: ~ UpEnumerator_XCodeGroupList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mGroupReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupName (LOCATION_ARGS) const ;
  public: class GGS_string current_mGroupPath (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeGroupList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeGroupList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_XCodeGroupList (const UpEnumerator_XCodeGroupList &) = delete ;
  private: UpEnumerator_XCodeGroupList & operator = (const UpEnumerator_XCodeGroupList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @XCodeGroupList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroupList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_XCodeGroupList_2E_element> mArray ;

//--- Default constructor
  public: GGS_XCodeGroupList (void) ;

//--- Destructor
  public: virtual ~ GGS_XCodeGroupList (void) = default ;

//--- Copy
  public: GGS_XCodeGroupList (const GGS_XCodeGroupList &) = default ;
  public: GGS_XCodeGroupList & operator = (const GGS_XCodeGroupList &) = default ;

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
  public : inline GenericArray <GGS_XCodeGroupList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_XCodeGroupList subList (const int32_t inStart,
                                       const int32_t inLength,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_XCodeGroupList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mGroupReference,
                                                 const class GGS_string & in_mGroupName,
                                                 const class GGS_string & in_mGroupPath,
                                                 const class GGS_stringlist & in_mChildrenRefs
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroupList init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeGroupList extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeGroupList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_string & inOperand2,
                                                                    const class GGS_stringlist & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_XCodeGroupList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_stringlist & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_XCodeGroupList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_XCodeGroupList add_operation (const GGS_XCodeGroupList & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_stringlist constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_stringlist constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_stringlist & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_stringlist & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_stringlist & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMChildrenRefsAtIndex (class GGS_stringlist constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupNameAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupPathAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupReferenceAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_stringlist & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_stringlist & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mChildrenRefsAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mGroupNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mGroupPathAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mGroupReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeGroupList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeGroupList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeGroupList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeGroupList ;
  friend class DownEnumerator_XCodeGroupList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeGroupList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeGroupList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mGroupReference ;
  public: inline GGS_string readProperty_mGroupReference (void) const {
    return mProperty_mGroupReference ;
  }

  public: GGS_string mProperty_mGroupName ;
  public: inline GGS_string readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GGS_string mProperty_mGroupPath ;
  public: inline GGS_string readProperty_mGroupPath (void) const {
    return mProperty_mGroupPath ;
  }

  public: GGS_stringlist mProperty_mChildrenRefs ;
  public: inline GGS_stringlist readProperty_mChildrenRefs (void) const {
    return mProperty_mChildrenRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeGroupList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupReference = inValue ;
  }

  public: inline void setter_setMGroupName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMGroupPath (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupPath = inValue ;
  }

  public: inline void setter_setMChildrenRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mChildrenRefs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeGroupList_2E_element (const GGS_string & in_mGroupReference,
                                         const GGS_string & in_mGroupName,
                                         const GGS_string & in_mGroupPath,
                                         const GGS_stringlist & in_mChildrenRefs) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeGroupList_2E_element (const GGS_XCodeGroupList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeGroupList_2E_element & operator = (const GGS_XCodeGroupList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeGroupList_2E_element init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_stringlist & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeGroupList_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTargetList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeToolTargetList final {
  public: DownEnumerator_XCodeToolTargetList (const class GGS_XCodeToolTargetList & inList) ;

  public: ~ DownEnumerator_XCodeToolTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeToolTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeToolTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_XCodeToolTargetList (const DownEnumerator_XCodeToolTargetList &) = delete ;
  private: DownEnumerator_XCodeToolTargetList & operator = (const DownEnumerator_XCodeToolTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeToolTargetList final {
  public: UpEnumerator_XCodeToolTargetList (const class GGS_XCodeToolTargetList & inList)  ;

  public: ~ UpEnumerator_XCodeToolTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeToolTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeToolTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_XCodeToolTargetList (const UpEnumerator_XCodeToolTargetList &) = delete ;
  private: UpEnumerator_XCodeToolTargetList & operator = (const UpEnumerator_XCodeToolTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @XCodeToolTargetList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTargetList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_XCodeToolTargetList_2E_element> mArray ;

//--- Default constructor
  public: GGS_XCodeToolTargetList (void) ;

//--- Destructor
  public: virtual ~ GGS_XCodeToolTargetList (void) = default ;

//--- Copy
  public: GGS_XCodeToolTargetList (const GGS_XCodeToolTargetList &) = default ;
  public: GGS_XCodeToolTargetList & operator = (const GGS_XCodeToolTargetList &) = default ;

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
  public : inline GenericArray <GGS_XCodeToolTargetList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_XCodeToolTargetList subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mTargetRef,
                                                 const class GGS_string & in_mTargetName,
                                                 const class GGS_string & in_mProductFileReference,
                                                 const class GGS_string & in_mProductFileName,
                                                 const class GGS_stringlist & in_mBuildPhaseRefList,
                                                 const class GGS_string & in_mBuildPhaseRef,
                                                 const class GGS_string & in_mBuildConfigurationListRef,
                                                 const class GGS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GGS_string & in_mBuildConfigurationRef,
                                                 const class GGS_stringlist & in_mFrameworksFileRefList,
                                                 const class GGS_string & in_mFrameworkBuildPhaseRef
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTargetList init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeToolTargetList extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeToolTargetList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_string & inOperand3,
                                                                         const class GGS_stringlist & inOperand4,
                                                                         const class GGS_string & inOperand5,
                                                                         const class GGS_string & inOperand6,
                                                                         const class GGS_stringlist & inOperand7,
                                                                         const class GGS_string & inOperand8,
                                                                         const class GGS_stringlist & inOperand9,
                                                                         const class GGS_string & inOperand10
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_XCodeToolTargetList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_stringlist & inOperand4,
                                                    const class GGS_string & inOperand5,
                                                    const class GGS_string & inOperand6,
                                                    const class GGS_stringlist & inOperand7,
                                                    const class GGS_string & inOperand8,
                                                    const class GGS_stringlist & inOperand9,
                                                    const class GGS_string & inOperand10
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_XCodeToolTargetList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_XCodeToolTargetList add_operation (const GGS_XCodeToolTargetList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_stringlist constinArgument4,
                                               class GGS_string constinArgument5,
                                               class GGS_string constinArgument6,
                                               class GGS_stringlist constinArgument7,
                                               class GGS_string constinArgument8,
                                               class GGS_stringlist constinArgument9,
                                               class GGS_string constinArgument10,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_stringlist constinArgument4,
                                                      class GGS_string constinArgument5,
                                                      class GGS_string constinArgument6,
                                                      class GGS_stringlist constinArgument7,
                                                      class GGS_string constinArgument8,
                                                      class GGS_stringlist constinArgument9,
                                                      class GGS_string constinArgument10,
                                                      class GGS_uint constinArgument11,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_string & outArgument5,
                                                 class GGS_string & outArgument6,
                                                 class GGS_stringlist & outArgument7,
                                                 class GGS_string & outArgument8,
                                                 class GGS_stringlist & outArgument9,
                                                 class GGS_string & outArgument10,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_stringlist & outArgument4,
                                                class GGS_string & outArgument5,
                                                class GGS_string & outArgument6,
                                                class GGS_stringlist & outArgument7,
                                                class GGS_string & outArgument8,
                                                class GGS_stringlist & outArgument9,
                                                class GGS_string & outArgument10,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_stringlist & outArgument4,
                                                      class GGS_string & outArgument5,
                                                      class GGS_string & outArgument6,
                                                      class GGS_stringlist & outArgument7,
                                                      class GGS_string & outArgument8,
                                                      class GGS_stringlist & outArgument9,
                                                      class GGS_string & outArgument10,
                                                      class GGS_uint constinArgument11,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GGS_string constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GGS_stringlist constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GGS_string constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_stringlist & outArgument4,
                                              class GGS_string & outArgument5,
                                              class GGS_string & outArgument6,
                                              class GGS_stringlist & outArgument7,
                                              class GGS_string & outArgument8,
                                              class GGS_stringlist & outArgument9,
                                              class GGS_string & outArgument10,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_stringlist & outArgument4,
                                             class GGS_string & outArgument5,
                                             class GGS_string & outArgument6,
                                             class GGS_stringlist & outArgument7,
                                             class GGS_string & outArgument8,
                                             class GGS_stringlist & outArgument9,
                                             class GGS_string & outArgument10,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationListRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildPhaseRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mFrameworksFileRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetRefAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeToolTargetList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeToolTargetList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeToolTargetList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeToolTargetList ;
  friend class DownEnumerator_XCodeToolTargetList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeToolTargetList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeToolTargetList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTargetRef ;
  public: inline GGS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mProductFileReference ;
  public: inline GGS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GGS_string mProperty_mProductFileName ;
  public: inline GGS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GGS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GGS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GGS_string mProperty_mBuildPhaseRef ;
  public: inline GGS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GGS_string mProperty_mBuildConfigurationListRef ;
  public: inline GGS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GGS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GGS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeToolTargetList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeToolTargetList_2E_element (const GGS_string & in_mTargetRef,
                                              const GGS_string & in_mTargetName,
                                              const GGS_string & in_mProductFileReference,
                                              const GGS_string & in_mProductFileName,
                                              const GGS_stringlist & in_mBuildPhaseRefList,
                                              const GGS_string & in_mBuildPhaseRef,
                                              const GGS_string & in_mBuildConfigurationListRef,
                                              const GGS_stringlist & in_mBuildConfigurationSettingList,
                                              const GGS_string & in_mBuildConfigurationRef,
                                              const GGS_stringlist & in_mFrameworksFileRefList,
                                              const GGS_string & in_mFrameworkBuildPhaseRef) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeToolTargetList_2E_element (const GGS_XCodeToolTargetList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeToolTargetList_2E_element & operator = (const GGS_XCodeToolTargetList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeToolTargetList_2E_element init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                      const class GGS_string & inOperand1,
                                                                                                      const class GGS_string & inOperand2,
                                                                                                      const class GGS_string & inOperand3,
                                                                                                      const class GGS_stringlist & inOperand4,
                                                                                                      const class GGS_string & inOperand5,
                                                                                                      const class GGS_string & inOperand6,
                                                                                                      const class GGS_stringlist & inOperand7,
                                                                                                      const class GGS_string & inOperand8,
                                                                                                      const class GGS_stringlist & inOperand9,
                                                                                                      const class GGS_string & inOperand10,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeToolTargetList_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeAppTargetList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_XCodeAppTargetList final {
  public: DownEnumerator_XCodeAppTargetList (const class GGS_XCodeAppTargetList & inList) ;

  public: ~ DownEnumerator_XCodeAppTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public: class GGS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeAppTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeAppTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_XCodeAppTargetList (const DownEnumerator_XCodeAppTargetList &) = delete ;
  private: DownEnumerator_XCodeAppTargetList & operator = (const DownEnumerator_XCodeAppTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_XCodeAppTargetList final {
  public: UpEnumerator_XCodeAppTargetList (const class GGS_XCodeAppTargetList & inList)  ;

  public: ~ UpEnumerator_XCodeAppTargetList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mTargetRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mTargetName (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mProductFileName (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public: class GGS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public: class GGS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public: class GGS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_XCodeAppTargetList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_XCodeAppTargetList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_XCodeAppTargetList (const UpEnumerator_XCodeAppTargetList &) = delete ;
  private: UpEnumerator_XCodeAppTargetList & operator = (const UpEnumerator_XCodeAppTargetList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @XCodeAppTargetList list
//--------------------------------------------------------------------------------------------------

class GGS_XCodeAppTargetList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_XCodeAppTargetList_2E_element> mArray ;

//--- Default constructor
  public: GGS_XCodeAppTargetList (void) ;

//--- Destructor
  public: virtual ~ GGS_XCodeAppTargetList (void) = default ;

//--- Copy
  public: GGS_XCodeAppTargetList (const GGS_XCodeAppTargetList &) = default ;
  public: GGS_XCodeAppTargetList & operator = (const GGS_XCodeAppTargetList &) = default ;

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
  public : inline GenericArray <GGS_XCodeAppTargetList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_XCodeAppTargetList subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mTargetRef,
                                                 const class GGS_string & in_mTargetName,
                                                 const class GGS_string & in_mProductFileReference,
                                                 const class GGS_string & in_mProductFileName,
                                                 const class GGS_stringlist & in_mBuildPhaseRefList,
                                                 const class GGS_string & in_mBuildPhaseRef,
                                                 const class GGS_string & in_mBuildConfigurationListRef,
                                                 const class GGS_stringlist & in_mBuildConfigurationSettingList,
                                                 const class GGS_string & in_mBuildConfigurationRef,
                                                 const class GGS_stringlist & in_mFrameworksFileRefList,
                                                 const class GGS_string & in_mFrameworkBuildPhaseRef,
                                                 const class GGS__32_stringlist & in_mDependentTargets,
                                                 const class GGS_string & in_mResourceBuildRef,
                                                 const class GGS_stringlist & in_mResourceFileBuildRefs
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeAppTargetList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeAppTargetList extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_XCodeAppTargetList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        const class GGS_string & inOperand3,
                                                                        const class GGS_stringlist & inOperand4,
                                                                        const class GGS_string & inOperand5,
                                                                        const class GGS_string & inOperand6,
                                                                        const class GGS_stringlist & inOperand7,
                                                                        const class GGS_string & inOperand8,
                                                                        const class GGS_stringlist & inOperand9,
                                                                        const class GGS_string & inOperand10,
                                                                        const class GGS__32_stringlist & inOperand11,
                                                                        const class GGS_string & inOperand12,
                                                                        const class GGS_stringlist & inOperand13
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_XCodeAppTargetList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2,
                                                    const class GGS_string & inOperand3,
                                                    const class GGS_stringlist & inOperand4,
                                                    const class GGS_string & inOperand5,
                                                    const class GGS_string & inOperand6,
                                                    const class GGS_stringlist & inOperand7,
                                                    const class GGS_string & inOperand8,
                                                    const class GGS_stringlist & inOperand9,
                                                    const class GGS_string & inOperand10,
                                                    const class GGS__32_stringlist & inOperand11,
                                                    const class GGS_string & inOperand12,
                                                    const class GGS_stringlist & inOperand13
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_XCodeAppTargetList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_XCodeAppTargetList add_operation (const GGS_XCodeAppTargetList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_string constinArgument3,
                                               class GGS_stringlist constinArgument4,
                                               class GGS_string constinArgument5,
                                               class GGS_string constinArgument6,
                                               class GGS_stringlist constinArgument7,
                                               class GGS_string constinArgument8,
                                               class GGS_stringlist constinArgument9,
                                               class GGS_string constinArgument10,
                                               class GGS__32_stringlist constinArgument11,
                                               class GGS_string constinArgument12,
                                               class GGS_stringlist constinArgument13,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_string constinArgument3,
                                                      class GGS_stringlist constinArgument4,
                                                      class GGS_string constinArgument5,
                                                      class GGS_string constinArgument6,
                                                      class GGS_stringlist constinArgument7,
                                                      class GGS_string constinArgument8,
                                                      class GGS_stringlist constinArgument9,
                                                      class GGS_string constinArgument10,
                                                      class GGS__32_stringlist constinArgument11,
                                                      class GGS_string constinArgument12,
                                                      class GGS_stringlist constinArgument13,
                                                      class GGS_uint constinArgument14,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_string & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_string & outArgument5,
                                                 class GGS_string & outArgument6,
                                                 class GGS_stringlist & outArgument7,
                                                 class GGS_string & outArgument8,
                                                 class GGS_stringlist & outArgument9,
                                                 class GGS_string & outArgument10,
                                                 class GGS__32_stringlist & outArgument11,
                                                 class GGS_string & outArgument12,
                                                 class GGS_stringlist & outArgument13,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_string & outArgument3,
                                                class GGS_stringlist & outArgument4,
                                                class GGS_string & outArgument5,
                                                class GGS_string & outArgument6,
                                                class GGS_stringlist & outArgument7,
                                                class GGS_string & outArgument8,
                                                class GGS_stringlist & outArgument9,
                                                class GGS_string & outArgument10,
                                                class GGS__32_stringlist & outArgument11,
                                                class GGS_string & outArgument12,
                                                class GGS_stringlist & outArgument13,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_string & outArgument3,
                                                      class GGS_stringlist & outArgument4,
                                                      class GGS_string & outArgument5,
                                                      class GGS_string & outArgument6,
                                                      class GGS_stringlist & outArgument7,
                                                      class GGS_string & outArgument8,
                                                      class GGS_stringlist & outArgument9,
                                                      class GGS_string & outArgument10,
                                                      class GGS__32_stringlist & outArgument11,
                                                      class GGS_string & outArgument12,
                                                      class GGS_stringlist & outArgument13,
                                                      class GGS_uint constinArgument14,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GGS_string constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GGS_stringlist constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDependentTargetsAtIndex (class GGS__32_stringlist constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GGS_string constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GGS_stringlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GGS_string constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GGS_string constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceBuildRefAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResourceFileBuildRefsAtIndex (class GGS_stringlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GGS_string constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_string & outArgument3,
                                              class GGS_stringlist & outArgument4,
                                              class GGS_string & outArgument5,
                                              class GGS_string & outArgument6,
                                              class GGS_stringlist & outArgument7,
                                              class GGS_string & outArgument8,
                                              class GGS_stringlist & outArgument9,
                                              class GGS_string & outArgument10,
                                              class GGS__32_stringlist & outArgument11,
                                              class GGS_string & outArgument12,
                                              class GGS_stringlist & outArgument13,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_string & outArgument3,
                                             class GGS_stringlist & outArgument4,
                                             class GGS_string & outArgument5,
                                             class GGS_string & outArgument6,
                                             class GGS_stringlist & outArgument7,
                                             class GGS_string & outArgument8,
                                             class GGS_stringlist & outArgument9,
                                             class GGS_string & outArgument10,
                                             class GGS__32_stringlist & outArgument11,
                                             class GGS_string & outArgument12,
                                             class GGS_stringlist & outArgument13,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationListRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildConfigurationRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mBuildPhaseRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_mDependentTargetsAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mFrameworksFileRefListAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mProductFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mResourceBuildRefAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mResourceFileBuildRefsAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTargetRefAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeAppTargetList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeAppTargetList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_XCodeAppTargetList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_XCodeAppTargetList ;
  friend class DownEnumerator_XCodeAppTargetList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @XCodeAppTargetList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_XCodeAppTargetList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTargetRef ;
  public: inline GGS_string readProperty_mTargetRef (void) const {
    return mProperty_mTargetRef ;
  }

  public: GGS_string mProperty_mTargetName ;
  public: inline GGS_string readProperty_mTargetName (void) const {
    return mProperty_mTargetName ;
  }

  public: GGS_string mProperty_mProductFileReference ;
  public: inline GGS_string readProperty_mProductFileReference (void) const {
    return mProperty_mProductFileReference ;
  }

  public: GGS_string mProperty_mProductFileName ;
  public: inline GGS_string readProperty_mProductFileName (void) const {
    return mProperty_mProductFileName ;
  }

  public: GGS_stringlist mProperty_mBuildPhaseRefList ;
  public: inline GGS_stringlist readProperty_mBuildPhaseRefList (void) const {
    return mProperty_mBuildPhaseRefList ;
  }

  public: GGS_string mProperty_mBuildPhaseRef ;
  public: inline GGS_string readProperty_mBuildPhaseRef (void) const {
    return mProperty_mBuildPhaseRef ;
  }

  public: GGS_string mProperty_mBuildConfigurationListRef ;
  public: inline GGS_string readProperty_mBuildConfigurationListRef (void) const {
    return mProperty_mBuildConfigurationListRef ;
  }

  public: GGS_stringlist mProperty_mBuildConfigurationSettingList ;
  public: inline GGS_stringlist readProperty_mBuildConfigurationSettingList (void) const {
    return mProperty_mBuildConfigurationSettingList ;
  }

  public: GGS_string mProperty_mBuildConfigurationRef ;
  public: inline GGS_string readProperty_mBuildConfigurationRef (void) const {
    return mProperty_mBuildConfigurationRef ;
  }

  public: GGS_stringlist mProperty_mFrameworksFileRefList ;
  public: inline GGS_stringlist readProperty_mFrameworksFileRefList (void) const {
    return mProperty_mFrameworksFileRefList ;
  }

  public: GGS_string mProperty_mFrameworkBuildPhaseRef ;
  public: inline GGS_string readProperty_mFrameworkBuildPhaseRef (void) const {
    return mProperty_mFrameworkBuildPhaseRef ;
  }

  public: GGS__32_stringlist mProperty_mDependentTargets ;
  public: inline GGS__32_stringlist readProperty_mDependentTargets (void) const {
    return mProperty_mDependentTargets ;
  }

  public: GGS_string mProperty_mResourceBuildRef ;
  public: inline GGS_string readProperty_mResourceBuildRef (void) const {
    return mProperty_mResourceBuildRef ;
  }

  public: GGS_stringlist mProperty_mResourceFileBuildRefs ;
  public: inline GGS_stringlist readProperty_mResourceFileBuildRefs (void) const {
    return mProperty_mResourceFileBuildRefs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_XCodeAppTargetList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetRef = inValue ;
  }

  public: inline void setter_setMTargetName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetName = inValue ;
  }

  public: inline void setter_setMProductFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileReference = inValue ;
  }

  public: inline void setter_setMProductFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductFileName = inValue ;
  }

  public: inline void setter_setMBuildPhaseRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRefList = inValue ;
  }

  public: inline void setter_setMBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationListRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationListRef = inValue ;
  }

  public: inline void setter_setMBuildConfigurationSettingList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationSettingList = inValue ;
  }

  public: inline void setter_setMBuildConfigurationRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildConfigurationRef = inValue ;
  }

  public: inline void setter_setMFrameworksFileRefList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworksFileRefList = inValue ;
  }

  public: inline void setter_setMFrameworkBuildPhaseRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFrameworkBuildPhaseRef = inValue ;
  }

  public: inline void setter_setMDependentTargets (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependentTargets = inValue ;
  }

  public: inline void setter_setMResourceBuildRef (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceBuildRef = inValue ;
  }

  public: inline void setter_setMResourceFileBuildRefs (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResourceFileBuildRefs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_XCodeAppTargetList_2E_element (const GGS_string & in_mTargetRef,
                                             const GGS_string & in_mTargetName,
                                             const GGS_string & in_mProductFileReference,
                                             const GGS_string & in_mProductFileName,
                                             const GGS_stringlist & in_mBuildPhaseRefList,
                                             const GGS_string & in_mBuildPhaseRef,
                                             const GGS_string & in_mBuildConfigurationListRef,
                                             const GGS_stringlist & in_mBuildConfigurationSettingList,
                                             const GGS_string & in_mBuildConfigurationRef,
                                             const GGS_stringlist & in_mFrameworksFileRefList,
                                             const GGS_string & in_mFrameworkBuildPhaseRef,
                                             const GGS__32_stringlist & in_mDependentTargets,
                                             const GGS_string & in_mResourceBuildRef,
                                             const GGS_stringlist & in_mResourceFileBuildRefs) ;

//--------------------------------- Copy constructor
  public: GGS_XCodeAppTargetList_2E_element (const GGS_XCodeAppTargetList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_XCodeAppTargetList_2E_element & operator = (const GGS_XCodeAppTargetList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_XCodeAppTargetList_2E_element init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                 const class GGS_string & inOperand1,
                                                                                                                 const class GGS_string & inOperand2,
                                                                                                                 const class GGS_string & inOperand3,
                                                                                                                 const class GGS_stringlist & inOperand4,
                                                                                                                 const class GGS_string & inOperand5,
                                                                                                                 const class GGS_string & inOperand6,
                                                                                                                 const class GGS_stringlist & inOperand7,
                                                                                                                 const class GGS_string & inOperand8,
                                                                                                                 const class GGS_stringlist & inOperand9,
                                                                                                                 const class GGS_string & inOperand10,
                                                                                                                 const class GGS__32_stringlist & inOperand11,
                                                                                                                 const class GGS_string & inOperand12,
                                                                                                                 const class GGS_stringlist & inOperand13,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_XCodeAppTargetList_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @BuildFileList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_BuildFileList final {
  public: DownEnumerator_BuildFileList (const class GGS_BuildFileList & inList) ;

  public: ~ DownEnumerator_BuildFileList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mFileName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_BuildFileList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_BuildFileList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_BuildFileList (const DownEnumerator_BuildFileList &) = delete ;
  private: DownEnumerator_BuildFileList & operator = (const DownEnumerator_BuildFileList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_BuildFileList final {
  public: UpEnumerator_BuildFileList (const class GGS_BuildFileList & inList)  ;

  public: ~ UpEnumerator_BuildFileList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mFileReference (LOCATION_ARGS) const ;
  public: class GGS_string current_mFileName (LOCATION_ARGS) const ;
  public: class GGS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_BuildFileList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_BuildFileList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_BuildFileList (const UpEnumerator_BuildFileList &) = delete ;
  private: UpEnumerator_BuildFileList & operator = (const UpEnumerator_BuildFileList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @BuildFileList list
//--------------------------------------------------------------------------------------------------

class GGS_BuildFileList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_BuildFileList_2E_element> mArray ;

//--- Default constructor
  public: GGS_BuildFileList (void) ;

//--- Destructor
  public: virtual ~ GGS_BuildFileList (void) = default ;

//--- Copy
  public: GGS_BuildFileList (const GGS_BuildFileList &) = default ;
  public: GGS_BuildFileList & operator = (const GGS_BuildFileList &) = default ;

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
  public : inline GenericArray <GGS_BuildFileList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_BuildFileList subList (const int32_t inStart,
                                      const int32_t inLength,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_BuildFileList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mFileReference,
                                                 const class GGS_string & in_mFileName,
                                                 const class GGS_string & in_mBuildReference
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_BuildFileList init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_BuildFileList extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_BuildFileList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS_string & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_BuildFileList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_BuildFileList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_BuildFileList add_operation (const GGS_BuildFileList & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildReferenceAtIndex (class GGS_string constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileReferenceAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mBuildReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFileNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFileReferenceAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_BuildFileList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_BuildFileList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_BuildFileList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_BuildFileList ;
  friend class DownEnumerator_BuildFileList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFileList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @BuildFileList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_BuildFileList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mFileReference ;
  public: inline GGS_string readProperty_mFileReference (void) const {
    return mProperty_mFileReference ;
  }

  public: GGS_string mProperty_mFileName ;
  public: inline GGS_string readProperty_mFileName (void) const {
    return mProperty_mFileName ;
  }

  public: GGS_string mProperty_mBuildReference ;
  public: inline GGS_string readProperty_mBuildReference (void) const {
    return mProperty_mBuildReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_BuildFileList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileReference = inValue ;
  }

  public: inline void setter_setMFileName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileName = inValue ;
  }

  public: inline void setter_setMBuildReference (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildReference = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_BuildFileList_2E_element (const GGS_string & in_mFileReference,
                                        const GGS_string & in_mFileName,
                                        const GGS_string & in_mBuildReference) ;

//--------------------------------- Copy constructor
  public: GGS_BuildFileList_2E_element (const GGS_BuildFileList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_BuildFileList_2E_element & operator = (const GGS_BuildFileList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_BuildFileList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                const class GGS_string & inOperand1,
                                                                const class GGS_string & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_BuildFileList_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFileList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxInstructionListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxInstructionListForGrammarAnalysis final {
  public: DownEnumerator_syntaxInstructionListForGrammarAnalysis (const class GGS_syntaxInstructionListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_syntaxInstructionListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxInstructionListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syntaxInstructionListForGrammarAnalysis (const DownEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_syntaxInstructionListForGrammarAnalysis & operator = (const DownEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxInstructionListForGrammarAnalysis final {
  public: UpEnumerator_syntaxInstructionListForGrammarAnalysis (const class GGS_syntaxInstructionListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_syntaxInstructionListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractSyntaxInstructionForGrammarAnalysis current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxInstructionListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syntaxInstructionListForGrammarAnalysis (const UpEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_syntaxInstructionListForGrammarAnalysis & operator = (const UpEnumerator_syntaxInstructionListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_syntaxInstructionListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_syntaxInstructionListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis &) = default ;
  public: GGS_syntaxInstructionListForGrammarAnalysis & operator = (const GGS_syntaxInstructionListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_syntaxInstructionListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syntaxInstructionListForGrammarAnalysis subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syntaxInstructionListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionListForGrammarAnalysis init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxInstructionListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxInstructionListForGrammarAnalysis class_func_listWithValue (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_syntaxInstructionListForGrammarAnalysis add_operation (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_abstractSyntaxInstructionForGrammarAnalysis constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractSyntaxInstructionForGrammarAnalysis & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractSyntaxInstructionForGrammarAnalysis getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxInstructionListForGrammarAnalysis ;
  friend class DownEnumerator_syntaxInstructionListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxInstructionListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractSyntaxInstructionForGrammarAnalysis mProperty_mInstruction ;
  public: inline GGS_abstractSyntaxInstructionForGrammarAnalysis readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxInstructionListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxInstructionListForGrammarAnalysis_2E_element (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxInstructionListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxInstructionListForGrammarAnalysis_2E_element & operator = (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionListForGrammarAnalysis_2E_element init_21_ (const class GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxInstructionListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @productionRuleListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_productionRuleListForGrammarAnalysis final {
  public: DownEnumerator_productionRuleListForGrammarAnalysis (const class GGS_productionRuleListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_productionRuleListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLeftNonterminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mProductionIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_productionRuleListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_productionRuleListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_productionRuleListForGrammarAnalysis (const DownEnumerator_productionRuleListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_productionRuleListForGrammarAnalysis & operator = (const DownEnumerator_productionRuleListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_productionRuleListForGrammarAnalysis final {
  public: UpEnumerator_productionRuleListForGrammarAnalysis (const class GGS_productionRuleListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_productionRuleListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mLeftNonterminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const ;
  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mProductionIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_productionRuleListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_productionRuleListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_productionRuleListForGrammarAnalysis (const UpEnumerator_productionRuleListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_productionRuleListForGrammarAnalysis & operator = (const UpEnumerator_productionRuleListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @productionRuleListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_productionRuleListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_productionRuleListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_productionRuleListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_productionRuleListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis &) = default ;
  public: GGS_productionRuleListForGrammarAnalysis & operator = (const GGS_productionRuleListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_productionRuleListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_productionRuleListForGrammarAnalysis subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_productionRuleListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLeftNonterminalSymbol,
                                                 const class GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                 const class GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                 const class GGS_uint & in_mProductionIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_productionRuleListForGrammarAnalysis init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_productionRuleListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_productionRuleListForGrammarAnalysis class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_uint & inOperand1,
                                                                                          const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                          const class GGS_uint & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_productionRuleListForGrammarAnalysis inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_uint & inOperand1,
                                                    const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                    const class GGS_uint & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_productionRuleListForGrammarAnalysis_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_productionRuleListForGrammarAnalysis add_operation (const GGS_productionRuleListForGrammarAnalysis & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               class GGS_syntaxInstructionListForGrammarAnalysis constinArgument2,
                                               class GGS_uint constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      class GGS_syntaxInstructionListForGrammarAnalysis constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                 class GGS_uint & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_uint & outArgument1,
                                                class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                class GGS_uint & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_uint & outArgument1,
                                                      class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                                      class GGS_uint & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftNonterminalSymbolAtIndex (class GGS_lstring constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftNonterminalSymbolIndexAtIndex (class GGS_uint constinArgument0,
                                                                              class GGS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductionIndexAtIndex (class GGS_uint constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_uint & outArgument1,
                                              class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                              class GGS_uint & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_uint & outArgument1,
                                             class GGS_syntaxInstructionListForGrammarAnalysis & outArgument2,
                                             class GGS_uint & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mLeftNonterminalSymbolAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mLeftNonterminalSymbolIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mProductionIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_productionRuleListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_productionRuleListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_productionRuleListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_productionRuleListForGrammarAnalysis ;
  friend class DownEnumerator_productionRuleListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @productionRuleListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_productionRuleListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLeftNonterminalSymbol ;
  public: inline GGS_lstring readProperty_mLeftNonterminalSymbol (void) const {
    return mProperty_mLeftNonterminalSymbol ;
  }

  public: GGS_uint mProperty_mLeftNonterminalSymbolIndex ;
  public: inline GGS_uint readProperty_mLeftNonterminalSymbolIndex (void) const {
    return mProperty_mLeftNonterminalSymbolIndex ;
  }

  public: GGS_syntaxInstructionListForGrammarAnalysis mProperty_mInstructionList ;
  public: inline GGS_syntaxInstructionListForGrammarAnalysis readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_uint mProperty_mProductionIndex ;
  public: inline GGS_uint readProperty_mProductionIndex (void) const {
    return mProperty_mProductionIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_productionRuleListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLeftNonterminalSymbol (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeftNonterminalSymbol = inValue ;
  }

  public: inline void setter_setMLeftNonterminalSymbolIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeftNonterminalSymbolIndex = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMProductionIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                               const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                               const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                               const GGS_uint & in_mProductionIndex) ;

//--------------------------------- Copy constructor
  public: GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_productionRuleListForGrammarAnalysis_2E_element & operator = (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_productionRuleListForGrammarAnalysis_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                           const class GGS_uint & inOperand3,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_productionRuleListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis final {

  public: DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis final {
  public: UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalIndexForKey (class GGS_uint constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mNonTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
  friend class DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mNonTerminalIndex ;
  public: inline GGS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                                       const GGS_uint & in_mNonTerminalIndex) ;

//--------------------------------- Copy constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unusedNonTerminalSymbolMapForGrammarAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis final {
//--- Constructor
  public: DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const class GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis & operator = (const DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis final {
//--- Constructor
  public: UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const class GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_lstring current_mNonTerminalSymbol (LOCATION_ARGS) const ;
  public: class GGS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis & operator = (const UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis sorted list
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolSortedListForGrammarAnalysis final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) = default ;

//--- Handle copy
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis &) = default ;
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis & operator = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalSymbolSortedListForGrammarAnalysis class_func_sortedListWithValue (const class GGS_lstring & inOperand0,
                                                                                                         const class GGS_uint & inOperand1,
                                                                                                         const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_uint & inOperand1,
                                                    const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_lstring inArgument0,
                                               class GGS_uint inArgument1,
                                               class GGS_nonterminalSymbolLabelMapForGrammarAnalysis inArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_lstring & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_lstring & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_lstring & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_lstring & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
  friend class DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalSymbolSortedListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mNonTerminalSymbol ;
  public: inline GGS_lstring readProperty_mNonTerminalSymbol (void) const {
    return mProperty_mNonTerminalSymbol ;
  }

  public: GGS_uint mProperty_mNonTerminalIndex ;
  public: inline GGS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

  public: GGS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;
  public: inline GGS_nonterminalSymbolLabelMapForGrammarAnalysis readProperty_mNonterminalSymbolParametersMap (void) const {
    return mProperty_mNonterminalSymbolParametersMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonTerminalSymbol (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalSymbol = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (const GGS_lstring & in_mNonTerminalSymbol,
                                                                        const GGS_uint & in_mNonTerminalIndex,
                                                                        const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//--------------------------------- Copy constructor
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & operator = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_uint & inOperand1,
                                                                                                const class GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_nonTerminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nonTerminalInstructionForGrammarAnalysis (const class cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mNonterminalSymbolName (void) const ;

  public: class GGS_uint readProperty_mNonterminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nonTerminalInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_uint & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nonTerminalInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_nonTerminalInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @nonTerminalInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (const class GGS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

  public: GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_nonTerminalInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_nonTerminalInstructionForGrammarAnalysis bang_nonTerminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_nonTerminalInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_branchListForGrammarAnalysis final {
  public: DownEnumerator_branchListForGrammarAnalysis (const class GGS_branchListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_branchListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_branchListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_branchListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_branchListForGrammarAnalysis (const DownEnumerator_branchListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_branchListForGrammarAnalysis & operator = (const DownEnumerator_branchListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_branchListForGrammarAnalysis final {
  public: UpEnumerator_branchListForGrammarAnalysis (const class GGS_branchListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_branchListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_syntaxInstructionListForGrammarAnalysis current_mSyntaxInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_branchListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_branchListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_branchListForGrammarAnalysis (const UpEnumerator_branchListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_branchListForGrammarAnalysis & operator = (const UpEnumerator_branchListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @branchListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_branchListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_branchListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_branchListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_branchListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis &) = default ;
  public: GGS_branchListForGrammarAnalysis & operator = (const GGS_branchListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_branchListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_branchListForGrammarAnalysis subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_branchListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchListForGrammarAnalysis init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_branchListForGrammarAnalysis class_func_listWithValue (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_branchListForGrammarAnalysis inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_branchListForGrammarAnalysis_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_branchListForGrammarAnalysis add_operation (const GGS_branchListForGrammarAnalysis & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GGS_syntaxInstructionListForGrammarAnalysis constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_syntaxInstructionListForGrammarAnalysis & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxInstructionListForGrammarAnalysis getter_mSyntaxInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_branchListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_branchListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_branchListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_branchListForGrammarAnalysis ;
  friend class DownEnumerator_branchListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_branchListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_syntaxInstructionListForGrammarAnalysis mProperty_mSyntaxInstructionList ;
  public: inline GGS_syntaxInstructionListForGrammarAnalysis readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GGS_syntaxInstructionListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_branchListForGrammarAnalysis_2E_element (const GGS_branchListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_branchListForGrammarAnalysis_2E_element & operator = (const GGS_branchListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchListForGrammarAnalysis_2E_element init_21_ (const class GGS_syntaxInstructionListForGrammarAnalysis & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectInstructionForGrammarAnalysis (const class cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_branchListForGrammarAnalysis readProperty_mSelectBranchList (void) const ;

  public: class GGS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;

#include "separateHeaderFor_selectInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectInstructionForGrammarAnalysis_2E_weak (const class GGS_selectInstructionForGrammarAnalysis & inSource) ;

  public: GGS_selectInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_selectInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_selectInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectInstructionForGrammarAnalysis bang_selectInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_selectInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGrammarAnalysis : public GGS_abstractSyntaxInstructionForGrammarAnalysis {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGrammarAnalysis (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_repeatInstructionForGrammarAnalysis (const class cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_branchListForGrammarAnalysis readProperty_mRepeatBranchList (void) const ;

  public: class GGS_uint readProperty_mAddedNonTerminalSymbolIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_repeatInstructionForGrammarAnalysis init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_repeatInstructionForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;

#include "separateHeaderFor_repeatInstructionForGrammarAnalysis.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @repeatInstructionForGrammarAnalysis_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_repeatInstructionForGrammarAnalysis_2E_weak : public GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak {
//--------------------------------- Default constructor
  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak (const class GGS_repeatInstructionForGrammarAnalysis & inSource) ;

  public: GGS_repeatInstructionForGrammarAnalysis_2E_weak & operator = (const class GGS_repeatInstructionForGrammarAnalysis & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_repeatInstructionForGrammarAnalysis_2E_weak init_nil (void) {
    GGS_repeatInstructionForGrammarAnalysis_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_repeatInstructionForGrammarAnalysis bang_repeatInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_repeatInstructionForGrammarAnalysis unwrappedValue (void) const ;

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
  public: static GGS_repeatInstructionForGrammarAnalysis_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_repeatInstructionForGrammarAnalysis_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_repeatInstructionForGrammarAnalysis_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentListForGrammarAnalysis list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syntaxComponentListForGrammarAnalysis final {
  public: DownEnumerator_syntaxComponentListForGrammarAnalysis (const class GGS_syntaxComponentListForGrammarAnalysis & inList) ;

  public: ~ DownEnumerator_syntaxComponentListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxComponentListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syntaxComponentListForGrammarAnalysis (const DownEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
  private: DownEnumerator_syntaxComponentListForGrammarAnalysis & operator = (const DownEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syntaxComponentListForGrammarAnalysis final {
  public: UpEnumerator_syntaxComponentListForGrammarAnalysis (const class GGS_syntaxComponentListForGrammarAnalysis & inList)  ;

  public: ~ UpEnumerator_syntaxComponentListForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_productionRuleListForGrammarAnalysis current_mProductionRulesList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syntaxComponentListForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syntaxComponentListForGrammarAnalysis (const UpEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
  private: UpEnumerator_syntaxComponentListForGrammarAnalysis & operator = (const UpEnumerator_syntaxComponentListForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syntaxComponentListForGrammarAnalysis list
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentListForGrammarAnalysis : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> mArray ;

//--- Default constructor
  public: GGS_syntaxComponentListForGrammarAnalysis (void) ;

//--- Destructor
  public: virtual ~ GGS_syntaxComponentListForGrammarAnalysis (void) = default ;

//--- Copy
  public: GGS_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis &) = default ;
  public: GGS_syntaxComponentListForGrammarAnalysis & operator = (const GGS_syntaxComponentListForGrammarAnalysis &) = default ;

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
  public : inline GenericArray <GGS_syntaxComponentListForGrammarAnalysis_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syntaxComponentListForGrammarAnalysis subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syntaxComponentListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                 const class GGS_lstring & in_mSyntaxComponentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentListForGrammarAnalysis init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentListForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syntaxComponentListForGrammarAnalysis class_func_listWithValue (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                           const class GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_syntaxComponentListForGrammarAnalysis add_operation (const GGS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMProductionRulesListAtIndex (class GGS_productionRuleListForGrammarAnalysis constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GGS_lstring constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_productionRuleListForGrammarAnalysis & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_productionRuleListForGrammarAnalysis getter_mProductionRulesListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSyntaxComponentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxComponentListForGrammarAnalysis getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxComponentListForGrammarAnalysis getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syntaxComponentListForGrammarAnalysis getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syntaxComponentListForGrammarAnalysis ;
  friend class DownEnumerator_syntaxComponentListForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentListForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentListForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_productionRuleListForGrammarAnalysis mProperty_mProductionRulesList ;
  public: inline GGS_productionRuleListForGrammarAnalysis readProperty_mProductionRulesList (void) const {
    return mProperty_mProductionRulesList ;
  }

  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProductionRulesList (const GGS_productionRuleListForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProductionRulesList = inValue ;
  }

  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                const GGS_lstring & in_mSyntaxComponentName) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element & operator = (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentListForGrammarAnalysis_2E_element init_21__21_ (const class GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxComponentListForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalSymbolsMapForGrammarAnalysis map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_terminalSymbolsMapForGrammarAnalysis final {

  public: DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const class GGS_terminalSymbolsMapForGrammarAnalysis & inMap) ;

  public: ~ DownEnumerator_terminalSymbolsMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mTerminalIndex (LOCATION_ARGS) const ;

  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const DownEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
  private: DownEnumerator_terminalSymbolsMapForGrammarAnalysis & operator = (const DownEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_terminalSymbolsMapForGrammarAnalysis final {
  public: UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const class GGS_terminalSymbolsMapForGrammarAnalysis & inMap)  ;

  public: ~ UpEnumerator_terminalSymbolsMapForGrammarAnalysis (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTerminalIndex (LOCATION_ARGS) const ;
  public: class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const UpEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
  private: UpEnumerator_terminalSymbolsMapForGrammarAnalysis & operator = (const UpEnumerator_terminalSymbolsMapForGrammarAnalysis &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_terminalSymbolsMapForGrammarAnalysis (void) ;

//--- Handle copy
  public: GGS_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;
  public: GGS_terminalSymbolsMapForGrammarAnalysis & operator = (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) ;

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
  protected: void performInsert (const class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_terminalSymbolsMapForGrammarAnalysis_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalSymbolsMapForGrammarAnalysis init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalSymbolsMapForGrammarAnalysis extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_terminalSymbolsMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GGS_terminalSymbolsMapForGrammarAnalysis & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalIndexForKey (class GGS_uint constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mTerminalIndexForKey (const class GGS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_terminalSymbolsMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_terminalSymbolsMapForGrammarAnalysis ;
  friend class DownEnumerator_terminalSymbolsMapForGrammarAnalysis ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalSymbolsMapForGrammarAnalysis_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mTerminalIndex ;
  public: inline GGS_uint readProperty_mTerminalIndex (void) const {
    return mProperty_mTerminalIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminalIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (const GGS_lstring & in_lkey,
                                                               const GGS_uint & in_mTerminalIndex) ;

//--------------------------------- Copy constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & operator = (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_uint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: terminalSymbolsMapForGrammarAnalysis.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_terminalSymbolsMapForGrammarAnalysis_2E_element unwrappedValue (void) const {
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
  public: static GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @terminalList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_terminalList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTerminalName ;
  public: inline GGS_lstring readProperty_mTerminalName (void) const {
    return mProperty_mTerminalName ;
  }

  public: GGS_lexicalSentValueList mProperty_mSentAttributeList ;
  public: inline GGS_lexicalSentValueList readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

  public: GGS_string mProperty_mSyntaxErrorMessage ;
  public: inline GGS_string readProperty_mSyntaxErrorMessage (void) const {
    return mProperty_mSyntaxErrorMessage ;
  }

  public: GGS_bool mProperty_isEndOfTemplateMark ;
  public: inline GGS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

  public: GGS_bool mProperty_atomicSelection ;
  public: inline GGS_bool readProperty_atomicSelection (void) const {
    return mProperty_atomicSelection ;
  }

  public: GGS_uint mProperty_mStyleIndex ;
  public: inline GGS_uint readProperty_mStyleIndex (void) const {
    return mProperty_mStyleIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_terminalList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTerminalName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalName = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GGS_lexicalSentValueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMSyntaxErrorMessage (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxErrorMessage = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

  public: inline void setter_setAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_atomicSelection = inValue ;
  }

  public: inline void setter_setMStyleIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_terminalList_2E_element (const GGS_lstring & in_mTerminalName,
                                       const GGS_lexicalSentValueList & in_mSentAttributeList,
                                       const GGS_string & in_mSyntaxErrorMessage,
                                       const GGS_bool & in_isEndOfTemplateMark,
                                       const GGS_bool & in_atomicSelection,
                                       const GGS_uint & in_mStyleIndex) ;

//--------------------------------- Copy constructor
  public: GGS_terminalList_2E_element (const GGS_terminalList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_terminalList_2E_element & operator = (const GGS_terminalList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_terminalList_2E_element init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (const class GGS_lstring & inOperand0,
                                                                                                             const class GGS_lexicalSentValueList & inOperand1,
                                                                                                             const class GGS_string & inOperand2,
                                                                                                             const class GGS_bool & inOperand3,
                                                                                                             const class GGS_bool & inOperand4,
                                                                                                             const class GGS_uint & inOperand5,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_terminalList_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitTokenListMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalExplicitTokenListMap final {

  public: DownEnumerator_lexicalExplicitTokenListMap (const class GGS_lexicalExplicitTokenListMap & inMap) ;

  public: ~ DownEnumerator_lexicalExplicitTokenListMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mTerminal (LOCATION_ARGS) const ;

  public: class GGS_bool current_atomicSelection (LOCATION_ARGS) const ;

  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;

  public: class GGS_lexicalExplicitTokenListMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalExplicitTokenListMap (const DownEnumerator_lexicalExplicitTokenListMap &) = delete ;
  private: DownEnumerator_lexicalExplicitTokenListMap & operator = (const DownEnumerator_lexicalExplicitTokenListMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalExplicitTokenListMap final {
  public: UpEnumerator_lexicalExplicitTokenListMap (const class GGS_lexicalExplicitTokenListMap & inMap)  ;

  public: ~ UpEnumerator_lexicalExplicitTokenListMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public: class GGS_bool current_atomicSelection (LOCATION_ARGS) const ;
  public: class GGS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
  public: class GGS_lexicalExplicitTokenListMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalExplicitTokenListMap (const UpEnumerator_lexicalExplicitTokenListMap &) = delete ;
  private: UpEnumerator_lexicalExplicitTokenListMap & operator = (const UpEnumerator_lexicalExplicitTokenListMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalExplicitTokenListMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalExplicitTokenListMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalExplicitTokenListMap (void) ;

//--- Handle copy
  public: GGS_lexicalExplicitTokenListMap (const GGS_lexicalExplicitTokenListMap & inSource) ;
  public: GGS_lexicalExplicitTokenListMap & operator = (const GGS_lexicalExplicitTokenListMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalExplicitTokenListMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalExplicitTokenListMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitTokenListMap init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExplicitTokenListMap extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalExplicitTokenListMap class_func_mapWithMapToOverride (const class GGS_lexicalExplicitTokenListMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  class GGS_bool constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setAtomicSelectionForKey (class GGS_bool constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsEndOfTemplateMarkForKey (class GGS_bool constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalForKey (class GGS_lstring constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_bool & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_atomicSelectionForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEndOfTemplateMarkForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mTerminalForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalExplicitTokenListMap getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_lexicalExplicitTokenListMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalExplicitTokenListMap ;
  friend class DownEnumerator_lexicalExplicitTokenListMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitTokenListMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mTerminal ;
  public: inline GGS_lstring readProperty_mTerminal (void) const {
    return mProperty_mTerminal ;
  }

  public: GGS_bool mProperty_atomicSelection ;
  public: inline GGS_bool readProperty_atomicSelection (void) const {
    return mProperty_atomicSelection ;
  }

  public: GGS_bool mProperty_isEndOfTemplateMark ;
  public: inline GGS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalExplicitTokenListMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminal (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminal = inValue ;
  }

  public: inline void setter_setAtomicSelection (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_atomicSelection = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalExplicitTokenListMap_2E_element (const GGS_lstring & in_lkey,
                                                      const GGS_lstring & in_mTerminal,
                                                      const GGS_bool & in_atomicSelection,
                                                      const GGS_bool & in_isEndOfTemplateMark) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalExplicitTokenListMap_2E_element (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalExplicitTokenListMap_2E_element & operator = (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitTokenListMap_2E_element init_21__21__21_atomicSelection_21_isEndOfTemplateMark (const class GGS_lstring & inOperand0,
                                                                                                                    const class GGS_lstring & inOperand1,
                                                                                                                    const class GGS_bool & inOperand2,
                                                                                                                    const class GGS_bool & inOperand3,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExplicitTokenListMap_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalExplicitTokenListMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalExplicitTokenListMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalExplicitTokenListMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalExplicitTokenListMap_2E_element_3F_ (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalExplicitTokenListMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalExplicitTokenListMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalExplicitTokenListMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tokenSortedlist sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_tokenSortedlist final {
//--- Constructor
  public: DownEnumerator_tokenSortedlist (const class GGS_tokenSortedlist & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_uint current_mLength (LOCATION_ARGS) const ;
  public: class GGS_string current_mName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTerminalName (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_tokenSortedlist_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_tokenSortedlist_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_tokenSortedlist (const DownEnumerator_tokenSortedlist &) = delete ;
  private: DownEnumerator_tokenSortedlist & operator = (const DownEnumerator_tokenSortedlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_tokenSortedlist final {
//--- Constructor
  public: UpEnumerator_tokenSortedlist (const class GGS_tokenSortedlist & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_uint current_mLength (LOCATION_ARGS) const ;
  public: class GGS_string current_mName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTerminalName (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_tokenSortedlist_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_tokenSortedlist_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_tokenSortedlist (const UpEnumerator_tokenSortedlist &) = delete ;
  private: UpEnumerator_tokenSortedlist & operator = (const UpEnumerator_tokenSortedlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tokenSortedlist sorted list
//--------------------------------------------------------------------------------------------------

class GGS_tokenSortedlist final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_tokenSortedlist_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_tokenSortedlist (void) ;

//--- Destructor
  public: virtual ~ GGS_tokenSortedlist (void) = default ;

//--- Handle copy
  public: GGS_tokenSortedlist (const GGS_tokenSortedlist &) = default ;
  public: GGS_tokenSortedlist & operator = (const GGS_tokenSortedlist &) = default ;

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
  public : inline GenericArray <GGS_tokenSortedlist_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tokenSortedlist init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tokenSortedlist extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_tokenSortedlist class_func_sortedListWithValue (const class GGS_uint & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           const class GGS_string & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_tokenSortedlist inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_uint & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_tokenSortedlist_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_uint inArgument0,
                                               class GGS_string inArgument1,
                                               class GGS_string inArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_uint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    class GGS_string & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_uint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    class GGS_string & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_uint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_uint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_tokenSortedlist ;
  friend class DownEnumerator_tokenSortedlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tokenSortedlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @tokenSortedlist_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_tokenSortedlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mLength ;
  public: inline GGS_uint readProperty_mLength (void) const {
    return mProperty_mLength ;
  }

  public: GGS_string mProperty_mName ;
  public: inline GGS_string readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_string mProperty_mTerminalName ;
  public: inline GGS_string readProperty_mTerminalName (void) const {
    return mProperty_mTerminalName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_tokenSortedlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLength (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLength = inValue ;
  }

  public: inline void setter_setMName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMTerminalName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_tokenSortedlist_2E_element (const GGS_uint & in_mLength,
                                          const GGS_string & in_mName,
                                          const GGS_string & in_mTerminalName) ;

//--------------------------------- Copy constructor
  public: GGS_tokenSortedlist_2E_element (const GGS_tokenSortedlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_tokenSortedlist_2E_element & operator = (const GGS_tokenSortedlist_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_tokenSortedlist_2E_element init_21__21__21_ (const class GGS_uint & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  const class GGS_string & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_tokenSortedlist_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tokenSortedlist_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitTokenListMapMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMapMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalExplicitTokenListMap mProperty_mExplicitTokenListMap ;
  public: inline GGS_lexicalExplicitTokenListMap readProperty_mExplicitTokenListMap (void) const {
    return mProperty_mExplicitTokenListMap ;
  }

  public: GGS_tokenSortedlist mProperty_mTokenSortedList ;
  public: inline GGS_tokenSortedlist readProperty_mTokenSortedList (void) const {
    return mProperty_mTokenSortedList ;
  }

  public: GGS_bool mProperty_mShouldBeGenerated ;
  public: inline GGS_bool readProperty_mShouldBeGenerated (void) const {
    return mProperty_mShouldBeGenerated ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalExplicitTokenListMapMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExplicitTokenListMap (const GGS_lexicalExplicitTokenListMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExplicitTokenListMap = inValue ;
  }

  public: inline void setter_setMTokenSortedList (const GGS_tokenSortedlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTokenSortedList = inValue ;
  }

  public: inline void setter_setMShouldBeGenerated (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mShouldBeGenerated = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalExplicitTokenListMapMap_2E_element (const GGS_lstring & in_lkey,
                                                         const GGS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                         const GGS_tokenSortedlist & in_mTokenSortedList,
                                                         const GGS_bool & in_mShouldBeGenerated) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalExplicitTokenListMapMap_2E_element (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalExplicitTokenListMapMap_2E_element & operator = (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitTokenListMapMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lexicalExplicitTokenListMap & inOperand1,
                                                                                     const class GGS_tokenSortedlist & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalExplicitTokenListMapMap_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalExplicitTokenListMapMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalExplicitTokenListMapMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalExplicitTokenListMapMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalMessageMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalMessageMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mLexicalMessage ;
  public: inline GGS_lstring readProperty_mLexicalMessage (void) const {
    return mProperty_mLexicalMessage ;
  }

  public: GGS_bool mProperty_mMessageIsUsed ;
  public: inline GGS_bool readProperty_mMessageIsUsed (void) const {
    return mProperty_mMessageIsUsed ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalMessageMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalMessage = inValue ;
  }

  public: inline void setter_setMMessageIsUsed (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageIsUsed = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalMessageMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_lstring & in_mLexicalMessage,
                                            const GGS_bool & in_mMessageIsUsed) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalMessageMap_2E_element (const GGS_lexicalMessageMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalMessageMap_2E_element & operator = (const GGS_lexicalMessageMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalMessageMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalMessageMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalMessageMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalMessageMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalMessageMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalMessageMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalMessageMap_2E_element_3F_ (const GGS_lexicalMessageMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalMessageMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalMessageMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalMessageMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineFormalArgumentList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalRoutineFormalArgumentList final {
  public: DownEnumerator_lexicalRoutineFormalArgumentList (const class GGS_lexicalRoutineFormalArgumentList & inList) ;

  public: ~ DownEnumerator_lexicalRoutineFormalArgumentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRoutineFormalArgumentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalRoutineFormalArgumentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalRoutineFormalArgumentList (const DownEnumerator_lexicalRoutineFormalArgumentList &) = delete ;
  private: DownEnumerator_lexicalRoutineFormalArgumentList & operator = (const DownEnumerator_lexicalRoutineFormalArgumentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalRoutineFormalArgumentList final {
  public: UpEnumerator_lexicalRoutineFormalArgumentList (const class GGS_lexicalRoutineFormalArgumentList & inList)  ;

  public: ~ UpEnumerator_lexicalRoutineFormalArgumentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalRoutineFormalArgumentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalRoutineFormalArgumentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalRoutineFormalArgumentList (const UpEnumerator_lexicalRoutineFormalArgumentList &) = delete ;
  private: UpEnumerator_lexicalRoutineFormalArgumentList & operator = (const UpEnumerator_lexicalRoutineFormalArgumentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalRoutineFormalArgumentList list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineFormalArgumentList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalRoutineFormalArgumentList_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalRoutineFormalArgumentList (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalRoutineFormalArgumentList (void) = default ;

//--- Copy
  public: GGS_lexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList &) = default ;
  public: GGS_lexicalRoutineFormalArgumentList & operator = (const GGS_lexicalRoutineFormalArgumentList &) = default ;

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
  public : inline GenericArray <GGS_lexicalRoutineFormalArgumentList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalRoutineFormalArgumentList subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalRoutineFormalArgumentList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                 const class GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                 const class GGS_string & in_mArgumentNameForComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineFormalArgumentList init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineFormalArgumentList extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineFormalArgumentList class_func_listWithValue (const class GGS_lexicalArgumentModeAST & inOperand0,
                                                                                      const class GGS_lexicalTypeEnum & inOperand1,
                                                                                      const class GGS_string & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalRoutineFormalArgumentList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lexicalArgumentModeAST & inOperand0,
                                                    const class GGS_lexicalTypeEnum & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalRoutineFormalArgumentList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalRoutineFormalArgumentList add_operation (const GGS_lexicalRoutineFormalArgumentList & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lexicalArgumentModeAST constinArgument0,
                                               class GGS_lexicalTypeEnum constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lexicalArgumentModeAST constinArgument0,
                                                      class GGS_lexicalTypeEnum constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lexicalArgumentModeAST & outArgument0,
                                                 class GGS_lexicalTypeEnum & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lexicalArgumentModeAST & outArgument0,
                                                class GGS_lexicalTypeEnum & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lexicalArgumentModeAST & outArgument0,
                                                      class GGS_lexicalTypeEnum & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentNameForCommentAtIndex (class GGS_string constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalFormalArgumentModeAtIndex (class GGS_lexicalArgumentModeAST constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalFormalArgumentTypeAtIndex (class GGS_lexicalTypeEnum constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lexicalArgumentModeAST & outArgument0,
                                              class GGS_lexicalTypeEnum & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lexicalArgumentModeAST & outArgument0,
                                             class GGS_lexicalTypeEnum & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mArgumentNameForCommentAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalArgumentModeAST getter_mLexicalFormalArgumentModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalTypeEnum getter_mLexicalFormalArgumentTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRoutineFormalArgumentList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRoutineFormalArgumentList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalRoutineFormalArgumentList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalRoutineFormalArgumentList ;
  friend class DownEnumerator_lexicalRoutineFormalArgumentList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineFormalArgumentList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineFormalArgumentList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lexicalArgumentModeAST mProperty_mLexicalFormalArgumentMode ;
  public: inline GGS_lexicalArgumentModeAST readProperty_mLexicalFormalArgumentMode (void) const {
    return mProperty_mLexicalFormalArgumentMode ;
  }

  public: GGS_lexicalTypeEnum mProperty_mLexicalFormalArgumentType ;
  public: inline GGS_lexicalTypeEnum readProperty_mLexicalFormalArgumentType (void) const {
    return mProperty_mLexicalFormalArgumentType ;
  }

  public: GGS_string mProperty_mArgumentNameForComment ;
  public: inline GGS_string readProperty_mArgumentNameForComment (void) const {
    return mProperty_mArgumentNameForComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalRoutineFormalArgumentList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalFormalArgumentMode (const GGS_lexicalArgumentModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalArgumentMode = inValue ;
  }

  public: inline void setter_setMLexicalFormalArgumentType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalArgumentType = inValue ;
  }

  public: inline void setter_setMArgumentNameForComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentNameForComment = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                           const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                           const GGS_string & in_mArgumentNameForComment) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalRoutineFormalArgumentList_2E_element (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalRoutineFormalArgumentList_2E_element & operator = (const GGS_lexicalRoutineFormalArgumentList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineFormalArgumentList_2E_element init_21__21__21_ (const class GGS_lexicalArgumentModeAST & inOperand0,
                                                                                   const class GGS_lexicalTypeEnum & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineFormalArgumentList_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalRoutineFormalArgumentList mProperty_mLexicalRoutineFormalArgumentList ;
  public: inline GGS_lexicalRoutineFormalArgumentList readProperty_mLexicalRoutineFormalArgumentList (void) const {
    return mProperty_mLexicalRoutineFormalArgumentList ;
  }

  public: GGS_stringlist mProperty_mErrorMessageList ;
  public: inline GGS_stringlist readProperty_mErrorMessageList (void) const {
    return mProperty_mErrorMessageList ;
  }

  public: GGS_bool mProperty_mIsExtern ;
  public: inline GGS_bool readProperty_mIsExtern (void) const {
    return mProperty_mIsExtern ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalRoutineFormalArgumentList (const GGS_lexicalRoutineFormalArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineFormalArgumentList = inValue ;
  }

  public: inline void setter_setMErrorMessageList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessageList = inValue ;
  }

  public: inline void setter_setMIsExtern (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExtern = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalRoutineMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                            const GGS_stringlist & in_mErrorMessageList,
                                            const GGS_bool & in_mIsExtern) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalRoutineMap_2E_element (const GGS_lexicalRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalRoutineMap_2E_element & operator = (const GGS_lexicalRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalRoutineMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                        const class GGS_stringlist & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalRoutineMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalRoutineMap_2E_element_3F_ (const GGS_lexicalRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalRoutineMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionFormalArgumentList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalFunctionFormalArgumentList final {
  public: DownEnumerator_lexicalFunctionFormalArgumentList (const class GGS_lexicalFunctionFormalArgumentList & inList) ;

  public: ~ DownEnumerator_lexicalFunctionFormalArgumentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionFormalArgumentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalFunctionFormalArgumentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalFunctionFormalArgumentList (const DownEnumerator_lexicalFunctionFormalArgumentList &) = delete ;
  private: DownEnumerator_lexicalFunctionFormalArgumentList & operator = (const DownEnumerator_lexicalFunctionFormalArgumentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalFunctionFormalArgumentList final {
  public: UpEnumerator_lexicalFunctionFormalArgumentList (const class GGS_lexicalFunctionFormalArgumentList & inList)  ;

  public: ~ UpEnumerator_lexicalFunctionFormalArgumentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GGS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lexicalFunctionFormalArgumentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_lexicalFunctionFormalArgumentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalFunctionFormalArgumentList (const UpEnumerator_lexicalFunctionFormalArgumentList &) = delete ;
  private: UpEnumerator_lexicalFunctionFormalArgumentList & operator = (const UpEnumerator_lexicalFunctionFormalArgumentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @lexicalFunctionFormalArgumentList list
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionFormalArgumentList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_lexicalFunctionFormalArgumentList_2E_element> mArray ;

//--- Default constructor
  public: GGS_lexicalFunctionFormalArgumentList (void) ;

//--- Destructor
  public: virtual ~ GGS_lexicalFunctionFormalArgumentList (void) = default ;

//--- Copy
  public: GGS_lexicalFunctionFormalArgumentList (const GGS_lexicalFunctionFormalArgumentList &) = default ;
  public: GGS_lexicalFunctionFormalArgumentList & operator = (const GGS_lexicalFunctionFormalArgumentList &) = default ;

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
  public : inline GenericArray <GGS_lexicalFunctionFormalArgumentList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_lexicalFunctionFormalArgumentList subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_lexicalFunctionFormalArgumentList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lexicalTypeEnum & in_mLexicalType,
                                                 const class GGS_string & in_mArgumentNameForComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionFormalArgumentList init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionFormalArgumentList extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionFormalArgumentList class_func_listWithValue (const class GGS_lexicalTypeEnum & inOperand0,
                                                                                       const class GGS_string & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_lexicalFunctionFormalArgumentList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lexicalTypeEnum & inOperand0,
                                                    const class GGS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_lexicalFunctionFormalArgumentList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lexicalFunctionFormalArgumentList add_operation (const GGS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lexicalTypeEnum constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lexicalTypeEnum constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lexicalTypeEnum & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lexicalTypeEnum & outArgument0,
                                                class GGS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lexicalTypeEnum & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentNameForCommentAtIndex (class GGS_string constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeAtIndex (class GGS_lexicalTypeEnum constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lexicalTypeEnum & outArgument0,
                                              class GGS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lexicalTypeEnum & outArgument0,
                                             class GGS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mArgumentNameForCommentAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionFormalArgumentList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionFormalArgumentList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalFunctionFormalArgumentList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalFunctionFormalArgumentList ;
  friend class DownEnumerator_lexicalFunctionFormalArgumentList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionFormalArgumentList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionFormalArgumentList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GGS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

  public: GGS_string mProperty_mArgumentNameForComment ;
  public: inline GGS_string readProperty_mArgumentNameForComment (void) const {
    return mProperty_mArgumentNameForComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalFunctionFormalArgumentList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

  public: inline void setter_setMArgumentNameForComment (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentNameForComment = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalTypeEnum & in_mLexicalType,
                                                            const GGS_string & in_mArgumentNameForComment) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalFunctionFormalArgumentList_2E_element (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalFunctionFormalArgumentList_2E_element & operator = (const GGS_lexicalFunctionFormalArgumentList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionFormalArgumentList_2E_element init_21__21_ (const class GGS_lexicalTypeEnum & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionFormalArgumentList_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalFunctionFormalArgumentList mProperty_mLexicalTypeList ;
  public: inline GGS_lexicalFunctionFormalArgumentList readProperty_mLexicalTypeList (void) const {
    return mProperty_mLexicalTypeList ;
  }

  public: GGS_lexicalTypeEnum mProperty_mReturnedLexicalType ;
  public: inline GGS_lexicalTypeEnum readProperty_mReturnedLexicalType (void) const {
    return mProperty_mReturnedLexicalType ;
  }

  public: GGS_string mProperty_mReplacementFunctionName ;
  public: inline GGS_string readProperty_mReplacementFunctionName (void) const {
    return mProperty_mReplacementFunctionName ;
  }

  public: GGS_bool mProperty_mIsExtern ;
  public: inline GGS_bool readProperty_mIsExtern (void) const {
    return mProperty_mIsExtern ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalTypeList (const GGS_lexicalFunctionFormalArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalTypeList = inValue ;
  }

  public: inline void setter_setMReturnedLexicalType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedLexicalType = inValue ;
  }

  public: inline void setter_setMReplacementFunctionName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementFunctionName = inValue ;
  }

  public: inline void setter_setMIsExtern (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExtern = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalFunctionMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                             const GGS_lexicalTypeEnum & in_mReturnedLexicalType,
                                             const GGS_string & in_mReplacementFunctionName,
                                             const GGS_bool & in_mIsExtern) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalFunctionMap_2E_element (const GGS_lexicalFunctionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalFunctionMap_2E_element & operator = (const GGS_lexicalFunctionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionMap_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                             const class GGS_lexicalTypeEnum & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             const class GGS_bool & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalFunctionMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalFunctionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalFunctionMap_2E_element_3F_ (const GGS_lexicalFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalFunctionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalFunctionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateDelimitorList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_templateDelimitorList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mStartString ;
  public: inline GGS_lstring readProperty_mStartString (void) const {
    return mProperty_mStartString ;
  }

  public: GGS_lstring mProperty_mEndString ;
  public: inline GGS_lstring readProperty_mEndString (void) const {
    return mProperty_mEndString ;
  }

  public: GGS_bool mProperty_mPreservesStartDelimiter ;
  public: inline GGS_bool readProperty_mPreservesStartDelimiter (void) const {
    return mProperty_mPreservesStartDelimiter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_templateDelimitorList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartString = inValue ;
  }

  public: inline void setter_setMEndString (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndString = inValue ;
  }

  public: inline void setter_setMPreservesStartDelimiter (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesStartDelimiter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_templateDelimitorList_2E_element (const GGS_lstring & in_mStartString,
                                                const GGS_lstring & in_mEndString,
                                                const GGS_bool & in_mPreservesStartDelimiter) ;

//--------------------------------- Copy constructor
  public: GGS_templateDelimitorList_2E_element (const GGS_templateDelimitorList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_templateDelimitorList_2E_element & operator = (const GGS_templateDelimitorList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateDelimitorList_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_bool & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateDelimitorList_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @styleMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_styleMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lstring mProperty_mComment ;
  public: inline GGS_lstring readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

  public: GGS_uint mProperty_mStyleIndex ;
  public: inline GGS_uint readProperty_mStyleIndex (void) const {
    return mProperty_mStyleIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_styleMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMComment (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

  public: inline void setter_setMStyleIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_styleMap_2E_element (const GGS_lstring & in_lkey,
                                   const GGS_lstring & in_mComment,
                                   const GGS_uint & in_mStyleIndex) ;

//--------------------------------- Copy constructor
  public: GGS_styleMap_2E_element (const GGS_styleMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_styleMap_2E_element & operator = (const GGS_styleMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_styleMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_lstring & inOperand1,
                                                           const class GGS_uint & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_styleMap_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: styleMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_styleMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_styleMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_styleMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_styleMap_2E_element_3F_ (const GGS_styleMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_styleMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_styleMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_styleMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTagMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalTagMap final {

  public: DownEnumerator_lexicalTagMap (const class GGS_lexicalTagMap & inMap) ;

  public: ~ DownEnumerator_lexicalTagMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lexicalTagMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalTagMap (const DownEnumerator_lexicalTagMap &) = delete ;
  private: DownEnumerator_lexicalTagMap & operator = (const DownEnumerator_lexicalTagMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalTagMap final {
  public: UpEnumerator_lexicalTagMap (const class GGS_lexicalTagMap & inMap)  ;

  public: ~ UpEnumerator_lexicalTagMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lexicalTagMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalTagMap (const UpEnumerator_lexicalTagMap &) = delete ;
  private: UpEnumerator_lexicalTagMap & operator = (const UpEnumerator_lexicalTagMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalTagMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalTagMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalTagMap (void) ;

//--- Handle copy
  public: GGS_lexicalTagMap (const GGS_lexicalTagMap & inSource) ;
  public: GGS_lexicalTagMap & operator = (const GGS_lexicalTagMap & inSource) ;

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
  protected: void performInsert (const class GGS_lexicalTagMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTagMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalTagMap init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalTagMap extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTagMap class_func_mapWithMapToOverride (const class GGS_lexicalTagMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lexicalTagMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_lexicalTagMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalTagMap ;
  friend class DownEnumerator_lexicalTagMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTagMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalTagMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalTagMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalTagMap_2E_element (const GGS_lexicalTagMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalTagMap_2E_element & operator = (const GGS_lexicalTagMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalTagMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexicalTagMap_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalTagMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTagMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalTagMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalTagMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalTagMap_2E_element_3F_ (const GGS_lexicalTagMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalTagMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalTagMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_lexicalTagMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_tikzNodeForSyntaxInstruction (const class GGS_syntaxInstructionListForGrammarAnalysis inObject,
                                                   class GGS_rowList & io_ioRowList,
                                                   const class GGS_uint constin_inRow,
                                                   class GGS_uint & io_ioColumn,
                                                   class GGS_string & io_ioCurrentNode,
                                                   class GGS_string & io_ioArrowShape,
                                                   class GGS_string & io_ioArrows,
                                                   class GGS_uint & io_ioMaxUsedRowIndex,
                                                   const class GGS_bool constin_inDebug,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @rowList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_rowList final {
  public: DownEnumerator_rowList (const class GGS_rowList & inList) ;

  public: ~ DownEnumerator_rowList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__32_stringlist current_columns (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_rowList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_rowList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_rowList (const DownEnumerator_rowList &) = delete ;
  private: DownEnumerator_rowList & operator = (const DownEnumerator_rowList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_rowList final {
  public: UpEnumerator_rowList (const class GGS_rowList & inList)  ;

  public: ~ UpEnumerator_rowList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS__32_stringlist current_columns (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_rowList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_rowList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_rowList (const UpEnumerator_rowList &) = delete ;
  private: UpEnumerator_rowList & operator = (const UpEnumerator_rowList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @rowList list
//--------------------------------------------------------------------------------------------------

class GGS_rowList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_rowList_2E_element> mArray ;

//--- Default constructor
  public: GGS_rowList (void) ;

//--- Destructor
  public: virtual ~ GGS_rowList (void) = default ;

//--- Copy
  public: GGS_rowList (const GGS_rowList &) = default ;
  public: GGS_rowList & operator = (const GGS_rowList &) = default ;

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
  public : inline GenericArray <GGS_rowList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_rowList subList (const int32_t inStart,
                                const int32_t inLength,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_rowList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS__32_stringlist & in_columns
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_rowList init (Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_rowList extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_rowList class_func_listWithValue (const class GGS__32_stringlist & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_rowList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS__32_stringlist & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_rowList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_rowList add_operation (const GGS_rowList & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS__32_stringlist constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS__32_stringlist constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS__32_stringlist & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS__32_stringlist & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS__32_stringlist & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setColumnsAtIndex (class GGS__32_stringlist constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS__32_stringlist & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS__32_stringlist & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_columnsAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_rowList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_rowList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_rowList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_rowList ;
  friend class DownEnumerator_rowList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rowList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       class GGS_rowList & io_ioRowList,
                                                       const class GGS_uint constin_inRow,
                                                       class GGS_uint & io_ioColumn,
                                                       class GGS_string & io_ioCurrentNode,
                                                       class GGS_string & io_ioArrowShape,
                                                       class GGS_string & io_ioArrows,
                                                       class GGS_uint & io_ioMaxUsedRowIndex,
                                                       const class GGS_bool constin_inDebug,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@rowList appendRow'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendRow (class GGS_rowList & ioObject,
                                const class GGS_string constin_inNodeDefinition,
                                const class GGS_uint constin_inRow,
                                const class GGS_uint constin_inColumn,
                                class GGS_string & out_outNodeName,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @rowList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_rowList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS__32_stringlist mProperty_columns ;
  public: inline GGS__32_stringlist readProperty_columns (void) const {
    return mProperty_columns ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_rowList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setColumns (const GGS__32_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_columns = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_rowList_2E_element (const GGS__32_stringlist & in_columns) ;

//--------------------------------- Copy constructor
  public: GGS_rowList_2E_element (const GGS_rowList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_rowList_2E_element & operator = (const GGS_rowList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_rowList_2E_element init_21_ (const class GGS__32_stringlist & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_rowList_2E_element extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rowList_2E_element ;

