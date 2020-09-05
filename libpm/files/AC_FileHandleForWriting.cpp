//----------------------------------------------------------------------------------------------------------------------
//
//  'AC_FileHandleForWriting' : an abstract class for handling file write                        
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2012, ..., 2012 Pierre Molinaro.
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

#include "files/AC_FileHandleForWriting.h"

//----------------------------------------------------------------------------------------------------------------------

#include <signal.h>

//----------------------------------------------------------------------------------------------------------------------

#ifndef COMPILE_FOR_WINDOWS
  #error COMPILE_FOR_WINDOWS is undefined
#endif

//----------------------------------------------------------------------------------------------------------------------

#if COMPILE_FOR_WINDOWS == 0
  static uint32_t g_SIGTERM_balance_count = 0 ;
#endif

//----------------------------------------------------------------------------------------------------------------------

AC_FileHandleForWriting::AC_FileHandleForWriting (const C_String & inFilePath,
                                                  const char * inMode) :
AC_FileHandle (inFilePath, inMode) {
  #if COMPILE_FOR_WINDOWS == 0
    if (0 == g_SIGTERM_balance_count) {
      sigset_t s ;
      sigemptyset (& s) ;
      sigaddset (& s, SIGTERM) ;
      sigprocmask (SIG_BLOCK, & s, NULL) ;
    }
    g_SIGTERM_balance_count ++ ;
  #endif
}

//----------------------------------------------------------------------------------------------------------------------

AC_FileHandleForWriting::~ AC_FileHandleForWriting (void) {
  if (NULL != mFilePtr) {
    fclose (mFilePtr) ;
    mFilePtr = NULL ;
  }
//---
  #if COMPILE_FOR_WINDOWS == 0
    g_SIGTERM_balance_count -- ;
    if (0 == g_SIGTERM_balance_count) {
      sigset_t s ;
      sigemptyset (& s) ;
      sigaddset (& s, SIGTERM) ;
      sigprocmask (SIG_UNBLOCK, & s, NULL) ;
    }
  #endif
}

//----------------------------------------------------------------------------------------------------------------------
