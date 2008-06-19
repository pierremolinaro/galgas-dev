//---------------------------------------------------------------------------*
//                                                                           *
//  Generate map declaration and implementation                              *
//                                                                           *
//  Copyright (C) 1999, ..., 2008 Pierre Molinaro.                           *
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
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Map List Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mListmapTypeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.writeCppTitleComment (C_String ("Map list '@") + mListmapTypeName + "'") ;

  inHfile << "class GGS_" << mListmapTypeName << " : public AC_galgas_maplist {\n"
             "//--- Node class\n"
             "  public : class cElement : public cNode {\n"
             "    public : cElement (const GGS_string & inKey) ;\n"
             "    public : GGS_" << mListTypename << " object ;\n"
             " //--- Description\n"
             "   public : virtual GGS_string\n"
             "   _description (C_Compiler & _inLexique,\n"
             "                 const sint32 inIndentation\n"
             "                 COMMA_LOCATION_ARGS) const ;\n"
             "  } ;\n\n"
             "//--- 'emptyMap' constructor\n"
             "  public : static GGS_" << mListmapTypeName << "\n"
             "  constructor_emptyMap (C_Compiler & inLexique\n"
             "                    COMMA_LOCATION_ARGS) ;\n\n"
             "//--- 'description' reader declaration\n"
             "  public : GGS_string\n"
             "  reader_description (C_Compiler & _inLexique\n"
             "                      COMMA_LOCATION_ARGS,\n"
             "                      const sint32 inIndentation = 0) const ;\n\n"
             "//--- Handle '+=' operator\n"
             "  public : void\n"
             "  _addAssign_operation (const GGS_string & inKey" ;
  GGS_typeListeAttributsSemantiques::cElement * currentAttribute = mAttributesList.firstObject () ;
  sint32 attributeIndex = 0 ;
  while (currentAttribute != NULL) {
    macroValidPointer (currentAttribute) ;
    inHfile << ",\n"
               "                        const " ;
    currentAttribute->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "inAttribute" << attributeIndex ;
    attributeIndex ++ ;
    currentAttribute = currentAttribute->nextObject () ;
  }
  inHfile <<  ") ;\n\n" ;
//--- Reader list for key
  inHfile << "//--- Reader 'listForKey'\n"
             "  public : GGS_" << mListTypename << "\n"
             "  reader_listForKey (C_Compiler & inLexique,\n"
             "                     const GGS_string & inKey\n"
             "                     COMMA_LOCATION_ARGS) const ;\n\n"

             "//--- Create a new node\n"
             "  protected : virtual cNode * _allocNewNode (const GGS_string & inKey) ;\n" ;
//--- End of class declaration
  inHfile <<  "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeGalgasListmapToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapToImplement::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapToImplement::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                             const C_String & /* inTargetFileName*/,
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  inCppFile.writeCppTitleComment (C_String ("list map '@") + mListmapTypeName + "'") ;
  inCppFile << "GGS_" << mListmapTypeName << "::cElement::cElement (const GGS_string & inKey) :\n"
               "cNode (inKey),\n"
               "object (GGS_" << mListTypename << "::constructor_emptyList ()) {\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mListmapTypeName << "::cElement::\n"
               "_description (C_Compiler & _inLexique,\n"
               "              const sint32 inIndentation\n"
               "              COMMA_LOCATION_ARGS) const {\n"
               "  return object.reader_description (_inLexique COMMA_THERE, inIndentation) ;\n"
               "}\n\n" ;
  
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << mListmapTypeName << "::cNode * GGS_" << mListmapTypeName << "::_allocNewNode (const GGS_string & inKey) {\n"
               "  cNode * result = NULL ;\n"
               "  macroMyNew (result, cElement (inKey)) ;\n"
               "  return result ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << mListmapTypeName << " GGS_" << mListmapTypeName << "::\n"
               "constructor_emptyMap (C_Compiler & /* inLexique */\n"
               "                  COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << mListmapTypeName << " result ;\n"
               "  macroMyNew (result.mSharedMapObject, cRoot) ;\n"
               "  return result ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mListmapTypeName << "::\n"
               "reader_description (C_Compiler & inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  return _description (inLexique, \"@" << mListmapTypeName << "\", inIndentation COMMA_THERE) ;\n"
               "}\n\n" ;


