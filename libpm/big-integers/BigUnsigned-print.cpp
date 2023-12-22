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

String BigUnsigned::decimalString (void) const {
  String result ;
  if (isZero ()) {
    result = "0" ;
  }else{
    BigUnsigned number = *this ;
    TC_UniqueArray <ChunkUInt> decimalValueArray ;
    while (!number.isZero ()) {
      const ChunkUInt divisor = greatestPowerOf10 ;
      const BigUnsignedQuotientU64Remainder r = number.dividingByChunkUInt (divisor) ;
      decimalValueArray.appendObject (r.remainder ()) ;
      number = r.quotient () ;
    }
    const int32_t n = decimalValueArray.count () ;
    result.addUnsigned (decimalValueArray (n - 1 COMMA_HERE)) ;
    for (int32_t i = n - 2 ; i >= 0 ; i--) {
      char s [32] ;
      snprintf (s, 31, ChunkUIntDecimalFormatSpecifierWithLeadingZeros, decimalValueArray (i COMMA_HERE)) ;
      result.addString (s) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String BigUnsigned::spacedDecimalString (const uint32_t inSeparation) const {
  String result = decimalString () ;
  if (inSeparation > 0) {
    for (int32_t i = result.length () - int32_t (inSeparation) ; i > 0 ; i -= int32_t (inSeparation)) {
      result.insertCharacterAtIndex (' ', i COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String BigUnsigned::spacedDecimalStringWithDigitCount (const uint32_t inSeparation) const {
  String s = decimalString () ;
  const int32_t length = s.length () ;
  if (inSeparation > 0) {
    for (int32_t i = s.length () - int32_t (inSeparation) ; i > 0 ; i -= int32_t (inSeparation)) {
      s.insertCharacterAtIndex (' ', i COMMA_HERE) ;
    }
  }
  String result = "[" ;
  result.addSigned (length) ;
  result.addString ("] ") ;
  result.addString (s) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String BigUnsigned::hexString (void) const {
  String result ;
  if (u64Count () == 0) {
    result = "0" ;
  }else{
    result = "0x" ;
    result.addUnsignedHex (u64AtIndex (u64Count () - 1)) ;
    for (size_t i = u64Count () - 1 ; i > 0 ; i--) {
      result.addUnsignedHex16 (u64AtIndex (i - 1)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String BigUnsigned::xString (void) const {
  String result ;
  if (u64Count () == 0) {
    result = "0" ;
  }else{
    result.addUnsignedHex (u64AtIndex (u64Count () - 1)) ;
    for (size_t i = u64Count () - 1 ; i > 0 ; i--) {
      result.addUnsignedHex16 (u64AtIndex (i - 1)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String BigUnsigned::bitString (void) const {
  String result ;
  if (u64Count () == 0) {
    result = "0" ;
  }else{
    for (size_t i = u64Count () ; i > 0 ; i--) {
      uint64_t v = u64AtIndex (i-1) ;
      for (size_t bit = 0 ; bit < 64 ; bit++) {
        result.addString (((v & (uint64_t (1) << 63)) != 0) ? "1" : "0") ;
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
