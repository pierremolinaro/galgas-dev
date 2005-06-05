//---------------------------------------------------------------------------*
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//   more details.                                                           *
//                                                                           *
//---------------------------------------------------------------------------*

#define macro_typeInstruction \
public : virtual void generateInstruction (AC_OutputStream & inCppFile, \
                                           const C_String & inLexiqueClassName, \
                                           const C_String & inTargetFileName, \
                                           sint32 & ioPrototypeIndex, \
                                           const bool inGenerateDebug, \
                                           const bool inGenerateSemanticInstructions) const = 0 ; \
public : virtual void generateSelectAndRepeatPrototypes (AC_OutputStream & inHfile, \
                                                         const C_String & inLexiqueClassName, \
                                                         const C_String & inTargetFileName, \
                                                         sint32 & ioPrototypeIndex, \
                                                         const bool inNotDeclared) ; \
public : virtual bool isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const = 0 ; \
public : virtual bool formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName, \
                                            const bool inGenerateSemanticInstructions) const = 0 ; \
public : virtual bool isSyntacticInstruction (void) const { return false ; }

//---------------------------------------------------------------------------*

#define macroInheritFrom_typeInstruction \
public : virtual void generateInstruction (AC_OutputStream & inCppFile, \
                                           const C_String & inLexiqueClassName, \
                                           const C_String & inTargetFileName, \
                                           sint32 & ioPrototypeIndex, \
                                           const bool inGenerateDebug, \
                                           const bool inGenerateSemanticInstructions) const ; \
public : virtual bool isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const ; \
public : virtual bool formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName, \
                                            const bool inGenerateSemanticInstructions) const ;

//---------------------------------------------------------------------------*