//--- Handle '+=' operator
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mListmapTypeName << "::\n"
               "_addAssign_operation (const GGS_string & inKey" ;
  GGS_typeListeAttributsSemantiques::cElement * currentAttribute = mAttributesList.firstObject () ;
  sint32 attributeIndex = 0 ;
  while (currentAttribute != NULL) {
    macroValidPointer (currentAttribute) ;
    inCppFile << ",\n"
                 "                      const " ;
    currentAttribute->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "inAttribute" << attributeIndex ;
    attributeIndex ++ ;
    currentAttribute = currentAttribute->nextObject () ;
  }
  inCppFile << ") {\n"
               "  if (_isBuilt () && inKey._isBuilt ()" ;
  currentAttribute = mAttributesList.firstObject () ;
  attributeIndex = 0 ;
  while (currentAttribute != NULL) {
    macroValidPointer (currentAttribute) ;
    inCppFile << " && inAttribute" << attributeIndex << "._isBuilt ()" ;
    attributeIndex ++ ;
    currentAttribute = currentAttribute->nextObject () ;
  }
  inCppFile << ") {\n"
               "    insulateSharedStringSet () ;\n"
               "    destroyDirectAndLinearAccess () ;\n"
               "    bool extension ; // unused\n"
               "    cElement * node = (cElement *) internalSearchOrAdd (inKey, mSharedMapObject->_mRoot, extension) ;\n"
               "    node->object._addAssign_operation (" ;
  currentAttribute = mAttributesList.firstObject () ;
  attributeIndex = 0 ;
  while (currentAttribute != NULL) {
    macroValidPointer (currentAttribute) ;
    if (attributeIndex > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "inAttribute" << attributeIndex ;
    attributeIndex ++ ;
    currentAttribute = currentAttribute->nextObject () ;
  }
  inCppFile << ") ;\n"
               "  }\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "//--- Reader 'listForKey'\n"
               "GGS_" << mListTypename << " GGS_" << mListmapTypeName << "::\n"
               "reader_listForKey (C_Compiler & /* inLexique */,\n"
               "                   const GGS_string & inKey\n"
               "                   COMMA_UNUSED_LOCATION_ARGS) const {\n"
               "  GGS_" << mListTypename << " result ;\n"
               "  if (_isBuilt () && inKey._isBuilt ()) {\n"
               "    cElement * node = (cElement *) nodeForKey (inKey.string ()) ; \n"
               "    if (node == NULL) {\n"
               "      result = GGS_" << mListTypename << "::constructor_emptyList () ;\n"
               "    }else{\n"
               "      result = node->object ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Map Index Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mMapindexTypeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.writeCppTitleComment (C_String ("Map index '@") + mMapindexTypeName + "'") ;

  inHfile << "class GGS_" << mMapindexTypeName << " : public AC_galgas_mapindex {\n"
             "//--- 'null' constructor\n"
             "  public : static GGS_" << mMapindexTypeName << "\n"
             "  constructor_null (C_Compiler & inLexique\n"
             "                    COMMA_LOCATION_ARGS) ;\n\n"
             "//--- Comparison operators\n"
             "  public : GGS_bool _operator_isEqual (const GGS_" << mMapindexTypeName << " & inOperand) const ;\n"
             "  public : GGS_bool _operator_isNotEqual (const GGS_" << mMapindexTypeName << " & inOperand) const ;\n\n"
             "//--- 'description' reader declaration\n"
             "  public : GGS_string\n"
             "  reader_description (C_Compiler & _inLexique\n"
             "                      COMMA_LOCATION_ARGS,\n"
             "                      const sint32 inIndentation = 0) const ;\n\n"
             "//--- Type Method 'makeRegularIndex'\n"
             "  public : static void\n"
             "  class_method_makeRegularIndex (C_Compiler & inLexique,\n"
             "                                 const GGS_lstring & inKey,\n"
             "                                 GGS_" << mMapTypeName << " & ioMap,\n"
             "                                 GGS_" << mMapindexTypeName << " & outIndex\n"
             "                                 COMMA_LOCATION_ARGS) ;\n\n"
             "//--- Method Access\n"
             "  public : inline const GGS_" << mMapindexTypeName << " *\n"
             "  operator () (UNUSED_LOCATION_ARGS) const {\n"
             "    return this ;\n"
             "  }\n\n"
             "//--- Search method(s)\n" ;
  GGS_mapIndexSearchReaderMap::cElement * currentMethod = mMapIndexSearchReaderMap.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "  public : void\n"
               "  method_" << currentMethod->mKey << " (C_Compiler & inLexique,\n"
               "                     GGS_lstring & outKey" ;
    GGS_typeListeAttributsSemantiques::cElement * currentAttribute = mMapAttributesList.firstObject () ;
    sint32 attributeIndex = 1 ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      inHfile << ",\n"
                 "                     " ;
      currentAttribute->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << "outAttribute" << attributeIndex ;
      attributeIndex ++ ;
      currentAttribute = currentAttribute->nextObject () ;
    }
    inHfile << "\n"
               "                     COMMA_LOCATION_ARGS) const ;\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
  inHfile <<  "} ;\n\n" ;
 }

