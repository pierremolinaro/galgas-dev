#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 1: @structTest struct
//--------------------------------------------------------------------------------------------------

class GGS_structTest : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mString ;
  public: inline GGS_string readProperty_mString (void) const {
    return mProperty_mString ;
  }

  public: GGS_uint mProperty_mInt ;
  public: inline GGS_uint readProperty_mInt (void) const {
    return mProperty_mInt ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_structTest (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mString = inValue ;
  }

  public: inline void setter_setMInt (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInt = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_structTest (const GGS_string & in_mString,
                          const GGS_uint & in_mInt) ;

//--------------------------------- Copy constructor
  public: GGS_structTest (const GGS_structTest & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_structTest & operator = (const GGS_structTest & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structTest init_21_ (const class GGS_string & inOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structTest extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structTest class_func_new (const class GGS_string & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structTest ;


//----------------------------------------------------------------------------------------------------------------------

