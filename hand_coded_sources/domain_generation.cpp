//---------------------------------------------------------------------------*
//                                                                           *
//  Generate domain class                                                    *
//                                                                           *
//  Copyright (C) 2007, ..., 2009 Pierre Molinaro.                           *
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

#include "semantics_semantics.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mDomainName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.appendCppTitleComment (C_String ("Class for '") + mDomainName + "' Domain") ;
  
  inHfile << "class GGS_" << mDomainName << " : public AC_galgas_domain {\n" ;
  GGS_domainAttributeMap::cEnumerator currentAttribute (mAttributeMap) ;
  while (currentAttribute.hasCurrentObject ()) {
    inHfile << "//--- '" << currentAttribute._key (HERE) << "' domain\n"
               "  protected : GGS_stringlist mDomain_" << currentAttribute._key (HERE) << " ;\n"
               "  protected : PMUInt16 mBDDVariableCountForDomain_" << currentAttribute._key (HERE) << " ;\n\n" ;
    currentAttribute.next () ;
  }
  GGS_domainRelationMap::cEnumerator currentRelation (mRelationMap) ;
  while (currentRelation.hasCurrentObject ()) {
    inHfile << "//--- '" << currentRelation._key (HERE) << "' relation\n"
               "  protected : C_BDD mBDDForRelation_" << currentRelation._key (HERE) << " ;\n" ;
    inHfile << "  public : void modifier_addTo"
            << currentRelation._key (HERE).stringWithUpperCaseFirstLetter ()
            << " (C_Compiler & inLexique" ;
    for (PMSInt32 i=0 ; i<currentRelation._mDomains (HERE).count () ; i++) {
      inHfile << ",\n                                    const GGS_uint & inValue_" << cStringWithSigned (i) ;
    }
    inHfile << "\n"
               "                                    COMMA_LOCATION_ARGS) ;\n"
               "  public : void modifier_reset"
            << currentRelation._key (HERE).stringWithUpperCaseFirstLetter ()
            << " (C_Compiler & inLexique"
               "\n"
               "                                    COMMA_LOCATION_ARGS) ;\n\n" ;
    currentRelation.next () ;
  }
  inHfile << "//--- Default constructor\n"
             "  public : GGS_" << mDomainName << " (void) ;\n\n"
             "//--- Destructor\n"
             "  public : virtual ~GGS_" << mDomainName << " (void) ;\n\n"
             "//--- 'domainWithNames' GALGAS constructor\n"
             "  public : static GGS_" << mDomainName << "\n"
             "  constructor_domainWithNames (C_Compiler & inLexique" ;
  currentAttribute.rewind () ;
  while (currentAttribute.hasCurrentObject ()) {
    inHfile << ",\n                               const GGS_stringlist & inDomain_"
            << currentAttribute._key (HERE) ;
    currentAttribute.next () ;
  }
  inHfile << "\n                               COMMA_LOCATION_ARGS) ;\n"
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_domainToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                            const C_String & /* inTargetFileName*/,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_domainToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                  const C_String & /* inTargetFileName */,
                                  PMSInt32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
  inCppFile.appendCppTitleComment (C_String ("Class for '") + mDomainName + "' Domain") ;

