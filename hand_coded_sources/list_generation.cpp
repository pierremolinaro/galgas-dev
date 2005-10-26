//---------------------------------------------------------------------------*
//                                                                           *
//  Generate list declaration and implementation                             *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
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
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
//----------------------- List class declaration ----------------  
  inHfile.writeTitleComment (C_String ("class list '") + aNomListe + "'") ;

  inHfile << "class GGS_" << aNomListe << " {\n" ;

//--------- Declare internal element class ------------
  inHfile << "  public : class element_type {\n"
           << "    private : element_type * mNextItem ;\n" ;
//--- Attributes
  GGS_typeListeAttributsSemantiques::element_type * attributCourant = mNonExternAttributesList.firstObject () ;
  while (attributCourant != NULL) {
    macroValidPointer (attributCourant) ;
    inHfile << "  " ;
    attributCourant->mAttributType()->generatePublicDeclaration (inHfile, attributCourant->aNomAttribut) ;
    attributCourant = attributCourant->nextObject () ;
  }
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;
//--- declaration constructeur
  inHfile << "    public : element_type (" ;
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
    attributCourant->mAttributType()->generateFormalParameter (inHfile, true) ;
    attributCourant = attributCourant->nextObject () ;
  }
  inHfile << ") ;\n\n"

//--- Access to next item
             "    public : inline element_type * nextObject (void) const { return mNextItem ; }\n"

//--- Declare copy constructor and assignment operator as private
             "    private : element_type (const element_type &) ;\n"
             "    private : void operator = (const element_type &) ;\n"

//--- Destructor declaration
             "    public : ~element_type (void) {}\n"

//--- Friend declaration
             "    friend class GGS_" << aNomListe << " ;\n"

//--- Fin de la declaration de la classe e_...
             "  } ;\n\n"
             "  private : element_type * mFirstItem ;\n"
             "  private : element_type * mLastItem ;\n"
             "  private : element_type * mCurrentItemPtr ;\n"
             "  private : sint32 mCurrentItemIndex ;\n"
             "  private : sint32 mListLength ;\n"
             "  public : inline sint32 count (void) const {\n"
             "    return mListLength ;\n"
             "  }\n"
             "  private : sint32 * mCountReference ;\n"

//--- Copy constructor and assignment operator declaration
             "  public : GGS_" << aNomListe << " (void) ; // Default Constructor\n"
             "  public : GGS_" << aNomListe << " (const GGS_" << aNomListe << " &) ; // Copy constructor\n"
             "  public : void operator = (const "
             "GGS_" << aNomListe << " &) ; // Assignment operator\n"

//--- Destructor declaration
             "//--- Virtual destructor\n"
             "  public : virtual ~GGS_" << aNomListe << " (void) ;\n\n"

//--- Declare constructor 'new'
             "//--- Constructor 'new'\n"
             "  public : static GGS_" << aNomListe << " constructor_empty (void) ;\n"

//--- Get first item
             "//--- Get first item\n"
             "  public : inline element_type * firstObject (void) const { return mFirstItem ; }\n"

//--- Append a new value
             "  public : void addAssign_operation (" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint32 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current->mAttributType()->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"
              "  protected : void internalAppendItem (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inHfile << ",\n                                " ;
    inHfile << "const " ;
    current->mAttributType()->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"
             "  public : void insulateList (void) ;\n"
             "  public : void emptyList (void) ;\n"
             "  public : inline bool isBuilt (void) const {\n"
             "    return mCountReference != NULL ;\n"
             "  }\n"
  
//--- Generate declaration of 'drop_operation' method
             "  public : void drop_operation (void) ;\n"

//--- Generate declaration and implementation of 'length' reader
             "  public : inline GGS_uint reader_length (void)  const {\n"
             "    return GGS_uint (mCountReference != NULL, (uint32) mListLength) ;\n"
             "  }\n"

