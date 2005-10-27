//---------------------------------------------------------------------------*
//                                                                           *
//  Generate map declaration and implementation                              *
//                                                                           *
//  Copyright (C) 1999-2005 Pierre Molinaro.                                 *
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

void cPtr_C_mapToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
  inHfile.writeTitleComment (C_String ("DECLARATIONS FOR MAP '") + aNomTable + "'") ;

//--- Starting map element class declaration
  inHfile << "class e_" << aNomTable << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType()->generatePublicDeclaration (inHfile, current->aNomAttribut) ;
    current = current->nextObject () ;
  }
  
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;

  inHfile << "} ;\n\n" ; //--- End of map element class declaration e_...

//---------------------- map class declaration -----------------

  inHfile.writeHyphenLineComment () ;
  inHfile << "class GGS_" << aNomTable << " : public AC_galgas_map {\n" ;
  GGS_stateMap::element_type * currentState = mStateMap.firstObject () ;
  if (currentState != NULL) {
    inHfile << "//--- Enumeration for states\n"
               "  public : typedef enum {enum_" << currentState->mKey ;
    currentState = currentState->nextObject () ;
    while (currentState != NULL) {
      inHfile << ", enum_" << currentState->mKey ;
      currentState = currentState->nextObject () ;
    }
    inHfile << "} enumForStates ;\n" ;
  }
  inHfile << "//------------------------ Internal class for an element\n"
             "  public : class element_type : public AC_galgas_map_element {\n"
             "  //--- Constructor\n"
             "    public : element_type (const GGS_lstring & inKey,\n"
             "                           const sint32 inIndex,\n"
             "                           const e_" << aNomTable << " & inInfo) ;\n"
             "  //--- Get pointers\n"
             "    public : inline element_type * nextObject (void) const { return (element_type *) mNextItem ; }\n"
             "    public : inline element_type * infObject (void) const { return (element_type *) mInfPtr ; }\n"
             "    public : inline element_type * supObject (void) const { return (element_type *) mSupPtr ; }\n"
             "  //--- Data members\n"
             "    public : e_" << aNomTable << " mInfo ;\n"
             "  } ;\n"
             "//--- Get pointers\n"
             "  public : inline element_type * rootObject (void) const { return (element_type *) mRoot ; }\n"
             "  public : inline element_type * firstObject (void) const { return (element_type *) mFirstItem ; }\n"
             "  public : inline element_type * lastObject (void) const { return (element_type *) mLastItem ; }\n"
             "//--- Create a new element\n"
             "  protected : virtual AC_galgas_map_element * new_element (const GGS_lstring & inKey, void * inInfo) ;\n"
             "//--- Get object pointer (for method call)\n"
             "  public : inline GGS_" << aNomTable << " * operator () (void) { return this ; }\n"
             "//--- 'empty' constructor\n"
             "  public : static GGS_" << aNomTable << " constructor_empty (void) ;\n"
             "//--- Method used for duplicate a map\n"
             "  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;\n" ;
//--- Declaring insert methods
  GGS_typeTableMethodesInsererChercher::element_type * currentMethod = aTableMethodesInserer.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mKey << "' Insert Method\n"
               "  public : void methode_"
            << currentMethod->mKey
            << " (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * currentAttribute = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      inHfile << ",\n                                const " ;
      currentAttribute->mAttributType()->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      currentAttribute = currentAttribute->nextObject () ;
    }
    inHfile << ") ;\n"
               "  public : void methode_"
            << currentMethod->mKey
            << "GetIndex (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    currentAttribute = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      inHfile << ",\n                                const " ;
      currentAttribute->mAttributType()->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      currentAttribute = currentAttribute->nextObject () ;
    }
    inHfile << ") ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
//--- Declaring search methods
  currentMethod = aTableMethodesChercher.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mKey << "' Search Method\n"
               "  public : void methode_" 
            << currentMethod->mKey
            << " (C_Lexique & inLexique"
            << ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n"
               "  public : void methode_" 
            << currentMethod->mKey
            << "GetIndex (C_Lexique & inLexique"
            << ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
  inHfile << "//--- Internal method for inserting an element\n"
             "  protected : void insertElement (C_Lexique & inLexique,\n"
             "                                  const char * inErrorMessagesArray [],\n"
             "                                  const GGS_lstring & inKey,\n" ;
  current = mNonExternAttributesList.firstObject () ;
  sint32 index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "                                  const " ;
    current->mAttributType()->generateCppClassName (inHfile) ;
    inHfile << "& inParameter" << index << ",\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inHfile << "                                  GGS_luint * outIndex) ;\n" ;
  inHfile << "//--- Internal method for searching for an element\n"
             "  protected : void searchElement (C_Lexique & inLexique,\n"
             "                                  const char * inErrorMessagesArray [],\n"
             "                                  const GGS_lstring & inKey,\n" ;
  current = mNonExternAttributesList.firstObject () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "                               " ;
    current->mAttributType()->generateCppClassName (inHfile) ;
    inHfile << "& outParameter" << index << ",\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inHfile << "                                  GGS_luint * outIndex) ;\n" ;
  inHfile << "} ;\n\n" ;

