//---------------------------------------------------------------------------*
//                                                                           *
//  Generate semantics instructions                                          *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
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

#ifndef SEMANTICS_INSTRUCTIONS_DEFINED
#define SEMANTICS_INSTRUCTIONS_DEFINED

//---------------------------------------------------------------------------*

#include "utilities/M_machine.h"

//---------------------------------------------------------------------------*

class GGS_typeInstructionsList ;
class AC_output_stream ;
class C_string ;
class GGS_typeCplusPlusName ;
class GGS_formalArgumentPassingMode ;
class cPtr_AC_galgasType ;

//---------------------------------------------------------------------------*

void
generateInstructionListForList (const GGS_typeInstructionsList & inList,
                                AC_output_stream & ioCppFile,
                                const C_string & inLexiqueClassName,
                                const C_string & inTargetFileName,
                                sint32 & ioPrototypeIndex,
                                const bool inGenerateDebug,
                                const bool inGenerateSemanticInstructions) ;

void
generateSelectAndRepeatPrototypesForList (const GGS_typeInstructionsList & inList,
                                          AC_output_stream & inHfile,
                                          const C_string & inLexiqueClassName,
                                          const C_string & inTargetFileName,
                                          sint32 & ioPrototypeIndex,
                                          const bool inNotDeclared) ;

bool
isLexiqueFormalArgumentUsedForList (const GGS_typeInstructionsList & inList,
                                    const bool inGenerateSemanticInstructions) ;

bool
formalArgumentIsUsedForList (const GGS_typeInstructionsList & inList,
                             const GGS_typeCplusPlusName & inArgumentCppName,
                             const bool inGenerateSemanticInstructions) ;

void
generateFormalArgumentFromTypeName (const C_string & inTypeName,
                                    const GGS_formalArgumentPassingMode & inFormalArgumentPassingMode,
                                    AC_output_stream & inFile) ;

void
generateFormalArgumentFromType (const cPtr_AC_galgasType * inTypePtr,
                                const GGS_formalArgumentPassingMode & inFormalArgumentPassingMode,
                                AC_output_stream & inFile) ;

//---------------------------------------------------------------------------*

#endif