//---------------------------------------------------------------------------*

bool cPtr_C_mapindexToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                             const C_String & /* inTargetFileName*/,
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  inCppFile.writeCppTitleComment (C_String ("map index '@") + mMapindexTypeName + "'") ;
  inCppFile << "GGS_" << mMapindexTypeName << " GGS_" << mMapindexTypeName << "::\n"
               "constructor_null (C_Compiler & /* inLexique */\n"
               "                  COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << mMapindexTypeName << " result ;\n"
               "  result.mState = kNull ;\n"
               "  return result ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mMapindexTypeName << "::\n"
               "_operator_isEqual (const GGS_" << mMapindexTypeName << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   (mState == inOperand.mState)) ;\n"
               "}\n\n" ;
              
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mMapindexTypeName << "::\n"
               "_operator_isNotEqual (const GGS_" << mMapindexTypeName << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   (mState != inOperand.mState)) ;\n"
               "}\n\n" ;
              
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mMapindexTypeName << "::\n"
               "reader_description (C_Compiler & /* inLexique */\n"
               "                    COMMA_UNUSED_LOCATION_ARGS,\n"
               "                    const sint32 /* inIndentation */) const {\n"
               "  C_String s ;\n"
               "  s << \"<mapindex @" << mMapindexTypeName << "\" ;\n"
               "  switch (mState) {\n"
               "  case kNotBuilt:\n"
               "    break ;\n"
               "    s << \" (not built)\" ;\n"
               "  case kNull:\n"
               "    s << \": null\" ;\n"
               "    break ;\n"
               "  case kRegular:\n"
               "    s << \": regular (\\\"\" << mKey << \"\\\")\" ;\n"
               "    break ;\n"
               "  }\n"
               "  s << \">\" ;\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;

//--- Type Method 'makeRegularIndex
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapindexTypeName << "::\n"
               "class_method_makeRegularIndex (C_Compiler & /* inLexique*/ ,\n"
               "                               const GGS_lstring & inKey,\n"
               "                               GGS_" << mMapTypeName << " & ioMap,\n"
               "                               GGS_" << mMapindexTypeName << " & outIndex\n"
               "                               COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  outIndex.mState = kRegular ;\n"
               "  outIndex.mKey = inKey ;\n"
               "  ioMap.enterIndex (inKey, outIndex.mIndex) ;\n"
               "  if (outIndex.mIndex.retrieve () == NULL) {\n"
               "    outIndex._drop_operation () ;\n"
               "  }\n"
               "}\n\n" ;

