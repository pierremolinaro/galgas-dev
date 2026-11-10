//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 1996, ..., 2016 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "SourceTextInString.h"
#include "LocationInSource.h"

//--------------------------------------------------------------------------------------------------

SourceTextInString::SourceTextInString (void) :
mObject (nullptr) {
}

//--------------------------------------------------------------------------------------------------

SourceTextInString::SourceTextInString (const String & inSourceString,
                                            const String & inFilePath,
                                            const bool inShowSourceOnDetailledErrorMessage) :
mObject (nullptr) {
  macroMyNew (mObject, cSourceTextInString (inSourceString, inFilePath, inShowSourceOnDetailledErrorMessage COMMA_HERE)) ;
}

//--------------------------------------------------------------------------------------------------

SourceTextInString::~ SourceTextInString (void) {
  macroDetachSharedObject (mObject) ;
}

//--------------------------------------------------------------------------------------------------

SourceTextInString::SourceTextInString (const SourceTextInString & inSource) :
mObject (nullptr) {
  macroAssignSharedObject (mObject, inSource.mObject) ;
}

//--------------------------------------------------------------------------------------------------

SourceTextInString & SourceTextInString::operator = (const SourceTextInString & inSource) {
  if (this != & inSource) {
    macroAssignSharedObject (mObject, inSource.mObject) ;
  }
  return *this ;
}

//--------------------------------------------------------------------------------------------------

String SourceTextInString::getLineForLocation (const LocationInSource & inLocation) const {
  String errorLine ;
  if (nullptr != mObject) {
    const int32_t sourceTextLength = mObject->mSourceString.length () ;
    int32_t index = 0 ;
    int32_t currentLine = 1 ;
    if (sourceTextLength > 0) {
      while (currentLine < inLocation.lineNumber ()) {
        if (mObject->mSourceString.readCharOrNul (index COMMA_HERE).u32 () == '\n') {
          currentLine += 1 ;
        }
        index += 1 ;
      }
    }
  //--- Get error line text
    for (int32_t i=index ; (i<sourceTextLength) && (mObject->mSourceString.readCharOrNul (i COMMA_HERE).u32 () != '\n') ; i++) {
      const utf32 character = mObject->mSourceString.charAtIndex (i COMMA_HERE) ;
      errorLine.appendChar (character) ;
    }
  }
  return errorLine ;
}

//--------------------------------------------------------------------------------------------------
