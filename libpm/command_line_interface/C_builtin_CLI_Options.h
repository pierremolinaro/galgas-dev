//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Generic Command Line Interface Options                                                                             *
//   --help : Display help information                                                                                 *
//   --version : Display software current version                                                                      *
//   --no-color: Do not issue colored messages                                                                         *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2003, ..., 2012 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef GENERIC_CLI_OPTIONS_DEFINED
#define GENERIC_CLI_OPTIONS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "command_line_interface/C_BoolCommandLineOption.h"

//---------------------------------------------------------------------------------------------------------------------*

#ifndef COMPILE_FOR_WINDOWS
  #error COMPILE_FOR_WINDOWS is undefined
#endif

//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_generic_5F_cli_5F_options_display_5F_help ;

//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_generic_5F_cli_5F_options_display_5F_version ;

//---------------------------------------------------------------------------------------------------------------------*

#if COMPILE_FOR_WINDOWS == 0
  extern C_BoolCommandLineOption gOption_generic_5F_cli_5F_options_no_5F_color ;
#endif

//---------------------------------------------------------------------------------------------------------------------*

#if COMPILE_FOR_WINDOWS == 1
  extern C_BoolCommandLineOption gOption_generic_5F_cli_5F_options_nodialog ;
#endif

//---------------------------------------------------------------------------------------------------------------------*

#endif