//--- Constructor
  inCppFile << "GGS_" << mDomainName << "::GGS_" << mDomainName << " (void) :\n"
               "AC_galgas_domain ()" ;
  GGS_domainAttributeMap::cEnumerator currentAttribute (mAttributeMap) ;
  while (currentAttribute.hasCurrentObject ()) {
    inCppFile << ",\n"
                 "mDomain_" << currentAttribute._key (HERE) << " (),\n"
                 "mBDDVariableCountForDomain_" << currentAttribute._key (HERE) << " (0)" ;
    currentAttribute.next () ;
  }
  GGS_domainRelationMap::cEnumerator currentRelation (mRelationMap) ;
  while (currentRelation.hasCurrentObject ()) {
    inCppFile << ",\n"
                 "mBDDForRelation_" << currentRelation._key (HERE) << " ()" ;
    currentRelation.next () ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Destructor
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mDomainName << "::~GGS_" << mDomainName << " (void) {\n"
               "}\n\n" ;

//--- 'domainWithNames' constructor
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mDomainName << " GGS_" << mDomainName << "::\n"
               "constructor_domainWithNames (C_Compiler & /* inLexique */" ;
  currentAttribute.rewind () ;
  while (currentAttribute.hasCurrentObject ()) {
    inCppFile << ",\n                             const GGS_stringlist & inDomain_"
              << currentAttribute._key (HERE) ;
    currentAttribute.next () ;
  }
  inCppFile << "\n                             COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << mDomainName << " result ;\n"
               "  result.mIsBuilt = true ;\n" ;
  currentAttribute.rewind () ;
  while (currentAttribute.hasCurrentObject ()) {
    inCppFile << "  result.mDomain_"
              << currentAttribute._key (HERE)
              << " = inDomain_"
              << currentAttribute._key (HERE)
              << " ;\n"
               "  result.mBDDVariableCountForDomain_" << currentAttribute._key (HERE)
            << " = AC_galgas_domain::bitCountForDomainSize (inDomain_" << currentAttribute._key (HERE) << ".count ()) ;\n" ;
    currentAttribute.next () ;
  }
  inCppFile << "  return result ;\n"
               "}\n\n" ;

//--- Relation
  currentRelation.rewind () ;
  while (currentRelation.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mDomainName << "::\n"
                 "modifier_addTo"
              << currentRelation._key (HERE).stringWithUpperCaseFirstLetter ()
              << " (C_Compiler & /* inLexique */" ;
    for (PMSInt32 i=0 ; i<currentRelation._mDomains (HERE).count () ; i++) {
      inCppFile << ",\n                                    const GGS_uint & inValue_" << cStringWithSigned (i) ;
    }
    inCppFile << "\n"
                 "                                    COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "  if (isBuilt ()" ;
    GGS_stringlist::cEnumerator currentDomainRelation (currentRelation._mDomains (HERE), true) ;
    PMSInt32 idx = 0 ;
    while (currentDomainRelation.hasCurrentObject ()) {
      inCppFile << " && inValue_" << cStringWithSigned (idx) << ".isBuilt ()" ;
      idx ++ ;
      currentDomainRelation.next () ;
    }
    inCppFile << ") {\n"
                 "    PMUInt16 idx = 0 ;\n" ;
    currentDomainRelation.rewind () ;
    idx = 0 ;
    while (currentDomainRelation.hasCurrentObject ()) {
      inCppFile << "    const C_BDD value_" << cStringWithSigned (idx)
                << " = C_BDD::varCompareConst (idx, mBDDVariableCountForDomain_" << currentDomainRelation._mValue (HERE)
                << ", C_BDD::kEqual, inValue_" << cStringWithSigned (idx) << ".uintValue ()) ;\n"
                << "    idx += mBDDVariableCountForDomain_" << currentDomainRelation._mValue (HERE)
                << " ;\n" ;
      idx ++ ;
      currentDomainRelation.next () ;
    }
    inCppFile << "    mBDDForRelation_"
              << currentRelation._key (HERE)
              << " |= " ;
    idx = 0 ;
    currentDomainRelation.rewind () ;
    while (currentDomainRelation.hasCurrentObject ()) {
      if (idx > 0) {
        inCppFile << " & " ;
      }
      inCppFile << "value_" << cStringWithSigned (idx) ;
      idx ++ ;
      currentDomainRelation.next () ;
    }
    inCppFile << " ;\n"
                 "  }\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mDomainName << "::\n"
                 "modifier_reset"
              << currentRelation._key (HERE).stringWithUpperCaseFirstLetter ()
              << " (C_Compiler & /* inLexique */"
                 "\n"
                 "                                    COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "  mBDDForRelation_"
              << currentRelation._key (HERE)
              << ".setToFalse () ;\n"
                 "}\n\n" ;
    currentRelation.next () ;
  }
}
                
//---------------------------------------------------------------------------*
