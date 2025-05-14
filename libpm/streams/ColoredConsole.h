//--------------------------------------------------------------------------------------------------
//
//  'ColoredConsole' : a class for colored console output                                      
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2011, ..., 2024 Pierre Molinaro.
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
//                     FORE COLOR ENUMERATION                                                    
//--------------------------------------------------------------------------------------------------

typedef enum {
 kBlackForeColor,
 kRedForeColor,
 kGreenForeColor,
 kYellowForeColor,
 kBlueForeColor,
 kMagentaForeColor,
 kCyanForeColor,
 kWhiteForeColor
} ConsoleForeColorEnum ;

//--------------------------------------------------------------------------------------------------
//                     BACKGROUND COLOR ENUMERATION                                              
//--------------------------------------------------------------------------------------------------

typedef enum {
 kBlackBackgroundColor,
 kRedBackgroundColor,
 kGreenBackgroundColor,
 kYellowBackgroundColor,
 kBlueBackgroundColor,
 kMagentaBackgroundColor,
 kCyanBackgroundColor,
 kWhiteBackgroundColor
} ConsoleBackgroundColorEnum ;

//--------------------------------------------------------------------------------------------------
//                     TEXT ATTRIBUTES ENUMERATION                                               
//--------------------------------------------------------------------------------------------------

typedef enum {
 kAllAttributesOff,
 kBoldTextAttribute,
 kBlinkTextAttribute,
 kReverseVideoTextAttribute,
 kConcealedTextAttribute
} ConsoleTextAttributeEnum ;

//--------------------------------------------------------------------------------------------------

#include "AbstractOutputStream.h"

//--------------------------------------------------------------------------------------------------

class ColoredConsole : public AbstractOutputStream {
//--- Set fore color
  public: void setConsoleForeColor (const ConsoleForeColorEnum inForeColor) ;

//--- Set background color
  public: void setConsoleBackgroundColor (const ConsoleBackgroundColorEnum inBackgroundColor) ;

//--- Set text attribute
  public: void setConsoleTextAttribute (const ConsoleTextAttributeEnum inTextAttribute) ;

//--- Fore color, Background color, text attributes are used or not (default: used)
  public: static void setUseTextAttributes (const bool inUsesTextAttributes) ;
  
  public: static bool usesTextAttributes (void) ;
} ;

//--------------------------------------------------------------------------------------------------
