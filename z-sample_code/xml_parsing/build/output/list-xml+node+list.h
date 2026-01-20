#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 1: @xmlNodeList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_xmlNodeList final {
  public: DownEnumerator_xmlNodeList (const class GGS_xmlNodeList & inList) ;

  public: ~ DownEnumerator_xmlNodeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_xmlNode current_node (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_xmlNodeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_xmlNodeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_xmlNodeList (const DownEnumerator_xmlNodeList &) = delete ;
  private: DownEnumerator_xmlNodeList & operator = (const DownEnumerator_xmlNodeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_xmlNodeList final {
  public: UpEnumerator_xmlNodeList (const class GGS_xmlNodeList & inList)  ;

  public: ~ UpEnumerator_xmlNodeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_xmlNode current_node (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_xmlNodeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_xmlNodeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_xmlNodeList (const UpEnumerator_xmlNodeList &) = delete ;
  private: UpEnumerator_xmlNodeList & operator = (const UpEnumerator_xmlNodeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @xmlNodeList list
//--------------------------------------------------------------------------------------------------

class GGS_xmlNodeList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_xmlNodeList_2E_element> mArray ;

//--- Default constructor
  public: GGS_xmlNodeList (void) ;

//--- Destructor
  public: virtual ~ GGS_xmlNodeList (void) = default ;

//--- Copy
  public: GGS_xmlNodeList (const GGS_xmlNodeList &) = default ;
  public: GGS_xmlNodeList & operator = (const GGS_xmlNodeList &) = default ;

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
  public : inline GenericArray <GGS_xmlNodeList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_xmlNodeList subList (const int32_t inStart,
                                    const int32_t inLength,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_xmlNodeList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_xmlNode & in_node
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xmlNodeList init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xmlNodeList extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xmlNodeList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_xmlNodeList class_func_listWithValue (const class GGS_xmlNode & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_xmlNodeList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_xmlNode & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_xmlNodeList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_xmlNodeList add_operation (const GGS_xmlNodeList & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_xmlNode constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_xmlNode constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_xmlNode & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_xmlNode & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_xmlNode & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNodeAtIndex (class GGS_xmlNode constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_xmlNode & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_xmlNode & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_xmlNode getter_nodeAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_xmlNodeList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_xmlNodeList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_xmlNodeList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_xmlNodeList ;
  friend class DownEnumerator_xmlNodeList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xmlNodeList ;


//----------------------------------------------------------------------------------------------------------------------

