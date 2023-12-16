//--------------------------------------------------------------------------------------------------

#include "BigSigned.h"
#include "M_machine.h"
#include "M_SourceLocation.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

#include <cinttypes>

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shifts
#endif

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator << (const size_t inShiftCount) const {
  return BigSigned (mIsPositive, mUnsigned << inShiftCount) ;
}

//--------------------------------------------------------------------------------------------------

BigSigned BigSigned::operator >> (const size_t inShiftCount) const {
  if (mIsPositive) {
    return BigSigned (true, mUnsigned >> inShiftCount) ;
  }else if (mUnsigned.countTrailingZeros () < inShiftCount) {
    return BigSigned (false, (mUnsigned >> inShiftCount) + 1) ;
  }else{
    return BigSigned (false, mUnsigned >> inShiftCount) ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator <<= (const size_t inShiftCount) {
  if (inShiftCount > 0) {
    *this = *this << inShiftCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void BigSigned::operator >>= (const size_t inShiftCount) {
  if (inShiftCount > 0) {
    *this = * this >> inShiftCount ;
  }
}

//--------------------------------------------------------------------------------------------------
