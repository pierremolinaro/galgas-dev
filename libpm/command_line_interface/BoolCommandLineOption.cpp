//--------------------------------------------------------------------------------------------------
//
//  Generic Boolean Command Line Interface Option
//
//  This file is part of libpm library
//
//  Copyright (C) 2009, ..., 2009 Pierre Molinaro.
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

#include "BoolCommandLineOption.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>

//--------------------------------------------------------------------------------------------------

static BoolCommandLineOption * gFirstBoolCommand = nullptr ;

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption::BoolCommandLineOption (const char * inDomainName,
                                              const char * inIdentifier,
                                              const char inChar,
                                              const char * inString,
                                              const char * inComment,
                                              const bool inVisibleInGalgas) :
AbstractCommandLineOption (inDomainName, inIdentifier, inChar, inString, inComment),
mNext (gFirstBoolCommand),
mValue (false),
mVisibleInGalgas (inVisibleInGalgas) {
  gFirstBoolCommand = this ;
}

//--------------------------------------------------------------------------------------------------

void BoolCommandLineOption::setBoolOptionForCommandChar (const utf32 inCommandChar,
                                                         bool & outFound) {
  outFound = false ;
  BoolCommandLineOption * p = gFirstBoolCommand ;
  while ((p != nullptr) && ! outFound) {
    if (uint32_t (p->mCommandChar) == UNICODE_VALUE (inCommandChar)) {
      outFound = true ;
      p->mValue = true ;
    }
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

void BoolCommandLineOption::setBoolOptionForCommandString (const String & inCommandString,
                                                           bool & outFound) {
  outFound = false ;
  BoolCommandLineOption * p = gFirstBoolCommand ;
  while ((p != nullptr) && ! outFound) {
    if (inCommandString == p->mCommandString) {
      outFound = true ;
      p->mValue = true ;
    }
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

void BoolCommandLineOption::printUsageOfBoolOptions (void) {
  BoolCommandLineOption * p = gFirstBoolCommand ;
  while (p != nullptr) {
    const char c = p->mCommandChar ;
    if (c != '\0') {
      printf (" [-%c]", c) ;
    }
    if (p->mCommandString [0] != '\0') {
      printf (" [--%s]", p->mCommandString) ;
    }
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

void BoolCommandLineOption::printBoolOptions (void) {
  BoolCommandLineOption * p = gFirstBoolCommand ;
  while (p != nullptr) {
    if (p->mCommandChar != '\0') {
      gCout.setConsoleForeColor (kBlueForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendCString ("-") ;
      gCout.appendASCIIChar (p->mCommandChar) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ;
    }
    if (p->mCommandString [0] != '\0') {
      gCout.setConsoleForeColor (kBlueForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendCString ("--") ;
      gCout.appendString (p->mCommandString) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ;
    }
    gCout.appendCString ("    ") ;
    gCout.appendString (p->mComment) ;
    gCout.appendNewLine () ;
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

void BoolCommandLineOption::getBoolOptionNameList (TC_UniqueArray <String> & outArray) {
  BoolCommandLineOption * p = gFirstBoolCommand ;
  while (p != nullptr) {
    if (p->mVisibleInGalgas) {
      outArray.appendObject (p->mDomainName) ;
      outArray.appendObject (p->mIdentifier) ;
    }
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------

utf32 BoolCommandLineOption::getBoolOptionInvocationLetter (const String & inDomainName,
                                                            const String & inIdentifier) {
  utf32 result = TO_UNICODE (0) ;
  BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    result = TO_UNICODE ((uint32_t) p->mCommandChar) ;
    p = p->mNext ;
}
  return result ;
}

//--------------------------------------------------------------------------------------------------

String BoolCommandLineOption::getBoolOptionInvocationString (const String & inDomainName,
                                                             const String & inIdentifier) {
  String result ;
  BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    result = p->mCommandString ;
    p = p->mNext ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String BoolCommandLineOption::getBoolOptionCommentString (const String & inDomainName,
                                                          const String & inIdentifier) {
  String result ;
  BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    result = p->mComment ;
    p = p->mNext ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool BoolCommandLineOption::getBoolOptionValue (const String & inDomainName,
                                                const String & inIdentifier) {
  bool result = false ;
  BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    result = p->mValue ;
    p = p->mNext ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void BoolCommandLineOption::setBoolOptionValue (const String & inDomainName,
                                                const String & inIdentifier,
                                                const bool inValue) {
  BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    if (found) {
      p->mValue = inValue ;
    }
    p = p->mNext ;
  }
}

//--------------------------------------------------------------------------------------------------
