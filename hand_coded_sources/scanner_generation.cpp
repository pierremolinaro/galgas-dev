//---------------------------------------------------------------------------*
//                                                                           *
//   Scanner Generation (hand-coded file)                                    *
//                                                                           *
//  Copyright (C) 2000, ..., 2009 Pierre Molinaro.                           *
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

#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "time/C_DateTime.h"
#include "collections/TC_UniqueArray.h"

//---------------------------------------------------------------------------*

#include "scanner_parser.h"

//---------------------------------------------------------------------------*

void
routine_buildLexicalRulesFromList (C_Compiler & ioLexique, 
                                   GGS_typeTableMotsReserves & keyWordsMap,
                                   GGS_typeListeTestsEtInstructions & ioLexicalRulesList
                                   COMMA_LOCATION_ARGS) {
//--- First, find the longest string
  sint32 longestString = 0 ;
  GGS_typeTableMotsReserves::cEnumerator currentEntry (keyWordsMap) ;
  while (currentEntry.hasCurrentObject ()) {
    const sint32 length = currentEntry._key (HERE).length () ;
    if (longestString < length) {
      longestString = length ;
    }
    currentEntry.next () ;
  }
//--- Analyse strings from longest ones
  for (sint32 length=longestString ; length>0 ; length--) {
    currentEntry.rewind () ;
    while (currentEntry.hasCurrentObject ()) {
      const sint32 currentLength = currentEntry._key (HERE).length () ;
      if (length == currentLength) {
        ::routine_appendToLexicalInstructionList (ioLexique,
                                          ioLexicalRulesList,
                                          currentEntry._key (HERE),
                                          currentEntry._attributNomTerminal (HERE) COMMA_THERE) ;
      }
      currentEntry.next () ;
    }
  }
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= lexicalAttributeCppType
#endif

//---------------------------------------------------------------------------*

C_String cPtr_AC_galgasType::
lexicalAttributeCppType (void) const {
  return "" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lstring::
lexicalAttributeCppType (void) const {
  return "C_String" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lchar::
lexicalAttributeCppType (void) const {
  return "utf32" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lbool::
lexicalAttributeCppType (void) const {
  return "bool" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_luint::
lexicalAttributeCppType (void) const {
  return "uint32" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_luint64::
lexicalAttributeCppType (void) const {
  return "uint64" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lsint::
lexicalAttributeCppType (void) const {
  return "sint32" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lsint64::
lexicalAttributeCppType (void) const {
  return "sint64" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_ldouble::
lexicalAttributeCppType (void) const {
  return "double" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= generateAttributeDeclaration
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : C_String mLexicalAttribute_" << nom
          << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : utf32 mLexicalAttribute_" << nom
          << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : bool mLexicalAttribute_" << nom
         << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : uint32 mLexicalAttribute_" << nom
         << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint64::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : uint64 mLexicalAttribute_" << nom
         << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : sint32 mLexicalAttribute_" << nom
         << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint64::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : sint64 mLexicalAttribute_" << nom
         << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : double mLexicalAttribute_" << nom
         << " ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= generateAttributeGetLexicalValue
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << \" \" ;\n" ;
  inCppFile << "    s.appendCLiteralStringConstant (ptr->mLexicalAttribute_" << inAttributeName << ") ;\n" ; 
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << \" \" ;\n" ;
  inCppFile << "    s.appendCLiteralCharConstant (ptr->mLexicalAttribute_" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" << (ptr->mLexicalAttribute_" << inAttributeName << " ? \"true\" : \"false\") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendUnsigned (ptr->mLexicalAttribute_" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint64::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendUnsigned64 (ptr->mLexicalAttribute_" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendSigned (ptr->mLexicalAttribute_" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint64::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendSigned64 (ptr->mLexicalAttribute_" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendDouble (ptr->mLexicalAttribute_" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapType::
generateAttributeGetLexicalValue (const C_String & /* inAttributeName */,
                                  AC_OutputStream & /* inCppFile */) const {
}

