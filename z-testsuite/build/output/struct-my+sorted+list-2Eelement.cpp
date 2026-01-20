#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "struct-my+sorted+list-2Eelement.h"

//--------------------------------------------------------------------------------------------------

GGS_mySortedList_2E_element::GGS_mySortedList_2E_element (void) :
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList_2E_element::GGS_mySortedList_2E_element (const GGS_mySortedList_2E_element & inSource) :
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList_2E_element & GGS_mySortedList_2E_element::operator = (const GGS_mySortedList_2E_element & inSource) {
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_mySortedList_2E_element GGS_mySortedList_2E_element::init_21_ (const GGS_string & in_mValue,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mySortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList_2E_element::GGS_mySortedList_2E_element (const GGS_string & inOperand0) :
mProperty_mValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList_2E_element GGS_mySortedList_2E_element::class_func_new (const GGS_string & in_mValue,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mySortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_mySortedList_2E_element::isValid (void) const {
  return mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList_2E_element::drop (void) {
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mySortedList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @mySortedList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @mySortedList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mySortedList_2E_element ("mySortedList.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mySortedList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mySortedList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mySortedList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mySortedList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mySortedList_2E_element GGS_mySortedList_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_mySortedList_2E_element result ;
  const GGS_mySortedList_2E_element * p = (const GGS_mySortedList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mySortedList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mySortedList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

