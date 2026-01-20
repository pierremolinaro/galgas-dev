#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-xml+node-1.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @xmlNodeList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_xmlNodeList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_xmlNode mProperty_node ;
  public: inline GGS_xmlNode readProperty_node (void) const {
    return mProperty_node ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_xmlNodeList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setNode (const GGS_xmlNode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_node = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_xmlNodeList_2E_element (const GGS_xmlNode & in_node) ;

//--------------------------------- Copy constructor
  public: GGS_xmlNodeList_2E_element (const GGS_xmlNodeList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_xmlNodeList_2E_element & operator = (const GGS_xmlNodeList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xmlNodeList_2E_element init_21_ (const class GGS_xmlNode & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xmlNodeList_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xmlNodeList_2E_element class_func_new (const class GGS_xmlNode & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xmlNodeList_2E_element ;


//----------------------------------------------------------------------------------------------------------------------

