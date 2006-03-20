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

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Map Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) const {
  inHfile.writeCTitleComment (C_String ("Element of map '@") + aNomTable + "'") ;
//--- Starting map element class declaration
  inHfile << "class e_" << aNomTable << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generatePublicDeclaration (inHfile, current->aNomAttribut) ;
    current = current->nextObject () ;
  }
  
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;

  inHfile << "} ;\n\n" ; //--- End of map element class declaration e_...
  inHfile.writeCHyphenLineComment () ;
  inHfile << "class elementOf_GGS_" << aNomTable << " : public AC_galgas_map_element {\n"
             "//--- Constructor\n"
             "  public : elementOf_GGS_" << aNomTable << " (const GGS_lstring & inKey,\n"
             "                                    const sint32 inIndex,\n"
             "                                     const e_" << aNomTable << " & inInfo) ;\n"
             "//--- Get pointers\n"
             "  public : inline elementOf_GGS_" << aNomTable << " * nextObject (void) const { return (elementOf_GGS_" << aNomTable << " *) mNextItem ; }\n"
             "  public : inline elementOf_GGS_" << aNomTable << " * infObject (void) const { return (elementOf_GGS_" << aNomTable << " *) mInfPtr ; }\n"
             "  public : inline elementOf_GGS_" << aNomTable << " * supObject (void) const { return (elementOf_GGS_" << aNomTable << " *) mSupPtr ; }\n"
             "//--- Data member\n"
             "  public : e_" << aNomTable << " mInfo ;\n"
             "//--- Method for 'description' reader\n"
             "  public : void appendForMapDescription (C_String & ioString) const ;\n"
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << aNomTable << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) const {
  inHfile.writeCTitleComment (C_String ("Map '@") + aNomTable + "'") ;

  inHfile << "class elementOf_GGS_" << aNomTable << " ;\n\n" ;
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
  inHfile << "//--- Element Class\n"
             "  public : typedef elementOf_GGS_" << aNomTable << " element_type ;\n"
             "//--- Get pointers\n"
             "  public : inline element_type * rootObject (void) const { return (element_type *) mRoot ; }\n"
             "  public : inline element_type * firstObject (void) const { return (element_type *) mFirstItem ; }\n"
             "  public : inline element_type * lastObject (void) const { return (element_type *) mLastItem ; }\n"
             "//--- Create a new element\n"
             "  protected : virtual AC_galgas_map_element * new_element (const GGS_lstring & inKey, void * inInfo) ;\n"
             "//--- Get object pointer (for method call)\n"
             "  public : inline GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) { return this ; }\n"
             "//--- 'empty' constructor\n"
             "  public : static GGS_" << aNomTable << " constructor_empty (LOCATION_ARGS) ;\n"
             "//--- Method used for duplicate a map\n"
             "  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;\n" ;
//--- Declaring insert methods
  GGS_insertOrSearchMethodList::element_type * currentMethod = mInsertMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mMethodName << "' Insert Method\n" ;
    inHfile <<    "  public : void methode_"
            << currentMethod->mMethodName
            << " (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inHfile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * currentAttribute = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      inHfile << ",\n                                const " ;
      currentAttribute->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      currentAttribute = currentAttribute->nextObject () ;
    }
    inHfile << ") ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
//--- Declaring search methods
  currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mMethodName << "' Search Method\n"
               "  public : void methode_" 
            << currentMethod->mMethodName
            << " (C_Lexique & inLexique"
            << ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inHfile <<  ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
  inHfile << "//--- Internal method for inserting an element\n"
             "  protected : void insertElement (C_Lexique & inLexique,\n"
             "                                  const char * inErrorMessage,\n"
             "                                  const GGS_lstring & inKey,\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint32 index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "                                  const " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile << "& inParameter" << index << ",\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inHfile << "                                  GGS_luint * outIndex) ;\n" ;
  inHfile << "//--- Internal method for searching for an element\n"
             "  protected : void searchElement (C_Lexique & inLexique,\n"
             "                                  const char * inErrorMessage,\n"
             "                                  const GGS_lstring & inKey,\n" ;
  current = mNonExternAttributesList.firstObject () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "                                  " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile << "& outParameter" << index << ",\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inHfile << "                                  GGS_luint * outIndex) ;\n"
