//---------------------------------------------------------------------------*
//                                                                           *
//  Generate map declaration and implementation                              *
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
  #pragma mark Map Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) const {
  inHfile.writeCppTitleComment (C_String ("Element of map '@") + aNomTable + "'") ;
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
  inHfile.writeCppHyphenLineComment () ;
  inHfile << "class elementOf_GGS_" << aNomTable << " : public AC_galgas_map_element {\n"
             "//--- Constructor\n"
             "  public : elementOf_GGS_" << aNomTable << " (const GGS_lstring & inKey,\n"
             "                                     const sint32 inIndex,\n"
             "                                     const e_" << aNomTable << " & inInfo) ;\n"
             "//--- Get pointers\n"
             "  public : inline elementOf_GGS_" << aNomTable << " * nextObject (void) const { return (elementOf_GGS_" << aNomTable << " *) mNextItem ; }\n"
             "  public : inline elementOf_GGS_" << aNomTable << " * infObject (void) const { return (elementOf_GGS_" << aNomTable << " *) mInfPtr ; }\n"
             "  public : inline elementOf_GGS_" << aNomTable << " * supObject (void) const { return (elementOf_GGS_" << aNomTable << " *) mSupPtr ; }\n"
             "//--- Comparison\n"
             "  protected : virtual bool isEqualToMapElement (const AC_galgas_map_element * inOperand) const ;\n"
             "//--- Data member\n"
             "  public : e_" << aNomTable << " mInfo ;\n"
             "//--- Method for 'description' reader\n"
             "  public : void appendForMapDescription (C_Lexique & _inLexique,\n"
             "                                         const sint32 inElementIndex,\n"
             "                                         C_String & ioString,\n"
             "                                         const sint32 inIndentation\n"
             "                                         COMMA_LOCATION_ARGS) const ;\n"
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
  inHfile.writeCppTitleComment (C_String ("Map '@") + aNomTable + "'") ;

  inHfile << "class elementOf_GGS_" << aNomTable << " ;\n\n" ;
  inHfile << "class GGS_" << aNomTable << " : public AC_galgas_map {\n" ;
  inHfile << "//--- Element Class\n"
             "  public : typedef elementOf_GGS_" << aNomTable << " element_type ;\n"
             "//--- Get pointers\n"
             "  public : inline element_type * rootObject (void) const { return (element_type *) internalRootObject () ; }\n"
             "  public : inline element_type * firstObject (void) const { return (element_type *) internalFirstObject () ; }\n"
             "  public : inline element_type * lastObject (void) const { return (element_type *) internalLastObject () ; }\n"
             "//--- Comparison methods\n"
             "  public : GGS_bool operator == (const GGS_" << aNomTable << " & inOperand) const ;\n"
             "  public : GGS_bool operator != (const GGS_" << aNomTable << " & inOperand) const ;\n"
             "//--- Create a new element\n"
             "  protected : virtual AC_galgas_map_element * new_element (const GGS_lstring & inKey, void * inInfo) ;\n"
             "//--- Get object pointer (for method call)\n"
             "  public : inline GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) { return this ; }\n"
             "  public : inline const GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) const { return this ; }\n"
             "//--- 'emptyMap' constructor\n"
             "  public : static GGS_" << aNomTable << " constructor_emptyMap (C_Lexique & inLexique COMMA_LOCATION_ARGS) ;\n"
             "//--- Method used for duplicate a map\n"
             "  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;\n" ;

//--- Declaring remove methods
  GGS_insertOrSearchMethodList::element_type * currentMethod = mRemoveMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mMethodName << "' Remove Modifier\n" ;
    inHfile <<    "  public : void modifier_"
            << currentMethod->mMethodName
            << " (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inHfile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * currentAttribute = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      inHfile << ",\n                                " ;
      currentAttribute->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << "outParameter" << attributeIndex ;
      attributeIndex ++ ;
      currentAttribute = currentAttribute->nextObject () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
