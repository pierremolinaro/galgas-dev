#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "struct-xml+node+list-2Eelement.h"

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeList_2E_element::GGS_xmlNodeList_2E_element (void) :
mProperty_node () {
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeList_2E_element::GGS_xmlNodeList_2E_element (const GGS_xmlNodeList_2E_element & inSource) :
mProperty_node (inSource.mProperty_node) {
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeList_2E_element & GGS_xmlNodeList_2E_element::operator = (const GGS_xmlNodeList_2E_element & inSource) {
  mProperty_node = inSource.mProperty_node ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_xmlNodeList_2E_element GGS_xmlNodeList_2E_element::init_21_ (const GGS_xmlNode & in_node,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_xmlNodeList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_node = in_node ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_xmlNodeList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeList_2E_element::GGS_xmlNodeList_2E_element (const GGS_xmlNode & inOperand0) :
mProperty_node (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeList_2E_element GGS_xmlNodeList_2E_element::class_func_new (const GGS_xmlNode & in_node,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_xmlNodeList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_node = in_node ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_xmlNodeList_2E_element::isValid (void) const {
  return mProperty_node.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_xmlNodeList_2E_element::drop (void) {
  mProperty_node.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_xmlNodeList_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @xmlNodeList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_node.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @xmlNodeList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xmlNodeList_2E_element ("xmlNodeList.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xmlNodeList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xmlNodeList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xmlNodeList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xmlNodeList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeList_2E_element GGS_xmlNodeList_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_xmlNodeList_2E_element result ;
  const GGS_xmlNodeList_2E_element * p = (const GGS_xmlNodeList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xmlNodeList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xmlNodeList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

