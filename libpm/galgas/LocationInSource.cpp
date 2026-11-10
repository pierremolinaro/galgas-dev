//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 1996, ..., 2011 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "LocationInSource.h"
#include "SourceTextInString.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

LocationInSource::LocationInSource (void) :
mIndex (0),
mLineNumber (1),
mColumnNumber (1),
mSourceText () {
}

//--------------------------------------------------------------------------------------------------

void LocationInSource::gotoNextLocation (void) {
  if (mIndex < mSourceText.sourceString ().length ()) {
    const utf32 currentChar = mSourceText.sourceString ().charAtIndex (mIndex COMMA_HERE) ;
    const bool previousCharWasEndOfLine = currentChar.u32 () == '\n' ;
    if (previousCharWasEndOfLine) {
      mLineNumber += 1 ;
      mColumnNumber = 1 ;
    }else{
      mColumnNumber += 1 ;
    }
    mIndex += 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void LocationInSource::goForward (const uint32_t inCount) {
  uint32_t count = inCount ;
  while (count > 0) {
    gotoNextLocation () ;
    count -= 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void LocationInSource::resetLocation (void) {
  mIndex = 0 ;
  mLineNumber = 1 ;
  mColumnNumber = 1 ;
}

//--------------------------------------------------------------------------------------------------

void LocationInSource::resetWithSourceText (const SourceTextInString & inSourceText) {
  mIndex = 0 ;
  mLineNumber = 1 ;
  mColumnNumber = 1 ;
  mSourceText = inSourceText ;
}

//--------------------------------------------------------------------------------------------------

String LocationInSource::sourceFilePath (void) const {
  return mSourceText.sourceFilePath () ;
}

//--------------------------------------------------------------------------------------------------

int32_t LocationInSource::lineNumber (void) const {
  return mLineNumber ;
}

//--------------------------------------------------------------------------------------------------

int32_t LocationInSource::columnNumber (void) const {
  return mColumnNumber ;
}

//--------------------------------------------------------------------------------------------------