//--- Declaring insert methods
  currentMethod = mInsertMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mMethodName << "' Insert Modifier\n" ;
    inHfile <<    "  public : void modifier_"
            << currentMethod->mMethodName
            << " (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inHfile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * currentAttribute = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      inHfile << ",\n                                const " ;
      currentAttribute->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << attributeIndex ;
      attributeIndex ++ ;
      currentAttribute = currentAttribute->nextObject () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
//--- Declaring search methods
  currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mMethodName << "' Search Method\n"
               "  public : void method_" 
            << currentMethod->mMethodName
            << " (C_Lexique & inLexique"
            << ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inHfile <<  ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) const ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

  if (mRemoveMethodList.firstObject () != NULL) {
    inHfile << "//--- Internal method for removing an element\n"
               "  protected : void _removeElement (C_Lexique & inLexique,\n"
               "                                   const char * inErrorMessage,\n"
               "                                   const GGS_lstring & inKey,\n" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << "                                   " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << "outParameter" << attributeIndex << ",\n" ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inHfile << "                                   GGS_luint * outIndex\n"
               "                                   COMMA_LOCATION_ARGS) ;\n" ;
  }

  inHfile << "//--- Internal method for inserting an element\n"
             "  protected : void _insertElement (C_Lexique & inLexique,\n"
             "                                   const char * inErrorMessage,\n"
             "                                   const GGS_lstring & inKey,\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  sint32 attributeIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "                                   const " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile << "& inParameter" << attributeIndex << ",\n" ;
    attributeIndex ++ ;
    current = current->nextObject () ;
  }
  inHfile << "                                   GGS_luint * outIndex\n"
             "                                   COMMA_LOCATION_ARGS) ;\n" ;
  
  inHfile << "//--- Internal method for searching for an element\n"
             "  protected : void _searchElement (C_Lexique & inLexique,\n"
             "                                   const char * inErrorMessage,\n"
             "                                   const GGS_lstring & inKey,\n" ;
  current = mNonExternAttributesList.firstObject () ;
  attributeIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "                                   " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile << "& outParameter" << attributeIndex << ",\n" ;
    attributeIndex ++ ;
    current = current->nextObject () ;
  }
  inHfile << "                                   GGS_luint * outIndex\n"
             "                                   COMMA_LOCATION_ARGS) const ;\n"
//--- Generate 'description' reader declaration
             "  public : GGS_string reader_description (C_Lexique & _inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const sint32 inIndentation = 0) const ;\n"
//--- Generate 'mapWithMapToOverride' constructor declaration
              "  public : static GGS_" << aNomTable << " constructor_mapWithMapToOverride (C_Lexique & inLexique,\n"
              "                                            const GGS_" << aNomTable << " & inMapToOverride\n"
              "                                            COMMA_LOCATION_ARGS) ;\n"
//--- Generate 'overriddenMap' reader declaration
              "  public : GGS_" << aNomTable << " reader_overriddenMap (C_Lexique & inLexique\n"
              "                                            COMMA_LOCATION_ARGS) const ;\n"
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
  inCppFile.writeCppTitleComment (C_String ("class map '") + aNomTable + "'") ;

//--- Constructor for type element
  inCppFile << "elementOf_GGS_" << aNomTable << "::\n"
               "elementOf_GGS_" << aNomTable << " (const GGS_lstring & inKey,\n"
               "              const sint32 inIndex,\n"
               "              const e_" << aNomTable << " & inInfo) :\n"
               "AC_galgas_map_element (inKey, inIndex),\n"
               "mInfo (inInfo) {\n"
               "}\n\n" ;

//--- Method for 'reader' element
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void elementOf_GGS_" << aNomTable << "::\n"
               "appendForMapDescription (C_Lexique & _inLexique,\n"
               "                         const sint32 inElementIndex,\n"
               "                         C_String & ioString,\n"
               "                         const sint32 inIndentation\n"
               "                         COMMA_LOCATION_ARGS) const {\n"
               "  ioString << \"\\n\" ;\n"
               "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
               "  ioString << \"|-key \" << inElementIndex << \":\" << mKey.reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "  ioString << \"\\n\" ;\n"
                 "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
                 "  ioString << \"|-value \" << inElementIndex << \":\" << mInfo." << current->aNomAttribut << ".reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;\n" ;
    current = current->nextObject () ;
  }
  inCppFile << "}\n\n" ;

