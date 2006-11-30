//---------------------------------------------------------------------------*
//                                                                           *
//  Generate list declaration and implementation                             *
//                                                                           *
//  Copyright (C) 1999, ..., 2006 Pierre Molinaro.                           *
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
#include "semantics_generation.h"
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark List Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) const {
//----------------------- Element of list class declaration ----------------  
  inHfile.writeCppTitleComment (C_String ("Element of list '@") + aNomListe + "'") ;
//--------- Declare internal element class ------------
  inHfile << "class elementOf_GGS_" << aNomListe << " : public AC_galgas_list::cListElement {\n"
//--- Attributes
             "//--- Attributes\n" ;
  GGS_typeListeAttributsSemantiques::element_type * attributCourant = mNonExternAttributesList.firstObject () ;
  while (attributCourant != NULL) {
    macroValidPointer (attributCourant) ;
    attributCourant->mAttributType(HERE)->generatePublicDeclaration (inHfile, attributCourant->aNomAttribut) ;
    attributCourant = attributCourant->nextObject () ;
  }
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;
//--- declaration constructeur
  inHfile << "//--- Constructor\n"
             "  public : elementOf_GGS_" << aNomListe << " (" ;
  attributCourant = mNonExternAttributesList.firstObject () ;
  bool premier = true ;
  while (attributCourant != NULL) {
    macroValidPointer (attributCourant) ;
    if (premier) {
      premier = false ;
    }else{
      inHfile << ",\n                                " ;
    }
    macroValidPointer (attributCourant) ;
    inHfile << "const " ;
    attributCourant->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    attributCourant = attributCourant->nextObject () ;
  }
  inHfile << ") ;\n\n"
//--- Access to next and previous item
             "//--- Access to next\n"
             "  public : inline elementOf_GGS_" << aNomListe << " * nextObject (void) const { return (elementOf_GGS_" << aNomListe << " *) internalNextItem () ; }\n"
             "//--- Access to previous\n"
             "  public : inline elementOf_GGS_" << aNomListe << " * previousObject (void) const { return (elementOf_GGS_" << aNomListe << " *) internalPreviousItem () ; }\n"

//--- Element comparison
             "//--- Element comparison\n"
             "  protected : bool isEqualToElement (const cListElement * inOperand) const ;\n"
//--- Method for list 'description' reader
             "//--- Method used for description\n"
             "  public : virtual void appendForListDescription (C_Lexique & _inLexique,\n"
             "                                                  C_String & ioString,\n"
             "                                                  const sint32 inIndentation\n"
             "                                                  COMMA_LOCATION_ARGS) const ;\n"

//--- Friend declaration
             "  friend class GGS_" << aNomListe << " ;\n"

//--- Fin de la declaration de la classe e_...
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << aNomListe << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) const {
//----------------------- List class declaration ----------------  
  inHfile.writeCppTitleComment (C_String ("list '@") + aNomListe + "'") ;

  inHfile << "class elementOf_GGS_" << aNomListe << " ;\n"
             "\n"
             "class GGS_" << aNomListe << " : public AC_galgas_list {\n"
             "  public : typedef elementOf_GGS_" << aNomListe << " element_type ;\n"
//--- Constructors and assignment operator declaration
             "//--- Default Constructor\n"
             "  public : GGS_" << aNomListe << " (void) ;\n"
             "//--- Copy Constructor\n"
             "  public : GGS_" << aNomListe << " (const GGS_" << aNomListe << " & inSource) ;\n"
             "//--- Comparison Operators\n"
             "  public : GGS_bool operator == (const GGS_" << aNomListe << " & inOperand) const ;\n"
             "  public : GGS_bool operator != (const GGS_" << aNomListe << " & inOperand) const ;\n"

//--- Constructor 'emptyList'
             "//--- Constructor 'emptyList'\n"
             "  public : static GGS_" << aNomListe << " constructor_emptyList (C_Lexique & inLexique COMMA_LOCATION_ARGS) ;\n"

//--- Constructor 'listWithValue'
             "  public : static GGS_" << aNomListe << " constructor_listWithValue (C_Lexique & _inLexique" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint32 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                                "
               "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n"

//--- Get first inserted object
             "//--- Get first object\n"
             "  public : inline element_type * firstObject (void) const {\n"
             "    return (element_type *) internalFirstObject () ;\n"
             "  }\n"

//--- Get last inserted object
             "//--- Get last object\n"
             "  public : inline element_type * lastObject (void) const {\n"
             "    return (element_type *) internalLastObject () ;\n"
             "  }\n"

//--- operators () for method call
             "//--- Operators () used for method call\n"
             "  public : const GGS_" << aNomListe << " * operator () (UNUSED_LOCATION_ARGS) const { return this ;} \n"

//--- Declare method 'first'
             "//--- Method 'first'\n"
             "  public : void method_first (C_Lexique & _inLexique" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                              " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inHfile << "\n                              "
             "COMMA_LOCATION_ARGS) const ;\n"

//--- Declare method 'last'
             "//--- Method 'last'\n"
             "  public : void method_last (C_Lexique & _inLexique" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                             " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inHfile << "\n                             "
             "COMMA_LOCATION_ARGS) const ;\n"

//--- Declare method 'popLast'
             "//--- Method 'popLast'\n"
             "  public : void modifier_popLast (C_Lexique & _inLexique" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                                " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n"

//--- Declare method 'popFirst'
             "//--- Method 'popFirst'\n"
             "  public : void modifier_popFirst (C_Lexique & _inLexique" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                                 " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inHfile << "\n                                 "
             "COMMA_LOCATION_ARGS) ;\n"

//--- Append a new value
             "//--- Handling '+=' GALGAS operator\n"
             "  public : void _addAssign_operation (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"

//--- List concatenation
             "//--- Handling '.' GALGAS operator\n"
             "  public : GGS_" << aNomListe << " operator + (const GGS_" << aNomListe << " & inOperand) const ;\n"

//--- Prepend a new value
             "  public : void modifier_prependValue (C_Lexique & _inLexique" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                                "
               "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n"
             "//--- Internal Methods\n"
              "  protected : void _internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"
              "  protected : void _internalPrependValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inHfile << ",\n                                " ;
    inHfile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"
             "//--- List Insulation\n"
             "  protected : void _insulateList (void) ;\n"
             "//--- Reader 'description\n"
             "  public : GGS_string reader_description (C_Lexique & _inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const sint32 inIndentation = 0) const ;\n"

//--- End of list class declaration
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_listTypeToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
//------------- Implementation de l'element de liste -----------------
  inCppFile.writeCppTitleComment (C_String ("Element of list '@") + aNomListe + "'") ;

//--- Engendrer le constructeur de l'element de liste
  inCppFile << "elementOf_GGS_" << aNomListe << "::\n"
               "elementOf_GGS_" << aNomListe << " (" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint32 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ")" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable == 0) {
      inCppFile << ":\n" ;
    }else{
      inCppFile << ",\n" ;
    }
    inCppFile << current->aNomAttribut << " (argument_" << numeroVariable << ")" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Element comparison
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "bool elementOf_GGS_" << aNomListe << "::\n"
               "isEqualToElement (const cListElement * inOperand) const {\n"
               "  bool equal = inOperand == this ;\n"
               "  if (! equal) {\n"
               "    const elementOf_GGS_" << aNomListe << " * _p = dynamic_cast <const elementOf_GGS_" << aNomListe << " *> (inOperand) ;\n"
               "    macroValidPointer (_p) ;\n"
               "    equal = " ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << "\n         && " ;
    }
    inCppFile << "(" << current->aNomAttribut << " == _p->"  << current->aNomAttribut << ").boolValue ()" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << " ;\n"
               "  }\n"
               "  return equal ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void elementOf_GGS_" << aNomListe << "::\n"
               "appendForListDescription (C_Lexique & _inLexique,\n"
               "                          C_String & ioString,\n"
               "                          const sint32 inIndentation\n"
               "                          COMMA_LOCATION_ARGS) const {\n" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "  ioString << \"\\n\" ;\n"
                 "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
                 "  ioString << \"|-\" ;\n"
                 "  ioString << " << current->aNomAttribut << ".reader_description  (_inLexique COMMA_THERE, inIndentation) ;\n" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "}\n\n" ;

