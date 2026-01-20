#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "struct-my+list-2Eelement.h"

//--------------------------------------------------------------------------------------------------

GGS_myList_2E_element::GGS_myList_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_myList_2E_element::GGS_myList_2E_element (const GGS_myList_2E_element & inSource) :
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_myList_2E_element & GGS_myList_2E_element::operator = (const GGS_myList_2E_element & inSource) {
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_myList_2E_element GGS_myList_2E_element::init_21_ (const GGS_string & in_mValue,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_myList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_myList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_myList_2E_element::GGS_myList_2E_element (const GGS_string & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_myList_2E_element GGS_myList_2E_element::class_func_new (const GGS_string & in_mValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_myList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_myList_2E_element::objectCompare (const GGS_myList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_myList_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_myList_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_myList_2E_element::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @myList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @myList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_myList_2E_element ("myList.element",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_myList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_myList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_myList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_myList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_myList_2E_element GGS_myList_2E_element::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_myList_2E_element result ;
  const GGS_myList_2E_element * p = (const GGS_myList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_myList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("myList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