//--- 'new_element' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "bool elementOf_GGS_" << aNomTable << "::\n" ;
  current = mNonExternAttributesList.firstObject () ;
  if (current == NULL) {
    inCppFile << "isEqualToMapElement (const AC_galgas_map_element * /* inOperand */) const {\n"
                 "  return true ;\n" ;
  }else{
    inCppFile << "isEqualToMapElement (const AC_galgas_map_element * inOperand) const {\n"
                 "  const elementOf_GGS_" << aNomTable << " * _p = dynamic_cast <const elementOf_GGS_" << aNomTable << " *> (inOperand) ;\n"
                 "  macroValidPointer (_p) ;\n"
                 "  return " ;
    bool first = true ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (first) {
        first = false ;
      }else{
        inCppFile << "\n           && " ;
      }
      inCppFile << "(mInfo." << current->aNomAttribut << " == _p->mInfo." << current->aNomAttribut << ").boolValue ()" ;
      current = current->nextObject () ;
    }
    inCppFile << " ;\n" ;
  }
  inCppFile << "}\n\n" ;

//--- 'new_element' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "AC_galgas_map_element * GGS_" << aNomTable << "::\n"
               "new_element (const GGS_lstring & inKey, void * inInfo) {\n"
               "  MF_Assert (reinterpret_cast <e_" << aNomTable << " *> (inInfo) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  AC_galgas_map_element * p = NULL ;\n"
               "  e_" << aNomTable << " * info = (e_" << aNomTable << " *) inInfo ;\n"
               "  macroMyNew (p, element_type (inKey, nextIndex (), * info)) ;\n"
               "  return p ;\n"
               "}\n\n" ;

//--- 'constructor_emptyMap' static method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::\n"
               "constructor_emptyMap (C_Lexique & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomTable << " result ;\n"
               "  macroMyNew (result.mSharedMapRoot, cMapRoot) ;\n"
               "  return result ;\n"
               "}\n\n" ;

//--- Generate comparison
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << aNomTable << "::\n"
               "operator == (const GGS_" << aNomTable << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), isEqualToMap (inOperand)) ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << aNomTable << "::\n"
               "operator != (const GGS_" << aNomTable << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), ! isEqualToMap (inOperand)) ;\n"
               "}\n\n" ;

//--- 'internalInsertForDuplication' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::\n"
               "internalInsertForDuplication (AC_galgas_map_element * inPtr) {\n"
               "  MF_Assert (reinterpret_cast <element_type *> (inPtr) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  element_type * p = (element_type *) inPtr ;\n"
               "  bool extension = false ; // Unused here\n"
               "  sint32 attributeIndex = -1 ; // Unused here\n"
               "  GGS_location existingKeyLocation ; // Unused here\n"
               "  internalInsert (p->mKey, (void *) & p->mInfo, mSharedMapRoot->_mRoot, extension, attributeIndex, existingKeyLocation) ;\n"
               "}\n\n" ;

