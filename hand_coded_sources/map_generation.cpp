//---------------------------------------------------------------------------*
//                                                                           *
//  Generate map declaration and implementation                              *
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

#include "semantics_generation.h"
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateHdeclarations_2 (AC_output_stream & /* inHfile */,
                         const C_string & /* inLexiqueClassName */,
                         C_lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateHdeclarations (AC_output_stream & inHfile,
                       const C_string & /* inLexiqueClassName */,
                       C_lexique & /* inLexique */) {
  inHfile.writeTitleComment (C_string ("DECLARATIONS FOR MAP '") + aNomTable + "'") ;

//--- Début de la déclaration de la classe table
  inHfile << "class e_" << aNomTable << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType()->generatePublicDeclaration (inHfile, current->aNomAttribut) ;
    current = current->getNextItem () ;
  }
  
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;

//--- declarer methode 'isBuilt'
  inHfile << "} ;\n\n" ; //--- Fin de la déclaration de la classe e_...

// ---------------------- declaration de la classe table -----------------

  inHfile.writeHyphenLineComment () ;
  inHfile << "class GGS_" << aNomTable << " : public AC_galgas_map {\n"
             "//--- Internal class for an element\n"
             "  public : class element_type : public AC_galgas_map_element {\n"
             "  //--- Constructor\n"
             "    public : element_type (const GGS_" << mKeyTypeName << " & inKey,\n"
             "                           const sint32 inIndex,\n"
             "                           const e_" << aNomTable << " & inInfo) ;\n"
             "  //--- Method for key compare\n"
             "    public : virtual sint32 compareKeys (void * inKey) const ;\n"
             "  //--- Get pointers\n"
             "    public : inline element_type * getNextItem (void) const { return (element_type *) mNextItem ; }\n"
             "    public : inline element_type * getInfPtr (void) const { return (element_type *) mInfPtr ; }\n"
             "    public : inline element_type * getSupPtr (void) const { return (element_type *) mSupPtr ; }\n"
             "  //--- Data members\n"
             "    public : const GGS_" << mKeyTypeName << " mKey ;\n"
             "    public : e_" << aNomTable << " mInfo ;\n"
             "  } ;\n"
             "//--- Get pointers\n"
             "  public : inline element_type * getRoot (void) const { return (element_type *) mRoot ; }\n"
             "  public : inline element_type * getFirstItem (void) const { return (element_type *) mFirstItem ; }\n"
             "  public : inline element_type * getLastItem (void) const { return (element_type *) mLastItem ; }\n"
             "//--- Create a new element\n"
             "  protected : virtual AC_galgas_map_element * new_element (void * inKey, void * inInfo) ;\n"
             "//--- 'empty' constructor\n"
             "  public : static GGS_" << aNomTable << " constructor_empty (void) ;\n"
             "//--- 'hasKey' reader\n"
             "  public : GGS_bool reader_hasKey (const GGS_" << mKeyTypeName << " & inKey) const ;\n"
             "//--- Method used for duplicate a map\n"
             "  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;\n"
             "//--- Insert an element\n"
             "  public : void insertElement (C_lexique & inLexique,\n"
             "                               const char * inErrorMessagesArray [],\n"
             "                               const GGS_" << mKeyTypeName << " & inKey,\n" ;
  current = mNonExternAttributesList.getFirstItem () ;
  sint32 index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "                               const " ;
    current->mAttributType()->generateCppClassName (inHfile) ;
    inHfile << "& inParameter" << index << ",\n" ;
    index ++ ;
    current = current->getNextItem () ;
  }
  inHfile << "                               GGS_luint * outIndex) ;\n"
             "//--- Search for an element\n"
             "  public : void searchElement (C_lexique & inLexique,\n"
             "                               const char * inErrorMessagesArray [],\n"
             "                               const GGS_" << mKeyTypeName << " & inKey,\n" ;
  current = mNonExternAttributesList.getFirstItem () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "                               " ;
    current->mAttributType()->generateCppClassName (inHfile) ;
    inHfile << "* outParameter" << index << ",\n" ;
    index ++ ;
    current = current->getNextItem () ;
  }
  inHfile << "                               GGS_luint * outIndex) ;\n"
             "} ;\n\n" ;