//--- Search methods
  GGS_mapIndexSearchReaderMap::cElement * currentMethod = mMapIndexSearchReaderMap.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mMapindexTypeName << "::\n"
                 "method_" << currentMethod->mKey << " (C_Compiler & inLexique,\n"
                 "                   GGS_lstring & outKey" ;
    GGS_typeListeAttributsSemantiques::cElement * currentAttribute = mMapAttributesList.firstObject () ;
    sint32 attributeIndex = 1 ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      inCppFile << ",\n"
                   "                   " ;
      currentAttribute->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "outAttribute" << attributeIndex ;
      attributeIndex ++ ;
      currentAttribute = currentAttribute->nextObject () ;
    }
    inCppFile << "\n"
                 "                   COMMA_LOCATION_ARGS) const {\n"
                 "  bool shouldDropArguments = true ;\n"
                 "  switch (mState) {\n"
                 "  case kNotBuilt :\n"
                 "    break ;\n"
                 "  case kRegular :\n"
                 "    if (mIndex.retrieve () == NULL) {\n"
                 "      inLexique.onTheFlyRunTimeError (\"bound entry has been deleted\" COMMA_THERE) ;\n"
                 "    }else if (! mIndex.retrieve ()->mIsDefined) {\n"
                 "      AC_galgas_map::emitMapSemanticErrorMessage (inLexique, mKey, " ;
    inCppFile.writeCstringConstant (currentMethod->mInfo.mRetrieveErrorMessage) ;
    inCppFile << " COMMA_THERE) ;\n"
                 "    }else{\n"
                 "      MF_Assert (reinterpret_cast <const elementOf_GGS_" << mMapTypeName << " *> (mIndex.retrieve ()) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
                 "      const elementOf_GGS_" << mMapTypeName << " * p = (const elementOf_GGS_" << mMapTypeName << " *) mIndex.retrieve () ;\n"
                 "      outKey = mKey ;\n" ;
    currentAttribute = mMapAttributesList.firstObject () ;
    attributeIndex = 1 ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      inCppFile << "      outAttribute" << attributeIndex
                << " = p->mInfo." << currentAttribute->aNomAttribut
                << " ;\n" ;
      attributeIndex ++ ;
      currentAttribute = currentAttribute->nextObject () ;
    }
    inCppFile << "      shouldDropArguments = false ;\n"
                 "    }\n"
                 "    break ;\n"
                 "  case kNull:\n"
                 "    inLexique.onTheFlyRunTimeError (\"key access on a null index\" COMMA_THERE) ;\n"
                 "    break ;\n"
                 "  }\n"
                 "  if (shouldDropArguments) {\n"
                 "    outKey._drop_operation () ;\n" ;
    for (sint32 i=1 ; i<=mMapAttributesList.count () ; i++) {
      inCppFile << "    outAttribute" << i << "._drop_operation () ;\n" ;
    }
    inCppFile << "  }\n"
                 "}\n\n" ;
    currentMethod = currentMethod->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Map Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & /* inLexique */) const {
  inHfile.writeCppTitleComment (C_String ("Element of map '@") + mMapTypeName + "'") ;
//--- Starting map element class declaration
  inHfile << "class e_" << mMapTypeName << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generatePublicDeclaration (inHfile, current->aNomAttribut) ;
    current = current->nextObject () ;
  }
  inHfile << "\n" ;
  if (mNonExternAttributesList.count () > 0) {
    inHfile << "  public : e_" << mMapTypeName << " (void) ;\n" ;
  }
  inHfile << "} ;\n\n" ; //--- End of map element class declaration e_...
  inHfile.writeCppHyphenLineComment () ;
  inHfile << "class elementOf_GGS_" << mMapTypeName << " : public AC_galgas_map_element {\n"
             "//--- Constructor\n"
             "  public : elementOf_GGS_" << mMapTypeName << " (const GGS_lstring & inKey,\n"
             "                                     const sint32 inIndex,\n"
             "                                     const e_" << mMapTypeName << " & inInfo) ;\n"
             "//--- Get pointers\n"
             "  public : inline elementOf_GGS_" << mMapTypeName << " * nextObject (void) const { return (elementOf_GGS_" << mMapTypeName << " *) mNextItem ; }\n"
             "  public : inline elementOf_GGS_" << mMapTypeName << " * infObject (void) const { return (elementOf_GGS_" << mMapTypeName << " *) mInfPtr ; }\n"
             "  public : inline elementOf_GGS_" << mMapTypeName << " * supObject (void) const { return (elementOf_GGS_" << mMapTypeName << " *) mSupPtr ; }\n"
             "//--- Comparison\n"
             "  protected : virtual bool isEqualToMapElement (const AC_galgas_map_element * inOperand) const ;\n"
             "//--- Data member\n"
             "  public : e_" << mMapTypeName << " mInfo ;\n"
             "//--- Method for 'description' reader\n"
             "  public : void appendForMapDescription (C_Compiler & _inLexique,\n"
             "                                         const sint32 inElementIndex,\n"
             "                                         C_String & ioString,\n"
             "                                         const sint32 inIndentation\n"
             "                                         COMMA_LOCATION_ARGS) const ;\n"
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mMapTypeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.writeCppTitleComment (C_String ("Map '@") + mMapTypeName + "'") ;

  inHfile << "class elementOf_GGS_" << mMapTypeName << " ;\n\n" ;
  inHfile << "class GGS_" << mMapTypeName << " : public AC_galgas_map {\n" ;
  inHfile << "//--- Element Class\n"
             "  public : typedef elementOf_GGS_" << mMapTypeName << " cElement ;\n\n"
             "//--- Get pointers\n"
             "  public : inline cElement * firstObject (void) const { return (cElement *) internalFirstObject () ; }\n"
             "  public : inline cElement * lastObject (void) const { return (cElement *) internalLastObject () ; }\n\n"
             "//--- Comparison methods\n"
             "  public : GGS_bool _operator_isEqual (const GGS_" << mMapTypeName << " & inOperand) const ;\n"
             "  public : GGS_bool _operator_isNotEqual (const GGS_" << mMapTypeName << " & inOperand) const ;\n\n"
             "//--- Create a new element\n"
             "  protected : virtual AC_galgas_map_element *\n"
             "  new_element (const GGS_lstring & inKey, void * inInfo) ;\n\n"
             "//--- Assign information to an existing element\n"
             "  protected : virtual void\n"
             "  assignInfo (AC_galgas_map_element * inPtr, void * inInfo) ;\n\n"
             "//--- Enter an index\n"
             "  public : void enterIndex (const GGS_lstring & inKey,\n"
             "                            AC_galgas_index_core & outIndex) ;\n\n"
             "//--- Get object pointer (for method call)\n"
             "  public : inline GGS_" << mMapTypeName << " * operator () (UNUSED_LOCATION_ARGS) { return this ; }\n"
             "  public : inline const GGS_" << mMapTypeName << " * operator () (UNUSED_LOCATION_ARGS) const { return this ; }\n\n"
             "//--- 'emptyMap' constructor\n"
             "  public : static GGS_" << mMapTypeName << " constructor_emptyMap (C_Compiler & inLexique COMMA_LOCATION_ARGS) ;\n\n"
             "//--- Method used for duplicate a map\n"
             "  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;\n\n" ;