//--- 'removeElement' method
  if (mRemoveMethodList.firstObject () != NULL) {
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::\n"
                 "_removeElement (C_Lexique & inLexique,\n"
                 "                const char * inErrorMessage,\n"
                 "                const GGS_lstring & inKey,\n" ;
    current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "                " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "outParameter" << attributeIndex << ",\n" ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "                GGS_luint * outIndex\n"
                 "                COMMA_LOCATION_ARGS) {\n"
                 "  AC_galgas_map_element * removedElement = NULL ;\n"
                 "  sint32 elementIndex = - 1 ;\n"
                 "  if (_isBuilt () && inKey._isBuilt ()) {\n"
                 "    bool unused ;\n"
                 "    _internalRemove (mSharedMapRoot->_mRoot, inKey, removedElement, unused) ;\n"
                 "    if (removedElement == NULL) {\n"
                 "      emitMapSemanticErrorMessage (inLexique, inKey, inErrorMessage COMMA_THERE) ;\n" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "      outParameter" << attributeIndex << "._drop_operation () ;\n" ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "    }else{\n"
                 "      element_type * _p = (element_type *) removedElement ;\n"
                 "      elementIndex = _p->mIndex ;\n" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "      outParameter" << attributeIndex << " = _p->mInfo." << current->aNomAttribut << " ;\n" ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "    }\n"
                 "  }\n"
                 "  if (outIndex != NULL) {\n"
                 "    * outIndex = GGS_luint (GGS_uint (elementIndex >= 0, (uint32) elementIndex), inKey) ;\n"
                 "  }\n"
                 "  macroMyDelete (removedElement, element_type) ;\n"
                 "}\n\n" ;
  }

//--- '_insertElement' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::\n"
               "_insertElement (C_Lexique & inLexique,\n"
               "                const char * inErrorMessage,\n"
               "                const GGS_lstring & inKey,\n" ;
  current = mNonExternAttributesList.firstObject () ;
  sint32 attributeIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "                const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "inParameter" << attributeIndex << ",\n" ;
    attributeIndex ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "                GGS_luint * outIndex\n"
               "                COMMA_LOCATION_ARGS) {\n"
               "  sint32 elementIndex = - 1 ;\n"
               "  if (_isBuilt ()\n" ;
  current = mNonExternAttributesList.firstObject () ;
  attributeIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "   && inParameter" << attributeIndex << "._isBuilt ()\n" ;
    attributeIndex ++ ;
    current = current->nextObject () ;
  }
  inCppFile<<  "   && inKey._isBuilt ()) {\n"
               "    insulateMap () ;\n"
               "    e_" << aNomTable << " info  ;\n" ;
  current = mNonExternAttributesList.firstObject () ;
  attributeIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    info." << current->aNomAttribut << " = inParameter" << attributeIndex << " ;\n" ;
    attributeIndex ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    bool extension = false ; // Unused here\n"
               "    GGS_location existingKeyLocation ;\n"
               "    internalInsert (inKey, (void *) & info, mSharedMapRoot->_mRoot, extension, elementIndex, existingKeyLocation) ;\n"
               "    if (elementIndex < 0) {\n"
               "      emitInsertMapSemanticErrorMessage (inLexique, inKey, inErrorMessage, existingKeyLocation COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (outIndex != NULL) {\n"
               "    * outIndex = GGS_luint (GGS_uint (elementIndex >= 0, (uint32) elementIndex), inKey) ;\n"
               "  }\n"
               "}\n\n" ;

