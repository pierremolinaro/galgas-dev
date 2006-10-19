//---------------------------------------------------------------------------*
//                                                                           *
//  Generate list declaration and implementation                             *
//                                                                           *
//  Copyright (C) 1999-2006 Pierre Molinaro.                                 *
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

void cPtr_C_listTypeToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) const {
//----------------------- Element of list class declaration ----------------  
  inHfile.writeCppTitleComment (C_String ("Element of list '@") + aNomListe + "'") ;
//--------- Declare internal element class ------------
  inHfile << "class elementOf_GGS_" << aNomListe << " {\n"
          << "  private : elementOf_GGS_" << aNomListe << " * mNextItem ;\n" ;
//--- Attributes
  GGS_typeListeAttributsSemantiques::element_type * attributCourant = mNonExternAttributesList.firstObject () ;
  while (attributCourant != NULL) {
    macroValidPointer (attributCourant) ;
    inHfile << "  " ;
    attributCourant->mAttributType(HERE)->generatePublicDeclaration (inHfile, attributCourant->aNomAttribut) ;
    attributCourant = attributCourant->nextObject () ;
  }
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;
//--- declaration constructeur
  inHfile << "  public : elementOf_GGS_" << aNomListe << " (" ;
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
//--- Access to next item
             "  public : inline elementOf_GGS_" << aNomListe << " * nextObject (void) const { return mNextItem ; }\n"

//--- Declare copy constructor and assignment operator as private
             "  private : elementOf_GGS_" << aNomListe << " (const elementOf_GGS_" << aNomListe << " &) ;\n"
             "  private : void operator = (const elementOf_GGS_" << aNomListe << " &) ;\n"

//--- Destructor declaration
             "  public : inline ~elementOf_GGS_" << aNomListe << " (void) {}\n"

//--- Method for list 'description' reader
             "  public : void appendForListDescription (C_Lexique & _inLexique,\n"
             "                                          C_String & ioString,\n"
             "                                          const sint32 inIndentation\n"
             "                                          COMMA_LOCATION_ARGS) const ;\n"

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
             "class GGS_" << aNomListe << " {\n"
             "  public : typedef elementOf_GGS_" << aNomListe << " element_type ;\n"
//--- Embedded class for list root
             "//--- Embedded class for list root\n"
             "  protected : class cRootList {\n"
             "    public : element_type * mFirstItem ;\n"
             "    public : element_type * mLastItem ;\n"
             "    public : sint32 mListLength ;\n"
             "    public : sint32 mCountReference ;\n"
             "  //--- Default constructor\n"
             "    public : cRootList (void) ;\n"
             "  //--- Destructor\n"
             "    public : ~cRootList (void) ;\n"
             "  //--- No Copy\n"
             "    private : cRootList (const cRootList &) ;\n"
             "    private : void operator = (const cRootList &) ;\n"
             "  } ;\n"
             "//--- Private attribute\n"
             "  private : cRootList * _mRoot ;\n"

//--- Constructors and assignment operator declaration
             "//--- Default Constructor\n"
             "  public : GGS_" << aNomListe << " (void) ;\n"
             "//--- Copy Constructor\n"
             "  public : GGS_" << aNomListe << " (const GGS_" << aNomListe << " & inSource) ;\n"
             "//--- Assignment Operator\n"
             "  public : void operator = (const GGS_" << aNomListe << " & inSource) ;\n"

//--- Destructor declaration
             "//--- Destructor\n"
             "  public : ~GGS_" << aNomListe << " (void) ;\n\n"

//--- Declare constructor 'emptyList'
             "//--- Constructor 'emptyList'\n"
             "  public : static GGS_" << aNomListe << " constructor_emptyList (C_Lexique & inLexique COMMA_LOCATION_ARGS) ;\n"

//--- 'count'
             "//--- Function 'count'\n"
             "  public : sint32 count (void) const ;\n"

//--- Declare reader 'description'
             "//--- Reader 'description'\n"
             "  public : GGS_string reader_description (C_Lexique & _inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const sint32 inIndentation = 0) const ;\n"

//--- Get first item
             "//--- Get first object\n"
             "  public : element_type * firstObject (void) const ;\n"

//--- Declare method 'first'
             "//--- Method 'first'\n"
             "  public : void method_first (C_Lexique & _inLexique" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint32 numeroVariable = 0 ;
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
             "  public : void method_popLast (C_Lexique & _inLexique" ;
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
             "//--- Internal Methods\n"
              "  protected : void _internalAppendItem (" ;
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
             "  protected : void _insulateList (void) ;\n"
             "//--- '_isBuilt' method\n"
             "  public : inline bool _isBuilt (void) const {\n"
             "    return _mRoot != NULL ;\n"
             "  }\n"
  
//--- Generate declaration of '_drop_operation' method
             "//--- Handling GALGAS 'drop' instruction\n"
             "  public : void _drop_operation (void) ;\n"

//--- Generate declaration of 'length' reader
             "//--- Handling GALGAS 'length' reader\n"
             "  public : GGS_uint reader_length (C_Lexique & /* inLexique */\n"
             "                                   COMMA_UNUSED_LOCATION_ARGS) const ;\n"

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
  inCppFile << "):\n"
               "mNextItem (NULL)" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n" << current->aNomAttribut << " (argument_" << numeroVariable << ")" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void elementOf_GGS_" << aNomListe << "::\n"
               "appendForListDescription (C_Lexique & _inLexique,\n"
               "                          C_String & ioString,\n"
               "                          const sint32 inIndentation\n"
               "                          COMMA_LOCATION_ARGS) const {\n"
               "  ioString << \"[\" ;\n"  ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "  ioString << " << current->aNomAttribut << ".reader_description  (_inLexique COMMA_THERE, inIndentation) ;\n" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "  ioString << \"\\n\" ;\n"
               "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
               "  ioString << \"]\" ;\n"
               "}\n\n" ;

// ------------- List Implementation -----------------
  inCppFile.writeCppTitleComment (C_String ("List '@") + aNomListe + "'") ;

//--- Generate root default constructor
  inCppFile << "GGS_" << aNomListe
            << "::cRootList::cRootList (void):\n"
               "mFirstItem (NULL),\n"
               "mLastItem (NULL),\n"
               "mListLength (0),\n"
               "mCountReference (1) {\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Generate root destructor
  inCppFile << "GGS_" << aNomListe
            << "::cRootList::~cRootList (void) {\n"
               "  while (mFirstItem != NULL) {\n"
               "    element_type * p = mFirstItem->nextObject () ;\n"
               "    macroMyDelete (mFirstItem, element_type) ;\n"
               "    mFirstItem = p ;\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Generate default constructor
  inCppFile << "GGS_" << aNomListe
            << "::GGS_" << aNomListe
            << " (void) { // Default Constructor\n"
               "  _mRoot = NULL ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer le destructeur
  inCppFile << "GGS_" << aNomListe << "::~GGS_" << aNomListe << " (void) {\n"
           << "  _drop_operation () ;\n"
           << "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer le constructeur de recopie
  inCppFile << "GGS_" << aNomListe << "::\n"
               "GGS_" << aNomListe
            << " (const GGS_" << aNomListe << " & inSource) {\n"
               "  _mRoot = inSource._mRoot ;\n"
               "  if (_mRoot != NULL) {\n"
               "    macroValidPointer (_mRoot) ;\n"
               "    _mRoot->mCountReference ++ ;\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer l'operateur d'affectation
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "operator = (const GGS_" << aNomListe << " & inSource) {\n"
               "  if (this != & inSource) {\n"
               "    _drop_operation () ;\n"
               "    _mRoot = inSource._mRoot ;\n"
               "    if (_mRoot != NULL) {\n"
               "      macroValidPointer (_mRoot) ;\n"
               "      _mRoot->mCountReference ++ ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer la methode 'emptyList'
  inCppFile << "GGS_" << aNomListe << "::element_type * GGS_" << aNomListe << "::\n"
               "firstObject (void) const {\n"
               "  return (_mRoot == NULL) ? NULL : _mRoot->mFirstItem ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer la methode _internalAppendItem
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_internalAppendItem (" ;
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
               "  if (nouvelElement != NULL) {\n" 
               "    macroValidPointer (nouvelElement) ;\n" 
               "    if (_mRoot->mLastItem == NULL) {\n" 
               "      _mRoot->mFirstItem = nouvelElement ;\n" 
               "    }else{\n" 
               "      macroValidPointer (_mRoot->mLastItem) ;\n" 
               "      _mRoot->mLastItem->mNextItem = nouvelElement ;\n" 
               "    }\n" 
               "    _mRoot->mLastItem = nouvelElement ;\n" 
               "    nouvelElement = (element_type *) NULL ;\n" 
               "    _mRoot->mListLength ++ ;\n" 
               "  }\n" 
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
               "    _internalAppendItem (" ;
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
               "  if (_mRoot != NULL) {\n"
               "    macroValidPointer (_mRoot) ;\n"
               "    if (_mRoot->mCountReference > 1) {\n"
               "      element_type * p = _mRoot->mFirstItem ;\n"
               "      _mRoot->mCountReference -- ;\n"
               "      _mRoot = NULL ;\n"
               "      macroMyNew (_mRoot, cRootList) ;\n"
               "      while (p != NULL) {\n"
               "        macroValidPointer (p) ;\n"
               "        _internalAppendItem (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "p->" << current->aNomAttribut ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "        p = p->mNextItem ;\n"
               "      }\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement constructor 'emptyList'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_emptyList (C_Lexique & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  macroMyNew (result._mRoot, cRootList) ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement 'count' function
  inCppFile << "sint32 GGS_" << aNomListe << "::\n"
               "count (void) const {\n"
               "  return (_mRoot == NULL) ? 0 : _mRoot->mListLength ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement reader 'description'
  inCppFile << "GGS_string GGS_" << aNomListe << "::\n"
               "reader_description (C_Lexique & _inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  C_String s ;\n"
               "  s << \"<list @" << aNomListe << "\" ;\n"
               "  if (_isBuilt ()) {\n"
               "    s << \" \" << _mRoot->mListLength << \" object\" << ((_mRoot->mListLength > 1) ? \"s \" : \" \") ;\n"
               "    element_type * p = _mRoot->mFirstItem ;\n"
               "    sint32 elementIndex = 0 ;\n"
               "    while (p != NULL) {\n"
               "      macroValidPointer (p) ;\n"
               "      s << \"\\n\" ;\n"
               "      s.writeStringMultiple (\"| \", inIndentation) ;\n"
               "      s << \"|-at \" << elementIndex << \" \" ;\n"
               "      p->appendForListDescription (_inLexique, s, inIndentation + 1 COMMA_THERE) ;\n"
               "      p = p->mNextItem ;\n"
               "      elementIndex ++ ;\n"
               "    }\n"
               "  }else{\n"
               "    s << \"not built\" ;\n"
               "  }\n"
               "  s << \"\\n\" ;\n"
               "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
               "  s << \">\" ;\n"
               "  return GGS_string (true, s) ;\n"
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
               "  bool _ok = _isBuilt () ;\n"
               "  if (_ok) {\n"
               "    _ok = _mRoot->mFirstItem != NULL ;\n"
               "    if (! _ok) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'first' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_ok) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _mRoot->mFirstItem->" << current->aNomAttribut << " ;\n" ;
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
               "  bool _ok = _isBuilt () ;\n"
               "  if (_ok) {\n"
               "    _ok = _mRoot->mLastItem != NULL ;\n"
               "    if (! _ok) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'last' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_ok) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _mRoot->mLastItem->" << current->aNomAttribut << " ;\n" ;
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

//--- Implement method 'popLast'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "method_popLast (C_Lexique & _inLexique" ;
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
               "  bool _ok = _isBuilt () ;\n"
               "  if (_ok) {\n"
               "    _ok = _mRoot->mLastItem != NULL ;\n"
               "    if (! _ok) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'popLast' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_ok) {\n" ;
  numeroVariable = 0 ;
  current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    _out_" << numeroVariable << " = _mRoot->mLastItem->" << current->aNomAttribut << " ;\n" ;
    numeroVariable ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    _insulateList () ;\n"
               "    element_type * _p = _mRoot->mLastItem ;\n"
               "    _mRoot->mLastItem = _mRoot->mLastItem->mNextItem ;\n"
               "    if (_mRoot->mLastItem == NULL) {\n"
               "      _mRoot->mFirstItem = NULL ;\n"
               "    }\n"
               "    _mRoot->mListLength -- ;\n"
               "    macroMyDelete (_p, element_type) ;\n"
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

//--- Generate implementation of 'length' reader
  inCppFile << "GGS_uint GGS_" << aNomListe << "::\n"
               "reader_length (C_Lexique & /* inLexique */\n"
               "               COMMA_UNUSED_LOCATION_ARGS) const {\n"
               "  return GGS_uint (_mRoot != NULL,\n"
               "                   (_mRoot == NULL) ? 0 : (uint32) _mRoot->mListLength) ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Engendrer la declaration de la methode '_drop_operation'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_drop_operation (void) {\n"
               "  if (_mRoot != NULL) {\n"
               "    macroValidPointer (_mRoot) ;\n"
               "    if (_mRoot->mCountReference == 1) {\n"
               "      macroMyDelete (_mRoot, cRootList) ;\n"
               "    }else{\n"
               "      _mRoot->mCountReference -- ;\n"
               "      _mRoot = NULL ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
}


//---------------------------------------------------------------------------*
