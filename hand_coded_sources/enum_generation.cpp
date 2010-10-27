//---------------------------------------------------------------------------*
//                                                                           *
//  Generate enum class                                                      *
//                                                                           *
//  Copyright (C) 2004, ..., 2009 Pierre Molinaro.                           *
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
#include "semantics_instructions.h"

//---------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_CompilerEx & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mEnumTypeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generateHdeclarations (AC_OutputStream & inHfile) const {
//--- Compute bit count for BDDs (set operations)
  PMUInt16 bitCount = 0 ;
  PMSInt32 n = mConstantMap.count () ;
  while (n > 0) {
    bitCount ++ ;
    n >>= 1 ;
  }
  
  inHfile.appendCppTitleComment (C_String ("Class for '") + mEnumTypeName + "' Enumeration") ;

  inHfile << "extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mEnumTypeName << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ;

  
  inHfile << "class GGS_" << mEnumTypeName << " : public GGS__root {\n"
             "//--- Enumeration\n"
             "  public : enum enumeration {kNotBuilt" ;
  GGS_enumConstantMap::cEnumerator constant (mConstantMap, true) ;
  while (constant.hasCurrentObject ()) {
    inHfile << ", enum_" << constant._key (HERE) ;
    constant.next () ;
  }
  inHfile << "} ;\n\n"
             "//--- Private attribute\n"
             "  private : enumeration mValue ;\n\n"
             "//--- Get value\n"
             "  public : inline enumeration enumValue (void) const { return mValue ; }\n\n"
             "//--- Default constructor\n"
             "  public : inline GGS_" << mEnumTypeName << " (void) : mValue (kNotBuilt) {}\n\n"
             "//--- Internal constructor\n"
             "  private : inline GGS_" << mEnumTypeName << " (const enumeration inValue) : mValue (inValue) {}\n\n"
             "//--- Bit count for bdd\n"
             "  public : static inline PMUInt16 bitCount (void) { return " << cStringWithSigned (bitCount) << " ; }\n\n"
             "//--- Is built ?\n"
             "  public : bool isBuilt (void) const ;\n\n"
             "//--- Introspection\n"
             "  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;\n\n"
             "  public : GGS_object reader_object (void) const ;\n\n"
             "  public : static GGS_" << mEnumTypeName << " castFromObject (C_CompilerEx & inLexique,\n"
             "                                           const GGS_object & inObject,\n"
             "                                           const GGS_location & inErrorLocation\n"
             "                                           COMMA_LOCATION_ARGS) ;\n\n"
             "//--- Construction from GALGAS constructor\n" ;
  constant.rewind () ;
  while (constant.hasCurrentObject ()) {
    inHfile << "  public : static inline GGS_" << mEnumTypeName
            << "  constructor_" << constant._key (HERE) << " (C_CompilerEx & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "    return GGS_" << mEnumTypeName << " (enum_" << constant._key (HERE) << ") ;\n"
               "  }\n" ;
    constant.next () ;
  }
  inHfile << "\n" ;

//--- Messages
  inHfile << "//--- Readers\n" ;
  GGS_typeEnumMessageMap::cEnumerator m (mEnumMessageMap) ;
  while (m.hasCurrentObject ()) {
    inHfile << "  public : GGS_string reader_" << m._key (HERE) << " (C_CompilerEx & inLexique COMMA_LOCATION_ARGS) const ;\n" ;
    m.next () ;
  }
  inHfile << "\n" ;

//--- 
  inHfile << "//--- 'description' reader\n"
             "  public : virtual GGS_string reader_description (const PMSInt32 inIndentation = 0) const ;\n\n"
             "//--- Drop operation\n"
             "  public : inline void drop (void) { mValue = kNotBuilt ; }\n\n"
             "//--- Comparison operators\n"           
             "  public : GGS_bool operator_isEqual (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator_isNotEqual (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator_infOrEqual (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator_supOrEqual (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator_strictInf (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator_strictSup (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "} ;\n\n" ;
} 

//---------------------------------------------------------------------------*