//--- '_searchElement' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomTable << "::\n"
               "_searchElement (C_Lexique & inLexique,\n"
               "               const char * inErrorMessage,\n"
               "               const GGS_lstring & inKey,\n" ;
  current = mNonExternAttributesList.firstObject () ;
  attributeIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "               " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, false) ;
    inCppFile << " & outParameter" << attributeIndex << ",\n" ;
    attributeIndex ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "               GGS_luint * outIndex\n"
               "               COMMA_LOCATION_ARGS) const {\n"
               "  element_type * node = NULL  ;\n"
               "  if (_isBuilt () && inKey._isBuilt ()) {\n"
               "    AC_galgas_map_element * p = internal_search (inKey) ;\n"
               "    MF_Assert ((p == NULL) || (reinterpret_cast <element_type *> (p) != NULL), \"Dynamic cast error\", 0, 0) ;\n"
               "    node = (element_type *) p ;\n"
               "    if (node == NULL) {\n"
               "      emitMapSemanticErrorMessage (inLexique, inKey, inErrorMessage COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (node == NULL) {\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "    outParameter" << i << "._drop_operation () ;\n" ;
    }
    inCppFile << "    if (outIndex != NULL) {\n"
                 "      outIndex->_drop_operation () ;\n"
                 "     }\n"
                 "  }else{\n" ;
  current = mNonExternAttributesList.firstObject () ;
  attributeIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    outParameter" << attributeIndex << " = node->mInfo." << current->aNomAttribut << " ;\n" ;
    attributeIndex ++ ;
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
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" 
              << aNomTable << "::\n"
              << "method_" << currentMethod->mMethodName
              << " (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) const {\n" ;
    inCppFile << "  _searchElement (inLexique,\n"
                 "                  " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << ",\n"
                 "                  inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                  outParameter" << i << ",\n" ;
    }
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << "                  & outIndex\n" ;
    }else{
      inCppFile << "                  NULL\n" ;
    }
    inCppFile << "                  COMMA_THERE) ;\n"
                 "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Implement remove methods
  currentMethod = mRemoveMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_"
              << aNomTable << "::\n"
                 "modifier_" << currentMethod->mMethodName
              << " (C_Lexique & _inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "outParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n"
                 "  _removeElement (_inLexique,\n"
                 "                  " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << ",\n"
                 "                  inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                  outParameter" << i << ",\n" ;
    }
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << "                  & outIndex\n" ;
    }else{
      inCppFile << "                  NULL\n" ;
    }
    inCppFile << "                  COMMA_THERE) ;\n"
                 "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Implement insert routines
  currentMethod = mInsertMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_"
              << aNomTable << "::\n"
                 "modifier_" << currentMethod->mMethodName
              << " (C_Lexique & _inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "inParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
    if (currentMethod->mShadowErrorMessage.length () > 0) {
      inCppFile << "  const bool _shadowExists = internal_search_in_overridden_maps (inKey) != NULL ;\n"
                   "  if (_shadowExists) {\n"
                   "    emitMapSemanticErrorMessage (_inLexique, inKey, " ;
      inCppFile.writeCstringConstant (currentMethod->mShadowErrorMessage) ;
      inCppFile << " COMMA_THERE) ;\n" ;
      if (currentMethod->mIsGetIndexMethod.boolValue ()) {
        inCppFile << "    outIndex._drop_operation () ;\n" ;
      }
      inCppFile << "  }else{\n" ;
      inCppFile.incIndentation (2) ;
    
    }
    inCppFile << "  _insertElement (_inLexique,\n"
                 "                 " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << ",\n"
                 "                 inKey,\n" ;
    for (sint32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                 inParameter" << i << ",\n" ;
    }
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << "                 & outIndex\n" ;
    }else{
      inCppFile << "                 NULL\n" ;
    }
    inCppFile << "                 COMMA_THERE) ;\n" ;
    if (currentMethod->mShadowErrorMessage.length () > 0) {
      inCppFile.incIndentation (-2) ;
      inCppFile << "  }\n" ;
    }
    inCppFile << "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Implement 'mapWithMapToOverride' constructor
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::\n"
               "constructor_mapWithMapToOverride (C_Lexique & /* inLexique */,\n"
               "                                  const GGS_" << aNomTable << " & inMapToOverride\n"
               "                                  COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomTable << " result ; // Not Built\n"
               "  if (inMapToOverride.mSharedMapRoot != NULL) {\n"
               "    macroValidPointer (inMapToOverride.mSharedMapRoot) ;\n"
               "    macroMyNew (result.mSharedMapRoot, cMapRoot) ;\n"
               "    result.mSharedMapRoot->mNextMap = inMapToOverride.mSharedMapRoot ;\n"
               "    inMapToOverride.mSharedMapRoot->mReferenceCount ++ ;\n"
               "    result.mSharedMapRoot->mSequenceNumber = inMapToOverride.mSharedMapRoot->mSequenceNumber ;\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;

