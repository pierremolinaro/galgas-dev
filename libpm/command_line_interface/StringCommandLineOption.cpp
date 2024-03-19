//--------------------------------------------------------------------------------------------------
//
//  Generic String Command Line Interface Option
//
//  This file is part of libpm library
//
//  Copyright (C) 2009, ..., 2024 Pierre Molinaro.
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

#include "StringCommandLineOption.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>

//--------------------------------------------------------------------------------------------------

static StringCommandLineOption * gFirstStringOption = nullptr ;
static StringCommandLineOption * gLastStringOption = nullptr ;

//--------------------------------------------------------------------------------------------------

StringCommandLineOption::StringCommandLineOption (const char * inDomainName,
                                                  const char * inIdentifier,
                                                  const char inChar,
                                                  const char * inString,
                                                  const char * inComment,
                                                  const char * inDefaultValue) :
AbstractCommandLineOption (inDomainName, inIdentifier, inChar, inString, inComment),
mNext (nullptr),
mValue (inDefaultValue),
mDefaultValue (inDefaultValue) {
  if (nullptr == gFirstStringOption) {
    gFirstStringOption = this ;
  }else{
    gLastStringOption->mNext = this ;
  }
  gLastStringOption = this ;
}

//--------------------------------------------------------------------------------------------------

void StringCommandLineOption::setStringOptionForCommandChar (const String & inCommandString,
                                                             bool & outFound,
                                                             bool & outCommandLineOptionStringIsValid) {
  outCommandLineOptionStringIsValid = (inCommandString.length () > 2) && (inCommandString.charAtIndex (1 COMMA_HERE) == '=') ;
  outFound = false ;
  if (outCommandLineOptionStringIsValid) {
    StringCommandLineOption * p = gFirstStringOption ;
    while ((p != nullptr) && ! outFound) {
      outFound = UNICODE_VALUE (inCommandString.charAtIndex (0 COMMA_HERE)) == uint32_t (p->mCommandChar) ;
      if (outFound) {
        p->mValue.removeAllKeepingCapacity () ;
        p->mValue.appendString (inCommandString.subStringFromIndex (2)) ;
      }
      p = p->mNext ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void StringCommandLineOption::setStringOptionForCommandString (const String & inCommandString,
                                                               bool & outFound,
                                                               bool & outCommandLineOptionStringIsValid) {
  const int32_t optionLength = inCommandString.length () ;
  outCommandLineOptionStringIsValid = optionLength > 4 ;
//--- Find '=' character
  int32_t equalSignIndex = 0 ;
  if (outCommandLineOptionStringIsValid) {
    outFound = false ;
    while ((equalSignIndex < optionLength) && outCommandLineOptionStringIsValid && ! outFound) {
      outFound = UNICODE_VALUE (inCommandString.charAtIndex (equalSignIndex COMMA_HERE)) == '=' ;
      if (! outFound) {
        equalSignIndex ++ ;
      }
    }
    outCommandLineOptionStringIsValid = outFound && (equalSignIndex > 0) && (equalSignIndex < (optionLength - 1)) ;
  }
//--- Search option
  const String command = inCommandString.leftSubString (equalSignIndex) ;
  outFound = false ;
  if (outCommandLineOptionStringIsValid) {
    StringCommandLineOption * p = gFirstStringOption ;
    while ((p != nullptr) && ! outFound) {
      outFound = strcmp (p->mCommandString, command.cString ()) == 0 ;
      if (outFound) {
        p->mValue.removeAllKeepingCapacity () ;
        p->mValue.appendString (inCommandString.subStringFromIndex (int32_t (strlen (p->mCommandString) + 1))) ;
      }
      p = p->mNext ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void StringCommandLineOption::printUsageOfStringOptions (void) {
  StringCommandLineOption * p = gFirstStringOption ;
  while (p != nullptr) {
    const char c = p->mCommandChar ;
    if (c != '\0') {
      printf (" [-%c=string]", c) ;
    }
    if (p->mCommandString [0] != '\0') {
      printf (" [--%s=string]", p->mCommandString) ;
    }
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

void StringCommandLineOption::printStringOptions (void) {
  StringCommandLineOption * p = gFirstStringOption ;
  while (p != nullptr) {
    if (p->mCommandChar != '\0') {
      gCout.setForeColor (kBlueForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendCString ("-") ;
      gCout.appendASCIIChar (p->mCommandChar) ;
      gCout.appendCString ("=string") ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ;
    }
    if (p->mCommandString [0] != '\0') {
      gCout.setForeColor (kBlueForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendCString ("--") ;
      gCout.appendString (p->mCommandString) ;
      gCout.appendCString ("=string") ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ;
    }
    gCout.appendCString ("    ") ;
    gCout.appendString (p->mComment)  ;
    gCout.appendCString (" (default value: '") ;
    gCout.appendString (p->mDefaultValue) ;
    gCout.appendCString ("')\n") ;
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

void StringCommandLineOption::releaseStrings (void) {
  StringCommandLineOption * p = gFirstStringOption ;
  while (p != nullptr) {
    p->mValue.removeAll () ;
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gReleaseString (nullptr, StringCommandLineOption::releaseStrings) ;

//--------------------------------------------------------------------------------------------------

void StringCommandLineOption::getStringOptionNameList (TC_UniqueArray <String> & outArray) {
  StringCommandLineOption * p = gFirstStringOption ;
  while (p != nullptr) {
    outArray.appendObject (p->mDomainName) ;
    outArray.appendObject (p->mIdentifier) ;
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

utf32 StringCommandLineOption::getStringOptionInvocationLetter (const String & inDomainName,
                                                                const String & inIdentifier) {
  utf32 result = TO_UNICODE (0) ;
  StringCommandLineOption * p = gFirstStringOption ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) ;
    result = TO_UNICODE ((uint32_t) p->mCommandChar) ;
    p = p->mNext ;
}
  return result ;
}

//--------------------------------------------------------------------------------------------------

String StringCommandLineOption::getStringOptionInvocationString (const String & inDomainName,
                                                                 const String & inIdentifier) {
  String result ;
  StringCommandLineOption * p = gFirstStringOption ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) ;
    result = p->mCommandString ;
    p = p->mNext ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String StringCommandLineOption::getStringOptionCommentString (const String & inDomainName,
                                                              const String & inIdentifier) {
  String result ;
  StringCommandLineOption * p = gFirstStringOption ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) ;
    result = p->mComment ;
    p = p->mNext ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String StringCommandLineOption::getStringOptionValue (const String & inDomainName,
                                                      const String & inIdentifier) {
  String result ;
  StringCommandLineOption * p = gFirstStringOption ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) ;
    result = p->mValue ;
    p = p->mNext ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void StringCommandLineOption::setStringOptionValue (const String & inDomainName,
                                                    const String & inIdentifier,
                                                    const String & inValue) {
  StringCommandLineOption * p = gFirstStringOption ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) ;
    if (found) {
      p->mValue = inValue ;
    }
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------
