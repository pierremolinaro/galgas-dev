//---------------------------------------------------------------------------*
//                                                                           *
//   Scanner Generation (hand-coded file)                                    *
//                                                                           *
//  Copyright (C) 2000-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef SCANNER_GENERATION_ROUTINES_DEFINED
#define SCANNER_GENERATION_ROUTINES_DEFINED

//---------------------------------------------------------------------------*

class C_text_file_write ;
class C_string ;
class C_string ;

//---------------------------------------------------------------------------*

void generateTerminalSymbolCppName (const C_string & inValue,
                                    AC_output_stream & ioFile) ;

//---------------------------------------------------------------------------*

#endif
