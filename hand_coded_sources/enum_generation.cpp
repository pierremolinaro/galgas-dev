//---------------------------------------------------------------------------*
//                                                                           *
//  Generate enum class                                                      *
//                                                                           *
//  Copyright (C) 2004-2004 Pierre Molinaro.                                 *
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

void cPtr_enumGalgasType::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
//--- Compute bit count for BDDs (set operations)
  uint16 bitCount = 0 ;
  sint32 n = mConstantMap.count () ;
  while (n > 0) {
    bitCount ++ ;
    n >>= 1 ;
  }
  
  inHfile.writeTitleComment (C_String ("class for enumeration '") + mEnumTypeName + "'") ;
  
  inHfile << "class GGS_" << mEnumTypeName << " {\n"
             "//--- Enumeration\n"
             "  public : enum enumeration {kNotBuilt" ;
  GGS_typeEnumConstantesMap::element_type * cst = mConstantMap.getFirstItem () ;
  while (cst != NULL) {
    inHfile << ", enum_" << cst->mKey ;
    cst = cst->getNextItem () ;
  }
  inHfile << "} ;\n\n"
             "//--- Private attribute\n"
             "  private : enumeration mValue ;\n\n"
             "//--- Get value\n"
             "  public : inline enumeration getValue (void) const {return mValue ; }\n\n"
             "//--- Default constructor\n"
             "  public : inline GGS_" << mEnumTypeName << " (void) : mValue (kNotBuilt) {}\n\n"
             "//--- Internal constructor\n"
             "  private : inline GGS_" << mEnumTypeName << " (const enumeration inValue) : mValue (inValue) {}\n\n"
             "//--- Bit count for bdd\n"
             "  public : static inline uint16 bitCount (void) { return " << bitCount << " ; }\n\n"
             "//--- Is built ?\n"
             "  public : inline bool isBuilt (void) const { return mValue > kNotBuilt ; }\n\n"
             "//--- Construction from GALGAS constructor\n" ;
  cst = mConstantMap.getFirstItem () ;
  while (cst != NULL) {
    inHfile << "  public : static inline GGS_" << mEnumTypeName
            << " constructor_" << cst->mKey << " (void) {\n"
               "    return GGS_" << mEnumTypeName << " (enum_" << cst->mKey << ") ;\n"
               "  }\n" ;
    cst = cst->getNextItem () ;
  }
  inHfile << "\n"
             "//--- Messages\n" ;
  GGS_typeEnumMessageMap::element_type * m = mEnumMessageMap.getFirstItem () ;
  while (m != NULL) {
    inHfile << "  public : GGS_string reader_" << m->mKey << " (void) const ;\n" ;
    m = m->getNextItem () ;
  }
  inHfile << "\n"
             "//--- Drop operation\n"
             "  public : inline void drop_operation (void) { mValue = kNotBuilt ; }\n\n"
             "//--- Comparison operators\n"           
             "  public : GGS_bool operator == (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator != (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator <= (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator >= (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator <  (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool operator >  (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "} ;\n\n" ;
} 

//---------------------------------------------------------------------------*

bool cPtr_enumGalgasType::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType
::generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) {
  inCppFile.writeTitleComment (C_String ("class for enumeration '") + mEnumTypeName + "'") ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator == (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue == inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator != (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue != inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator <= (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue <= inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator >= (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue >= inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator < (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue < inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "operator > (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   mValue > inOperand.mValue) ;\n"
               "}\n\n" ;

  GGS_typeEnumMessageMap::element_type * m = mEnumMessageMap.getFirstItem () ;
  while (m != NULL) {
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "GGS_string GGS_" << mEnumTypeName << "::"
                 "\n"
                 "reader_" << m->mKey << " (void) const {\n"
                 "  const char * kMessages [" << (m->mInfo.mMessageStringList.count () + 1) << "] = {\"\"" ;
    GGS_L_lstringList::element_type * e = m->mInfo.mMessageStringList.getFirstItem () ;
    while (e != NULL) {
      inCppFile << ",\n    " ;
      inCppFile.writeCstringConstant (e->mString) ;
      e = e->getNextItem () ;
    } 
    inCppFile << "\n  } ;\n"
                 "  return GGS_string (mValue > 0, kMessages [mValue]) ;\n"
                 "}\n\n" ;
    m = m->getNextItem () ;
  }

}

//---------------------------------------------------------------------------*
