//--------------------------------------------------------------------------------------------------
//
//  String : an implementation of fully dynamic character string                               
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 1997, ..., 2023 Pierre Molinaro.
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

#include "strings/HTMLString.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>

//--------------------------------------------------------------------------------------------------
//
//   C O N S T R U C T O R S                                                                     
//
//--------------------------------------------------------------------------------------------------

HTMLString::HTMLString (void) :
String () {
}


//--------------------------------------------------------------------------------------------------

void HTMLString::writeStartCode (const String & inWindowTitle,
                                 const String & inCSSFileName,
                                 const String & inCSSContents) {
  addRawData ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
                 "<html>"
                 "<head>\n"
                 "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">\n"
                 "<title>\n") ;
  addString (inWindowTitle) ;
  addRawData ("</title>") ;
  if (inCSSFileName.length () > 0) {
    addRawData ("<link rel=stylesheet type=\"text/css\" href=\"") ;
    addRawData (inCSSFileName.cString (HERE)) ;
    addRawData ("\">") ;
  }  
  if (inCSSContents.length () > 0) {
    addRawData ("<style type=\"text/css\">") ;
    addRawData (inCSSContents.cString (HERE)) ;
    addRawData ("</style>") ;
  }
  addRawData ("</head>"
              "<body><div>\n") ;
}

//--------------------------------------------------------------------------------------------------

void HTMLString::writeEndCode (void) {
  addRawData ("</div></body></html>\n") ;
}

//--------------------------------------------------------------------------------------------------

void HTMLString::addRawData (const char * in_Cstring) {
  super::performActualCharArrayOutput (in_Cstring, (int32_t) (strlen (in_Cstring) & UINT32_MAX)) ;
}

//--------------------------------------------------------------------------------------------------
//                  Write a character string into the file                                       
//  Performs HTML character translation (i.e. '<' --> '&lt;', ...)                               
//--------------------------------------------------------------------------------------------------

void HTMLString::performActualCharArrayOutput (const char * inCharArray,
                                               const int32_t inArrayCount) {
  for (int32_t i=0 ; i<inArrayCount ; i++) {
    const char c = inCharArray [i] ;
    switch (c) {
    case '<' :
      super::performActualCharArrayOutput ("&lt;", 4) ;
      break ;
    case '>' :
      super::performActualCharArrayOutput ("&gt;", 4) ;
      break ;
    case '&' :
      super::performActualCharArrayOutput ("&amp;", 5) ;
      break ;
    default :
      super::performActualCharArrayOutput (& c, 1) ;
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void HTMLString::performActualUnicodeArrayOutput (const utf32 * inCharArray,
                                                  const int32_t inArrayCount) {
  for (int32_t i=0 ; i<inArrayCount ; i++) {
    const utf32 codePoint = inCharArray [i] ;
    switch (UNICODE_VALUE (codePoint)) {
    case '<' :
      super::performActualCharArrayOutput ("&lt;", 4) ;
      break ;
    case '>' :
      super::performActualCharArrayOutput ("&gt;", 4) ;
      break ;
    case '&' :
      super::performActualCharArrayOutput ("&amp;", 5) ;
      break ;
    default :
      super::performActualUnicodeArrayOutput (& codePoint, 1) ;
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//                 Comments as a table                                                           
//--------------------------------------------------------------------------------------------------

void HTMLString::addCppTitleComment (const String & inCommentString,
                                     const String & inTableStyleClass) {
  addRawData ("<table") ;
  if (inTableStyleClass.length () > 0) {
    addRawData (" class=\"") ;
    addRawData (inTableStyleClass.cString (HERE)) ;
    addRawData ("\"") ;
  }
  addRawData ("><tr><td>\n") ;
  addString (inCommentString) ;
  addRawData ("\n</td></tr></table>\n") ;
}

//--------------------------------------------------------------------------------------------------