//--- Generate 'description' reader declaration
              "  public : GGS_string reader_description (void) const ;\n"
//--- End of class Declaration
              "} ;\n\n" ;
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
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateCppClassImplementation (AC_OutputStream & inCppFile,
                                const C_String & /* inLexiqueClassName */,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  inCppFile.writeCTitleComment (C_String ("class map '") + aNomTable + "'") ;

//--- Constructor for type element
  inCppFile << "elementOf_GGS_" << aNomTable << "::\n"
               "elementOf_GGS_" << aNomTable << " (const GGS_lstring & inKey,\n"
               "              const sint32 inIndex,\n"
               "              const e_" << aNomTable << " & inInfo) :\n"
               "AC_galgas_map_element (inKey, inIndex),\n"
               "mInfo (inInfo) {\n"
               "}\n\n" ;

//--- Method for 'reader' element
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "void elementOf_GGS_" << aNomTable << "::\n"
               "appendForMapDescription (C_String & ioString) const {\n"
               "  ioString << \"[\"\n"
               "           << mKey.reader_description () ;\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  if (current != NULL) {
    inCppFile << "  ioString << \"->\" ;\n" ;
  }
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "  ioString << mInfo." << current->aNomAttribut << ".reader_description () ;\n" ;
    current = current->nextObject () ;
  }
  inCppFile << "  ioString << \"]\" ;\n"
               "}\n\n" ;

//--- 'new_element' method
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "AC_galgas_map_element * GGS_" << aNomTable << "::\n"
               "new_element (const GGS_lstring & inKey, void * inInfo) {\n"
               "  MF_Assert (reinterpret_cast <e_" << aNomTable << " *> (inInfo) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  AC_galgas_map_element * p = NULL ;\n"
               "  e_" << aNomTable << " * info = (e_" << aNomTable << " *) inInfo ;\n"
               "  macroMyNew (p, element_type (inKey, count (), * info)) ;\n"
               "  return p ;\n"
               "}\n\n" ;

