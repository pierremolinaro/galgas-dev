#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "struct-routine+map-2Eelement.h"

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element::GGS_routineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element::GGS_routineMap_2E_element (const GGS_routineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element & GGS_routineMap_2E_element::operator = (const GGS_routineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineMap_2E_element GGS_routineMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                   const GGS_instructionList & in_mInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element::GGS_routineMap_2E_element (const GGS_lstring & inOperand0,
                                                      const GGS_instructionList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element GGS_routineMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                     const GGS_instructionList & in_mInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap_2E_element ("routineMap.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element GGS_routineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineMap_2E_element result ;
  const GGS_routineMap_2E_element * p = (const GGS_routineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

