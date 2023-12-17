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

C_String BigUnsigned::decimalString (void) const {
  C_String result ;
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
    result.appendUnsigned (decimalValueArray [n - 1]) ;
    for (size_t i = n - 1 ; i > 0 ; i--) {
      char s [32] ;
      snprintf (s, 31, ChunkUIntDecimalFormatSpecifierWithLeadingZeros, decimalValueArray [i-1]) ;
      result += s ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

C_String BigUnsigned::spacedDecimalString (const uint32_t inSeparation) const {
  C_String result = decimalString () ;
  if (inSeparation > 0) {
    for (int32_t i = result.length () - int32_t (inSeparation) ; i > 0 ; i -= int32_t (inSeparation)) {
 //     result.insert (size_t (i), 1, ' ') ;
      result.insertCharacterAtIndex (' ', i COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

C_String BigUnsigned::spacedDecimalStringWithDigitCount (const uint32_t inSeparation) const {
  C_String s = decimalString () ;
  const int32_t length = s.length () ;
  if (inSeparation > 0) {
    for (int32_t i = s.length () - int32_t (inSeparation) ; i > 0 ; i -= int32_t (inSeparation)) {
      s.insertCharacterAtIndex (' ', i COMMA_HERE) ;
//      s.insert (size_t (i), 1, ' ') ;
    }
  }
  C_String result = "[" ;
  result.appendSigned (length) ;
  result += "] " ;
  result += s ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

C_String BigUnsigned::hexString (void) const {
  C_String result ;
  if (u64Count () == 0) {
    result = "0" ;
  }else{
    result = "0x" ;
    result.appendUnsignedHex (u64AtIndex (u64Count () - 1)) ;
    for (size_t i = u64Count () - 1 ; i > 0 ; i--) {
      result.appendUnsignedHex16 (u64AtIndex (i - 1)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

C_String BigUnsigned::xString (void) const {
  C_String result ;
  if (u64Count () == 0) {
    result = "0" ;
  }else{
    result.appendUnsignedHex (u64AtIndex (u64Count () - 1)) ;
    for (size_t i = u64Count () - 1 ; i > 0 ; i--) {
      result.appendUnsignedHex16 (u64AtIndex (i - 1)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

C_String BigUnsigned::bitString (void) const {
  C_String result ;
  if (u64Count () == 0) {
    result = "0" ;
  }else{
    for (size_t i = u64Count () ; i > 0 ; i--) {
      uint64_t v = u64AtIndex (i-1) ;
      for (size_t bit = 0 ; bit < 64 ; bit++) {
        result += (((v & (uint64_t (1) << 63)) != 0) ? "1" : "0") ;
        v <<= 1 ;
      }
    }
    while ((result.length () > 0) && (result (0 COMMA_HERE) == '0')) {
      result.suppress (0, 1 COMMA_HERE) ; // Remove first character
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void BigUnsigned::extractBytesForUnsignedRepresentation (TC_UniqueArray <uint8_t> & outValue) const {
  outValue.removeAll () ;
  const size_t n = u8Count () ;
  if (n == 0) {
    outValue.appendObject (0) ;
  }else{
    for (size_t i = 0 ; i < n ; i++) {
      const uint8_t v = u8AtIndex (i) ;
      outValue.appendObject (v) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