//--- Declaring search and insert methods
/*  GGS_mapMethodMap::element_type * currentMethod = mMethodMap.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile.writeHyphenLineComment () ;
    inHfile << "void " 
            << currentMethod->mKey << "_" << aNomTable
            << " (C_Lexique & inLexique"
            << ",\n                                GGS_" << aNomTable << " & ioMap"
            << ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inHfile, false) ;
      inHfile << " * outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ",\n                                GGS_luint * outIndex) ;\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }*/
//--- Declaring search methods
/*  currentMethod = aTableMethodesChercher.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile.writeHyphenLineComment () ;
    inHfile << "void " 
            << currentMethod->mKey << "_" << aNomTable
            << " (C_Lexique & inLexique"
            << ",\n                                GGS_" << aNomTable << " & ioMap"
            << ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inHfile, false) ;
      inHfile << " * outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ",\n                                GGS_luint * outIndex) ;\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Declaring insert methods
  currentMethod = aTableMethodesChercher.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile.writeHyphenLineComment () ;
    inHfile << "void "
            << currentMethod->mKey << "_" << aNomTable
            << " (C_Lexique & inLexique" 
               ",\n                                GGS_" << aNomTable << " & ioMap"
               ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ",\n                                GGS_luint * outIndex) ;\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }*/
}

//---------------------------------------------------------------------------*

bool cPtr_C_mapToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                             const C_String & /* inLexiqueClassName */,
                             const C_String & /* inTargetFileName*/,
                             sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateCppClassImplementation (AC_OutputStream & inCppFile,
                                const C_String & /* inLexiqueClassName */,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) {
  inCppFile.writeTitleComment (C_String ("class map '") + aNomTable + "'") ;

//--- Constructor for type element
  inCppFile << "GGS_" << aNomTable << "::element_type::\n"
               "element_type (const GGS_lstring & inKey,\n"
               "              const sint32 inIndex,\n"
               "              const e_" << aNomTable << " & inInfo) :\n"
               "AC_galgas_map_element (inKey, inIndex),\n"
               "mInfo (inInfo) {\n"
               "}\n\n" ;

//--- 'new_element' method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "AC_galgas_map_element * GGS_" << aNomTable << "::\n"
               "new_element (const GGS_lstring & inKey, void * inInfo) {\n"
               "  MF_Assert (reinterpret_cast <e_" << aNomTable << " *> (inInfo) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  AC_galgas_map_element * p = NULL ;\n"
               "  e_" << aNomTable << " * info = (e_" << aNomTable << " *) inInfo ;\n"
               "  macroMyNew (p, element_type (inKey, count (), * info)) ;\n"
               "  return p ;\n"
               "}\n\n" ;

//--- 'constructor_empty' static method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::constructor_empty (void) {\n"
               "  GGS_" << aNomTable << " result ;\n"
               "  macroMyNew (result.mReferenceCountPtr, sint32 (1)) ;\n"
               "  return result ;\n"
               "}\n\n" ;

//--- 'internalInsertForDuplication' method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::internalInsertForDuplication (AC_galgas_map_element * inPtr) {\n"
               "  MF_Assert (reinterpret_cast <element_type *> (inPtr) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  element_type * p = (element_type *) inPtr ;\n"
               "  bool extension = false ; // Unused here\n"
               "  sint32 index = -1 ; // Unused here\n"
               "  internalInsert (p->mKey, (void *) & p->mInfo, mRoot, extension, index) ;\n"
               "}\n\n" ;

//--- 'insertElement' method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::\n"
               "insertElement (C_Lexique & inLexique,\n"
               "               const char * inErrorMessagesArray [],\n"
               "               const GGS_lstring & inKey,\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint32 index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "               const " ;
    current->mAttributType()->generateFormalParameter (inCppFile, true) ;
    inCppFile << " inParameter" << index << ",\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "               GGS_luint * outIndex) {\n"
            << "  sint32 index = - 1 ;\n"
            << "  if (isBuilt () && inKey.isBuilt ()" ;
  for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
    inCppFile << "\n                 && inParameter" << i << ".isBuilt ()" ;
  }      
  inCppFile << ") {\n"
               "     insulateMap () ;\n"
             << "    e_" << aNomTable << " info  ;\n" ;
  current = mNonExternAttributesList.firstObject () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    info." << current->aNomAttribut << " = inParameter" << index << " ;\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    bool extension = false ; // Unused here\n"
               "    internalInsert (inKey, (void *) & info, mRoot, extension, index) ;\n"
               "    if (index < 0) {\n"
               "      C_String keyString ;\n"
               "      keyString << inKey ;\n"
               "      buildMapSemanticErrorMessage (inLexique, inKey, inErrorMessagesArray, keyString) ;\n"
               "     }\n"
               "  }\n"
               "  if (outIndex != NULL) {\n"
               "    * outIndex = GGS_luint (GGS_uint (isBuilt () && (index >= 0), (uint32) index), inKey) ;\n"
               "  }\n"
               "}\n\n" ;

