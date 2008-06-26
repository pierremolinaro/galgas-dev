/*
 *  struct_generation.cpp
 *  galgas
 *
 *  Created by Pierre Molinaro on 08/03/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

//---------------------------------------------------------------------------*

#include "semantics_semantics.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_C_structToImplement
#endif

//---------------------------------------------------------------------------*

void cPtr_C_structToImplement::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_structToImplement::
generateHdeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_structToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & /* inLexique */) const {
  inHfile.writeCppTitleComment (C_String ("Declarations for '") + mStructName + "' struct") ;
  inHfile << "class GGS_" << mStructName << " {\n"
             "//--- Default constructor\n"
             "  public : GGS_" << mStructName << " (void) ;\n\n"
             "//--- Virtual destructor\n"
             "  public : virtual ~GGS_" << mStructName << " (void) ;\n\n"
             "//--- Handle 'drop' instruction\n"
             "  public : void _drop (void) ;\n\n"
             "//--- Method '_isBuilt'\n"
             "  public : bool _isBuilt (void) const ;\n\n"
             "//--- Support for method call handling in GALGAS\n"
             "  public : inline const GGS_" << mStructName << " * operator () (UNUSED_LOCATION_ARGS) const { return this ; }\n"
             "  public : inline GGS_" << mStructName << " * operator () (UNUSED_LOCATION_ARGS) { return this ; }\n\n"
             "//--- Comparison\n"
             "  public : GGS_bool _operator_isEqual (const GGS_" << mStructName << " & inOperand) const ;\n"
             "  public : GGS_bool _operator_isNotEqual (const GGS_" << mStructName << " & inOperand) const ;\n\n"
             "//--- Reader 'description'\n"
             "  public : GGS_string\n"
             "  reader_description (C_Compiler & _inLexique\n"
             "                      COMMA_LOCATION_ARGS,\n"
             "                      const sint32 inIndentation = 0) const ;\n"
             "//--- Galgas 'new' destructor\n"
             "  public : static GGS_" << mStructName << " constructor_new (" ;
  GGS_typeListeAttributsSemantiques::cElement * current = mAttributeList.firstObject () ;
  sint32 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inHfile << ",\n                 " ;
    }
    inHfile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n\n"
             "//--- Readers\n" ;
  current = mAttributeList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "  public : inline " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile << "\n"
               "  reader_" << current->mAttributeName << " (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {\n"
               "    return " << current->mAttributeName << " ;\n"
               "  }\n\n" ;
    current = current->nextObject () ;
  }
  inHfile << "//--- Attributes\n" ;
  current = mAttributeList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "  public : " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile << " " << current->mAttributeName << " ;\n" ;
    current = current->nextObject () ;
  }
  inHfile << "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_structToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_structToImplement::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_structToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                             const C_String & /* inTargetFileName */,
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_structToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  inCppFile.writeCppTitleComment (C_String ("Implementation of '") + mStructName + "' struct") ;
  inCppFile << "GGS_" << mStructName << "::GGS_" << mStructName << " (void) :\n" ;
  GGS_typeListeAttributsSemantiques::cElement * current = mAttributeList.firstObject () ;
  bool first = true ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (first) {
      first = false ;
    }else{
      inCppFile << ",\n" ;
    }
    inCppFile << current->mAttributeName << " ()" ;
    current = current->nextObject () ;
  }
  inCppFile << " {\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << mStructName << "::~GGS_" << mStructName << " (void) {\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mStructName << "::_drop (void) {\n" ;
  current = mAttributeList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "  " << current->mAttributeName << "._drop () ;\n" ;
    current = current->nextObject () ;
  }
  inCppFile << "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "bool GGS_" << mStructName << "::_isBuilt (void) const {\n" ;
  current = mAttributeList.firstObject () ;
  inCppFile << "  return " ;
  first = true ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (first) {
      first = false ;
    }else{
      inCppFile << "\n    && " ;
    }
    inCppFile << current->mAttributeName << "._isBuilt ()" ;
    current = current->nextObject () ;
  }
  inCppFile << " ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mStructName << "::\n"
               "_operator_isEqual (const GGS_" << mStructName << " & inOperand) const {\n" ;
  current = mAttributeList.firstObject () ;
  inCppFile << "  return " ;
  first = true ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (! first) {
      inCppFile << "\n    ._operator_and (" ;
    }
    inCppFile << current->mAttributeName << "._operator_isEqual (inOperand." << current->mAttributeName << ")" ;
    if (first) {
      first = false ;
    }else{
      inCppFile << ")" ;
    }
    current = current->nextObject () ;
  }
  inCppFile << " ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mStructName << "::\n"
               "_operator_isNotEqual (const GGS_" << mStructName << " & inOperand) const {\n"
               "  return " ;
  current = mAttributeList.firstObject () ;
  first = true ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (! first) {
      inCppFile << "\n    ._operator_or (" ;
    }
    inCppFile << current->mAttributeName << "._operator_isNotEqual (inOperand." << current->mAttributeName << ")" ;
    if (first) {
      first = false ;
    }else{
      inCppFile << ")" ;
    }
    current = current->nextObject () ;
  }
  inCppFile << " ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile <<"GGS_" << mStructName << " GGS_" << mStructName << "::\n"
              "constructor_new (" ;
  current = mAttributeList.firstObject () ;
  sint32 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ",\n                 " ;
    }
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  GGS_" << mStructName << " result ;\n" ;
  current = mAttributeList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "  result." << current->mAttributeName << " = argument_" << numeroVariable << " ;\n" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "  return result ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mStructName << "::\n"
               "reader_description (C_Compiler & _inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  C_String _s ;\n"
               "  _s << \"<struct @" << mStructName << "\" ;\n"
               "  if (_isBuilt ()) {\n" ;
  current = mAttributeList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _s << \"\\n\" ;\n"
                 "    _s.writeStringMultiple (\"| \", inIndentation + 1) ;\n"
                 "    _s << \"" << current->mAttributeName << " \" ;\n"
                 "    _s << " << current->mAttributeName << ".reader_description (_inLexique COMMA_THERE, inIndentation + 1) ;\n" ;
    current = current->nextObject () ;
  }
  inCppFile << "  }else{\n"
               "    _s << \"not built\" ;\n"
               "  }\n"
               "  _s << \"\\n\" ;\n"
               "  _s.writeStringMultiple (\"| \", inIndentation) ;\n"
               "  _s << \">\" ;\n"
               "  return GGS_string (true, _s) ;\n"
               "}\n\n" ;
}  

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_typeGalgasStructType
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasStructType::
generateAttributeDeclaration (const GGS_lstring & /* nom */,
                              AC_OutputStream & /* inHfile */) const {
}  

//---------------------------------------------------------------------------*

void cPtr_typeGalgasStructType::
generateAttributeInitialization (const GGS_lstring & /* nom */,
                                 AC_OutputStream & /* inCppFile */) const {
}  

//---------------------------------------------------------------------------*

void cPtr_typeGalgasStructType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mStructTypeName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasStructType::
generateAttributeGetLexicalValue (const C_String & /* inAttributeName */,
                                  AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
