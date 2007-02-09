//---------------------------------------------------------------------------*
//                                                                           *
//  Generate domain class                                                    *
//                                                                           *
//  Copyright (C) 2007 Pierre Molinaro.                                      *
//                                                                           *
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

#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mDomainName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) const {
  inHfile.writeCppTitleComment (C_String ("Class for '") + mDomainName + "' Domain") ;
  
  inHfile << "class GGS_" << mDomainName << " : public AC_galgas_domain {\n" ;
  
  inHfile << "}\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_domainToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
  inCppFile.writeCppTitleComment (C_String ("Class for '") + mDomainName + "' Domain") ;
}

//---------------------------------------------------------------------------*