//--- 'constructor_empty' static method
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::constructor_empty (UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomTable << " result ;\n"
               "  macroMyNew (result.mReferenceCountPtr, sint32 (1)) ;\n"
               "  return result ;\n"
               "}\n\n" ;

//--- 'internalInsertForDuplication' method
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::internalInsertForDuplication (AC_galgas_map_element * inPtr) {\n"
               "  MF_Assert (reinterpret_cast <element_type *> (inPtr) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  element_type * p = (element_type *) inPtr ;\n"
               "  bool extension = false ; // Unused here\n"
               "  sint32 index = -1 ; // Unused here\n"
               "  GGS_location existingKeyLocation ; // Unused here\n"
               "  internalInsert (p->mKey, (void *) & p->mInfo, mRoot, extension, index, existingKeyLocation) ;\n"
               "}\n\n" ;

//--- 'insertElement' method
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::\n"
               "insertElement (C_Lexique & inLexique,\n"
               "               const char * inErrorMessage,\n"
               "               const GGS_lstring & inKey,\n" ;
  current = mNonExternAttributesList.firstObject () ;
  sint32 index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "               const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << " inParameter" << index << ",\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "               GGS_luint * outIndex) {\n"
               "  sint32 index = - 1 ;\n"
               "  if (isBuilt () && inKey.isBuilt ()) {\n"
               "    insulateMap () ;\n"
               "    e_" << aNomTable << " info  ;\n" ;
  current = mNonExternAttributesList.firstObject () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    info." << current->aNomAttribut << " = inParameter" << index << " ;\n" ;
    index ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    bool extension = false ; // Unused here\n"
               "    GGS_location existingKeyLocation ;\n"
               "    internalInsert (inKey, (void *) & info, mRoot, extension, index, existingKeyLocation) ;\n"
               "    if (index < 0) {\n"
               "      emitInsertMapSemanticErrorMessage (inLexique, inKey, inErrorMessage, existingKeyLocation) ;\n"
               "     }\n"
               "  }\n"
               "  if (outIndex != NULL) {\n"
               "    * outIndex = GGS_luint (GGS_uint (index >= 0, (uint32) index), inKey) ;\n"
               "  }\n"
               "}\n\n" ;

//--- 'searchElement' method
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::\n"
               "searchElement (C_Lexique & inLexique,\n"
               "               const char * inErrorMessage,\n"
               "               const GGS_lstring & inKey,\n" ;
  current = mNonExternAttributesList.firstObject () ;
  index = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "               " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, false) ;
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
               "      emitMapSemanticErrorMessage (inLexique, inKey, inErrorMessage) ;\n"
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
  GGS_insertOrSearchMethodList::element_type * currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCHyphenLineComment () ;
    inCppFile << "void GGS_" 
              << aNomTable << "::methode_" << currentMethod->mMethodName
              << " (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n" ;
    inCppFile << "  searchElement (inLexique,\n"
                 "                 " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << ",\n"
                 "                 inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                 outParameter" << i << ",\n" ;
    }
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << "                 & outIndex) ;\n" ;
    }else{
      inCppFile << "                 NULL) ;\n" ;
    }
    inCppFile << "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Implement insert routines
  currentMethod = mInsertMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCHyphenLineComment () ;
    inCppFile << "void GGS_"
              << aNomTable << "::methode_" << currentMethod->mMethodName
              << " (C_Lexique & lexique_var_"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n"
                 "  insertElement (lexique_var_,\n"
                 "                 " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << ",\n"
                 "                 inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                 inParameter" << i << ",\n" ;
    }
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << "                 & outIndex) ;\n" ;
    }else{
      inCppFile << "                 NULL) ;\n" ;
    }
    inCppFile << "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Implement reader 'description'
  inCppFile << "GGS_string GGS_" << aNomTable << "::reader_description (void) const {\n"
               "  C_String s ;\n"
               "  s << \"<map @" << aNomTable << " \" ;\n"
               "  if (isBuilt ()) {\n"
               "    s << count () << \" object\" << ((count () > 1) ? \"s \" : \" \") ;\n"
               "    element_type * p = firstObject () ;\n"
               "    while (p != NULL) {\n"
               "      macroValidPointer (p) ;\n"
               "      p->appendForMapDescription (s) ;\n"
               "      p = p->nextObject () ;\n"
               "    }\n"
               "  }else{\n"
               "    s << \" not built\" ;\n"
               "  }\n"
               "  s << \">\\n\" ;\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Old Style Map Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << aNomTable << " ;\n"
             "#include \"" << aNomClasseGenerique << ".h\"\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) const {
  inHfile.writeCTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

//--- Debut de la declaration de la classe table
  inHfile << "class e_" << aNomTable << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generatePublicDeclaration (inHfile, current->aNomAttribut) ;
    current = current->nextObject () ;
  }
  
//--- declaration des attributs externes
  generateExternAttributesDeclaration (mExternAttributesList, inHfile) ;

  inHfile << "//--- Method for 'description' reader\n"
             "  public : void appendForMapDescription (C_String & ioString) const ;\n"
             "} ;\n\n" ; //--- Fin de la declaration de la classe e_...

// ---------------------- declaration de la classe table -----------------
  inHfile.writeCTitleComment (C_String ("Map '") + aNomTable + "'") ;

  inHfile << "class GGS_" << aNomTable << " : public "  << aNomClasseGenerique
          << " <e_" << aNomTable << "> {\n"
             "//--- Get object pointer\n"
             "  public : inline GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) { return this ; }\n"
             "//--- Handle 'empty' constructor\n"
             "  public : static GGS_" << aNomTable << " constructor_empty (LOCATION_ARGS) ;\n" ;

