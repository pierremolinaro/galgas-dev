//---------------------------------------------------------------------------*
//                                                                           *
//   scannerDecoderGeneration.h                                              *
//                                                                           *
//  Copyright (C) 2006 Pierre Molinaro.                                      *
//                                                                           *
//  Started december 13th, 2006.                                             *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
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

#ifndef SCANNER_DECODER_GENERATION_DEFINED
#define SCANNER_DECODER_GENERATION_DEFINED

//---------------------------------------------------------------------------*

#include "scanner_parser.h"

//---------------------------------------------------------------------------*

void generateTerminalSymbolCppName (const C_String & inValue,
                                    AC_OutputStream & ioFile) ;

//---------------------------------------------------------------------------*

void
scannerDecoderGeneration (C_Lexique & inLexique,
                          const C_String & inLexiqueName,
                          const GGS_tokensInListMap & inTokensInListMap,
                          const GGS_typeListeTestsEtInstructions & inRuleList,
                          C_String & inCppFile) ;

//---------------------------------------------------------------------------*

#endif
