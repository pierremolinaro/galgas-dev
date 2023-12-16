//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"

//--------------------------------------------------------------------------------------------------

void BigUnsigned::printHex (const char * inName) const {
  if (isZero ()) {
    printf ("%s: 0\n", inName) ;
  }else{
    printf ("%s: [%" PRIu64 "] 0x", inName, uint64_t (u64Count ())) ;
    for (size_t i = u64Count () ; i > 0 ; i--) {
      printf ("_%016" PRIX64, u64AtIndex (i-1)) ;
    }
    printf ("\n") ;
  }
}

//--------------------------------------------------------------------------------------------------

std::string BigUnsigned::decimalString (void) const {
  std::string result ;
  if (isZero ()) {
    result = "0" ;
  }else{
    BigUnsigned number = *this ;
    std::vector <ChunkUInt> decimalValueArray ;
    while (!number.isZero ()) {
      const ChunkUInt divisor = greatestPowerOf10 ;
      const BigUnsignedQuotientU64Remainder r = number.dividingByChunkUInt (divisor) ;
      decimalValueArray.push_back (r.remainder ()) ;
      number = r.quotient () ;
    }
    const size_t n = decimalValueArray.size () ;
    result.append (std::to_string (decimalValueArray [n - 1])) ;
    for (size_t i = n - 1 ; i > 0 ; i--) {
      char s [32] ;
      snprintf (s, 31, ChunkUIntDecimalFormatSpecifierWithLeadingZeros, decimalValueArray [i-1]) ;
      result.append (s) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

std::string BigUnsigned::spacedDecimalString (const uint32_t inSeparation) const {
  std::string result = decimalString () ;
  if (inSeparation > 0) {
    for (int64_t i = int64_t (result.length ()) - int64_t (inSeparation) ; i > 0 ; i -= int64_t (inSeparation)) {
      result.insert (size_t (i), 1, ' ') ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

std::string BigUnsigned::spacedDecimalStringWithDigitCount (const uint32_t inSeparation) const {
  std::string s = decimalString () ;
  const size_t length = s.length () ;
  if (inSeparation > 0) {
    for (int64_t i = int64_t (s.length ()) - int64_t (inSeparation) ; i > 0 ; i -= int64_t (inSeparation)) {
      s.insert (size_t (i), 1, ' ') ;
    }
  }
  std::string result = "[" + std::to_string (length) + "] " + s ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

std::string BigUnsigned::hexString (void) const {
  std::string result ;
  if (u64Count () == 0) {
    result = "0" ;
  }else{
    char s [32] ;
    snprintf (s, 31, "%" PRIX64, u64AtIndex (u64Count () - 1)) ;
    result.append (s) ;
    for (size_t i = u64Count () - 1 ; i > 0 ; i--) {
      snprintf (s, 31, ChunkUIntHexFormatSpecifierWithLeadingZeros, mSharedArray.chunkAtIndex (i COMMA_HERE)) ;
      result.append (s) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

std::string BigUnsigned::xString (void) const {
  std::string result ;
  if (u64Count () == 0) {
    result = "0" ;
  }else{
    char s [32] ;
    snprintf (s, 31, "%" PRIX64, u64AtIndex (u64Count () - 1)) ;
    result.append (s) ;
    for (size_t i = u64Count () - 1 ; i > 0 ; i--) {
      snprintf (s, 31, "%016" PRIX64, u64AtIndex (i-1)) ;
      result.append (s) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