//--- Declaring search methods
  GGS_typeTableMethodesInsererChercher::element_type * methodeCourante = aTableMethodesChercher.getFirstItem () ;
  while (methodeCourante != NULL) {
    macroValidPointer (methodeCourante) ;
    inHfile.writeHyphenLineComment () ;
    inHfile << "void " 
            << methodeCourante->mKey << "_" << aNomTable
            << " (C_lexique & inLexique"
            << ",\n                                GGS_" << aNomTable << " & ioMap"
            << ",\n                                const GGS_" << mKeyTypeName << " & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inHfile, false) ;
      inHfile << " * outParameter" << index ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inHfile << ",\n                                GGS_luint * outIndex) ;\n\n" ;
    methodeCourante = methodeCourante->getNextItem () ;
  }

//--- Declaring insert methods
  methodeCourante = aTableMethodesInserer.getFirstItem () ;
  while (methodeCourante != NULL) {
    macroValidPointer (methodeCourante) ;
    inHfile.writeHyphenLineComment () ;
    inHfile << "void "
            << methodeCourante->mKey << "_" << aNomTable
            << " (C_lexique & inLexique" 
               ",\n                                GGS_" << aNomTable << " & ioMap"
               ",\n                                const GGS_" << mKeyTypeName << " & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inHfile << ",\n                                GGS_luint * outIndex) ;\n\n" ;
    methodeCourante = methodeCourante->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_mapToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateCppClassDeclaration (AC_output_stream & /*inHfile */,
                             const C_string & /* inLexiqueClassName */,
                             const C_string & /* inTargetFileName*/,
                             sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateCppClassImplementation (AC_output_stream & inCppFile,
                                const C_string & /* inLexiqueClassName */,
                                const C_string & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) {
  inCppFile.writeTitleComment (C_string ("class map '") + aNomTable + "'") ;

//--- Constructor for type element
  inCppFile << "GGS_" << aNomTable << "::element_type::\n"
               "element_type (const GGS_" << mKeyTypeName << " & inKey,\n"
               "              const sint32 inIndex,\n"
               "              const e_" << aNomTable << " & inInfo) :\n"
               "AC_galgas_map_element (inIndex),\n"
               "mKey (inKey),\n"
               "mInfo (inInfo) {\n"
               "}\n\n" ;

//--- 'new_element' method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "AC_galgas_map_element * GGS_" << aNomTable << "::\n"
               "new_element (void * inKey, void * inInfo) {\n"
               "  M_assert (reinterpret_cast <GGS_" << mKeyTypeName << " *> (inKey) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  M_assert (reinterpret_cast <e_" << aNomTable << " *> (inInfo) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  AC_galgas_map_element * p = NULL ;\n"
               "  GGS_" << mKeyTypeName << " * key = (GGS_" << mKeyTypeName << " *) inKey ;\n"
               "  e_" << aNomTable << " * info = (e_" << aNomTable << " *) inInfo ;\n"
               "  macroMyNew (p, element_type (* key, getCount (), * info)) ;\n"
               "  return p ;\n"
               "}\n\n" ;

//--- 'compareKeys' method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "sint32 GGS_" << aNomTable << "::element_type::compareKeys (void * inKey) const {\n"
               "  M_assert (reinterpret_cast <GGS_" << mKeyTypeName << " *> (inKey) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  GGS_" << mKeyTypeName << " * key = (GGS_" << mKeyTypeName << " *) inKey ;\n"
               "  return mKey.compare_key_for_map (* key) ;\n"
               "}\n\n" ;

//--- 'constructor_empty' static method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::constructor_empty (void) {\n"
               "  GGS_" << aNomTable << " result ;\n"
               "  macroMyNew (result.mReferenceCountPtr, sint32 (1)) ;\n"
               "  return result ;\n"
               "}\n\n" ;

//--- 'reader_hasKey' method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << aNomTable << "::reader_hasKey (const GGS_" << mKeyTypeName << " & inKey) const {\n"
               "  return GGS_bool (isBuilt (), internal_has_key ((void *) & inKey)) ;\n"
               "}\n\n" ;

//--- 'internalInsertForDuplication' method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::internalInsertForDuplication (AC_galgas_map_element * inPtr) {\n"
               "  M_assert (reinterpret_cast <element_type *> (inPtr) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  element_type * p = (element_type *) inPtr ;\n"
               "  bool extension = false ; // Unused here\n"
               "  sint32 index = -1 ; // Unused here\n"
               "  internalInsert ((void * ) & p->mKey, (void *) & p->mInfo, mRoot, extension, index) ;\n"
               "}\n\n" ;

//--- 'insertElement' method
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::\n"
               "insertElement (C_lexique & inLexique,\n"
               "               const char * inErrorMessagesArray [],\n"
               "               const GGS_" << mKeyTypeName << " & inKey,\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
  sint32 index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "               const " ;
    current->mAttributType()->generateFormalParameter (inCppFile, true) ;
    inCppFile << " inParameter" << index << ",\n" ;
    index ++ ;
    current = current->getNextItem () ;
  }
  inCppFile << "               GGS_luint * outIndex) {\n"
            << "  sint32 index = - 1 ;\n"
            << "  if (isBuilt () && inKey.isBuilt ()" ;
  for (sint32 i=0 ; i<mNonExternAttributesList.getCount () ; i++) {
    inCppFile << "\n                 && inParameter" << i << ".isBuilt ()" ;
  }      
  inCppFile << ") {\n"
               "     insulateMap () ;\n"
             << "    e_" << aNomTable << " info  ;\n" ;
  current = mNonExternAttributesList.getFirstItem () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    info." << current->aNomAttribut << " = inParameter" << index << " ;\n" ;
    index ++ ;
    current = current->getNextItem () ;
  }
  inCppFile << "    bool extension = false ; // Unused here\n"
               "    internalInsert ((void * ) & inKey, (void *) & info, mRoot, extension, index) ;\n"
               "    if (index < 0) {\n"
               "      C_string keyString ;\n"
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
               "searchElement (C_lexique & inLexique,\n"
               "               const char * inErrorMessagesArray [],\n"
               "               const GGS_" << mKeyTypeName << " & inKey,\n" ;
  current = mNonExternAttributesList.getFirstItem () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "               " ;
    current->mAttributType()->generateFormalParameter (inCppFile, false) ;
    inCppFile << " * outParameter" << index << ",\n" ;
    index ++ ;
    current = current->getNextItem () ;
  }
  inCppFile << "               GGS_luint * outIndex) {\n"
               "  element_type * node = NULL  ;\n"
               "  if (isBuilt () && inKey.isBuilt ()) {\n"
               "    AC_galgas_map_element * p = internal_search ((void *) & inKey) ;\n"
               "    M_assert ((p == NULL) || (reinterpret_cast <element_type *> (p) != NULL), \"Dynamic cast error\", 0, 0) ;\n"
               "    node = (element_type *) p ;\n"
               "    if (node == NULL) {\n"
               "      C_string keyString ;\n"
               "      keyString << inKey ;\n"
               "      buildMapSemanticErrorMessage (inLexique, inKey, inErrorMessagesArray, keyString) ;\n"
               "    }\n"
               "  }\n"
               "  if (node == NULL) {\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.getCount () ; i++) {
      inCppFile << "    if (outParameter" << i << " != NULL) {\n"
                   "      outParameter" << i << "->drop_operation () ;\n"
                   "    }\n" ;
    }
    inCppFile << "    if (outIndex != NULL) {\n"
                 "      outIndex->drop_operation () ;\n"
                 "     }\n"
                 "  }else{\n" ;
  current = mNonExternAttributesList.getFirstItem () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    if (outParameter" << index << " != NULL) {\n"
                 "      * outParameter" << index << " = node->mInfo." << current->aNomAttribut << " ;\n"
                 "    }\n" ;
    index ++ ;
    current = current->getNextItem () ;
  }
  inCppFile << "    if (outIndex != NULL) {\n"
               "      * outIndex = GGS_luint (GGS_uint (true, (uint32) node->mIndex), inKey) ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;

