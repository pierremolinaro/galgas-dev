//--------------------------------------------------------------------------------------------------
//
//  Generic Command Line Interface Option                                                        
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

#include "C_CommandLineOption.h"

//--------------------------------------------------------------------------------------------------

C_CommandLineOption::C_CommandLineOption (const String & inDomainName,
                                          const String & inIdentifier,
                                          const char inChar,
                                          const String & inString,
                                          const String & inComment) :
mDomainName (inDomainName),
mIdentifier (inIdentifier),
mCommandChar (inChar),
mCommandString (inString),
mComment (inComment) {
}

//--------------------------------------------------------------------------------------------------

C_CommandLineOption::~C_CommandLineOption (void) {
}

//--------------------------------------------------------------------------------------------------
