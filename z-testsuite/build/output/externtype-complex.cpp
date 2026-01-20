#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "externtype-complex.h"

//--------------------------------------------------------------------------------------------------
//     @complex generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_complex ("complex",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_complex::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complex ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_complex::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_complex (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_complex GGS_complex::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_complex result ;
  const GGS_complex * p = (const GGS_complex *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_complex *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complex", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