//--- Implement reader 'overriddenMap'
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::\n"
               "reader_overriddenMap (C_Lexique & /* inLexique */\n"
               "                      COMMA_UNUSED_LOCATION_ARGS) const {\n"
               "  GGS_" << aNomTable << " result ; // Not Built\n"
               "  if (mSharedMapRoot != NULL) {\n"
               "    macroValidPointer (mSharedMapRoot) ;\n"
               "    result.mSharedMapRoot = mSharedMapRoot->mNextMap ;\n"
               "    if (result.mSharedMapRoot != NULL) {\n"
               "      macroValidPointer (result.mSharedMapRoot) ;\n"
               "      result.mSharedMapRoot->mReferenceCount ++ ;\n"
               "    }else{\n"
               "      macroMyNew (result.mSharedMapRoot, cMapRoot) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;

//--- Implement reader 'description'
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << aNomTable << "::\n"
               "reader_description (C_Lexique & _inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  C_String s ;\n"
               "  s << \"<map @" << aNomTable << " \" ;\n"
               "  if (_isBuilt ()) {\n"
               "    s << count () << \" object\" << ((count () > 1) ? \"s \" : \" \") ;\n"
               "    element_type * p = firstObject () ;\n"
               "    sint32 elementIndex = 0 ;\n"
               "    while (p != NULL) {\n"
               "      macroValidPointer (p) ;\n"
               "      p->appendForMapDescription (_inLexique, elementIndex, s, inIndentation COMMA_THERE) ;\n"
               "      p = p->nextObject () ;\n"
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
  inHfile.writeCppTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

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
             "  public : void appendForMapDescription (C_Lexique & _inLexique,\n"
             "                                         C_String & ioString,\n"
             "                                         const sint32 inIndentation\n"
             "                                         COMMA_LOCATION_ARGS) const ;\n"
             "} ;\n\n" ; //--- Fin de la declaration de la classe e_...

// ---------------------- declaration de la classe table -----------------
  inHfile.writeCppTitleComment (C_String ("Map '") + aNomTable + "'") ;

  inHfile << "class GGS_" << aNomTable << " : public "  << aNomClasseGenerique
          << " <e_" << aNomTable << "> {\n"
             "//--- Get object pointer\n"
             "  public : inline GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) { return this ; }\n"
             "  public : inline const GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) const { return this ; }\n"
             "//--- Comparison methods\n"
             "  public : GGS_bool operator == (const GGS_" << aNomTable << " & /* inOperand */) const { return GGS_bool (true, true) ; }\n"
             "  public : GGS_bool operator != (const GGS_" << aNomTable << " & /* inOperand */) const { return GGS_bool (true, true) ; }\n"
             "//--- Handle 'emptyMap' constructor\n"
             "  public : static GGS_" << aNomTable << " constructor_emptyMap (C_Lexique & inLexique COMMA_LOCATION_ARGS) ;\n" ;

//--- Declaring search methods
  GGS_insertOrSearchMethodList::element_type * currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mMethodName << "' search method\n"
               "public : void modifier_" 
            << currentMethod->mMethodName
            << " (C_Lexique & inLexique"
               ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    inHfile << "public : void method_" 
            << currentMethod->mMethodName
            << "GetIndex (C_Lexique & inLexique"
               ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Declaring insert methods
  currentMethod = mInsertMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//---\n"
               "public : void modifier_"
            << currentMethod->mMethodName
            << " (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    inHfile << "public : void modifier_"
            << currentMethod->mMethodName
            << "GetIndex (C_Lexique & inLexique" 
               ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
//--- Generate 'description' reader declaration
  inHfile << "  public : GGS_string reader_description (C_Lexique & _inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const sint32 inIndentation = 0) const ;\n"
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDefinitionTableAimplementer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
  inCppFile.writeCppTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

  inCppFile << "#include \"" << aNomClasseGenerique << ".hh\"\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Instanciate the template
  inCppFile << "template class "
            << aNomClasseGenerique
            << " <e_" << aNomTable << "> ;\n\n" ;


