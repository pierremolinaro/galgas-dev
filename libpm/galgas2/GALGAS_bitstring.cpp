//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  GALGAS_bitstring                                                                                                   *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2015, ..., 2015 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"
#include "galgas2/C_Compiler.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     'GALGAS_bitstring' class                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitstring::GALGAS_bitstring (void) :
AC_GALGAS_root (),
mIsValid (false),
mBitStringValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitstring::drop (void) {
  mIsValid = false ;
  mBitStringValue.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitstring::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "<@bitstring: " ;
  if (!mIsValid) {
    ioString << "not built" ;
  }else if (mBitStringValue.count () == 0) {
    ioString << "0" ;
  }else{
    for (int32_t i=mBitStringValue.count () - 1 ; i >= 0 ; i--) {
      ioString << cStringWithUnsigned (mBitStringValue (i COMMA_HERE)) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bitstring GALGAS_bitstring::constructor_zero (UNUSED_LOCATION_ARGS) {
  GALGAS_bitstring result ;
  result.mIsValid = true ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bitstring::modifier_orInPlaceWith (GALGAS_uint_36__34_ inValue,
                                               GALGAS_uint inStartIndex,
                                               GALGAS_uint inWidth
                                               COMMA_LOCATION_ARGS) {
  if (isValid() && inValue.isValid () && inStartIndex.isValid() && inWidth.isValid ()) {
  //--- Extends bit string
    const int32_t neededSize = (int32_t) (inStartIndex.uintValue() + inWidth.uintValue ()) ;
    if (mBitStringValue.count () < neededSize) {
      mBitStringValue.addObjects (neededSize - mBitStringValue.count (), false) ;
    }
  //--- Insert values
    uint64_t value = inValue.uint64Value () ;
    for (uint32_t i=0 ; i<inWidth.uintValue () ; i++) {
      const int32_t idx = (int32_t) (inStartIndex.uintValue() + i) ;
      const bool bit = (value & 1) != 0 ;
      mBitStringValue (idx COMMA_THERE) |= bit ;
      value >>= 1 ;
    }
  //--- Remove zero msb
    while ((mBitStringValue.count () > 0) && !mBitStringValue.lastObject (THERE)) {
      mBitStringValue.removeLastObject (THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bitstring::reader_size (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mBitStringValue.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bitstring::reader_bitAtIndex (const GALGAS_uint & inBitIndex COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inBitIndex.isValid ()) {
    const int32_t bitIndex = (int32_t) inBitIndex.uintValue () ;
    if (bitIndex >= mBitStringValue.count ()) {
      result = GALGAS_bool (false) ;
    }else{
      result = GALGAS_bool (mBitStringValue (bitIndex COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bitstring::reader_uintAtIndex (const GALGAS_uint & inUint32Index COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid () && inUint32Index.isValid ()) {
    const int32_t bitIndex = 32 * (int32_t) inUint32Index.uintValue () ;
    uint32_t value = 0 ;
    for (int32_t i = 31 ; i >= 0 ; i--) {
      const int32_t idx = bitIndex + i ;
      bool bit = false ;
      if (idx < mBitStringValue.count ()) {
        bit = mBitStringValue (idx COMMA_THERE) ;
      }
      value <<= 1 ;
      value |= bit ;
    }
    result = GALGAS_uint (value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_bitstring::reader_uint_36__34_AtIndex (const GALGAS_uint & inUint64Index COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (isValid () && inUint64Index.isValid ()) {
    const int32_t bitIndex = 64 * (int32_t) inUint64Index.uintValue () ;
    uint64_t value = 0 ;
    for (int32_t i = 63 ; i >= 0 ; i--) {
      const int32_t idx = bitIndex + i ;
      bool bit = false ;
      if (idx < mBitStringValue.count ()) {
        bit = mBitStringValue (idx COMMA_THERE) ;
      }
      value <<= 1 ;
      value |= bit ;
    }
    result = GALGAS_uint_36__34_ (value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bitstring::reader_byteAtIndex (const GALGAS_uint & inByteIndex COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid () && inByteIndex.isValid ()) {
    const int32_t bitIndex = 8 * (int32_t) inByteIndex.uintValue () ;
    uint32_t value = 0 ;
    for (int32_t i = 7 ; i >= 0 ; i--) {
      const int32_t idx = bitIndex + i ;
      bool bit = false ;
      if (idx < mBitStringValue.count ()) {
        bit = mBitStringValue (idx COMMA_THERE) ;
      }
      value <<= 1 ;
      value |= bit ;
    }
    result = GALGAS_uint (value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bitstring::reader_isZero (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    result = GALGAS_bool (mBitStringValue.count () == 0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
