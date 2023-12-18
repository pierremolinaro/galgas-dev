//--------------------------------------------------------------------------------------------------
//
//  'C_HTML_FileWrite' : a class for stream writing html text files                              
//    (with facility for outputing C++ code)                                                     
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2003, ..., 2014 Pierre Molinaro.
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

#include "files/C_HTML_FileWrite.h"
#include "strings/String-class.h"
#include "time/C_DateTime.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>

//--------------------------------------------------------------------------------------------------

C_HTML_FileWrite::C_HTML_FileWrite (const String & inFileName,
                                    const String & inWindowTitle,
                                    const String & inCSSFileName,
                                    const String & inCSSContents) :
C_TextFileWrite (inFileName) {
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
//                     Close                             
//--------------------------------------------------------------------------------------------------

bool C_HTML_FileWrite::close (void) {
  addRawData ("</div></body></html>\n") ;
  return inherited::close () ;
}

//--------------------------------------------------------------------------------------------------
//  Destructor writes html ending code, the closes the file                    *
//--------------------------------------------------------------------------------------------------

C_HTML_FileWrite::~C_HTML_FileWrite (void) {
  addRawData ("</div></body></html>\n") ;
}

//--------------------------------------------------------------------------------------------------
//  Write a character string into the file WITHOUT any translation             *
//--------------------------------------------------------------------------------------------------

void C_HTML_FileWrite::addRawData (const char * in_Cstring) {
  inherited::performActualCharArrayOutput (in_Cstring, (int32_t) (strlen (in_Cstring) & UINT32_MAX)) ;
}

//--------------------------------------------------------------------------------------------------
//                  Write a character string into the file                     *
//  Performs HTML character translation (i.e. '<' --> '&lt;', ...)             *
//--------------------------------------------------------------------------------------------------

void C_HTML_FileWrite::performActualCharArrayOutput (const char * inCharArray,
                                                     const int32_t inArrayCount) {
  for (int32_t i=0 ; i<inArrayCount ; i++) {
    const char c = inCharArray [i] ;
    switch (c) {
    case '<' :
      inherited::performActualCharArrayOutput ("&lt;", 4) ;
      break ;
    case '>' :
      inherited::performActualCharArrayOutput ("&gt;", 4) ;
      break ;
    case '&' :
      inherited::performActualCharArrayOutput ("&amp;", 5) ;
      break ;
    default :
      inherited::performActualCharArrayOutput (& c, 1) ;
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void C_HTML_FileWrite::performActualUnicodeArrayOutput (const utf32 * inCharArray,
                                                        const int32_t inArrayCount) {
  for (int32_t i=0 ; i<inArrayCount ; i++) {
    const utf32 codePoint = inCharArray [i] ;
    switch (UNICODE_VALUE (codePoint)) {
    case '<' :
      inherited::performActualCharArrayOutput ("&lt;", 4) ;
      break ;
    case '>' :
      inherited::performActualCharArrayOutput ("&gt;", 4) ;
      break ;
    case '&' :
      inherited::performActualCharArrayOutput ("&amp;", 5) ;
      break ;
    default :
      inherited::performActualUnicodeArrayOutput (& codePoint, 1) ;
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//                 Comments as a table                   
//--------------------------------------------------------------------------------------------------

void C_HTML_FileWrite::addCppTitleComment (const String & inCommentString,
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