//--- Declaring remove methods
  GGS_insertOrSearchMethodList::cElement * currentMethod = mRemoveMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mMethodName << "' Remove Modifier\n" ;
    inHfile <<    "  public : void modifier_"
            << currentMethod->mMethodName
            << " (C_Compiler & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inHfile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::cElement * currentAttribute = mNonExternAttributesList.firstObject () ;
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
            << " (C_Compiler & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inHfile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::cElement * currentAttribute = mNonExternAttributesList.firstObject () ;
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
            << " (C_Compiler & inLexique"
            << ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inHfile <<  ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
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
               "  protected : void _removeElement (C_Compiler & inLexique,\n"
               "                                   const char * inErrorMessage,\n"
               "                                   const GGS_lstring & inKey,\n" ;
    GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
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
             "  protected : void _insertElement (C_Compiler & inLexique,\n"
             "                                   const char * inErrorMessage,\n"
             "                                   const GGS_lstring & inKey,\n" ;
  GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
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
             "  protected : void _searchElement (C_Compiler & inLexique,\n"
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
             "  public : GGS_string reader_description (C_Compiler & _inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const sint32 inIndentation = 0) const ;\n"
//--- Generate 'mapWithMapToOverride' constructor declaration
              "  public : static GGS_" << mMapTypeName << " constructor_mapWithMapToOverride (C_Compiler & inLexique,\n"
              "                                            const GGS_" << mMapTypeName << " & inMapToOverride\n"
              "                                            COMMA_LOCATION_ARGS) ;\n"
//--- Generate 'overriddenMap' reader declaration
              "  public : GGS_" << mMapTypeName << " reader_overriddenMap (C_Compiler & inLexique\n"
              "                                            COMMA_LOCATION_ARGS) const ;\n"
//--- Enumerator declaration
             "//--------------------------------- Map Enumerator\n"
             "  public : class cEnumerator : public cAbstractMapEnumerator {\n"
             "  //--- Constructor\n"
             "    public : inline cEnumerator (const GGS_" << mMapTypeName << " & inMap,\n"
             "                                 const bool inAscending) :\n"
             "    cAbstractMapEnumerator (inMap, inAscending) {\n"
             "    }\n"
             "  //--- Iterator method\n"
             "    public : inline cElement * nextObject (void) {\n"
             "      return (cElement *) internalNextObject () ;\n"
             "    }\n"
             "  } ;\n\n"
//--- End of class Declaration
              "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_mapToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                             const C_String & /* inTargetFileName*/,
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  if (mNonExternAttributesList.count () > 0) {
    inCppFile.writeCppTitleComment (C_String ("class 'e_") + mMapTypeName + "'") ;
    inCppFile << "e_" << mMapTypeName << "::e_" << mMapTypeName << " (void) :\n" ;
    GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
    bool first = true ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (first) {
        first = false ;
      }else{
        inCppFile << ",\n" ;
      }
      inCppFile << current->aNomAttribut << " ()" ;
      current = current->nextObject () ;
    }
    inCppFile << " {\n}\n\n" ;
  }

  inCppFile.writeCppTitleComment (C_String ("class map '@") + mMapTypeName + "'") ;

