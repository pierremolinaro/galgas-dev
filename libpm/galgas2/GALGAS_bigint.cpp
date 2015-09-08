//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  GALGAS_bigint                                                                                                      *
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

GALGAS_bigint::GALGAS_bigint (void) :
AC_GALGAS_root (),
mIsValid (false),
mValue (0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint::GALGAS_bigint (const C_BigInt & inValue) :
AC_GALGAS_root (),
mIsValid (true),
mValue (inValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint::~GALGAS_bigint (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigint::drop (void) {
  mIsValid = false ;
  mValue.setToZero () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigint::description (C_String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString << "<@bigint: " ;
  if (!mIsValid) {
    ioString << "not built" ;
  }else{
    ioString << mValue.decimalString () ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bigint::constructor_zero (UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result ;
  result.mIsValid = true ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bigint::objectCompare (const GALGAS_bigint & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t cmp = mValue.compare (inOperand.mValue) ;
    if (cmp < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (cmp > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Testing value representation
#endif

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bigint::reader_bitCountForSignedRepresentation (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {

  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bigint::reader_isUInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    result = GALGAS_bool (mValue.fitsInUInt32 ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bigint::reader_isSInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    result = GALGAS_bool (mValue.fitsInSInt32 ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bigint::reader_isUInt_36__34_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    result = GALGAS_bool (mValue.fitsInUInt64 ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bigint::reader_isSInt_36__34_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    result = GALGAS_bool (mValue.fitsInSInt64 ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Value access
#endif

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bigint::reader_uint (C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    if (mValue.fitsInUInt32 ()) {
      result = GALGAS_uint (mValue.uint32 ()) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("@bigint to @uint conversion overflow" COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_bigint::reader_uint_36__34_ (C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (isValid ()) {
    if (mValue.fitsInUInt64 ()) {
      result = GALGAS_uint_36__34_ (mValue.uint64 ()) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("@bigint to @uint64 conversion overflow" COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