//--- 'searchElement' method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::\n"
               "searchElement (C_Lexique & inLexique,\n"
               "               const char * inErrorMessagesArray [],\n"
               "               const GGS_lstring & inKey,\n" ;
  current = mNonExternAttributesList.firstObject () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "               " ;
    current->mAttributType()->generateFormalParameter (inCppFile, false) ;
    inCppFile << " & outParameter" << index << ",\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "               GGS_luint * outIndex) {\n"
               "  element_type * node = NULL  ;\n"
               "  if (isBuilt () && inKey.isBuilt ()) {\n"
               "    AC_galgas_map_element * p = internal_search (inKey) ;\n"
               "    MF_Assert ((p == NULL) || (reinterpret_cast <element_type *> (p) != NULL), \"Dynamic cast error\", 0, 0) ;\n"
               "    node = (element_type *) p ;\n"
               "    if (node == NULL) {\n"
               "      C_String keyString ;\n"
               "      keyString << inKey ;\n"
               "      buildMapSemanticErrorMessage (inLexique, inKey, inErrorMessagesArray, keyString) ;\n"
               "    }\n"
               "  }\n"
               "  if (node == NULL) {\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "    outParameter" << i << ".drop_operation () ;\n" ;
    }
    inCppFile << "    if (outIndex != NULL) {\n"
                 "      outIndex->drop_operation () ;\n"
                 "     }\n"
                 "  }else{\n" ;
  current = mNonExternAttributesList.firstObject () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    outParameter" << index << " = node->mInfo." << current->aNomAttribut << " ;\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    if (outIndex != NULL) {\n"
               "      * outIndex = GGS_luint (GGS_uint (true, (uint32) node->mIndex), inKey) ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;

//--- Implement search routines
  GGS_typeTableMethodesInsererChercher::element_type * currentMethod = aTableMethodesChercher.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "void GGS_" 
              << aNomTable << "::methode_" << currentMethod->mKey
              << " (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n"
                 "  const char * kErrorMessage [] = {" ;
    GGS_L_stringList::element_type * currentMessage = currentMethod->mInfo.mErrorMessageList.firstObject () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.string ()) ;
      inCppFile << ",\n                                   " ;
      currentMessage = currentMessage->nextObject () ;
    }
    inCppFile << "NULL} ;\n"
                 "  searchElement (inLexique,\n"
                 "                 kErrorMessage,\n"
                 "                 inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                 outParameter" << i << ",\n" ;
    }
    inCppFile << "                 NULL) ;\n"
              << "}\n\n" ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "void GGS_" 
              << aNomTable << "::methode_" << currentMethod->mKey
              << "GetIndex (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n"
                 "  const char * kErrorMessage [] = {" ;
    currentMessage = currentMethod->mInfo.mErrorMessageList.firstObject () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.string ()) ;
      inCppFile << ",\n                                   " ;
      currentMessage = currentMessage->nextObject () ;
    }
    inCppFile << "NULL} ;\n"
                 "  searchElement (inLexique,\n"
                 "                 kErrorMessage,\n"
                 "                 inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                 outParameter" << i << ",\n" ;
    }
    inCppFile << "                 & outIndex) ;\n"
              << "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Implement insert routines
  currentMethod = aTableMethodesInserer.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "void GGS_"
              << aNomTable << "::methode_" << currentMethod->mKey
              << " (C_Lexique & lexique_var_"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inCppFile, true) ;
      inCppFile << "inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n"
                 "  const char * kErrorMessage [] = {" ;
    GGS_L_stringList::element_type * currentMessage = currentMethod->mInfo.mErrorMessageList.firstObject () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.string ()) ;
      inCppFile << ",\n                                   " ;
      currentMessage = currentMessage->nextObject () ;
    }
    inCppFile << "NULL} ;\n"
                 "  insertElement (lexique_var_,\n"
                 "                 kErrorMessage,\n"
                 "                 inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                       inParameter" << i << ",\n" ;
    }
    inCppFile << "                 NULL) ;\n"
                 "}\n\n" ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "void GGS_"
              << aNomTable << "::methode_" << currentMethod->mKey
              << "GetIndex (C_Lexique & lexique_var_"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inCppFile, true) ;
      inCppFile << "inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n"
                 "  const char * kErrorMessage [] = {" ;
    currentMessage = currentMethod->mInfo.mErrorMessageList.firstObject () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.string ()) ;
      inCppFile << ",\n                                   " ;
      currentMessage = currentMessage->nextObject () ;
    }
    inCppFile << "NULL} ;\n"
                 "  insertElement (lexique_var_,\n"
                 "                 kErrorMessage,\n"
                 "                 inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                 inParameter" << i << ",\n" ;
    }
    inCppFile << "                 & outIndex) ;\n"
                 "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
  inHfile.writeTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

