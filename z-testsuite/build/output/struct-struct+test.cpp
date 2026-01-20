#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "struct-struct+test.h"

//--------------------------------------------------------------------------------------------------

GGS_structTest::GGS_structTest (void) :
mProperty_mString (),
mProperty_mInt () {
}

//--------------------------------------------------------------------------------------------------

GGS_structTest::GGS_structTest (const GGS_structTest & inSource) :
mProperty_mString (inSource.mProperty_mString),
mProperty_mInt (inSource.mProperty_mInt) {
}

//--------------------------------------------------------------------------------------------------

GGS_structTest & GGS_structTest::operator = (const GGS_structTest & inSource) {
  mProperty_mString = inSource.mProperty_mString ;
  mProperty_mInt = inSource.mProperty_mInt ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structTest::setInitializedProperties (Compiler * /* inCompiler */) {
  mProperty_mInt = GGS_uint (uint32_t (34U)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_structTest::GGS_structTest (const GGS_string & inOperand0,
                                const GGS_uint & inOperand1) :
mProperty_mString (inOperand0),
mProperty_mInt (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_structTest GGS_structTest::class_func_new (const GGS_string & in_mString,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_structTest result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mString = in_mString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_structTest::isValid (void) const {
  return mProperty_mString.isValid () && mProperty_mInt.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structTest::drop (void) {
  mProperty_mString.drop () ;
  mProperty_mInt.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structTest::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @structTest:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInt.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @structTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structTest ("structTest",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structTest GGS_structTest::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_structTest result ;
  const GGS_structTest * p = (const GGS_structTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

