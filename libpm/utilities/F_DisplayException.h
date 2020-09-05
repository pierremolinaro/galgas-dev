//----------------------------------------------------------------------------------------------------------------------
//
//  Routine 'F_default_display_exception'.                                                       
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 1997 Pierre Molinaro.                                                          
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

#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "utilities/M_machine.h"

//----------------------------------------------------------------------------------------------------------------------

#include <exception>

//----------------------------------------------------------------------------------------------------------------------

void F_default_display_exception (const ::std:: exception & inException) ;

void F_default_display_unknown_exception (void) ;

//----------------------------------------------------------------------------------------------------------------------
