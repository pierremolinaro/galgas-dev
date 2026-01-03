//--------------------------------------------------------------------------------------------------
//
//  'IssueDescriptor'                                                                           
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2017, ..., 2025 Pierre Molinaro.
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

#include "IssueDescriptor.h"
#include "IssueWithFixIt.h"

//--------------------------------------------------------------------------------------------------

IssueDescriptor::IssueDescriptor (void) :
mIsError (false),
mFile (""),
mLine (0),
mStartColumn (0),
mEndColumn (0),
mMessage ("") {
}

//--------------------------------------------------------------------------------------------------

IssueDescriptor::IssueDescriptor (const bool inIsError,
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

void IssueDescriptor::appendToJSONstring (String & ioJSONstring, const bool inIsFirstIssue) const {
  String s = mMessage.replacingStringByString (String ("\n"), String ("\\n")) ;
  s = s.replacingStringByString (String ("\""), String ("\\\"")) ;
  ioJSONstring.appendCString (inIsFirstIssue ? "" : ",\n") ;
  ioJSONstring.appendCString ("  { \"ERROR\" : ") ;
  ioJSONstring.appendCString (mIsError ? "true" : "false") ;
  ioJSONstring.appendCString (",\n") ;
  ioJSONstring.appendCString ("    \"SOURCE\" : \"") ;
  ioJSONstring.appendString (mFile.lastPathComponent ()) ;
  ioJSONstring.appendCString ("\",\n") ;
  ioJSONstring.appendCString ("    \"LINE\"  : ") ;
  ioJSONstring.appendSigned (mLine) ;
  ioJSONstring.appendCString (",\n") ;
  ioJSONstring.appendCString ("    \"START_COLUMN\"  : ") ;
  ioJSONstring.appendSigned (mStartColumn) ;
  ioJSONstring.appendCString (",\n") ;
  ioJSONstring.appendCString ("    \"END_COLUMN\"  : ") ;
  ioJSONstring.appendSigned (mEndColumn) ;
  ioJSONstring.appendCString (",\n") ;
  ioJSONstring.appendCString ("    \"MESSAGE\" : \"") ;
  ioJSONstring.appendString (s) ;
  ioJSONstring.appendCString ("\"\n  }") ;
}

//--------------------------------------------------------------------------------------------------

String IssueDescriptor::jsonDescriptionString (const String & inMessage,
                                               const IssueWithFixIt & inFixit) const {
  String result = "{" ;
//--- Error
  result.appendString ("\"error\":") ;
  result.appendString (mIsError ? "true" : "false") ;
//--- file
  result.appendString (",\"file\":") ;
  result.appendStringAsUTF8LiteralStringConstant (mFile) ;
//--- Line
  result.appendString (",\"line\":") ;
  result.appendSigned (mLine) ;
//--- Start Column
  result.appendString (",\"startCol\":") ;
  result.appendSigned (mStartColumn) ;
//--- End Column
  result.appendString (",\"length\":") ;
  result.appendSigned (mEndColumn - mStartColumn + 1) ;
//--- message
  result.appendString (",\"message\":[") ;
  GenericUniqueArray <String> lines ;
  inMessage.componentsSeparatedByString ("\n", lines) ;
  bool first = true ;
  for (int32_t i = 0 ; i < lines.count() ; i++) {
    const String str = lines (i COMMA_HERE) ;
    if (str.length () > 0) {
      if (first) {
        first = false ;
      }else{
        result.appendString (",") ;
      }
      result.appendStringAsUTF8LiteralStringConstant (str) ;
    }
  }
  result.appendString ("]") ;
//--- Fix it
  result.appendString (",\"fixit\":[") ;
  for (int32_t i=0 ; i < inFixit.mFixItArray.count () ; i++) {
    if (i > 0) {
      result.appendString (",") ;
    }
    const FixItDescription fixit = inFixit.mFixItArray (i COMMA_HERE) ;
    result.appendString ("{\"kind\":\"") ;
    switch (fixit.kind ()) {
    case EnumFixItKind::fixItRemove :
      result.appendString ("remove") ;
      break ;
    case EnumFixItKind::fixItReplace :
      result.appendString ("replace") ;
      break ;
    case EnumFixItKind::fixItInsertAfter :
      result.appendString ("insertAfter") ;
      break ;
    case EnumFixItKind::fixItInsertBefore :
      result.appendString ("insertBefore") ;
      break ;
    }
    result.appendString ("\",\"action\":") ;
    result.appendStringAsUTF8LiteralStringConstant (fixit.actionString ()) ;
    result.appendString ("}") ;
  }
  result.appendString ("]") ;
//---
  result.appendString ("}") ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
