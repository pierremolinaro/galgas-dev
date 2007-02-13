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
               "  protected : cDomainAttribute _attribute_" << currentAttribute->mKey << " ;\n"
               "  public : void modifier_addTo"
            << currentAttribute->mKey.stringWithUpperCaseFirstLetter ()
            << " (C_Lexique & inLexique,\n"
               "                                    const GGS_string & inNewValue\n"
               "                                    COMMA_LOCATION_ARGS) ;\n\n" ;
    currentAttribute = currentAttribute->nextObject () ;
  }
  GGS_domainRelationMap::element_type * currentRelation = mRelationMap.firstObject () ;
  while (currentRelation != NULL) {
    macroValidPointer (currentRelation) ;
    inHfile << "//--- '" << currentRelation->mKey << "' relation\n"
               "  protected : C_BDD _relationBDD_" << currentRelation->mKey << " ;\n" ;
    for (sint32 i=0 ; i<currentRelation->mInfo.mDomains.count () ; i++) {
      inHfile << "  protected : uint16 _bitCount_" << i << "_forRelation_"
              << currentRelation->mKey << " ;\n" ;
    }
    inHfile << "  public : void modifier_addTo"
            << currentRelation->mKey.stringWithUpperCaseFirstLetter ()
            << " (C_Lexique & inLexique,\n" ;
    for (sint32 i=1 ; i<currentRelation->mInfo.mDomains.count () ; i++) {
      inHfile << "                                    const GGS_string & inValue_" << i << ",\n" ;
    }
    inHfile << "                                    const GGS_string & inValue_"
            << currentRelation->mInfo.mDomains.count ()
            << "\n"
               "                                    COMMA_LOCATION_ARGS) ;\n\n" ;
    currentRelation = currentRelation->nextObject () ;
  }
  inHfile << "//--- Adjusting relation BDDs afeter bit count change\n"
             "  protected : void updateRelationsAfterBitCountExtension (void) ;\n"
             "//--- Constructor\n"
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
  inCppFile << "GGS_" << mDomainName << "::GGS_" << mDomainName << " (void)" ;
  GGS_domainRelationMap::element_type * currentRelation = mRelationMap.firstObject () ;
  bool first = true ;
  while (currentRelation != NULL) {
    macroValidPointer (currentRelation) ;
    for (sint32 i=0 ; i<currentRelation->mInfo.mDomains.count () ; i++) {
      if (first) {
        inCppFile << " :\n" ;
        first = false ;
      }else{
        inCppFile << ",\n" ;
      }
      inCppFile << "_bitCount_" << i << "_forRelation_"
                << currentRelation->mKey << "  (0)" ;
    }
    currentRelation = currentRelation->nextObject () ;
  }
  inCppFile << " {\n"
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
               "  bool bitCountExtended = false ;\n"
               "  findOrAddEntry (_attribute_" << currentAttribute->mKey
            << ", inNewValue, bitCountExtended) ;\n"
               "  if (bitCountExtended) {\n"
               "    updateRelationsAfterBitCountExtension () ;\n"
               "  }\n"
               "}\n\n" ;
    currentAttribute = currentAttribute->nextObject () ;
  }

//--- Relation
  currentRelation = mRelationMap.firstObject () ;
  while (currentRelation != NULL) {
    macroValidPointer (currentRelation) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mDomainName << "::\n"
                 "modifier_addTo"
              << currentRelation->mKey.stringWithUpperCaseFirstLetter ()
              << " (C_Lexique & /* inLexique */,\n" ;
    for (sint32 i=1 ; i<currentRelation->mInfo.mDomains.count () ; i++) {
      inCppFile << "                                    const GGS_string & inValue_" << i << ",\n" ;
    }
    inCppFile << "                                    const GGS_string & inValue_"
              << currentRelation->mInfo.mDomains.count ()
              << "\n"
                 "                                    COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "  bool bitCountExtended = false ;\n" ;
    GGS_stringlist::element_type * currentDomainRelation = currentRelation->mInfo.mDomains.firstObject () ;
    sint32 idx = 1 ;
    while (currentDomainRelation != NULL) {
      macroValidPointer (currentDomainRelation) ;
      inCppFile << "  const uint32 entry" << idx << " = findOrAddEntry (_attribute_" << currentDomainRelation->mValue
                << ", inValue_" << idx << ", bitCountExtended) ;\n" ;
      idx ++ ;
      currentDomainRelation = currentDomainRelation->nextObject () ;
    }
    inCppFile << "  if (bitCountExtended) {\n"
                 "    updateRelationsAfterBitCountExtension () ;\n"
                 "  }\n"
                 "  const uint32 entries [] = {entry1" ;
    for (sint32 i=2 ;i<=currentRelation->mInfo.mDomains.count () ; i++) {
      inCppFile << ", entry" << i ;
    }
    inCppFile << "} ;\n"
                 "  const uint16 bitCounts [] = {_bitCount_0_forRelation_" << currentRelation->mKey ;
    for (sint32 i=1 ;i<currentRelation->mInfo.mDomains.count () ; i++) {
      inCppFile << ", _bitCount_" << i << "_forRelation_" << currentRelation->mKey ;
    }
    inCppFile << "} ;\n"
                 "  _relationBDD_" << currentRelation->mKey
              << " |= C_BDD::bddWithConstants (entries, bitCounts, "
              << currentRelation->mInfo.mDomains.count () << ") ;\n"
                 "}\n\n" ;
    currentRelation = currentRelation->nextObject () ;
  }

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mDomainName << "::\n"
               "updateRelationsAfterBitCountExtension (void) {\n" ;
  currentRelation = mRelationMap.firstObject () ;
  sint32 relationIndex = 0 ;
  while (currentRelation != NULL) {
    macroValidPointer (currentRelation) ;
    inCppFile << "  const uint16 bitNeededCountArray" << relationIndex << " [] = {" ;
    GGS_stringlist::element_type * currentDomainRelation = currentRelation->mInfo.mDomains.firstObject () ;
    while (currentDomainRelation != NULL) {
      macroValidPointer (currentDomainRelation) ;
      inCppFile << "_attribute_" << currentDomainRelation->mValue << ".mBitCount, " ;
      currentDomainRelation = currentDomainRelation->nextObject () ;
    }
    inCppFile << "0} ;\n" ;
    inCppFile << "  uint16 * bitCountCurrentArray" << relationIndex << " [] = {" ;
    sint32 relationDomainIndex = 0 ;
    currentDomainRelation = currentRelation->mInfo.mDomains.firstObject () ;
    while (currentDomainRelation != NULL) {
      macroValidPointer (currentDomainRelation) ;
      inCppFile << "& _bitCount_" << relationDomainIndex << "_forRelation_" << currentRelation->mKey << ", " ;
      relationDomainIndex ++ ;
      currentDomainRelation = currentDomainRelation->nextObject () ;
    }
    inCppFile << "NULL} ;\n"
                 "  _relationBDD_" << currentRelation->mKey << " = "
              << " _relationBDD_" << currentRelation->mKey
              << ".updateRelation (bitNeededCountArray" << relationIndex
              << ", bitCountCurrentArray" << relationIndex
              << ", " << currentRelation->mInfo.mDomains.count () << ") ;\n" ;
    relationIndex ++ ;
    currentRelation = currentRelation->nextObject () ;
  }
  inCppFile << "}\n\n" ;
}
                
//---------------------------------------------------------------------------*
