//---------------------------------------------------------------------------*
//                                                                           *
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro (started february 25, 2008)*
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

//---------------------------------------------------------------------------*

#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mGalgasName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & inLexique) const {
  inHfile.writeCppTitleComment (C_String ("Extern type 'GGS_") + mGalgasName + "'") ;
  inHfile << "#include \"GGS_" << mGalgasName << ".h\"\n\n" ;
//--- Generate extern type declaration
  C_String generatedZone2 ;
  generatedZone2 << "class GGS_" << mGalgasName << " {\n"
                    "//--- Default constructor and virtual destructor\n"
                    "  public : GGS_" << mGalgasName << " (void) ;\n"
                    "  public : virtual ~GGS_" << mGalgasName << " (void) ;\n"
                    "\n"
                    "//--- Handle 'drop' instruction\n"
                    "  public : void _drop_operation (void) ;\n"
                    "\n"
                    "//--- Method '_isBuilt'\n"
                    "  public : bool _isBuilt (void) const ;\n"
                    "\n"
                    "//--- Support for method call handling in GALGAS\n"
                    "  public : inline const GGS_" << mGalgasName << " * operator () (UNUSED_LOCATION_ARGS) const { return this ; }\n"
                    "  public : inline GGS_" << mGalgasName << " * operator () (UNUSED_LOCATION_ARGS) { return this ; }\n"
                    "\n"
                    "//--- Comparison\n"
                    "  public : GGS_bool _operator_isEqual (const GGS_" << mGalgasName << " & inOperand) const ;\n"
                    "  public : GGS_bool _operator_isNotEqual (const GGS_" << mGalgasName << " & inOperand) const ;\n\n"
                    "//--- Reader 'description'\n"
                    "  public : GGS_string\n"
                    "  reader_description (C_Compiler & _inLexique\n"
                    "                      COMMA_LOCATION_ARGS,\n"
                    "                      const sint32 inIndentation = 0) const ;\n"
                    "//--- Constructors\n" ;
  GGS_M_externTypeConstructorMap::cElement * constructor = mConstructorMap.firstObject () ;
  while (constructor != NULL) {
    macroValidPointer (constructor) ;
    generatedZone2 << "  public : static GGS_" << mGalgasName
                   << " constructor_" << constructor->mKey << " (C_Compiler & _inLexique" ;
    GGS_typeListeAttributsSemantiques::cElement * arg = constructor->mInfo.aListeDesAttributs.firstObject () ;
    while (arg != NULL) {
      macroValidPointer (arg) ;
      arg->mAttributType(HERE)->generatePublicDeclaration (inHfile, arg->mAttributeName) ;
      arg = arg->nextObject () ;
    }
    generatedZone2 << "\n                  COMMA_LOCATION_ARGS) ;\n\n" ;
    constructor = constructor->nextObject () ;
  }

  C_String generatedZone3 ;
  generatedZone3 << "} ;\n\n" ;

  inLexique.generateFile ("//",
                          C_String ("GGS_") + mGalgasName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate::
generateHdeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

bool cPtr_typeExternTypeToGenerate::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & /* inCppFile */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
}

//---------------------------------------------------------------------------*
