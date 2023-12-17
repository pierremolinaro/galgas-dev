//----------------------------------------------------------------------------------------------------------------------
//
//  'GALGAS_location'
//
//  This file is part of libpm library
//
//  Copyright (C) 1996, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"
#include "galgas2/Compiler.h"
#include "files/C_FileManager.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location::GALGAS_location (void) :
AC_GALGAS_root (),
mStartLocationInSource (),
mEndLocationInSource (),
mSourceText (),
mIsValid (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location::GALGAS_location (const LocationInSource & inStartLocationInSource,
                                  const LocationInSource & inEndLocationInSource,
                                  const C_SourceTextInString & inSourceText) :
AC_GALGAS_root (),
mStartLocationInSource (inStartLocationInSource),
mEndLocationInSource (inEndLocationInSource),
mSourceText (inSourceText),
mIsValid (true) {
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_location::drop (void) {
  mIsValid = false ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_location::constructor_nowhere (UNUSED_LOCATION_ARGS) {
  GALGAS_location result ;
  result.mIsValid = true ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   CONSTRUCTORS
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_location::constructor_here (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  return inCompiler->here () ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_location::constructor_next (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  return inCompiler->next () ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_location::constructor_separator (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  return inCompiler->separator () ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_location::isValidAndNotNowhere (void) const {
  return mIsValid && mSourceText.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_location::getter_isNowhere (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (!mSourceText.isValid ()) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_location::objectCompare (const GALGAS_location & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mStartLocationInSource.index () - inOperand.mStartLocationInSource.index () ;
    if (r == 0) {
      r = mEndLocationInSource.index () - inOperand.mEndLocationInSource.index () ;
    }
    if (r == 0) {
      r = mSourceText.sourceString ().compare (inOperand.mSourceText.sourceString ()) ;
    }
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_location::description (String & ioString,
                                   const int32_t /* inIndentation */) const {
  ioString += "<@location:" ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      ioString += "nowhere" ;
    }else{
      ioString += "'" ;
      ioString += mSourceText.sourceFilePath () ;
      ioString += "'" ;
    }
    ioString += ":" ;
    ioString.appendSigned (mStartLocationInSource.lineNumber ()) ;
    ioString += ":" ;
    ioString.appendSigned (mStartLocationInSource.columnNumber ()) ;
  }else{
    ioString += "not built" ;
  }
  ioString += ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_location::getter_startLocationString (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      inCompiler->onTheFlyRunTimeError ("'startLocationString' reader cannot be called on a nowhere @location object" COMMA_THERE) ;
    }else{
      String s ;
      s += "file '" ;
      s += mSourceText.sourceFilePath () ;
      s += "', line ";
      s.appendSigned (mStartLocationInSource.lineNumber ()) ;
      s += ":";
      s.appendSigned (mStartLocationInSource.columnNumber ()) ;
      result = GALGAS_string (s) ;
    }
  }
  return result ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_location::getter_endLocationString (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      inCompiler->onTheFlyRunTimeError ("'endLocationString' reader cannot be called on a nowhere @location object" COMMA_THERE) ;
    }else{
      String s ;
      s += "file '" ;
      s += mSourceText.sourceFilePath () ;
      s += "', line " ;
      s.appendSigned (mEndLocationInSource.lineNumber ()) ;
      s += ":" ;
      s.appendSigned (mEndLocationInSource.columnNumber ()) ;
      result = GALGAS_string (s) ;
    }
  }
  return result ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_location::getter_file (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      inCompiler->onTheFlyRunTimeError ("'file' reader cannot be called on a nowhere @location object" COMMA_THERE) ;
    }else{
      result = GALGAS_string (mSourceText.sourceFilePath ()) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_location::getter_startLocationIndex (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      inCompiler->onTheFlyRunTimeError ("'startLocationIndex' reader cannot be called on a nowhere @location object" COMMA_THERE) ;
    }else{
      result = GALGAS_uint ((uint32_t) mStartLocationInSource.index ()) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_location::getter_endLocationIndex (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      inCompiler->onTheFlyRunTimeError ("'endLocationIndex' reader cannot be called on a nowhere @location object" COMMA_THERE) ;
    }else{
      result = GALGAS_uint ((uint32_t) mEndLocationInSource.index ()) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_location::getter_startColumn (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      inCompiler->onTheFlyRunTimeError ("'startColumn' reader cannot be called on a nowhere @location object" COMMA_THERE) ;
    }else{
      result = GALGAS_uint ((uint32_t) mStartLocationInSource.columnNumber ()) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_location::getter_endColumn (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      inCompiler->onTheFlyRunTimeError ("'endColumn' reader cannot be called on a nowhere @location object" COMMA_THERE) ;
    }else{
      result = GALGAS_uint ((uint32_t) mEndLocationInSource.columnNumber ()) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_location::getter_startLine (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      inCompiler->onTheFlyRunTimeError ("'startLine' getter cannot be called on a nowhere @location object" COMMA_THERE) ;
    }else{
      result = GALGAS_uint ((uint32_t) mEndLocationInSource.lineNumber ()) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_location::getter_endLine (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    if (!mSourceText.isValid ()) {
      inCompiler->onTheFlyRunTimeError ("'endLine' getter cannot be called on a nowhere @location object" COMMA_THERE) ;
    }else{
      result = GALGAS_uint ((uint32_t) mEndLocationInSource.lineNumber ()) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_location::getter_union (const GALGAS_location & inOtherLocation,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (isValid () && inOtherLocation.isValid ()) {
    if (mSourceText != inOtherLocation.mSourceText) {
      inCompiler->onTheFlyRunTimeError ("'union' getter cannot be called on an @location object that is relative to an other source" COMMA_THERE) ;
    }else{
      result = *this ;
      if (result.mStartLocationInSource.index () > inOtherLocation.mStartLocationInSource.index ()){
        result.mStartLocationInSource = inOtherLocation.mStartLocationInSource ;
      }
      if (result.mEndLocationInSource.index () < inOtherLocation.mEndLocationInSource.index ()){
        result.mEndLocationInSource = inOtherLocation.mEndLocationInSource ;
      }
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

