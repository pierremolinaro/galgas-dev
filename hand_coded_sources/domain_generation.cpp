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

  inHfile.appendCppHyphenLineComment () ;
  inHfile << "extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mDomainName << " ;\n\n" ;
  
  inHfile << "class GGS_" << mDomainName << " : public AC_GGS_domain {\n" ;
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
    GGS_stringlist::cEnumerator currentDomainRelation (currentRelation._mDomains (HERE), true) ;
    if (currentDomainRelation.count () == 1) {
      inHfile << "  public : GGS_stringlist reader_"
              << currentRelation._key (HERE)
              << "StringValueList (C_Compiler & inLexique"
                 "\n"
                 "                                    COMMA_LOCATION_ARGS) const ;\n\n" ;
    }else if (currentDomainRelation.count () == 2) {
      inHfile << "  public : GGS_string2list reader_"
              << currentRelation._key (HERE)
              << "StringValueList (C_Compiler & inLexique"
                 "\n"
                 "                                    COMMA_LOCATION_ARGS) const ;\n\n" ;
    }else if (currentDomainRelation.count () == 3) {
      inHfile << "  public : GGS_string3list reader_"
              << currentRelation._key (HERE)
              << "StringValueList (C_Compiler & inLexique"
                 "\n"
                 "                                    COMMA_LOCATION_ARGS) const ;\n\n" ;
    }
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
             "//--- 'description' reader\n"
             "  public : virtual GGS_string reader_description (const PMSInt32 inIndentation = 0) const ;\n\n"
             "//--- Introspection\n"
             "  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;\n\n"
             "  public : GGS_object reader_object (void) const ;\n\n"
             "  public : static GGS_" << mDomainName << " castFromObject (C_Compiler & inLexique,\n"
             "                                           const GGS_object & inObject,\n"
             "                                           const GGS_location & inErrorLocation\n"
             "                                           COMMA_LOCATION_ARGS) ;\n\n"
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

  inCppFile << "const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mDomainName << " (\"" << mDomainName << "\", false, NULL) ;\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Constructor
  inCppFile << "GGS_" << mDomainName << "::GGS_" << mDomainName << " (void) :\n"
               "AC_GGS_domain ()" ;
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
            << " = AC_GGS_domain::bitCountForDomainSize (inDomain_" << currentAttribute._key (HERE) << ".count ()) ;\n" ;
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
    TC_UniqueArray <C_String> domainRelationNames (currentDomainRelation.count () COMMA_HERE) ;
    PMSInt32 idx = 0 ;
    while (currentDomainRelation.hasCurrentObject ()) {
      inCppFile << " && inValue_" << cStringWithSigned (idx) << ".isBuilt ()" ;
      domainRelationNames (idx COMMA_HERE) = currentDomainRelation._mValue (HERE).string () ;
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
                << "    idx = (PMUInt16) (idx + mBDDVariableCountForDomain_" << currentDomainRelation._mValue (HERE)
                << ") ;\n" ;
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
    currentDomainRelation.rewind () ;
    if (currentDomainRelation.count () == 1) {
      inCppFile.appendCppHyphenLineComment () ;
      inCppFile << "GGS_stringlist GGS_" << mDomainName << "::\n"
                   "reader_"
                << currentRelation._key (HERE)
                << "StringValueList (C_Compiler & inLexique"
                   "\n"
                   "                                    COMMA_LOCATION_ARGS) const {\n"
                   "  GGS_stringlist result ;\n"
                   "  if (isBuilt ()) {\n"
                   "    TC_UniqueArray <PMUInt64> valuesArray ;\n"
                   "    mBDDForRelation_"
                << currentRelation._key (HERE)
                << ".buildValueArray (valuesArray, mBDDVariableCountForDomain_"
                << currentDomainRelation._mValue (HERE)
                << ") ;\n"
                   "    result = GGS_stringlist::constructor_emptyList () ;\n"
                   "    for (PMSInt32 i=0 ; i<valuesArray.count () ; i++) {\n"
                   "      const PMUInt64 v = valuesArray (i COMMA_HERE) ;\n"
                   "      result.addAssign_operation (mDomain_"
                << currentDomainRelation._mValue (HERE)
                << ".reader_mValueAtIndex (inLexique, GGS_uint64 (true, v).reader_uint (inLexique COMMA_THERE) COMMA_THERE)) ;\n"
                   "    }\n"
                   "  }\n"
                   "  return result ;\n"
                   "}\n\n" ;
    }else if (currentDomainRelation.count () == 2) {
      currentDomainRelation.rewind () ;
      inCppFile.appendCppHyphenLineComment () ;
      inCppFile << "GGS_string2list GGS_" << mDomainName << "::\n"
                   "reader_"
                << currentRelation._key (HERE)
                << "StringValueList (C_Compiler & inLexique"
                   "\n"
                   "                                    COMMA_LOCATION_ARGS) const {\n"
                   "  GGS_string2list result ;\n"
                   "  if (isBuilt ()) {\n"
                   "    const PMUInt16 variableCount = (PMUInt16) (mBDDVariableCountForDomain_" << domainRelationNames (0 COMMA_HERE)
                << " + mBDDVariableCountForDomain_" << domainRelationNames (1 COMMA_HERE) << ") ;\n"
                   "    TC_UniqueArray <PMUInt64> valuesArray ;\n"
                   "    mBDDForRelation_"
                << currentRelation._key (HERE)
                << ".buildValueArray (valuesArray, variableCount) ;\n"
                   "    result = GGS_string2list::constructor_emptyList () ;\n"
                   "    const PMUInt64 mask0 = (1ULL << mBDDVariableCountForDomain_" << domainRelationNames (0 COMMA_HERE) << ") - 1ULL ;\n"
                   "    const PMUInt64 mask1 = ((1ULL << mBDDVariableCountForDomain_" << domainRelationNames (1 COMMA_HERE) << ") - 1ULL) << mBDDVariableCountForDomain_" << domainRelationNames (0 COMMA_HERE) << " ;\n"
                   "    for (PMSInt32 i=0 ; i<valuesArray.count () ; i++) {\n"
                   "      const PMUInt64 v = valuesArray (i COMMA_HERE) ;\n"
                   "      const PMUInt64 v0 = v & mask0 ;\n"
                   "      const PMUInt64 v1 = (v & mask1) >> mBDDVariableCountForDomain_" << domainRelationNames (0 COMMA_HERE) << " ;\n"
                   "      const GGS_string s0 = mDomain_" << domainRelationNames (0 COMMA_HERE) << ".reader_mValueAtIndex (inLexique, GGS_uint (true, (PMUInt32) v0) COMMA_THERE) ;\n"
                   "      const GGS_string s1 = mDomain_" << domainRelationNames (1 COMMA_HERE) << ".reader_mValueAtIndex (inLexique, GGS_uint (true, (PMUInt32) v1) COMMA_THERE) ;\n"
                   "      result.addAssign_operation (s0, s1) ;\n"
                   "    }\n"
                   "  }\n"
                   "  return result ;\n"
                   "}\n\n" ;
    }else if (currentDomainRelation.count () == 3) {
      currentDomainRelation.rewind () ;
      inCppFile.appendCppHyphenLineComment () ;
      inCppFile << "GGS_string3list GGS_" << mDomainName << "::\n"
                   "reader_"
                << currentRelation._key (HERE)
                << "StringValueList (C_Compiler & inLexique"
                   "\n"
                   "                                    COMMA_LOCATION_ARGS) const {\n"
                   "  GGS_string3list result ;\n"
                   "  if (isBuilt ()) {\n"
                   "    const PMUInt32 variable01Count = (PMUInt32) (mBDDVariableCountForDomain_" << domainRelationNames (0 COMMA_HERE)
                << " + mBDDVariableCountForDomain_" << domainRelationNames (1 COMMA_HERE) << ") ;\n"
                   "    const PMUInt16 variableCount = (PMUInt16) (variable01Count + mBDDVariableCountForDomain_" << domainRelationNames (2 COMMA_HERE) << ") ;\n"
                   "    TC_UniqueArray <PMUInt64> valuesArray ;\n"
                   "    mBDDForRelation_"
                << currentRelation._key (HERE)
                << ".buildValueArray (valuesArray, variableCount) ;\n"
                   "    result = GGS_string3list::constructor_emptyList () ;\n"
                   "    const PMUInt64 mask0 = (1ULL << mBDDVariableCountForDomain_" << domainRelationNames (0 COMMA_HERE) << ") - 1ULL ;\n"
                   "    const PMUInt64 mask1 = ((1ULL << mBDDVariableCountForDomain_" << domainRelationNames (1 COMMA_HERE) << ") - 1ULL) << mBDDVariableCountForDomain_" << domainRelationNames (0 COMMA_HERE) << " ;\n"
                   "    const PMUInt64 mask2 = ((1ULL << mBDDVariableCountForDomain_" << domainRelationNames (2 COMMA_HERE) << ") - 1ULL) << variable01Count ;\n"
                   "    for (PMSInt32 i=0 ; i<valuesArray.count () ; i++) {\n"
                   "      const PMUInt64 v = valuesArray (i COMMA_HERE) ;\n"
                   "      const PMUInt64 v0 = v & mask0 ;\n"
                   "      const PMUInt64 v1 = (v & mask1) >> mBDDVariableCountForDomain_" << domainRelationNames (0 COMMA_HERE) << " ;\n"
                   "      const PMUInt64 v2 = (v & mask2) >> variable01Count ;\n"
                   "      const GGS_string s0 = mDomain_" << domainRelationNames (0 COMMA_HERE) << ".reader_mValueAtIndex (inLexique, GGS_uint (true, (PMUInt32) v0) COMMA_THERE) ;\n"
                   "      const GGS_string s1 = mDomain_" << domainRelationNames (1 COMMA_HERE) << ".reader_mValueAtIndex (inLexique, GGS_uint (true, (PMUInt32) v1) COMMA_THERE) ;\n"
                   "      const GGS_string s2 = mDomain_" << domainRelationNames (2 COMMA_HERE) << ".reader_mValueAtIndex (inLexique, GGS_uint (true, (PMUInt32) v2) COMMA_THERE) ;\n"
                   "      result.addAssign_operation (s0, s1, s2) ;\n"
                   "    }\n"
                   "  }\n"
                   "  return result ;\n"
                   "}\n\n" ;
    }
    currentRelation.next () ;
  }
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_object GGS_" << mDomainName << "::reader_object (void) const {\n"
               "  GGS_object result ;\n"
               "  if (isBuilt ()) {\n"
               "    GGS_" << mDomainName << " * p = NULL ;\n"
               "    macroMyNew (p, GGS_" << mDomainName << " (*this)) ;\n"
               "    result = GGS_object (p) ;\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mDomainName << " GGS_" << mDomainName << "::castFromObject (C_Compiler & inLexique,\n"
               "                                   const GGS_object & inObject,\n"
               "                                   const GGS_location & inErrorLocation\n"
               "                                   COMMA_LOCATION_ARGS) {\n"
               "  GGS_" << mDomainName << " result ;\n"
               "  const GGS__root * embeddedObject = inObject.embeddedObject () ;\n"
               "  if (NULL != embeddedObject) {\n"
               "    const GGS_" << mDomainName << " * p = dynamic_cast <const GGS_" << mDomainName << " *> (embeddedObject) ;\n"
               "    if (NULL != p) {\n"
               "      result = * p ;\n"
               "    }else{\n"
               "      castFromObjectErrorSignaling (inLexique, inErrorLocation, & kTypeDescriptor_GGS_" << mDomainName << ", embeddedObject COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const C_galgas_type_descriptorEX * GGS_" << mDomainName << "::typeDescriptor (void) const {\n"
               "  return & kTypeDescriptor_GGS_" << mDomainName << " ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mDomainName << "::reader_description (const PMSInt32 /* inIndentation */) const {\n"
               "  C_String s ;\n"
               "  s << \"<@" << mDomainName << "\" ;\n"
               "  if (! isBuilt ()) {\n"
               "    s << \" (not built)\" ;\n"
               "  }\n"
               "  s << \">\" ;\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;
}
                
//---------------------------------------------------------------------------*
