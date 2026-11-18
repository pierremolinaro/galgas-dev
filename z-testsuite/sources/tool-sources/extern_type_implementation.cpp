
#include "all-declarations.h"

//----------------------------------------------------------------------------------------

GGS_complex::GGS_complex (void) :
AC_GALGAS_root (),
mIsValid (false),
mReal (0.0),
mImaginary (0.0) {
}


//----------------------------------------------------------------------------------------

bool GGS_complex::isValid (void) const {
  return mIsValid ;
}

//----------------------------------------------------------------------------------------

void GGS_complex::drop (void) {
  mIsValid = false ;
}

//----------------------------------------------------------------------------------------

void GGS_complex::description (String & ioString,
                               const int32_t /* inIndentation */) const {
  ioString.appendString ("<@complex:") ;
  if (mIsValid) {
    ioString.appendDouble (mReal) ;
    ioString.appendString (", ") ;
    ioString.appendDouble (mImaginary) ;
  }else{
    ioString.appendString ("invalid") ;
  }
  ioString.appendString (">") ;
}

//----------------------------------------------------------------------------------------

GGS_complex GGS_complex::init_21__21_ (const GGS_f_36__34_ & inReal,
                                       const GGS_f_36__34_ & inImaginary,
                                       Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_complex result ;
  if (inReal.isValid () && inImaginary.isValid ()) {
    result.mIsValid = true ;
    result.mReal = inReal.f64 () ;
    result.mImaginary = inImaginary.f64 () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_complex::getter_real (Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (mReal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_complex::getter_imaginary (Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (mImaginary) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------