//--- Debut de la declaration de la classe table
  inHfile << "class e_" << aNomTable << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType()->generatePublicDeclaration (inHfile, current->aNomAttribut) ;
    current = current->nextObject () ;
  }
  
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;

//--- declarer methode 'isBuilt'
  inHfile << "  public : bool isBuilt (void) const ;\n"
             "} ;\n\n" ; //--- Fin de la declaration de la classe e_...

// ---------------------- declaration de la classe table -----------------
  inHfile.writeTitleComment (C_String ("map '") + aNomTable + "'") ;

  inHfile << "class GGS_" << aNomTable << " : public "  << aNomClasseGenerique
          << " <e_" << aNomTable << "> {\n"
             "//--- Get object pointer\n"
             "  public : inline GGS_" << aNomTable << " * operator () (void) { return this ; }\n"
             "//--- Handle 'empty' constructor\n"
             "  public : static GGS_" << aNomTable << " constructor_empty (void) ;\n" ;

//--- Declaring search methods
  GGS_typeTableMethodesInsererChercher::element_type * currentMethod = aTableMethodesChercher.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//---\n"
               "public : void methode_" 
            << currentMethod->mKey
            << " (C_Lexique & inLexique"
               ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    inHfile << "public : void methode_" 
            << currentMethod->mKey
            << "GetIndex (C_Lexique & inLexique"
               ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Declaring insert methods
  currentMethod = aTableMethodesInserer.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//---\n"
               "public : void methode_"
            << currentMethod->mKey
            << " (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    inHfile << "public : void methode_"
            << currentMethod->mKey
            << "GetIndex (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
  inHfile << "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDefinitionTableAimplementer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer
::generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) {
  inCppFile.writeTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

//--- Instanciate the template
  inCppFile << "template class "
            << aNomClasseGenerique
            << " <e_" << aNomTable << "> ;\n\n" ;

//--- Engendrer l'implementation de la methode 'isBuilt' de l'element de table
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "bool e_" << aNomTable << "::isBuilt (void) const {\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  inCppFile << "  return" ;
  if (current == NULL) {
    inCppFile << " true ;\n" ;
  }else{
    bool first = true ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << " " ;
      if (first) {
        first = false ;
      }else{
        inCppFile << "&&\n       " ;
      }
      inCppFile << current->aNomAttribut << ".isBuilt ()" ;
      current = current->nextObject () ;
    }
    inCppFile << " ;\n" ;
  }
  inCppFile << "}\n\n" ;