//--- Implement search routines
  GGS_typeTableMethodesInsererChercher::element_type * methodeCourante = aTableMethodesChercher.getFirstItem () ;
  while (methodeCourante != NULL) {
    macroValidPointer (methodeCourante) ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "void " 
              << methodeCourante->mKey << "_" << aNomTable
              << " (C_lexique & inLexique"
                 ",\n                                GGS_" << aNomTable << " & ioMap"
                 ",\n                                const GGS_" << mKeyTypeName << " & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inCppFile, false) ;
      inCppFile << " * outParameter" << index ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inCppFile << ",\n                                GGS_luint * outIndex) {\n"
                 "  const char * kErrorMessage [] = {" ;
    GGS_L_stringList::element_type * currentMessage = methodeCourante->mInfo.mErrorMessageList.getFirstItem () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.getString ()) ;
      inCppFile << ",\n                                   " ;
      currentMessage = currentMessage->getNextItem () ;
    }
    inCppFile << "NULL} ;\n"
                 "  ioMap.searchElement (inLexique,\n"
                 "                       kErrorMessage,\n"
                 "                       inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.getCount () ; i++) {
      inCppFile << "                       outParameter" << i << ",\n" ;
    }
    inCppFile << "                       outIndex) ;\n"
              << "}\n\n" ;
    methodeCourante = methodeCourante->getNextItem () ;
  }

