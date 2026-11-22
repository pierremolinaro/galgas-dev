//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2002, ..., 2016 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include <math.h>

//--------------------------------------------------------------------------------------------------

static const double PI_CONSTANT = 3.14159265358979323846264338327950288 ;

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_::GGS_f_36__34_ (void) :
AC_GALGAS_root (),
mIsValid (false),
mF64 (0.0) {
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_::GGS_f_36__34_ (const double inValue) :
AC_GALGAS_root (),
mIsValid (true),
mF64 (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::class_func_pi (UNUSED_LOCATION_ARGS) {
  return GGS_f_36__34_ (PI_CONSTANT) ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::class_func_doubleWithBinaryImage (const GGS_u_36__34_ & inImage
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_f_36__34_ result ;
  if (inImage.isValid ()) {
    union {
      uint64_t unsignedIntegerValue ;
      double   doubleValue ;
    } ;
    unsignedIntegerValue = inImage.u64 () ;
    result = GGS_f_36__34_ (doubleValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_f_36__34_::getter_binaryImage (UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid ()) {
    union {
      uint64_t unsignedIntegerValue ;
      double theDoubleValue ;
    } ;
    theDoubleValue = mF64 ;
    result = GGS_u_36__34_ (unsignedIntegerValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_cos (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (cos (mF64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_sqrt (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    if (mF64 < 0.0) {
      String s = "Cannot compute square root of a negative @f64" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      result = GGS_f_36__34_ (sqrt (mF64)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_log_32_ (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    if (mF64 <= 0.0) {
      String s ;
      s.appendCString ("Cannot compute log2 of a null or negative @f64") ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      result = GGS_f_36__34_ (log2 (mF64)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_log_31__30_ (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    if (mF64 <= 0.0) {
      String s = "Cannot compute log10 of a null or negative @f64" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      result = GGS_f_36__34_ (log10 (mF64)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_logn (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    if (mF64 <= 0.0) {
      String s = "Cannot compute logn of a null or negative @f64" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      result = GGS_f_36__34_ (::log (mF64)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_exp (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (::exp (mF64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_cosDegree (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (cos (mF64 * PI_CONSTANT / 180.0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_sin (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (sin (mF64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_sinDegree (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (sin (mF64 * PI_CONSTANT / 180.0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_tan (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (tan (mF64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_tanDegree (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (tan (mF64 * PI_CONSTANT / 180.0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::getter_power (const GGS_f_36__34_ & inExponant,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid () && inExponant.isValid ()) {
    result = GGS_f_36__34_ (pow (mF64, inExponant.mF64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_f_36__34_::getter_uint (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if ((mF64 > double (UINT32_MAX)) || (mF64 < 0.0)) {
    String s = "Cannot convert @f64 (" ;
    s.appendDouble (mF64) ;
    s.appendCString (") to @uint") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GGS_uint ((uint32_t) (lround (mF64) & INT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_f_36__34_::getter_u_36__34_ (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if ((mF64 > double (UINT64_MAX)) || (mF64 < 0.0)) {
    String s = "Cannot convert @f64 (" ;
    s.appendDouble (mF64) ;
    s.appendCString (") to @u64") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GGS_u_36__34_ ((uint64_t) lround (mF64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_f_36__34_::getter_s_33__32_ (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if ((mF64 > double (INT32_MAX)) || (mF64 < double (INT32_MIN))) {
    String s = "Cannot convert @f64 (" ;
    s.appendDouble (mF64) ;
    s.appendCString (") to @sint") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GGS_s_33__32_ (int32_t (lround (mF64) & INT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_f_36__34_::getter_s_36__34_ (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if ((mF64 > double (INT64_MAX)) || (mF64 < double (INT64_MIN))) {
    String s = "Cannot convert @f64 (" ;
    s.appendDouble (mF64) ;
    s.appendCString (") to @sint64") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GGS_s_36__34_ (lround (mF64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_f_36__34_::objectCompare (const GGS_f_36__34_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mF64 < inOperand.mF64) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mF64 > inOperand.mF64) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_f_36__34_::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@f64:") ;
  if (isValid ()) {
    ioString.appendDouble (mF64) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_f_36__34_::getter_string (UNUSED_LOCATION_ARGS) const {
  String s ;
  s.appendDouble (mF64) ;
  return GGS_string (s) ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::add_operation (const GGS_f_36__34_ & inOperand2,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_f_36__34_ (mF64 + inOperand2.mF64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::subtract_operation (const GGS_f_36__34_ & inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_f_36__34_ (mF64 - inOperand2.mF64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_f_36__34_::plusAssignOperation (const GGS_f_36__34_ inOperand,
                                         Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mF64 += inOperand.mF64 ;
  }else{
    mIsValid = false ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_f_36__34_::minusAssignOperation (const GGS_f_36__34_ inOperand,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mF64 -= inOperand.mF64 ;
  }else{
    mIsValid = false ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_f_36__34_::mulAssignOperation (const GGS_f_36__34_ inOperand,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mF64 *= inOperand.mF64 ;
  }else{
    mIsValid = false ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_f_36__34_::divAssignOperation (const GGS_f_36__34_ inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mF64 == 0) {
      inCompiler->onTheFlyRunTimeError ("@f64 /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mF64 /= inOperand.mF64 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::multiply_operation (const GGS_f_36__34_ & inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_f_36__34_ (mF64 * inOperand2.mF64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::divide_operation (const GGS_f_36__34_ & inOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    if (inOperand2.mF64 == 0.0) {
      inCompiler->onTheFlyRunTimeError ("divide by zero" COMMA_THERE) ;
    }else{
      result = GGS_f_36__34_ (mF64 / inOperand2.mF64) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::wrapping_divide_operation (const GGS_f_36__34_ & inOperand) const {
  GGS_f_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_f_36__34_ ((inOperand.mF64 == 0.0) ? 0.0 : (mF64 / inOperand.mF64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::operator_unary_minus (Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (- mF64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_f_36__34_::modulo_operation (const GGS_f_36__34_ & inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t times = uint64_t (mF64 / inOperand.mF64) ;
    result = GGS_f_36__34_ (mF64 - double (times) * inOperand.mF64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