//--- Declaring search methods
  GGS_insertOrSearchMethodList::element_type * currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mMethodName << "' search method\n"
               "public : void methode_" 
            << currentMethod->mMethodName
            << " (C_Lexique & inLexique"
               ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    inHfile << "public : void methode_" 
            << currentMethod->mMethodName
            << "GetIndex (C_Lexique & inLexique"
               ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Declaring insert methods
  currentMethod = mInsertMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//---\n"
               "public : void methode_"
            << currentMethod->mMethodName
            << " (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    inHfile << "public : void methode_"
            << currentMethod->mMethodName
            << "GetIndex (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
//--- Generate 'description' reader declaration
  inHfile << "  public : GGS_string reader_description (void) const ;\n"
             "} ;\n\n" ;
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
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
  inCppFile.writeCTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

  inCppFile << "#include \"" << aNomClasseGenerique << ".hh\"\n\n" ;
  inCppFile.writeCHyphenLineComment () ;

//--- Instanciate the template
  inCppFile << "template class "
            << aNomClasseGenerique
            << " <e_" << aNomTable << "> ;\n\n" ;


//--------------------- ENGENDRER LA CLASSE TABLE ----------------------------
  inCppFile.writeCTitleComment (C_String ("Map '") + aNomTable + "'") ;

  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::constructor_empty (UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomTable << " t ;\n"
               "  t.build () ;\n"
               "  return t ;\n"
               "}\n\n" ;

//--- Implementing search methods
  GGS_insertOrSearchMethodList::element_type * currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::methode_" 
              << currentMethod->mMethodName
              << " (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n" ;
  //--- Inserer les messages d'erreur
    inCppFile << "  GGS_" << aNomTable << "::element_type * info = "
              << currentMethod->mMethodName << " (inLexique, inKey, inKey, " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
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
    inCppFile.writeCHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::methode_" 
              << currentMethod->mMethodName
              << "GetIndex (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n" ;
    inCppFile << "  GGS_" << aNomTable << "::element_type * info = "
              << currentMethod->mMethodName << " (inLexique, inKey, inKey, " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
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
  currentMethod = mInsertMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::methode_"
              << currentMethod->mMethodName
              << " (C_Lexique & lexique_var_"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << " inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n" ;
    inCppFile << "  e_" << aNomTable << " info ;\n" ;
    current = mNonExternAttributesList.firstObject () ;
    sint32 numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "  info." << current->aNomAttribut << " = inParameter" << numeroVariable << " ;\n" ;
      numeroVariable ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  " << currentMethod->mMethodName << " (lexique_var_, info, inKey, inKey, " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << ") ;\n"
              << "}\n\n" ;
    inCppFile.writeCHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::methode_"
              << currentMethod->mMethodName
              << "GetIndex (C_Lexique & lexique_var_"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    index = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << " inParameter" << index ;
      index ++ ;
      current = current->nextObject () ;
    }
    inCppFile << ") {\n" ;
    inCppFile << "  e_" << aNomTable << " info ;\n" ;
    current = mNonExternAttributesList.firstObject () ;
    numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "  info." << current->aNomAttribut << " = inParameter" << numeroVariable << " ;\n" ;
      numeroVariable ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  const sint32 index = " << currentMethod->mMethodName << " (lexique_var_, info, inKey, inKey, " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << ") ;\n"
              << "  outIndex = GGS_luint (GGS_uint (index >= 0, (uint32) index), inKey) ;\n"
              << "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Implement reader 'description'
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << aNomTable << "::reader_description (void) const {\n"
               "  C_String s ;\n"
               "  s << \"<map @" << aNomTable << " \" ;\n"
               "  if (isBuilt ()) {\n"
               "    s << count () << \" object\" << ((count () > 1) ? \"s\" : \"\") ;\n"
               "  }else{\n"
               "    s << \"not built\" ;\n"
               "  }\n"
               "  s << \">\\n\" ;\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;

}

//---------------------------------------------------------------------------*
