//---------------------------------------------------------------------------*
//                                                                           *
//  SETOF declaration and implementation                                     *
//                                                                           *
//  Copyright (C) 2004 Pierre Molinaro.                                      *
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

void cPtr_setTypeToGenerate::
generateHdeclarations (AC_output_stream & inHfile,
                       const C_string & /* inLexiqueClassName */,
                       C_lexique & /* inLexique */) {
  inHfile.writeTitleComment (C_string ("'GGS_") + mSetTypeName + "' : SET OF 'GGS_" + mEnumElementTypeName + "'") ;
  inHfile << "#include \"bdd/C_bdd.h\"\n\n"
             "class GGS_" << mSetTypeName << " {\n"
             "  protected : C_bdd mSet ;\n"
             "  protected : bool mBuilt ;\n"
             "//--- Default contructor\n"
             "  public : GGS_" << mSetTypeName << " (void) ;\n"
             "//--- 'Empty' galgas contructor\n"
             "  public : static GGS_" << mSetTypeName << " constructor_empty (void) ;\n"
             "//--- Operator ()\n"
             "  public : inline GGS_" << mSetTypeName << " * operator () (void) { return this ; }\n"
             "//--- Is built ?\n"
             "  public : inline bool isBuilt (void) const { return mBuilt ; }\n"
             "//--- Add an element\n"
             "  public : void methode_add (C_lexique &, const GGS_" << mEnumElementTypeName << " & inElementToAdd) ;\n"
             "//--- Contains an element\n"
             "  public : GGS_bool reader_contains (const GGS_" << mEnumElementTypeName << " & inElement) const ;\n"
             "//--- Includes an other set\n"
             "  public : GGS_bool reader_includes (const GGS_" << mSetTypeName << " & inOtherSet) const ;\n"
              "//--- Drop\n"
             "  public : void drop (void) ;\n"
              "//--- Destructor\n"
             "  public : virtual ~GGS_" << mSetTypeName << " (void) ;\n"
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_setTypeToGenerate::
generateHdeclarations_2 (AC_output_stream & /* inHfile */,
                         const C_string & /* inLexiqueClassName */,
                         C_lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

bool cPtr_setTypeToGenerate::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_setTypeToGenerate
::generateCppClassDeclaration (AC_output_stream & /* inHfile*/,
                               const C_string & /* inLexiqueClassName */,
                               const C_string & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_setTypeToGenerate
::generateCppClassImplementation (AC_output_stream & inCppFile,
                                  const C_string & /* inLexiqueClassName */,
                                  const C_string & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) {
  inCppFile.writeTitleComment (C_string ("'GGS_") + mSetTypeName + "' : SET OF 'GGS_" + mEnumElementTypeName + "'") ;
  inCppFile << "GGS_" << mSetTypeName << "::GGS_" << mSetTypeName << " (void) {\n"
              "  mBuilt = false ;\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_" << mSetTypeName << " GGS_" << mSetTypeName << "::constructor_empty (void) {\n"
               "  GGS_" << mSetTypeName << " result ;\n"
               "  result.mBuilt = false ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_" << mSetTypeName << "::~GGS_" << mSetTypeName << " (void) {\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << mSetTypeName << "::drop (void) {\n"
               "  mSet.setToFalse () ;\n"
               "  mBuilt = false ;\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << mSetTypeName << "::methode_add (C_lexique &, const GGS_" << mEnumElementTypeName << " & inElementToAdd) {\n"
               "  if (isBuilt () && inElementToAdd.isBuilt ()) {\n"
               "    const C_bdd e = C_bdd::varCompareConst (0, GGS_" << mEnumElementTypeName << "::bitCount (), C_bdd::kEqual, inElementToAdd.getValue ()) ;\n"
               "    mSet |= e ;\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mSetTypeName << "::reader_contains (const GGS_" << mEnumElementTypeName << " & inElement) const {\n"
               "  const bool built = isBuilt () && inElement.isBuilt () ;\n"
               "  bool contains = false ;\n"
               "  if (built) {\n"
               "    const C_bdd e = C_bdd::varCompareConst (0, GGS_" << mEnumElementTypeName << "::bitCount (), C_bdd::kEqual, inElement.getValue ()) ;\n"
               "    contains = (mSet & e).isEqualToBDD (e) ;\n"
               "  }\n"
               "  return GGS_bool (built, contains) ;\n" 
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mSetTypeName << "::reader_includes (const GGS_" << mSetTypeName << " & inOtherSet) const {\n"
               "  const bool built = isBuilt () && inOtherSet.isBuilt () ;\n"
               "  bool contains = false ;\n"
               "  if (built) {\n"
               "    contains = (mSet & inOtherSet.mSet).isEqualToBDD (inOtherSet.mSet) ;\n"
               "  }\n"
               "  return GGS_bool (built, contains) ;\n" 
               "}\n\n" ;
}

//---------------------------------------------------------------------------*
