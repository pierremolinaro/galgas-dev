
#include "testsuite_extern_type.h"

//---------------------------------------------------------------------------*

GALGAS_complex::GALGAS_complex (void) :
AC_GALGAS_root (),
mIsValid (false),
mReal (0.0),
mImaginary (0.0) {
}


//---------------------------------------------------------------------------*

bool GALGAS_complex::isValid (void) const {
  return mIsValid ;
}

//---------------------------------------------------------------------------*

void GALGAS_complex::drop (void) {
  mIsValid = false ;
}

//---------------------------------------------------------------------------*

void GALGAS_complex::description (C_String & ioString,
                                       const PMSInt32 /* inIndentation */) const {
  ioString << "<@complex:" ;
  if (mIsValid) {
    ioString << cStringWithDouble (mReal) << ", " << cStringWithDouble (mImaginary) ;
  }else{
    ioString << "invalid" ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------*

GALGAS_complex GALGAS_complex::constructor_new (const GALGAS_double & inReal,
                                                const GALGAS_double & inImaginary,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_complex result ;
  if (inReal.isValid () && inImaginary.isValid ()) {
    result.mIsValid = true ;
    result.mReal = inReal.doubleValue () ;
    result.mImaginary = inImaginary.doubleValue () ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GALGAS_double GALGAS_complex::reader_real (C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (isValid ()) {
    result = GALGAS_double (mReal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GALGAS_double GALGAS_complex::reader_imaginary (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (isValid ()) {
    result = GALGAS_double (mImaginary) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*