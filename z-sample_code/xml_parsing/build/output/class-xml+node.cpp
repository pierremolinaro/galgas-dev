#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-xml+node.h"

//--------------------------------------------------------------------------------------------------
// @xmlNode reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xmlNode::objectCompare (const GGS_xmlNode & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNode::GGS_xmlNode (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_xmlNode GGS_xmlNode::
init_21__21__21__21_ (const GGS_xmlNodeType & in_mType,
                      const GGS_string & in_name,
                      const GGS_xmlAttributeMap & in_attributeMap,
                      const GGS_xmlNodeList & in_nodeList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_xmlNode * object = nullptr ;
  macroMyNew (object, cPtr_xmlNode (inCompiler COMMA_THERE)) ;
  object->xmlNode_init_21__21__21__21_ (in_mType, in_name, in_attributeMap, in_nodeList, inCompiler) ;
  const GGS_xmlNode result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_xmlNode::
xmlNode_init_21__21__21__21_ (const GGS_xmlNodeType & in_mType,
                              const GGS_string & in_name,
                              const GGS_xmlAttributeMap & in_attributeMap,
                              const GGS_xmlNodeList & in_nodeList,
                              Compiler * /* inCompiler */) {
  mProperty_mType = in_mType ;
  mProperty_name = in_name ;
  mProperty_attributeMap = in_attributeMap ;
  mProperty_nodeList = in_nodeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNode::GGS_xmlNode (const cPtr_xmlNode * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xmlNode) ;
}
//--------------------------------------------------------------------------------------------------

GGS_xmlNode GGS_xmlNode::class_func_new (const GGS_xmlNodeType & in_mType,
                                         const GGS_string & in_name,
                                         const GGS_xmlAttributeMap & in_attributeMap,
                                         const GGS_xmlNodeList & in_nodeList,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_xmlNode result ;
  macroMyNew (result.mObjectPtr, cPtr_xmlNode (in_mType, in_name, in_attributeMap, in_nodeList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeType GGS_xmlNode::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_xmlNodeType () ;
  }else{
    cPtr_xmlNode * p = (cPtr_xmlNode *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xmlNode) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_xmlNode::readProperty_name (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_xmlNode * p = (cPtr_xmlNode *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xmlNode) ;
    return p->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_xmlAttributeMap GGS_xmlNode::readProperty_attributeMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_xmlAttributeMap () ;
  }else{
    cPtr_xmlNode * p = (cPtr_xmlNode *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xmlNode) ;
    return p->mProperty_attributeMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeList GGS_xmlNode::readProperty_nodeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_xmlNodeList () ;
  }else{
    cPtr_xmlNode * p = (cPtr_xmlNode *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xmlNode) ;
    return p->mProperty_nodeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xmlNode class
//--------------------------------------------------------------------------------------------------

cPtr_xmlNode::cPtr_xmlNode (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_name (),
mProperty_attributeMap (),
mProperty_nodeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_xmlNode::cPtr_xmlNode (const GGS_xmlNodeType & in_mType,
                            const GGS_string & in_name,
                            const GGS_xmlAttributeMap & in_attributeMap,
                            const GGS_xmlNodeList & in_nodeList,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_name (),
mProperty_attributeMap (),
mProperty_nodeList () {
  mProperty_mType = in_mType ;
  mProperty_name = in_name ;
  mProperty_attributeMap = in_attributeMap ;
  mProperty_nodeList = in_nodeList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_xmlNode::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xmlNode ;
}

void cPtr_xmlNode::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@xmlNode:") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_name.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_attributeMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_nodeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xmlNode::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xmlNode (mProperty_mType, mProperty_name, mProperty_attributeMap, mProperty_nodeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xmlNode::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_name.printNonNullClassInstanceProperties ("name") ;
    mProperty_attributeMap.printNonNullClassInstanceProperties ("attributeMap") ;
    mProperty_nodeList.printNonNullClassInstanceProperties ("nodeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @xmlNode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xmlNode ("xmlNode",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xmlNode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xmlNode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xmlNode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xmlNode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNode GGS_xmlNode::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_xmlNode result ;
  const GGS_xmlNode * p = (const GGS_xmlNode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xmlNode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xmlNode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