//--------------------- ENGENDRER LA CLASSE TABLE ----------------------------
  inCppFile.writeCppTitleComment (C_String ("Map '") + aNomTable + "'") ;

  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::\n"
               "constructor_emptyMap (C_Lexique & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomTable << " t ;\n"
               "  t.build () ;\n"
               "  return t ;\n"
               "}\n\n" ;

//--- Implementing search methods
  GGS_insertOrSearchMethodList::element_type * currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::modifier_" 
              << currentMethod->mMethodName
              << " (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
  //--- Inserer les messages d'erreur
    inCppFile << "  GGS_" << aNomTable << "::element_type * info = "
              << currentMethod->mMethodName << " (inLexique, inKey, inKey, " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << " COMMA_THERE) ;\n"
                 "  if (info == NULL) {\n" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    outParameter" << attributeIndex << "._drop_operation () ;\n" ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  }else{\n" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    outParameter" << attributeIndex << " = info->mInfo." << current->aNomAttribut << " ;\n" ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  }\n"
                 "}\n\n" ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::method_" 
              << currentMethod->mMethodName
              << "GetIndex (C_Lexique & inLexique"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
    inCppFile << "  GGS_" << aNomTable << "::element_type * info = "
              << currentMethod->mMethodName << " (inLexique, inKey, inKey, " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << " COMMA_THERE) ;\n"
                 "  if (info == NULL) {\n" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    outParameter" << attributeIndex << "._drop_operation () ;\n" ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "    outIndex._drop_operation () ;\n"
                 "  }else{\n" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "    outParameter" << attributeIndex << " = info->mInfo." << current->aNomAttribut << " ;\n" ;
      attributeIndex ++ ;
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
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::modifier_"
              << currentMethod->mMethodName
              << " (C_Lexique & _inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::element_type * current = mNonExternAttributesList.firstObject () ;
    sint32 attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << " inParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
    inCppFile << "  e_" << aNomTable << " info ;\n" ;
    current = mNonExternAttributesList.firstObject () ;
    sint32 numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "  info." << current->aNomAttribut << " = inParameter" << numeroVariable << " ;\n" ;
      numeroVariable ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  " << currentMethod->mMethodName << " (_inLexique, info, inKey, inKey, " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << " COMMA_THERE) ;\n"
              << "}\n\n" ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::modifier_"
              << currentMethod->mMethodName
              << "GetIndex (C_Lexique & _inLexique"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n                                const " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << " inParameter" << attributeIndex ;
      attributeIndex ++ ;
      current = current->nextObject () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
    inCppFile << "  e_" << aNomTable << " info ;\n" ;
    current = mNonExternAttributesList.firstObject () ;
    numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << "  info." << current->aNomAttribut << " = inParameter" << numeroVariable << " ;\n" ;
      numeroVariable ++ ;
      current = current->nextObject () ;
    }
    inCppFile << "  const sint32 attributeIndex = " << currentMethod->mMethodName << " (_inLexique, info, inKey, inKey, " ;
    inCppFile.writeCstringConstant (currentMethod->mErrorMessage) ;
    inCppFile << " COMMA_THERE) ;\n"
              << "  outIndex = GGS_luint (GGS_uint (attributeIndex >= 0, (uint32) attributeIndex), inKey) ;\n"
              << "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }

//--- Implement reader 'description'
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << aNomTable << "::\n"
               "reader_description (C_Lexique & /* _inLexique */\n"
               "                    COMMA_UNUSED_LOCATION_ARGS,\n"
               "                    const sint32 /* inIndentation */) const {\n"
               "  C_String s ;\n"
               "  s << \"<map @" << aNomTable << " \" ;\n"
               "  if (_isBuilt ()) {\n"
               "    s << count () << \" object\" << ((count () > 1) ? \"s\" : \"\") ;\n"
               "  }else{\n"
               "    s << \"not built\" ;\n"
               "  }\n"
               "  s << \">\\n\" ;\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;

}

//---------------------------------------------------------------------------*
