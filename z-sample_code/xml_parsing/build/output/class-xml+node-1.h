#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 1: @xmlNode reference class
//--------------------------------------------------------------------------------------------------

class GGS_xmlNode : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_xmlNode (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_xmlNode (const class cPtr_xmlNode * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_xmlNodeType readProperty_mType (void) const ;

  public: class GGS_string readProperty_name (void) const ;

  public: class GGS_xmlAttributeMap readProperty_attributeMap (void) const ;

  public: class GGS_xmlNodeList readProperty_nodeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xmlNode init_21__21__21__21_ (const class GGS_xmlNodeType & inOperand0,
                                                   const class GGS_string & inOperand1,
                                                   const class GGS_xmlAttributeMap & inOperand2,
                                                   const class GGS_xmlNodeList & inOperand3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xmlNode extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xmlNode class_func_new (const class GGS_xmlNodeType & inOperand0,
                                                   const class GGS_string & inOperand1,
                                                   const class GGS_xmlAttributeMap & inOperand2,
                                                   const class GGS_xmlNodeList & inOperand3,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xmlNode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xmlNode ;


//----------------------------------------------------------------------------------------------------------------------