// ------------- List Implementation -----------------
  inCppFile.writeCppTitleComment (C_String ("List '@") + aNomListe + "'") ;

//--- Generate default constructor
  inCppFile << "GGS_" << aNomListe
            << "::GGS_" << aNomListe
            << " (void): AC_galgas_list () { // Default Constructor\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer le constructeur de recopie
  inCppFile << "GGS_" << aNomListe << "::\n"
               "GGS_" << aNomListe
            << " (const GGS_" << aNomListe << " & inSource): AC_galgas_list (inSource) {\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Generate comparison
  inCppFile << "GGS_bool GGS_" << aNomListe << "::\n"
               "operator == (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), isEqualToList (inOperand)) ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << aNomListe << "::\n"
               "operator != (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), ! isEqualToList (inOperand)) ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer la methode _internalAppendValues
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                    " ;
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  element_type * nouvelElement = (element_type *) NULL ;\n" 
               "  macroMyNew (nouvelElement, element_type (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ")) ;\n" 
               "  _internalAppendItem (nouvelElement) ;\n" 
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;


//--- Engendrer la methode _internalPrependValues
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_internalPrependValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                    " ;
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  element_type * nouvelElement = (element_type *) NULL ;\n" 
               "  macroMyNew (nouvelElement, element_type (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ")) ;\n" 
               "  _internalPrependItem (nouvelElement) ;\n" 
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Generate _addAssign_operation
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_addAssign_operation (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  if (_isBuilt ()) {\n"
               "    _insulateList () ;\n"
               "    _internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_" << aNomListe << " GGS_" << aNomListe << "::\n"
               "operator + (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  if (_isBuilt () && inOperand._isBuilt ()) {\n"
               "    if (count () == 0) {\n"
               "      result = inOperand ;\n"
               "    }else{\n"
               "      result = * this ;\n"
               "      if (inOperand.count () > 0) {\n"
               "        result._insulateList () ;\n"
               "        elementOf_GGS_" << aNomListe << " * p = inOperand.firstObject () ;\n"
               "        while (p != NULL) {\n"
               "          macroValidPointer (p) ;\n" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "          " ;
    current->mAttributType(HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " p_" << numeroVariable << " = p->" << current->aNomAttribut << " ;\n" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "          result._internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "p_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "          p = p->nextObject () ;\n"
               "        }\n"
               "      }\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Generate 'prepend' method
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_prependValue (C_Lexique & /* inLexique */" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n                     "
                 "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                     "
               "COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  if (_isBuilt ()" ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << " && argument_" << numeroVariable << "._isBuilt ()" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "    _insulateList () ;\n"
               "    _internalPrependValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer la methode _insulateList
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_insulateList (void) {\n"
               "  if (_shared ()) {\n"
               "    element_type * _p = firstObject () ;\n"
               "    _alloc () ;\n"
               "    while (_p != NULL) {\n"
               "      macroValidPointer (_p) ;\n"
               "      _internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "_p->" << current->aNomAttribut ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "      _p = _p->nextObject () ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement constructor 'emptyList'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_emptyList (C_Lexique & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  result._alloc () ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement constructor 'emptyList'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_listWithValue (C_Lexique & /* _inLexique */" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n                           "
                "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                           "
               "COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  result._alloc () ;\n"
               "  result._addAssign_operation (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement reader 'description'
  inCppFile << "GGS_string GGS_" << aNomListe << "::\n"
               "reader_description (C_Lexique & _inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  return _description (_inLexique, \"@" << aNomListe << "\", inIndentation COMMA_THERE) ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement method 'first'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "method_first (C_Lexique & _inLexique" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n              " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "\n              "
               "COMMA_LOCATION_ARGS) const {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = firstObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'first' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _p->" << current->aNomAttribut << " ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }else{\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << "._drop_operation () ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;


//--- Implement method 'last'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "method_last (C_Lexique & _inLexique" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n             " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "\n             "
               "COMMA_LOCATION_ARGS) const {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = lastObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'last' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _p->" << current->aNomAttribut << " ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }else{\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << "._drop_operation () ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;

//--- Implement method 'popFirst'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_popFirst (C_Lexique & _inLexique" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n                 " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "\n                 "
               "COMMA_LOCATION_ARGS) {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = firstObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'popFirst' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _p->" << current->aNomAttribut << " ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    _insulateList () ;\n"
               "    _internalRemoveFirst () ;\n"
               "  }else{\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << "._drop_operation () ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement method 'popLast'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_popLast (C_Lexique & _inLexique" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n                " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "\n                "
               "COMMA_LOCATION_ARGS) {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = lastObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'popLast' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _p->" << current->aNomAttribut << " ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    _insulateList () ;\n"
               "    _internalRemoveLast () ;\n"
               "  }else{\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << "._drop_operation () ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
}


//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Sorted List Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_sortedListTypeToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) const {
//----------------------- Element of list class declaration ----------------  
  inHfile.writeCppTitleComment (C_String ("Element of sorted list '@") + aNomListe + "'") ;
//--------- Declare internal element class ------------
  inHfile << "class elementOf_GGS_" << aNomListe << " : public AC_galgas_sortedlist::cSortedListElement {\n"
//--- Attributes
             "//--- Attributes\n" ;
  GGS_typeListeAttributsSemantiques::element_type * attributCourant = mNonExternAttributesList.firstObject () ;
  while (attributCourant != NULL) {
    macroValidPointer (attributCourant) ;
    attributCourant->mAttributType(HERE)->generatePublicDeclaration (inHfile, attributCourant->aNomAttribut) ;
    attributCourant = attributCourant->nextObject () ;
  }
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;
//--- declaration constructeur
  inHfile << "//--- Constructor\n"
             "  public : elementOf_GGS_" << aNomListe << " (" ;
  attributCourant = mNonExternAttributesList.firstObject () ;
  bool premier = true ;
  while (attributCourant != NULL) {
    macroValidPointer (attributCourant) ;
    if (premier) {
      premier = false ;
    }else{
      inHfile << ",\n                                " ;
    }
    macroValidPointer (attributCourant) ;
    inHfile << "const " ;
    attributCourant->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    attributCourant = attributCourant->nextObject () ;
  }
  inHfile << ") ;\n\n"
//--- Access to next and previous item
             "//--- Access to next\n"
             "  public : inline elementOf_GGS_" << aNomListe << " * nextObject (void) const { return (elementOf_GGS_" << aNomListe << " *) internalNextItem () ; }\n"
             "//--- Access to previous\n"
             "  public : inline elementOf_GGS_" << aNomListe << " * previousObject (void) const { return (elementOf_GGS_" << aNomListe << " *) internalPreviousItem () ; }\n"

//--- Element comparison
             "//--- Element comparison\n"
             "  protected : bool isEqualToElement (const cSortedListElement * inOperand) const ;\n"
//--- Virtual method for implementing element comparison
             "//--- Method used for sorting elements\n"
             "  protected : virtual sint32 compareForSorting (const cSortedListElement * inOperand) const ;\n"
//--- Method for list 'description' reader
             "//--- Method used for description\n"
             "  public : virtual void appendForListDescription (C_Lexique & _inLexique,\n"
             "                                                  C_String & ioString,\n"
             "                                                  const sint32 inIndentation\n"
             "                                                  COMMA_LOCATION_ARGS) const ;\n"

//--- Friend declaration
             "  friend class GGS_" << aNomListe << " ;\n"

//--- Fin de la declaration de la classe e_...
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_sortedListTypeToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << aNomListe << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_sortedListTypeToImplement::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) const {
//----------------------- List class declaration ----------------  
  inHfile.writeCppTitleComment (C_String ("sorted list '@") + aNomListe + "'") ;

  inHfile << "class elementOf_GGS_" << aNomListe << " ;\n"
             "\n"
             "class GGS_" << aNomListe << " : public AC_galgas_sortedlist {\n"
             "  public : typedef elementOf_GGS_" << aNomListe << " element_type ;\n"
//--- Constructors and assignment operator declaration
             "//--- Default Constructor\n"
             "  public : GGS_" << aNomListe << " (void) ;\n"
             "//--- Copy Constructor\n"
             "  public : GGS_" << aNomListe << " (const GGS_" << aNomListe << " & inSource) ;\n"
             "//--- Comparison Operators\n"
             "  public : GGS_bool operator == (const GGS_" << aNomListe << " & inOperand) const ;\n"
             "  public : GGS_bool operator != (const GGS_" << aNomListe << " & inOperand) const ;\n"

//--- Constructor 'emptyList'
             "//--- Constructor 'emptyList'\n"
             "  public : static GGS_" << aNomListe << " constructor_emptyList (C_Lexique & inLexique COMMA_LOCATION_ARGS) ;\n"

//--- Constructor 'listWithValue'
             "  public : static GGS_" << aNomListe << " constructor_listWithValue (C_Lexique & _inLexique" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint32 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                                "
               "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n"

//--- Get first inserted object
             "//--- Get first object\n"
             "  public : inline element_type * firstObject (void) const {\n"
             "    return (element_type *) internalFirstObject () ;\n"
             "  }\n"

//--- Get last inserted object
             "//--- Get last object\n"
             "  public : inline element_type * lastObject (void) const {\n"
             "    return (element_type *) internalLastObject () ;\n"
             "  }\n"

//--- operators () for method call
             "//--- Operators () used for method call\n"
             "  public : const GGS_" << aNomListe << " * operator () (UNUSED_LOCATION_ARGS) const { return this ;} \n"

//--- Declare method 'first'
             "//--- Method 'first'\n"
             "  public : void method_first (C_Lexique & _inLexique" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                              " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inHfile << "\n                              "
             "COMMA_LOCATION_ARGS) const ;\n"

//--- Declare method 'last'
             "//--- Method 'last'\n"
             "  public : void method_last (C_Lexique & _inLexique" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                             " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inHfile << "\n                             "
             "COMMA_LOCATION_ARGS) const ;\n"

//--- Declare method 'popLast'
             "//--- Method 'popLast'\n"
             "  public : void modifier_popLast (C_Lexique & _inLexique" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                                " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n"

//--- Declare method 'popFirst'
             "//--- Method 'popFirst'\n"
             "  public : void modifier_popFirst (C_Lexique & _inLexique" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << ",\n                                 " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inHfile << "\n                                 "
             "COMMA_LOCATION_ARGS) ;\n"

//--- Append a new value
             "//--- Handling '+=' GALGAS operator\n"
             "  public : void _addAssign_operation (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"

//--- List concatenation
             "//--- Handling '.' GALGAS operator\n"
             "  public : GGS_" << aNomListe << " operator + (const GGS_" << aNomListe << " & inOperand) const ;\n"
//--- Internal methods
             "//--- Internal Methods\n"
              "  protected : void _internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"
             "//--- List Insulation\n"
             "  protected : void _insulateList (void) ;\n"
             "//--- Reader 'description\n"
             "  public : GGS_string reader_description (C_Lexique & _inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const sint32 inIndentation = 0) const ;\n"

//--- End of list class declaration
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_sortedListTypeToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_sortedListTypeToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_sortedListTypeToImplement::
generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
//------------- Implementation de l'element de liste -----------------
  inCppFile.writeCppTitleComment (C_String ("Element of list '@") + aNomListe + "'") ;

//--- Engendrer le constructeur de l'element de liste
  inCppFile << "elementOf_GGS_" << aNomListe << "::\n"
               "elementOf_GGS_" << aNomListe << " (" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint32 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ")" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable == 0) {
      inCppFile << ":\n" ;
    }else{
      inCppFile << ",\n" ;
    }
    inCppFile << current->aNomAttribut << " (argument_" << numeroVariable << ")" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Element comparison
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "bool elementOf_GGS_" << aNomListe << "::\n"
               "isEqualToElement (const cSortedListElement * inOperand) const {\n"
               "  bool equal = inOperand == this ;\n"
               "  if (! equal) {\n"
               "    const elementOf_GGS_" << aNomListe << " * _p = dynamic_cast <const elementOf_GGS_" << aNomListe << " *> (inOperand) ;\n"
               "    macroValidPointer (_p) ;\n"
               "    equal = " ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << "\n         && " ;
    }
    inCppFile << "(" << current->aNomAttribut << " == _p->"  << current->aNomAttribut << ").boolValue ()" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << " ;\n"
               "  }\n"
               "  return equal ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "sint32 elementOf_GGS_" << aNomListe << "::\n"
               "compareForSorting (const cSortedListElement * inOperand) const {\n"
               "  elementOf_GGS_" << aNomListe << " * operand = (elementOf_GGS_" << aNomListe << " *) inOperand ;\n" ;
  
  GGS_sortDescriptorList::element_type * sortAttribute = mSortDescriptorList.firstObject () ;
  if (sortAttribute != NULL) {
    macroValidPointer (sortAttribute) ;
    inCppFile << "  sint32 result = "
              << (sortAttribute->mAscendingOrder.boolValue () ? "" : "- ")
              << sortAttribute->mSortAttribute
              << ".compare (operand->" << sortAttribute->mSortAttribute << ") ;\n" ;
    sortAttribute = sortAttribute->nextObject () ;
    while (sortAttribute != NULL) {
      macroValidPointer (sortAttribute) ;
      inCppFile << "  if (result == 0) {\n"
                   "    result = "
                << (sortAttribute->mAscendingOrder.boolValue () ? "" : "- ")
                << sortAttribute->mSortAttribute
                << ".compare (operand->" << sortAttribute->mSortAttribute << ") ;\n"
                << "  }\n" ;
      sortAttribute = sortAttribute->nextObject () ;
    }
  }
  inCppFile << "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void elementOf_GGS_" << aNomListe << "::\n"
               "appendForListDescription (C_Lexique & _inLexique,\n"
               "                          C_String & ioString,\n"
               "                          const sint32 inIndentation\n"
               "                          COMMA_LOCATION_ARGS) const {\n" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "  ioString << \"\\n\" ;\n"
                 "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
                 "  ioString << \"|-\" ;\n"
                 "  ioString << " << current->aNomAttribut << ".reader_description  (_inLexique COMMA_THERE, inIndentation) ;\n" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "}\n\n" ;

// ------------- List Implementation -----------------
  inCppFile.writeCppTitleComment (C_String ("List '@") + aNomListe + "'") ;

//--- Generate default constructor
  inCppFile << "GGS_" << aNomListe
            << "::GGS_" << aNomListe
            << " (void): AC_galgas_sortedlist () { // Default Constructor\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer le constructeur de recopie
  inCppFile << "GGS_" << aNomListe << "::\n"
               "GGS_" << aNomListe
            << " (const GGS_" << aNomListe << " & inSource): AC_galgas_sortedlist (inSource) {\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Generate comparison
  inCppFile << "GGS_bool GGS_" << aNomListe << "::\n"
               "operator == (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), isEqualToList (inOperand)) ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << aNomListe << "::\n"
               "operator != (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), ! isEqualToList (inOperand)) ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer la methode _internalAppendValues
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                    " ;
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  element_type * nouvelElement = (element_type *) NULL ;\n" 
               "  macroMyNew (nouvelElement, element_type (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ")) ;\n" 
               "  _internalAppendItem (nouvelElement) ;\n" 
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Generate _addAssign_operation
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_addAssign_operation (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  if (_isBuilt ()) {\n"
               "    _insulateList () ;\n"
               "    _internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_" << aNomListe << " GGS_" << aNomListe << "::\n"
               "operator + (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  if (_isBuilt () && inOperand._isBuilt ()) {\n"
               "    if (count () == 0) {\n"
               "      result = inOperand ;\n"
               "    }else{\n"
               "      result = * this ;\n"
               "      if (inOperand.count () > 0) {\n"
               "        result._insulateList () ;\n"
               "        elementOf_GGS_" << aNomListe << " * p = inOperand.firstObject () ;\n"
               "        while (p != NULL) {\n"
               "          macroValidPointer (p) ;\n" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "          " ;
    current->mAttributType(HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " p_" << numeroVariable << " = p->" << current->aNomAttribut << " ;\n" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "          result._internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "p_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "          p = p->nextObject () ;\n"
               "        }\n"
               "      }\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer la methode _insulateList
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_insulateList (void) {\n"
               "  if (_shared ()) {\n"
               "    element_type * _p = firstObject () ;\n"
               "    _alloc () ;\n"
               "    while (_p != NULL) {\n"
               "      macroValidPointer (_p) ;\n"
               "      _internalAppendValues (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "_p->" << current->aNomAttribut ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "      _p = _p->nextObject () ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement constructor 'emptyList'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_emptyList (C_Lexique & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  result._alloc () ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement constructor 'emptyList'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_listWithValue (C_Lexique & /* _inLexique */" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n                           "
                "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                           "
               "COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  result._alloc () ;\n"
               "  result._addAssign_operation (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement reader 'description'
  inCppFile << "GGS_string GGS_" << aNomListe << "::\n"
               "reader_description (C_Lexique & _inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  return _description (_inLexique, \"@" << aNomListe << "\", inIndentation COMMA_THERE) ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement method 'first'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "method_first (C_Lexique & _inLexique" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n              " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "\n              "
               "COMMA_LOCATION_ARGS) const {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = firstObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'first' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _p->" << current->aNomAttribut << " ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }else{\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << "._drop_operation () ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;


//--- Implement method 'last'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "method_last (C_Lexique & _inLexique" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n             " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "\n             "
               "COMMA_LOCATION_ARGS) const {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = lastObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'last' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _p->" << current->aNomAttribut << " ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }else{\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << "._drop_operation () ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;

//--- Implement method 'popFirst'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_popFirst (C_Lexique & _inLexique" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n                 " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "\n                 "
               "COMMA_LOCATION_ARGS) {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = firstObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'popFirst' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _p->" << current->aNomAttribut << " ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    _insulateList () ;\n"
               "    _internalRemoveFirst () ;\n"
               "  }else{\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << "._drop_operation () ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement method 'popLast'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_popLast (C_Lexique & _inLexique" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n                " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << numeroVariable ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "\n                "
               "COMMA_LOCATION_ARGS) {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = lastObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'popLast' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _p->" << current->aNomAttribut << " ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    _insulateList () ;\n"
               "    _internalRemoveLast () ;\n"
               "  }else{\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << "._drop_operation () ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
}


//---------------------------------------------------------------------------*