//--- Constructor for type element
  inCppFile << "elementOf_GGS_" << mMapTypeName << "::\n"
               "elementOf_GGS_" << mMapTypeName << " (const GGS_lstring & inKey,\n"
               "              const sint32 inIndex,\n"
               "              const e_" << mMapTypeName << " & inInfo) :\n"
               "AC_galgas_map_element (inKey, inIndex),\n"
               "mInfo (inInfo) {\n"
               "}\n\n" ;

//--- Method for 'reader' element
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void elementOf_GGS_" << mMapTypeName << "::\n"
               "appendForMapDescription (C_Compiler & _inLexique,\n"
               "                         const sint32 inElementIndex,\n"
               "                         C_String & ioString,\n"
               "                         const sint32 inIndentation\n"
               "                         COMMA_LOCATION_ARGS) const {\n"
               "  ioString << \"\\n\" ;\n"
               "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
               "  ioString << \"|-key \" << inElementIndex << \":\" << mKey.reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;\n" ;
  GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "  ioString << \"\\n\" ;\n"
                 "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
                 "  ioString << \"|-value \" << inElementIndex << \":\" << mInfo." << current->aNomAttribut << ".reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;\n" ;
    current = current->nextObject () ;
  }
  inCppFile << "}\n\n" ;

//--- 'isEqualToMapElement' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "bool elementOf_GGS_" << mMapTypeName << "::\n" ;
  current = mNonExternAttributesList.firstObject () ;
  if (current == NULL) {
    inCppFile << "isEqualToMapElement (const AC_galgas_map_element * /* inOperand */) const {\n"
                 "  return true ;\n" ;
  }else{
    inCppFile << "isEqualToMapElement (const AC_galgas_map_element * inOperand) const {\n"
                 "  const elementOf_GGS_" << mMapTypeName << " * _p = dynamic_cast <const elementOf_GGS_" << mMapTypeName << " *> (inOperand) ;\n"
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
      inCppFile << "(mInfo." << current->aNomAttribut << "._operator_isEqual (_p->mInfo." << current->aNomAttribut << ")).boolValue ()" ;
      current = current->nextObject () ;
    }
    inCppFile << " ;\n" ;
  }
  inCppFile << "}\n\n" ;

//--- 'new_element' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "AC_galgas_map_element * GGS_" << mMapTypeName << "::\n"
               "new_element (const GGS_lstring & inKey, void * inInfo) {\n"
               "  MF_Assert (reinterpret_cast <e_" << mMapTypeName << " *> (inInfo) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  AC_galgas_map_element * p = NULL ;\n"
               "  e_" << mMapTypeName << " * info = (e_" << mMapTypeName << " *) inInfo ;\n"
               "  macroMyNew (p, cElement (inKey, nextIndex (), * info)) ;\n"
               "  return p ;\n"
               "}\n\n" ;

//--- 'assignInfo' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "assignInfo (AC_galgas_map_element * inPtr, void * inInfo) {\n"
               "  MF_Assert (reinterpret_cast <cElement *> (inPtr) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  MF_Assert (reinterpret_cast <e_" << mMapTypeName << " *> (inInfo) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  cElement * p = (cElement *) inPtr ;\n"
               "  e_" << mMapTypeName << " * info = (e_" << mMapTypeName << " *) inInfo ;\n"
               "  p->mInfo = * info ;\n"
               "}\n\n" ;

//--- 'constructor_emptyMap' static method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << mMapTypeName << " GGS_" << mMapTypeName << "::\n"
               "constructor_emptyMap (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << mMapTypeName << " result ;\n"
               "  macroMyNew (result.mSharedMapRoot, cMapRoot) ;\n"
               "  return result ;\n"
               "}\n\n" ;

//--- 'enterIndex'  method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "enterIndex (const GGS_lstring & inKey,\n"
               "            AC_galgas_index_core & outIndex) {\n"
               "  e_" << mMapTypeName << " info  ;\n"
               "  internalEnterIndex (inKey,\n"
               "                      (void *) & info,\n"
               "                      mSharedMapRoot->_mRoot,\n"
               "                      outIndex) ;\n"
               "}\n\n" ;

//--- Generate comparison
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mMapTypeName << "::\n"
               "_operator_isEqual (const GGS_" << mMapTypeName << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), isEqualToMap (inOperand)) ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mMapTypeName << "::\n"
               "_operator_isNotEqual (const GGS_" << mMapTypeName << " & inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), ! isEqualToMap (inOperand)) ;\n"
               "}\n\n" ;