//--- Implement insert routines
  methodeCourante = aTableMethodesInserer.getFirstItem () ;
  while (methodeCourante != NULL) {
    macroValidPointer (methodeCourante) ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "void "
              << methodeCourante->mKey << "_" << aNomTable
              << " (C_lexique & lexique_var_"
                 ",\n                                GGS_" << aNomTable << " & ioMap"
                 ",\n                                const GGS_" << mKeyTypeName << " & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inCppFile, true) ;
      inCppFile << "inParameter" << index ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inCppFile << ",\n                                GGS_luint * outIndex) {\n"
                 "  const char * kErrorMessage [] = {" ;
    GGS_L_stringList::element_type * currentMessage = methodeCourante->mInfo.mErrorMessageList.getFirstItem () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.getString ()) ;
      inCppFile << ",\n                                   " ;
      currentMessage = currentMessage->getNextItem () ;
    }
    inCppFile << "NULL} ;\n"
                 "  ioMap.insertElement (lexique_var_,\n"
                 "                       kErrorMessage,\n"
                 "                       inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.getCount () ; i++) {
      inCppFile << "                       inParameter" << i << ",\n" ;
    }
    inCppFile << "                       outIndex) ;\n"
                 "}\n\n" ;
    methodeCourante = methodeCourante->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateHdeclarations_2 (AC_output_stream & /* inHfile */,
                         const C_string & /* inLexiqueClassName */,
                         C_lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateHdeclarations (AC_output_stream & inHfile,
                       const C_string & /* inLexiqueClassName */,
                       C_lexique & /* inLexique */) {
  inHfile.writeTitleComment (C_string ("class map element 'e_") + aNomTable + "'") ;

//--- Début de la déclaration de la classe table
  inHfile << "class e_" << aNomTable << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType()->generatePublicDeclaration (inHfile, current->aNomAttribut) ;
    current = current->getNextItem () ;
  }
  
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;

//--- declarer methode 'isBuilt'
  inHfile << "  public : bool isBuilt (void) const ;\n"
             "} ;\n\n" ; //--- Fin de la déclaration de la classe e_...

// ---------------------- declaration de la classe table -----------------
  inHfile.writeTitleComment (C_string ("map '") + aNomTable + "'") ;

  inHfile << "typedef "  << aNomClasseGenerique
          << " <e_" << aNomTable << ", GGS_" << mKeyTypeName << "> "
             "GGS_" << aNomTable << " ;\n" ;

//--- Declaring search methods
  GGS_typeTableMethodesInsererChercher::element_type * methodeCourante = aTableMethodesChercher.getFirstItem () ;
  while (methodeCourante != NULL) {
    macroValidPointer (methodeCourante) ;
    inHfile << "\n"
               "void " 
            << methodeCourante->mKey << "_" << aNomTable
            << " (C_lexique & inLexique"
               ",\n                                GGS_" << aNomTable << " & ioMap"
               ",\n                                const GGS_" << mKeyTypeName << " & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inHfile, false) ;
      inHfile << " * outParameter" << index ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inHfile << ",\n                                GGS_luint * outIndex) ;\n" ;
    methodeCourante = methodeCourante->getNextItem () ;
  }

//--- Declaring insert methods
  methodeCourante = aTableMethodesInserer.getFirstItem () ;
  while (methodeCourante != NULL) {
    macroValidPointer (methodeCourante) ;
    inHfile << "\n"
               "void "
            << methodeCourante->mKey << "_" << aNomTable
            << " (C_lexique & inLexique" 
               ",\n                                GGS_" << aNomTable << " & ioMap"
               ",\n                                const GGS_" << mKeyTypeName << " & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inHfile << ",\n                                GGS_luint * outIndex) ;\n" ;
    methodeCourante = methodeCourante->getNextItem () ;
  }
  inHfile << '\n' ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDefinitionTableAimplementer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer
