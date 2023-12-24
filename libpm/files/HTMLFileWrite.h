//--------------------------------------------------------------------------------------------------
//
//  'HTMLFileWrite' : a class for stream writing html text files                              
//    (with facility for outputing C++ code)                                                     
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2003, ..., 2023 Pierre Molinaro.
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

#pragma once

//--------------------------------------------------------------------------------------------------

#include "files/C_TextFileWrite.h"

//--------------------------------------------------------------------------------------------------

class String ;

//--------------------------------------------------------------------------------------------------

class HTMLFileWrite final : public C_TextFileWrite {
//--- Constructor : if inFileName is the empty string, no file is opened.
//    Otherwise, it tries to open the file for writing;
//    The destructor will close the file (is successfully opened)
  public: HTMLFileWrite (const String & inFileName,
                         const String & inWindowTitle,
                         const String & inCSSFileName,
                         const String & inCSSContents) ;

//--- Destructor
  public: virtual ~ HTMLFileWrite (void) ;

//--- No copy
  private: HTMLFileWrite & operator = (HTMLFileWrite &) = delete ;
  private: HTMLFileWrite (HTMLFileWrite &) = delete ;

//--- Output data, without HTML formatting
  public: void addRawData (const char * inCString) ;

//--- General stream methods
  protected: virtual void performActualCharArrayOutput (const char * inCharArray,
                                                        const int32_t inArrayCount) ;

  protected: virtual void performActualUnicodeArrayOutput (const utf32 * inCharArray,
                                                           const int32_t inArrayCount) ;

//--- Method for writing a HTML table
  public: void addCppTitleComment (const String & inCommentString,
                                   const String & inTableStyleClass) ;

//--- Close file (does nothing is file is not open)
  public: virtual bool close (void) ;

//--- Private attributes
  private: typedef C_TextFileWrite super ;
} ;

//--------------------------------------------------------------------------------------------------