//--- 'internalInsertForDuplication' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "internalInsertForDuplication (AC_galgas_map_element * inPtr) {\n"
               "  MF_Assert (reinterpret_cast <cElement *> (inPtr) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  cElement * p = (cElement *) inPtr ;\n"
               "  sint32 attributeIndex = -1 ; // Unused here\n"
               "  GGS_location existingKeyLocation ; // Unused here\n"
               "  internalInsert (p->mKey, (void *) & p->mInfo,mSharedMapRoot->_mRoot, attributeIndex, existingKeyLocation) ;\n"
               "}\n\n" ;

//--- 'removeElement' method
  if (mRemoveMethodList.firstObject () != NULL) {
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mMapTypeName << "::\n"
                 "_removeElement (C_Compiler & inLexique,\n"
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
                 "  sint32 elementID = - 1 ;\n"
                 "  if (_isBuilt () && inKey._isBuilt ()) {\n"
                 "    insulateMap () ;\n"
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
                 "      cElement * _p = (cElement *) removedElement ;\n"
                 "      elementID = _p->mID ;\n" ;
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
                 "    * outIndex = GGS_luint (GGS_uint (elementID >= 0, (uint32) elementID), inKey) ;\n"
                 "  }\n"
                 "  macroMyDelete (removedElement, cElement) ;\n"
                 "}\n\n" ;
  }

//--- '_insertElement' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "_insertElement (C_Compiler & inLexique,\n"
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
               "  sint32 elementID = - 1 ;\n"
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
               "    e_" << mMapTypeName << " info  ;\n" ;
  current = mNonExternAttributesList.firstObject () ;
  attributeIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "    info." << current->aNomAttribut << " = inParameter" << attributeIndex << " ;\n" ;
    attributeIndex ++ ;
    current = current->nextObject () ;
  }
  inCppFile << "    GGS_location existingKeyLocation ;\n"
               "    internalInsert (inKey, (void *) & info, mSharedMapRoot->_mRoot, elementID, existingKeyLocation) ;\n"
               "    if (elementID < 0) {\n"
               "      emitInsertMapSemanticErrorMessage (inLexique, inKey, inErrorMessage, existingKeyLocation COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (outIndex != NULL) {\n"
               "    * outIndex = GGS_luint (GGS_uint (elementID >= 0, (uint32) elementID), inKey) ;\n"
               "  }\n"
               "}\n\n" ;

//--- '_searchElement' method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "_searchElement (C_Compiler & inLexique,\n"
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
               "  cElement * node = NULL  ;\n"
               "  if (_isBuilt () && inKey._isBuilt ()) {\n"
               "    AC_galgas_map_element * p = internal_search (inKey) ;\n"
               "    MF_Assert ((p == NULL) || (reinterpret_cast <cElement *> (p) != NULL), \"Dynamic cast error\", 0, 0) ;\n"
               "    node = (cElement *) p ;\n"
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
               "      * outIndex = GGS_luint (GGS_uint (true, (uint32) node->mID), inKey) ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;

//--- Implement search routines
  GGS_insertOrSearchMethodList::cElement * currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" 
              << mMapTypeName << "::\n"
              << "method_" << currentMethod->mMethodName
              << " (C_Compiler & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
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
              << mMapTypeName << "::\n"
                 "modifier_" << currentMethod->mMethodName
              << " (C_Compiler & _inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
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
              << mMapTypeName << "::\n"
                 "modifier_" << currentMethod->mMethodName
              << " (C_Compiler & _inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentMethod->mIsGetIndexMethod.boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    current = mNonExternAttributesList.firstObject () ;
    attributeIndex = 0 ;
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
  inCppFile << "GGS_" << mMapTypeName << " GGS_" << mMapTypeName << "::\n"
               "constructor_mapWithMapToOverride (C_Compiler & /* inLexique */,\n"
               "                                  const GGS_" << mMapTypeName << " & inMapToOverride\n"
               "                                  COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << mMapTypeName << " result ; // Not Built\n"
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
  inCppFile << "GGS_" << mMapTypeName << " GGS_" << mMapTypeName << "::\n"
               "reader_overriddenMap (C_Compiler & /* inLexique */\n"
               "                      COMMA_UNUSED_LOCATION_ARGS) const {\n"
               "  GGS_" << mMapTypeName << " result ; // Not Built\n"
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
  inCppFile << "GGS_string GGS_" << mMapTypeName << "::\n"
               "reader_description (C_Compiler & _inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  C_String s ;\n"
               "  s << \"<map @" << mMapTypeName << " \" ;\n"
               "  if (_isBuilt ()) {\n"
               "    s << count () << \" object\" << ((count () > 1) ? \"s \" : \" \") ;\n"
               "    cElement * p = firstObject () ;\n"
               "    sint32 elementID = 0 ;\n"
               "    while (p != NULL) {\n"
               "      macroValidPointer (p) ;\n"
               "      p->appendForMapDescription (_inLexique, elementID, s, inIndentation COMMA_THERE) ;\n"
               "      p = p->nextObject () ;\n"
               "      elementID ++ ;\n"
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
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << aNomTable << " ;\n"
             "#include \"" << aNomClasseGenerique << ".h\"\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.writeCppTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