//--- End of list class declaration
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_listTypeToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement
::generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) {
//------------- Implementation de l'element de liste -----------------
  inCppFile.writeTitleComment (C_String ("Class element of list '") + aNomListe + "'") ;

//--- Engendrer le constructeur de l'element de liste
  inCppFile << "GGS_" << aNomListe << "::element_type::\nelement_type (" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint16 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "const " ;
    current->mAttributType()->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n" ; 
  inCppFile << "  mNextItem = (element_type *) NULL ;\n" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "  " << current->aNomAttribut << " = argument_" << numeroVariable << " ;\n" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << "}\n\n" ;

// ------------- List Implementation -----------------
  inCppFile.writeTitleComment (C_String ("class list '") + aNomListe + "'") ;

//--- Engendrer le constructeur par defaut
  inCppFile << "GGS_" << aNomListe << "\n"
               "::GGS_" << aNomListe
           << " (void) { // Default Constructor\n"
              "  mFirstItem = (element_type *) NULL ;\n"
              "  mLastItem = (element_type *) NULL ;\n"
              "  mCurrentItemPtr = (element_type *) NULL ;\n"
              "  mCurrentItemIndex = 0 ;\n"
              "  mListLength = 0 ;\n"
              "  mCountReference = (sint32 *) NULL ;\n"
              "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;

//--- Engendrer le destructeur
  inCppFile << "GGS_" << aNomListe << "::~GGS_" << aNomListe << " (void) {\n"
           << "  emptyList () ;\n"
           << "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;

//--- Engendrer le constructeur de recopie
  inCppFile << "GGS_" << aNomListe << "::GGS_" << aNomListe
            << " (const GGS_" << aNomListe << " & source) { // Copy constructor\n"
               "  mFirstItem = (element_type *) NULL ;\n"
               "  mLastItem = (element_type *) NULL ;\n"
               "  mCurrentItemPtr = (element_type *) NULL ;\n"
               "  mCurrentItemIndex = 0 ;\n"
               "  mListLength = 0 ;\n"
               "  mCountReference = (sint32 *) NULL ;\n"
               "  *this = source ;\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;

//--- Engendrer l'operateur d'affectation
  inCppFile << "void GGS_" << aNomListe << "\n"
               "::operator = (const GGS_" << aNomListe << " & source) { // Assignment operator\n"
               "  if (this != & source) {\n"
               "    emptyList () ;\n"
               "    mFirstItem = source.mFirstItem ;\n"
               "    mLastItem = source.mLastItem ;\n"
               "    mCurrentItemPtr = (element_type *) NULL ;\n"
               "    mCurrentItemIndex = 0 ;\n"
               "    mListLength = source.mListLength ;\n"
               "    mCountReference = source.mCountReference ;\n"
               "    if (mCountReference != NULL) {\n"
               "      macroValidPointer (mCountReference) ;\n"
               "      (*mCountReference) ++ ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;

//--- Engendrer la methode emptyList
  inCppFile << "void GGS_" << aNomListe << "\n"
               "::emptyList (void) {\n"
               "  mCurrentItemPtr = (element_type *) NULL ;\n"
               "  mCurrentItemIndex = 0 ;\n"
               "  mListLength = 0 ;\n"
               "  mLastItem = (element_type *) NULL ;\n"
               "  if (mCountReference != NULL) {\n"
               "    macroValidPointer (mCountReference) ;\n"
               "    if ((*mCountReference) == 1) {\n"
               "      macroMyDelete (mCountReference, sint32) ;\n"
               "      while (mFirstItem != NULL) {\n"
               "        macroValidPointer (mFirstItem) ;\n"
               "        mLastItem = mFirstItem->mNextItem ;\n"
               "        macroMyDelete (mFirstItem, element_type) ;\n"
               "        mFirstItem = mLastItem ;\n"
               "      }\n"
               "    }else{\n"
               "      mFirstItem = (element_type *) NULL ;\n"
               "      (*mCountReference) -- ;\n"
               "      mCountReference = (sint32 *) NULL ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;

//--- Engendrer la methode internalAppendItem
  inCppFile << "void GGS_" << aNomListe << "::"
               "\ninternalAppendItem (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "const " ;
    current->mAttributType()->generateFormalParameter (inCppFile, true) ;
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
               "    if (mLastItem == NULL) {\n" 
               "      mFirstItem = nouvelElement ;\n" 
               "    }else{\n" 
               "      macroValidPointer (mLastItem) ;\n" 
               "      mLastItem->mNextItem = nouvelElement ;\n" 
               "    }\n" 
               "    mLastItem = nouvelElement ;\n" 
               "    nouvelElement = (element_type *) NULL ;\n" 
               "    mListLength ++ ;\n" 
               "  }\n" 
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;


//--- Generate addAssign_operation
  inCppFile << "void GGS_" << aNomListe << "::\naddAssign_operation (" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "const " ;
    current->mAttributType()->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  if (isBuilt ()" ;
  current = mNonExternAttributesList.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "\n                 && argument_" << numeroVariable << ".isBuilt ()" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "    insulateList () ;\n"
               "    internalAppendItem (" ;
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
  inCppFile.writeHyphenLineComment () ;

//--- Engendrer la methode insulateList
  inCppFile << "void GGS_" << aNomListe << "\n"
               "::insulateList (void) {\n"
               "  if (mCountReference != NULL) {\n"
               "    macroValidPointer (mCountReference) ;\n"
               "    if ((*mCountReference) > 1) {\n"
               "      element_type * p = mFirstItem ;\n"
               "      mFirstItem = (element_type *)  NULL ;\n"
               "      mLastItem = (element_type *)  NULL ;\n"
               "      mListLength = 0 ;\n"
               "      mCurrentItemPtr = (element_type *) NULL ;\n"
               "      mCurrentItemIndex = 0 ;\n"
               "      while (p != NULL) {\n"
               "        macroValidPointer (p) ;\n"
               "        internalAppendItem (" ;
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
               "      (*mCountReference) -- ;\n"
               "      mCountReference = (sint32 *) NULL ;\n"
               "      macroMyNew (mCountReference, sint32 (1)) ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;

//--- Implement constructor 'new'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_empty (void) {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  macroMyNew (result.mCountReference, sint32 (1)) ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeHyphenLineComment () ;

//--- Engendrer la declaration de la methode 'drop_operation'
  inCppFile << "void GGS_" << aNomListe << "\n"
               "::drop_operation (void) {\n"
               "  emptyList () ;\n"
               "}\n\n" ;
}


//---------------------------------------------------------------------------*