bool cPtr_enumGalgasType::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                               const C_String & /* inTargetFileName*/,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generateCppClassImplementation (C_CompilerEx & /* inCompiler */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                PMSInt32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  inCppFile.appendCppTitleComment (C_String ("Class for '") + mEnumTypeName + "' Enumeration") ;

  inCppFile << "const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mEnumTypeName << " (\"" << mEnumTypeName << "\", false, NULL) ;\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "bool GGS_" << mEnumTypeName
            << "::\n"
               "isBuilt (void) const {\n"
               "  return mValue > kNotBuilt ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator_isEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue == inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator_isNotEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue != inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator_infOrEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue <= inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator_supOrEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue >= inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator_strictInf (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue < inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator_strictSup (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue > inOperand.mValue) ;\n"
               "}\n\n" ;

//--- Readers
  GGS_typeEnumMessageMap::cEnumerator m (mEnumMessageMap) ;
  while (m .hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "GGS_string GGS_" << mEnumTypeName << "::\n"
                 "reader_" << m._key (HERE) << " (C_CompilerEx & /* inLexique */\n"
                 "                       COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  const char * kMessages [" << cStringWithSigned (m._mMessageStringList (HERE).count () + 1) << "] = {\"\"" ;
    GGS_lstringlist::cEnumerator e (m._mMessageStringList (HERE), true) ;
    while (e.hasCurrentObject ()) {
      inCppFile << ",\n    " ;
      inCppFile.appendCLiteralStringConstant (e._mValue (HERE)) ;
      e.next () ;
    } 
    inCppFile << "\n  } ;\n"
                 "  return GGS_string (mValue > 0, kMessages [mValue]) ;\n"
                 "}\n\n" ;
    m.next () ;
  }

//---
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mEnumTypeName
            << "::\n"
               "reader_description (const PMSInt32 /* inIndentation */) const {\n"
               "  C_String s ;\n"
               "  s << \"<enum @" << mEnumTypeName << "\" ;\n"
               "  switch (mValue) {\n" ;
  GGS_enumConstantMap::cEnumerator constant (mConstantMap, true) ;
  while (constant.hasCurrentObject ()) {
    inCppFile << "  case enum_" << constant._key (HERE) << ":\n"
                 "    s << \" "  << constant._key (HERE) << ">\" ;\n"
                 "    break ;\n" ;
    constant.next () ;
  } 
  inCppFile << "  case kNotBuilt:\n"
               "    s << \" (not built)>\" ;\n"
               "    break ;\n"
               "  }\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_object GGS_" << mEnumTypeName << "::reader_object (void) const {\n"
               "  GGS_object result ;\n"
               "  if (isBuilt ()) {\n"
               "    GGS_" << mEnumTypeName << " * p = NULL ;\n"
               "    macroMyNew (p, GGS_" << mEnumTypeName << " (*this)) ;\n"
               "    result = GGS_object (p) ;\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mEnumTypeName << " GGS_" << mEnumTypeName << "::castFromObject (C_CompilerEx & inLexique,\n"
               "                                   const GGS_object & inObject,\n"
               "                                   const GGS_location & inErrorLocation\n"
               "                                   COMMA_LOCATION_ARGS) {\n"
               "  GGS_" << mEnumTypeName << " result ;\n"
               "  const GGS__root * embeddedObject = inObject.embeddedObject () ;\n"
               "  if (NULL != embeddedObject) {\n"
               "    const GGS_" << mEnumTypeName << " * p = dynamic_cast <const GGS_" << mEnumTypeName << " *> (embeddedObject) ;\n"
               "    if (NULL != p) {\n"
               "      result = * p ;\n"
               "    }else{\n"
               "      castFromObjectErrorSignaling (inLexique, inErrorLocation, & kTypeDescriptor_GGS_" << mEnumTypeName << ", embeddedObject COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const C_galgas_type_descriptorEX * GGS_" << mEnumTypeName << "::typeDescriptor (void) const {\n"
               "  return & kTypeDescriptor_GGS_" << mEnumTypeName << " ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*