//--- Debut de la declaration de la classe table
  inHfile << "class e_" << aNomTable << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generatePublicDeclaration (inHfile, current->aNomAttribut) ;
    current = current->nextObject () ;
  }
  
  if (mNonExternAttributesList.count ()) {
    inHfile << "  public : e_" << aNomTable << " (void) ;\n\n" ;
  }
  inHfile << "} ;\n\n" ; //--- Fin de la declaration de la classe e_...

// ---------------------- declaration de la classe table -----------------
  inHfile.writeCppTitleComment (C_String ("Map '@") + aNomTable + "'") ;

  inHfile << "class GGS_" << aNomTable << " : public "  << aNomClasseGenerique
          << " <e_" << aNomTable << "> {\n"
             "//--- Get object pointer\n"
             "  public : inline GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) { return this ; }\n"
             "  public : inline const GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) const { return this ; }\n"
             "//--- Comparison methods\n"
             "  public : GGS_bool _operator_isEqual (const GGS_" << aNomTable << " & /* inOperand */) const { return GGS_bool (true, true) ; }\n"
             "  public : GGS_bool _operator_isNotEqual (const GGS_" << aNomTable << " & /* inOperand */) const { return GGS_bool (true, true) ; }\n"
             "//--- Handle 'emptyMap' constructor\n"
             "  public : static GGS_" << aNomTable << " constructor_emptyMap (C_Compiler & inLexique COMMA_LOCATION_ARGS) ;\n" ;

//--- Declaring search methods
  GGS_insertOrSearchMethodList::cElement * currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inHfile << "//--- '" << currentMethod->mMethodName << "' search method\n"
               "public : void modifier_" 
            << currentMethod->mMethodName
            << " (C_Compiler & inLexique"
               ",\n                                const GGS_lstring & inKey" ;
    current = mNonExternAttributesList.firstObject () ;
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
            << "GetIndex (C_Compiler & inLexique"
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
            << " (C_Compiler & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    current = mNonExternAttributesList.firstObject () ;
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
            << "GetIndex (C_Compiler & inLexique" 
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
  inHfile << "  public : GGS_string reader_description (C_Compiler & _inLexique\n"
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
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
  inCppFile.writeCppTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

  inCppFile << "#include \"" << aNomClasseGenerique << ".hh\"\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

  if (mNonExternAttributesList.count () > 0) {
    inCppFile << "e_" << aNomTable << "::e_" << aNomTable << " (void) :\n" ;
    GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
    bool first = true ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (first) {
        first = false ;
      }else{
        inCppFile << ",\n" ;
      }
      inCppFile << current->aNomAttribut << " ()" ;
      current = current->nextObject () ;
    }
    inCppFile << " {\n"
                 "}\n\n" ;
    inCppFile.writeCppHyphenLineComment () ;
  }

//--- Instanciate the template
  inCppFile << "template class "
            << aNomClasseGenerique
            << " <e_" << aNomTable << "> ;\n\n" ;


//--------------------- ENGENDRER LA CLASSE TABLE ----------------------------
  inCppFile.writeCppTitleComment (C_String ("Map '@") + aNomTable + "'") ;

  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::\n"
               "constructor_emptyMap (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomTable << " t ;\n"
               "  t.build () ;\n"
               "  return t ;\n"
               "}\n\n" ;

//--- Implementing search methods
  GGS_insertOrSearchMethodList::cElement * currentMethod = mSearchMethodList.firstObject () ;
  while (currentMethod != NULL) {
    macroValidPointer (currentMethod) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::modifier_" 
              << currentMethod->mMethodName
              << " (C_Compiler & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
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
    inCppFile << "  GGS_" << aNomTable << "::cElement * info = "
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
              << "GetIndex (C_Compiler & inLexique"
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
    inCppFile << "  GGS_" << aNomTable << "::cElement * info = "
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
              << " (C_Compiler & _inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::cElement * current = mNonExternAttributesList.firstObject () ;
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
              << "GetIndex (C_Compiler & _inLexique"
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
               "reader_description (C_Compiler & /* _inLexique */\n"
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