//--------------------- ENGENDRER LA CLASSE TABLE ----------------------------
  inCppFile.writeTitleComment (C_String ("Map '") + aNomTable + "'") ;

  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::constructor_empty (void) {\n"
               "  GGS_" << aNomTable << " t ;\n"
               "  t.build () ;\n"
               "  return t ;\n"
               "}\n\n" ;

//--- Implementing search methods
  GGS_typeTableMethodesInsererChercher::element_type * currentMethod = aTableMethodesChercher.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
   inCppFile.writeHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::methode_" 
              << currentMethod->mKey
              << " (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n" ;
  //--- Inserer les messages d'erreur
    sint32 messageNumber = 0 ;
    GGS_L_stringList::element_type * currentMessage = currentMethod->mInfo.mErrorMessageList.firstObject () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile << "  const char * errorMessage_" << messageNumber  << " = " ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.string ()) ;
      inCppFile << " ;\n" ;
      currentMessage = currentMessage->nextObject () ;
      messageNumber ++ ;
    }
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "  GGS_" << aNomTable << "::element_type * info = "
              << currentMethod->mKey << " (inLexique, inKey, inKey" ;
    for (sint32 i=0 ; i<messageNumber ; i++) {
      inCppFile << ", errorMessage_" << i ;
    }
    inCppFile << ") ;\n"
                 "  if (info == NULL) {\n" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    outParameter" << index << ".drop_operation () ;\n" ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  }else{\n" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    outParameter" << index << " = info->mInfo." << current->aNomAttribut << " ;\n" ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  }\n"
                 "}\n\n" ;
    inCppFile << "void GGS_" << aNomTable << "::methode_" 
              << currentMethod->mKey
              << "GetIndex (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n" ;
  //--- Inserer les messages d'erreur
    messageNumber = 0 ;
    currentMessage = currentMethod->mInfo.mErrorMessageList.firstObject () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile << "  const char * errorMessage_" << messageNumber  << " = " ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.string ()) ;
      inCppFile << " ;\n" ;
      currentMessage = currentMessage->nextObject () ;
      messageNumber ++ ;
    }
    inCppFile << "  GGS_" << aNomTable << "::element_type * info = "
              << currentMethod->mKey << " (inLexique, inKey, inKey" ;
    for (sint32 i=0 ; i<messageNumber ; i++) {
      inCppFile << ", errorMessage_" << i ;
    }
    inCppFile << ") ;\n"
                 "  if (info == NULL) {\n" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    outParameter" << index << ".drop_operation () ;\n" ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "    outIndex.drop_operation () ;\n"
                 "  }else{\n" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    outParameter" << index << " = info->mInfo." << current->aNomAttribut << " ;\n" ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "    outIndex = GGS_luint (GGS_uint (true, (uint32) info->mEntryIndex), inKey) ;\n"
                 "  }\n"
                 "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Implementation des methodes d'insertion
  currentMethod = aTableMethodesInserer.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::methode_"
              << currentMethod->mKey
              << " (C_Lexique & lexique_var_"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inCppFile, true) ;
      inCppFile << " inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n" ;
    sint32 messageNumber = 0 ;
    GGS_L_stringList::element_type * currentMessage = currentMethod->mInfo.mErrorMessageList.firstObject () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile << "  const char * kErrorMessage_" << messageNumber  << " = " ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.string ()) ;
      inCppFile << " ;\n" ;
      currentMessage = currentMessage->nextObject () ;
      messageNumber ++ ;
    }
    inCppFile << "  e_" << aNomTable << " info ;\n" ;
    current = mNonExternAttributesList.firstObject () ;
    sint32 numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "  info." << current->aNomAttribut << " = inParameter" << numeroVariable << " ;\n" ;
      numeroVariable ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  " << currentMethod->mKey << " (lexique_var_, info, inKey, inKey" ;
    for (sint32 i=0 ; i<currentMethod->mInfo.mErrorMessageList.count () ; i++) {
      inCppFile << ", kErrorMessage_" << i ;
    }
    inCppFile << ") ;\n"
              << "}\n\n" ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::methode_"
              << currentMethod->mKey
              << "GetIndex (C_Lexique & lexique_var_"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inCppFile, true) ;
      inCppFile << " inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n" ;
    messageNumber = 0 ;
    currentMessage = currentMethod->mInfo.mErrorMessageList.firstObject () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile << "  const char * kErrorMessage_" << messageNumber  << " = " ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.string ()) ;
      inCppFile << " ;\n" ;
      currentMessage = currentMessage->nextObject () ;
      messageNumber ++ ;
    }
    inCppFile << "  e_" << aNomTable << " info ;\n" ;
    current = mNonExternAttributesList.firstObject () ;
    numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "  info." << current->aNomAttribut << " = inParameter" << numeroVariable << " ;\n" ;
      numeroVariable ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  const sint32 index = " << currentMethod->mKey << " (lexique_var_, info, inKey, inKey" ;
    for (sint32 i=0 ; i<currentMethod->mInfo.mErrorMessageList.count () ; i++) {
      inCppFile << ", kErrorMessage_" << i ;
    }
    inCppFile << ") ;\n"
              << "  outIndex = GGS_luint (GGS_uint (index >= 0, (uint32) index), inKey) ;\n"
              << "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
}

//---------------------------------------------------------------------------*
