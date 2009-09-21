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
    inHfile << "//--- '" << currentAttribute._key (HERE) << "' attribute\n"
               "  protected : cDomainAttribute _attribute_" << currentAttribute._key (HERE) << " ;\n"
               "  public : void modifier_addTo"
            << currentAttribute._key (HERE).stringWithUpperCaseFirstLetter ()
            << " (C_Compiler & inLexique,\n"
               "                                    const GGS_string & inNewValue\n"
               "                                    COMMA_LOCATION_ARGS) ;\n\n" ;
    currentAttribute.next () ;
  }
  GGS_domainRelationMap::cEnumerator currentRelation (mRelationMap) ;
  while (currentRelation .hasCurrentObject ()) {
    inHfile << "//--- '" << currentRelation._key (HERE) << "' relation\n"
               "  protected : C_BDD _relationBDD_" << currentRelation._key (HERE) << " ;\n" ;
    for (PMSInt32 i=0 ; i<currentRelation._mDomains (HERE).count () ; i++) {
      inHfile << "  protected : PMUInt16 _bitCount_" << cStringWithSigned (i) << "_forRelation_"
              << currentRelation._key (HERE) << " ;\n" ;
    }
    inHfile << "  public : void modifier_addTo"
            << currentRelation._key (HERE).stringWithUpperCaseFirstLetter ()
            << " (C_Compiler & inLexique,\n" ;
    for (PMSInt32 i=1 ; i<currentRelation._mDomains (HERE).count () ; i++) {
      inHfile << "                                    const GGS_string & inValue_" << cStringWithSigned (i) << ",\n" ;
    }
    inHfile << "                                    const GGS_string & inValue_"
            << cStringWithSigned (currentRelation._mDomains (HERE).count ())
            << "\n"
               "                                    COMMA_LOCATION_ARGS) ;\n\n" ;
    currentRelation.next () ;
  }
  inHfile << "//--- Adjusting relation BDDs afeter bit count change\n"
             "  protected : void updateRelationsAfterBitCountExtension (void) ;\n"
             "//--- Constructor\n"
             "  public : GGS_" << mDomainName << " (void) ;\n\n"
             "//--- Destructor\n"
             "  public : virtual ~GGS_" << mDomainName << " (void) ;\n\n"
             "//--- 'emptyDomain' GALGAS constructor\n"
             "  public : static GGS_" << mDomainName << "\n"
             "  constructor_emptyDomain (C_Compiler & inLexique\n"
             "                           COMMA_LOCATION_ARGS) ;\n"
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
  inCppFile << "GGS_" << mDomainName << "::GGS_" << mDomainName << " (void)" ;
  GGS_domainRelationMap::cEnumerator currentRelation (mRelationMap) ;
  bool first = true ;
  while (currentRelation.hasCurrentObject ()) {
    for (PMSInt32 i=0 ; i<currentRelation._mDomains (HERE).count () ; i++) {
      if (first) {
        inCppFile << " :\n" ;
        first = false ;
      }else{
        inCppFile << ",\n" ;
      }
      inCppFile << "_bitCount_" << cStringWithSigned (i) << "_forRelation_"
                << currentRelation._key (HERE) << "  (0)" ;
    }
    currentRelation.next () ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Destructor
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mDomainName << "::~GGS_" << mDomainName << " (void) {\n"
               "}\n\n" ;

//--- 'emptyDomain' constructor
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mDomainName << " GGS_" << mDomainName << "::\n"
               "constructor_emptyDomain (C_Compiler & /* inLexique */\n"
               "                         COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << mDomainName << " result ;\n"
               "  result.mIsBuilt = true ;\n"
               "  return result ;\n"
               "}\n\n" ;

//--- Accessors
  GGS_domainAttributeMap::cEnumerator currentAttribute (mAttributeMap) ;
  while (currentAttribute.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mDomainName << "::\n"
                 "modifier_addTo"
            << currentAttribute._key (HERE).stringWithUpperCaseFirstLetter ()
            << " (C_Compiler & /* inLexique */,\n"
               "                                    const GGS_string & inNewValue\n"
               "                                    COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  bool bitCountExtended = false ;\n"
               "  findOrAddEntry (_attribute_" << currentAttribute._key (HERE)
            << ", inNewValue, bitCountExtended) ;\n"
               "  if (bitCountExtended) {\n"
               "    updateRelationsAfterBitCountExtension () ;\n"
               "  }\n"
               "}\n\n" ;
    currentAttribute.next () ;
  }

//--- Relation
  currentRelation.rewind () ;
  while (currentRelation.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mDomainName << "::\n"
                 "modifier_addTo"
              << currentRelation._key (HERE).stringWithUpperCaseFirstLetter ()
              << " (C_Compiler & /* inLexique */,\n" ;
    for (PMSInt32 i=1 ; i<currentRelation._mDomains (HERE).count () ; i++) {
      inCppFile << "                                    const GGS_string & inValue_" << cStringWithSigned (i) << ",\n" ;
    }
    inCppFile << "                                    const GGS_string & inValue_"
              << cStringWithSigned (currentRelation._mDomains (HERE).count ())
              << "\n"
                 "                                    COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "  bool bitCountExtended = false ;\n" ;
    GGS_stringlist::cEnumerator currentDomainRelation (currentRelation._mDomains (HERE), true) ;
    PMSInt32 idx = 1 ;
    while (currentDomainRelation.hasCurrentObject ()) {
      inCppFile << "  const PMUInt32 entry" << cStringWithSigned (idx) << " = findOrAddEntry (_attribute_" << currentDomainRelation._mValue (HERE)
                << ", inValue_" << cStringWithSigned (idx) << ", bitCountExtended) ;\n" ;
      idx ++ ;
      currentDomainRelation.next () ;
    }
    inCppFile << "  if (bitCountExtended) {\n"
                 "    updateRelationsAfterBitCountExtension () ;\n"
                 "  }\n"
                 "  const PMUInt32 entries [] = {entry1" ;
    for (PMSInt32 i=2 ;i<=currentRelation._mDomains (HERE).count () ; i++) {
      inCppFile << ", entry" << cStringWithSigned (i) ;
    }
    inCppFile << "} ;\n"
                 "  const PMUInt16 bitCounts [] = {_bitCount_0_forRelation_" << currentRelation._key (HERE) ;
    for (PMSInt32 i=1 ;i<currentRelation._mDomains (HERE).count () ; i++) {
      inCppFile << ", _bitCount_" << cStringWithSigned (i) << "_forRelation_" << currentRelation._key (HERE) ;
    }
    inCppFile << "} ;\n"
                 "  _relationBDD_" << currentRelation._key (HERE)
              << " |= C_BDD::bddWithConstants (entries, bitCounts, "
              << cStringWithSigned (currentRelation._mDomains (HERE).count ()) << ") ;\n"
                 "}\n\n" ;
    currentRelation.next () ;
  }

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mDomainName << "::\n"
               "updateRelationsAfterBitCountExtension (void) {\n" ;
  currentRelation.rewind () ;
  PMSInt32 relationIndex = 0 ;
  while (currentRelation.hasCurrentObject ()) {
    inCppFile << "  const PMUInt16 bitNeededCountArray" << cStringWithSigned (relationIndex) << " [] = {" ;
    GGS_stringlist::cEnumerator currentDomainRelation (currentRelation._mDomains (HERE), true) ;
    while (currentDomainRelation.hasCurrentObject ()) {
      inCppFile << "_attribute_" << currentDomainRelation._mValue (HERE) << ".mBitCount, " ;
      currentDomainRelation.next () ;
    }
    inCppFile << "0} ;\n" ;
    inCppFile << "  PMUInt16 * bitCountCurrentArray" << cStringWithSigned (relationIndex) << " [] = {" ;
    PMSInt32 relationDomainIndex = 0 ;
    currentDomainRelation.rewind () ;
    while (currentDomainRelation.hasCurrentObject ()) {
      inCppFile << "& _bitCount_" << cStringWithSigned (relationDomainIndex) << "_forRelation_" << currentRelation._key (HERE) << ", " ;
      relationDomainIndex ++ ;
      currentDomainRelation.next () ;
    }
    inCppFile << "NULL} ;\n"
                 "  _relationBDD_" << currentRelation._key (HERE) << " = "
              << " _relationBDD_" << currentRelation._key (HERE)
              << ".updateRelation (bitNeededCountArray" << cStringWithSigned (relationIndex)
              << ", bitCountCurrentArray" << cStringWithSigned (relationIndex)
              << ", " << cStringWithSigned (currentRelation._mDomains (HERE).count ()) << ") ;\n" ;
    relationIndex ++ ;
    currentRelation.next () ;
  }
  inCppFile << "}\n\n" ;
}
                
//---------------------------------------------------------------------------*
