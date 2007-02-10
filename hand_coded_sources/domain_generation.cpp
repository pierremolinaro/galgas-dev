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
#include "utilities/MF_MemoryControl.h"

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
  GGS_domainAttributeMap::element_type * currentAttribute = mAttributeMap.firstObject () ;
  while (currentAttribute != NULL) {
    macroValidPointer (currentAttribute) ;
    inHfile << "//--- '" << currentAttribute->mKey << "' attribute\n"
               "  protected : cDomain _attribute_" << currentAttribute->mKey << " ;\n"
               "  public : void modifier_addTo"
            << currentAttribute->mKey.stringWithUpperCaseFirstLetter ()
            << " (C_Lexique & inLexique,\n"
               "                                    const GGS_string & inNewValue\n"
               "                                    COMMA_LOCATION_ARGS) ;\n\n" ;
    currentAttribute = currentAttribute->nextObject () ;
  }
  inHfile << "//--- Constructor\n"
             "  public : GGS_" << mDomainName << " (void) ;\n\n"
             "//--- Destructor\n"
             "  public : virtual ~GGS_" << mDomainName << " (void) ;\n\n"
             "//--- 'emptyDomain' GALGAS constructor\n"
             "  public : static GGS_" << mDomainName << "\n"
             "  constructor_emptyDomain (C_Lexique & inLexique\n"
             "                           COMMA_LOCATION_ARGS) ;\n"
             "} ;\n\n" ;
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

//--- Constructor
  inCppFile << "GGS_" << mDomainName << "::GGS_" << mDomainName << " (void) {\n"
               "}\n\n" ;

//--- Destructor
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << mDomainName << "::~GGS_" << mDomainName << " (void) {\n"
               "}\n\n" ;

//--- 'emptyDomain' constructor
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << mDomainName << " GGS_" << mDomainName << "::\n"
               "constructor_emptyDomain (C_Lexique & /* inLexique */\n"
               "                         COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << mDomainName << " result ;\n"
               "  result.mIsBuilt = true ;\n"
               "  return result ;\n"
               "}\n\n" ;

//--- Accessors
  GGS_domainAttributeMap::element_type * currentAttribute = mAttributeMap.firstObject () ;
  while (currentAttribute != NULL) {
    macroValidPointer (currentAttribute) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mDomainName << "::\n"
                 "modifier_addTo"
            << currentAttribute->mKey.stringWithUpperCaseFirstLetter ()
            << " (C_Lexique & /* inLexique */,\n"
               "                                    const GGS_string & inNewValue\n"
               "                                    COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  findOrAddEntry (_attribute_" << currentAttribute->mKey
            << ", inNewValue) ;\n"
               "}\n\n" ;
    currentAttribute = currentAttribute->nextObject () ;
  }
}

//---------------------------------------------------------------------------*
