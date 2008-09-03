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
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mStructName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_structToImplement::
generateHdeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_structToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & /* inLexique */) const {
  inHfile.appendCppTitleComment (C_String ("Declarations for '") + mStructName + "' struct") ;
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
  GGS_typeListeAttributsSemantiques::cEnumerator current (mAttributeList, true) ;
  sint32 numeroVariable = 0 ;
  while (current.hc ()) {
    if (numeroVariable > 0) {
      inHfile << ",\n                 " ;
    }
    inHfile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current.next () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n\n"
             "//--- Readers\n" ;
  current.rewind () ;
  while (current.hc ()) {
    inHfile << "  public : inline " ;
    current._mAttributType (HERE)(HERE)->generateCppClassName (inHfile) ;
    inHfile << "\n"
               "  reader_" << current._mAttributeName (HERE) << " (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {\n"
               "    return " << current._mAttributeName (HERE) << " ;\n"
               "  }\n\n" ;
    current.next () ;
  }
  inHfile << "//--- Attributes\n" ;
  current.rewind () ;
  while (current.hc ()) {
    inHfile << "  public : " ;
    current._mAttributType (HERE)(HERE)->generateCppClassName (inHfile) ;
    inHfile << " " << current._mAttributeName (HERE) << " ;\n" ;
    current.next () ;
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
  inCppFile.appendCppTitleComment (C_String ("Implementation of '") + mStructName + "' struct") ;
  inCppFile << "GGS_" << mStructName << "::GGS_" << mStructName << " (void) :\n" ;
  GGS_typeListeAttributsSemantiques::cEnumerator current (mAttributeList, true) ;
  bool first = true ;
  while (current.hc ()) {
    if (first) {
      first = false ;
    }else{
      inCppFile << ",\n" ;
    }
    inCppFile << current._mAttributeName (HERE) << " ()" ;
    current.next () ;
  }
  inCppFile << " {\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mStructName << "::~GGS_" << mStructName << " (void) {\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mStructName << "::_drop (void) {\n" ;
  current.rewind () ;
  while (current.hc ()) {
    inCppFile << "  " << current._mAttributeName (HERE) << "._drop () ;\n" ;
    current.next () ;
  }
  inCppFile << "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "bool GGS_" << mStructName << "::_isBuilt (void) const {\n" ;
  current.rewind () ;
  inCppFile << "  return " ;
  first = true ;
  while (current.hc ()) {
    if (first) {
      first = false ;
    }else{
      inCppFile << "\n    && " ;
    }
    inCppFile << current._mAttributeName (HERE) << "._isBuilt ()" ;
    current.next() ;
  }
  inCppFile << " ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mStructName << "::\n"
               "_operator_isEqual (const GGS_" << mStructName << " & inOperand) const {\n" ;
  current.rewind () ;
  inCppFile << "  return " ;
  first = true ;
  while (current.hc ()) {
    if (! first) {
      inCppFile << "\n    ._operator_and (" ;
    }
    inCppFile << current._mAttributeName (HERE) << "._operator_isEqual (inOperand." << current._mAttributeName (HERE) << ")" ;
    if (first) {
      first = false ;
    }else{
      inCppFile << ")" ;
    }
    current.next () ;
  }
  inCppFile << " ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mStructName << "::\n"
               "_operator_isNotEqual (const GGS_" << mStructName << " & inOperand) const {\n"
               "  return " ;
  current.rewind () ;
  first = true ;
  while (current.hc ()) {
    if (! first) {
      inCppFile << "\n    ._operator_or (" ;
    }
    inCppFile << current._mAttributeName (HERE) << "._operator_isNotEqual (inOperand." << current._mAttributeName (HERE) << ")" ;
    if (first) {
      first = false ;
    }else{
      inCppFile << ")" ;
    }
    current.next () ;
  }
  inCppFile << " ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile <<"GGS_" << mStructName << " GGS_" << mStructName << "::\n"
              "constructor_new (" ;
  current.rewind () ;
  sint32 numeroVariable = 0 ;
  while (current.hc ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                 " ;
    }
    inCppFile << "const " ;
    current._mAttributType (HERE)(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  GGS_" << mStructName << " result ;\n" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hc ()) {
    inCppFile << "  result." << current._mAttributeName (HERE) << " = argument_" << numeroVariable << " ;\n" ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "  return result ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mStructName << "::\n"
               "reader_description (C_Compiler & _inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  C_String _s ;\n"
               "  _s << \"<struct @" << mStructName << "\" ;\n"
               "  if (_isBuilt ()) {\n" ;
  current.rewind () ;
  while (current.hc ()) {
    inCppFile << "    _s << \"\\n\" ;\n"
                 "    _s.writeStringMultiple (\"| \", inIndentation + 1) ;\n"
                 "    _s << \"" << current._mAttributeName (HERE) << " \" ;\n"
                 "    _s << " << current._mAttributeName (HERE) << ".reader_description (_inLexique COMMA_THERE, inIndentation + 1) ;\n" ;
    current.next () ;
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