::generateCppClassDeclaration (AC_output_stream & /*inHfile */,
                               const C_string & /* inLexiqueClassName */,
                               const C_string & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer
::generateCppClassImplementation (AC_output_stream & inCppFile,
                                  const C_string & /* inLexiqueClassName */,
                                  const C_string & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) {
  inCppFile.writeTitleComment (C_string ("class map element 'e_") + aNomTable + "'") ;

//--- Instanciate the template
  inCppFile << "template class "
            << aNomClasseGenerique
            << " <e_" << aNomTable << ", GGS_" << mKeyTypeName << "> ;\n\n" ;

//--- Engendrer l'implémentation de la methode 'isBuilt' de l'élément de table
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "bool e_" << aNomTable << "::isBuilt (void) const {\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
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
      current = current->getNextItem () ;
    }
    inCppFile << " ;\n" ;
  }
  inCppFile << "}\n\n" ;

//--------------------- ENGENDRER LA CLASSE TABLE ----------------------------
  inCppFile.writeTitleComment (C_string ("Map '") + aNomTable + "'") ;

//--- Implementing search methods
  GGS_typeTableMethodesInsererChercher::element_type * methodeCourante = aTableMethodesChercher.getFirstItem () ;
  bool firstRoutine = true ;
  while (methodeCourante != NULL) {
    if (firstRoutine) {
      firstRoutine = false ;
    }else{
      inCppFile.writeHyphenLineComment () ;
    }
    macroValidPointer (methodeCourante) ;
    inCppFile << "void " 
              << methodeCourante->mKey << "_" << aNomTable
              << " (C_lexique & inLexique"
                 ",\n                                GGS_" << aNomTable << " & ioMap"
                 ",\n                                const GGS_" << mKeyTypeName << " & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType()->generateFormalParameter (inCppFile, false) ;
      inCppFile << " * outParameter" << index ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inCppFile << ",\n                                GGS_luint * outIndex) {\n" ;
  //--- Insérer les messages d'erreur
    sint32 messageNumber = 0 ;
    GGS_L_stringList::element_type * currentMessage = methodeCourante->mInfo.mErrorMessageList.getFirstItem () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile << "  const char * errorMessage_" << messageNumber  << " = " ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.getString ()) ;
      inCppFile << " ;\n" ;
      currentMessage = currentMessage->getNextItem () ;
      messageNumber ++ ;
    }
    inCppFile << "  GGS_" << aNomTable << "::element_type * info = ioMap."
              << methodeCourante->mKey << " (inLexique, inKey" ;
    for (sint32 i=0 ; i<messageNumber ; i++) {
      inCppFile << ", errorMessage_" << i ;
    }
    inCppFile << ") ;\n"
                 "  if (info == NULL) {\n" ;
    current = mNonExternAttributesList.getFirstItem () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    if (outParameter" << index << " != NULL) {\n"
                   "      outParameter" << index << "->drop_operation () ;\n"
                   "    }\n" ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inCppFile << "    if (outIndex != NULL) {\n"
                 "      outIndex->drop_operation () ;\n"
                 "    }\n"
                 "  }else{\n" ;
    current = mNonExternAttributesList.getFirstItem () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    if (outParameter" << index << " != NULL) {\n"
                   "      * outParameter" << index << " = info->mInfo." << current->aNomAttribut << " ;\n"
                   "    }\n" ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inCppFile << "    if (outIndex != NULL) {\n"
                 "      * outIndex = GGS_luint (GGS_uint (true, (uint32) info->mEntryIndex), inKey) ;\n"
                 "    }\n"
                 "  }\n"
                 "}\n\n" ;
    methodeCourante = methodeCourante->getNextItem () ;
  }

//--- Implémentation des methodes d'insertion
  methodeCourante = aTableMethodesInserer.getFirstItem () ;
  while (methodeCourante != NULL) {
    macroValidPointer (methodeCourante) ;
    if (firstRoutine) {
      firstRoutine = false ;
    }else{
      inCppFile.writeHyphenLineComment () ;
    }
    inCppFile << "void "
              << methodeCourante->mKey << "_" << aNomTable
              << " (C_lexique & lexique_var_"
                 ",\n                                GGS_" << aNomTable << " & ioMap"
                 ",\n                                const GGS_" << mKeyTypeName << " & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.getFirstItem () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType()->generateFormalParameter (inCppFile, true) ;
      inCppFile << " inParameter" << index ;
      index ++ ;
      current = current->getNextItem () ;
    }
    inCppFile << ",\n                                GGS_luint * outIndex) {\n" ;
    sint32 messageNumber = 0 ;
    GGS_L_stringList::element_type * currentMessage = methodeCourante->mInfo.mErrorMessageList.getFirstItem () ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      inCppFile << "  const char * kErrorMessage_" << messageNumber  << " = " ;
      inCppFile.writeCstringConstant (currentMessage->mErrorMessageElement.getString ()) ;
      inCppFile << " ;\n" ;
      currentMessage = currentMessage->getNextItem () ;
      messageNumber ++ ;
    }
    inCppFile << "  e_" << aNomTable << " info ;\n" ;
    current = mNonExternAttributesList.getFirstItem () ;
    sint32 numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "  info." << current->aNomAttribut << " = inParameter" << numeroVariable << " ;\n" ;
      numeroVariable ++ ;
      current = current->getNextItem () ;
    }
    inCppFile << "  const sint32 index = ioMap." << methodeCourante->mKey << " (lexique_var_, info, inKey" ;
    for (sint32 i=0 ; i<methodeCourante->mInfo.mErrorMessageList.getCount () ; i++) {
      inCppFile << ", kErrorMessage_" << i ;
    }
    inCppFile << ") ;\n"
              << "  if (outIndex != NULL) {\n"
              << "    * outIndex = GGS_luint (GGS_uint (index >= 0, (uint32) index), inKey) ;\n"
              << "  }\n"
              << "}\n\n" ;
    methodeCourante = methodeCourante->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*
