#ifndef class_2D_xml_2B_node_DEFINED
#define class_2D_xml_2B_node_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-xml+node-1.h"

//----------------------------------------------------------------------------------------------------------------------

#include "enum-xml+node+type.h"
#include "list-xml+node+list.h"
#include "map-xml+attribute+map.h"
//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @xmlNode class
//--------------------------------------------------------------------------------------------------

class cPtr_xmlNode : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void xmlNode_init_21__21__21__21_ (const class GGS_xmlNodeType & inOperand0,
                                             const class GGS_string & inOperand1,
                                             const class GGS_xmlAttributeMap & inOperand2,
                                             const class GGS_xmlNodeList & inOperand3,
                                             Compiler * inCompiler) ;


//--- Properties
  public: GGS_xmlNodeType mProperty_mType ;
  public: GGS_string mProperty_name ;
  public: GGS_xmlAttributeMap mProperty_attributeMap ;
  public: GGS_xmlNodeList mProperty_nodeList ;


//--- Default constructor
  public: cPtr_xmlNode (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_xmlNode (const GGS_xmlNodeType & in_mType,
                        const GGS_string & in_name,
                        const GGS_xmlAttributeMap & in_attributeMap,
                        const GGS_xmlNodeList & in_nodeList,
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


//----------------------------------------------------------------------------------------------------------------------

#endif

