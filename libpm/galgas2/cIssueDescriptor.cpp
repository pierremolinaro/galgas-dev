//--------------------------------------------------------------------------------------------------
//
//  'cIssueDescriptor'                                                                           
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2017, ..., 2017 Pierre Molinaro.
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
//--------------------------------------------------------------------------------------------------

#include "cIssueDescriptor.h"

//--------------------------------------------------------------------------------------------------

cIssueDescriptor::cIssueDescriptor (void) :
mIsError (false),
mFile (""),
mLine (0),
mStartColumn (0),
mEndColumn (0),
mMessage ("") {
}

//--------------------------------------------------------------------------------------------------

cIssueDescriptor::cIssueDescriptor (const bool inIsError,
                                    const String & inFile,
                                    const int32_t inLine,
                                    const int32_t inStartColumn,
                                    const int32_t inEndColumn,
                                    const String & inMessage) :
mIsError (inIsError),
mFile (inFile),
mLine (inLine),
mStartColumn (inStartColumn),
mEndColumn (inEndColumn),
mMessage (inMessage) {
}

//--------------------------------------------------------------------------------------------------

cIssueDescriptor::cIssueDescriptor (const cIssueDescriptor & inSource) :
mIsError (inSource.mIsError),
mFile (inSource.mFile),
mLine (inSource.mLine),
mStartColumn (inSource.mStartColumn),
mEndColumn (inSource.mEndColumn),
mMessage (inSource.mMessage) {
}

//--------------------------------------------------------------------------------------------------

cIssueDescriptor & cIssueDescriptor::operator = (const cIssueDescriptor & inSource) {
  if (this != & inSource) {
    mIsError = inSource.mIsError ;
    mFile = inSource.mFile ;
    mLine = inSource.mLine ;
    mStartColumn = inSource.mStartColumn ;
    mEndColumn = inSource.mEndColumn ;
    mMessage = inSource.mMessage ;
  }
  return *this ;
}

//--------------------------------------------------------------------------------------------------

void cIssueDescriptor::appendToJSONstring (String & ioJSONstring, const bool inIsFirstIssue) const {
  String s = mMessage.stringByReplacingStringByString("\n", "\\n") ;
  s = s.stringByReplacingStringByString("\"", "\\\"") ;
  ioJSONstring.appendString (inIsFirstIssue ? "" : ",\n") ;
  ioJSONstring.appendString ("  { \"ERROR\" : ") ;
  ioJSONstring.appendString (mIsError ? "true" : "false") ;
  ioJSONstring.appendString (",\n") ;
  ioJSONstring.appendString ("    \"SOURCE\" : \"") ;
  ioJSONstring.appendString (mFile.lastPathComponent ()) ;
  ioJSONstring.appendString ("\",\n") ;
  ioJSONstring.appendString ("    \"LINE\"  : ") ;
  ioJSONstring.appendSigned (mLine) ;
  ioJSONstring.appendString (",\n") ;
  ioJSONstring.appendString ("    \"START_COLUMN\"  : ") ;
  ioJSONstring.appendSigned (mStartColumn) ;
  ioJSONstring.appendString (",\n") ;
  ioJSONstring.appendString ("    \"END_COLUMN\"  : ") ;
  ioJSONstring.appendSigned (mEndColumn) ;
  ioJSONstring.appendString (",\n") ;
  ioJSONstring.appendString ("    \"MESSAGE\" : \"") ;
  ioJSONstring.appendString (s) ;
  ioJSONstring.appendString ("\"\n"
                  "  }") ;
}

//--------------------------------------------------------------------------------------------------
