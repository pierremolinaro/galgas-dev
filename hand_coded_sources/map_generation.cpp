//---------------------------------------------------------------------------*
//                                                                           *
//  Generate map declaration and implementation                              *
//                                                                           *
//  Copyright (C) 1999, ..., 2010 Pierre Molinaro.                           *
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
                         C_CompilerEx & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mListmapTypeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.appendCppTitleComment (C_String ("Map list '@") + mListmapTypeName + "'") ;
  inHfile << "extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mListmapTypeName << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ;
  inHfile << "class GGS_" << mListmapTypeName << " : public AC_galgas_listmap {\n"
             "//--- Node class\n"
             "  public : class cElement : public cPtrListMapObject {\n"
             " //--- List attribute\n"
             "    public : GGS_" << mListTypename << " mListObject ;\n"
             " //--- Constructor\n"
             "    public : cElement (LOCATION_ARGS) ;\n"
             " //--- Description\n"
             "    public : virtual C_String performDescription (const PMSInt32 inIndentation) const ;\n"
             "    public : virtual cPtrObject * cloneObject (LOCATION_ARGS) ;\n"
             "    public : virtual bool isEqual (const cPtrListMapObject * inOperand) const ;\n"
             "  } ;\n\n"
             "//--- 'emptyMap' constructor\n"
             "  public : static GGS_" << mListmapTypeName << "\n"
             "  constructor_emptyMap (void) ;\n\n"
             "//--- Handle '.=' operator\n"
             "  public : void dotAssign_operation (const GGS_" << mListmapTypeName << " inOperand) ; //Don't pass 'inOperand' by reference !\n\n"
             "//--- Handling '.' GALGAS operator\n"
             "  public : GGS_" << mListmapTypeName << " operator_concat (const GGS_" << mListmapTypeName << " & inOperand) const ;\n\n"
             "//--- Handle '+=' operator\n"
             "  public : void\n"
             "  addAssign_operation (const GGS_string & inKey" ;
  GGS_typeListeAttributsSemantiques::cEnumerator currentAttribute (mAttributesList, true) ;
  PMSInt32 attributeIndex = 0 ;
  while (currentAttribute.hasCurrentObject ()) {
    inHfile << ",\n"
               "                        const " ;
    currentAttribute._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "inAttribute" << cStringWithSigned (attributeIndex) ;
    attributeIndex ++ ;
    currentAttribute.next () ;
  }
  inHfile <<  ") ;\n\n"

//--- 'description' reader
             "//--- For 'description' reader\n"
             "  protected : virtual const char * _typeNameForDescriptionReader (void) const ;\n\n"

//--- Reader 'allKeys'
             "//--- Reader 'allKeys'\n"
             "  public : GGS_stringset\n"
             "  reader_allKeys (C_CompilerEx & inLexique\n"
             "                  COMMA_LOCATION_ARGS) const ;\n\n"

//--- Reader 'keyList'
             "//--- Reader 'keyList'\n"
             "  public : GGS_stringlist\n"
             "  reader_keyList (C_CompilerEx & inLexique\n"
             "                  COMMA_LOCATION_ARGS) const ;\n\n"

//--- Reader list for key
             "//--- Reader 'listForKey'\n"
             "  public : GGS_" << mListTypename << "\n"
             "  reader_listForKey (C_CompilerEx & inLexique,\n"
             "                     const GGS_string & inKey\n"
             "                     COMMA_LOCATION_ARGS) const ;\n\n"

//--- Enumerator
             "//--- Enumerator\n"
             "  public : class cEnumerator : public cAbstractDictionaryEnumerator {\n"
             "  //--- Contructor\n"
             "    public : cEnumerator (const GGS_" << mListmapTypeName << " & inListMap,\n"
             "                          const bool inAscending) ;\n"
             "  //--- Associated object accessor\n"
             "    public : const GGS_" << mListTypename << " & _object (LOCATION_ARGS) const ;\n"
             "  } ;\n"

//--- Introspection
             "//--- Introspection\n"
             "  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;\n\n"
             "  public : GGS_object reader_object (void) const ;\n\n"
             "  public : static GGS_" << mListmapTypeName << " castFromObject (C_CompilerEx & inLexique,\n"
             "                                           const GGS_object & inObject,\n"
             "                                           const GGS_location & inErrorLocation\n"
             "                                           COMMA_LOCATION_ARGS) ;\n\n"
//--- End of class declaration
             "} ;\n\n" ;
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
                             PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapToImplement::
generateCppClassImplementation (C_CompilerEx & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                PMSInt32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mListmapTypeName << " (\"" << mListmapTypeName << "\", false, NULL) ;\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mListmapTypeName << "::cElement::cElement (LOCATION_ARGS) :\n"
               "cPtrListMapObject (THERE),\n"
               "mListObject (GGS_" << mListTypename << "::constructor_emptyList ()) {\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "cPtrObject * GGS_" << mListmapTypeName << "::cElement::cloneObject (LOCATION_ARGS) {\n"
               "  cElement * result = NULL ;\n"
               "  macroMyNew (result, cElement (THERE)) ;\n"
               "  result->mListObject = mListObject ;\n"
               "  return result ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "bool GGS_" << mListmapTypeName << "::cElement::isEqual (const cPtrListMapObject * inOperand) const {\n"
               "  const GGS_bool equal = mListObject.operator_isEqual (((cElement *) inOperand)->mListObject) ;\n"
               "  return equal.boolValue () ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "C_String GGS_" << mListmapTypeName << "::cElement::\n"
               "performDescription (const PMSInt32 inIndentation) const {\n"
               "  const GGS_string s = mListObject.reader_description (inIndentation) ;\n"
               "  return s.string () ;\n"
               "}\n\n" ;
 
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mListmapTypeName << " GGS_" << mListmapTypeName << "::\n"
               "constructor_emptyMap (void) {\n"
               "  GGS_" << mListmapTypeName << " result ;\n"
               "  result.alloc (HERE) ;\n"
               "  return result ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const char * GGS_" << mListmapTypeName << "::\n"
               "_typeNameForDescriptionReader (void) const {\n"
               "  return \"@" << mListmapTypeName << "\" ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mListmapTypeName << " GGS_" << mListmapTypeName << "::\n"
               "operator_concat (const GGS_" << mListmapTypeName << " & inOperand) const {\n"
               "  GGS_" << mListmapTypeName << " result = * this ;\n"
               "  result.dotAssign_operation (inOperand) ;\n"
               "  return result ;\n"
               "}\n\n" ;
               
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mListmapTypeName << "::\n"
               "dotAssign_operation (const GGS_" << mListmapTypeName << " inOperand) {\n"
               "  if (isBuilt () && inOperand.isBuilt ()) {\n"
               "    if (count (HERE) == 0) {\n"
               "      * this = inOperand ;\n"
               "    }else if (inOperand.count (HERE) > 0) {\n"
               "      cPtrDictionary * dictPtr = macroPtr (inOperand, cPtrDictionary)  ;\n"
               "      cPtrDictionaryNode * nodeSortedArray = dictPtr->nodeSortedArray () ;\n"
               "      const PMSInt32 objectCount = dictPtr->count () ;\n"
               "      for (PMSInt32 i=0 ; i<objectCount ; i++) {\n"
               "        const GGS_string key = nodeSortedArray [i].key () ;\n"
               "        const PM_C_Object object = nodeSortedArray [i].mObject ;\n"
               "        cElement * elementPtr = macroPtr (object, cElement) ;\n"
               "        bool wasInserted = false ;\n"
               "        cPtrDictionaryNode * nodePtr = findOrAddNodeForKey (key, wasInserted) ;\n"
               "        if (wasInserted) {\n"
               "           cElement * p = NULL ;\n"
               "           macroMyNew (p, cElement (HERE)) ;\n"
               "           nodePtr->mObject.setPointer (p) ;\n"
               "        }\n"
               "        GGS_" << mListTypename << " & listPtr = macroPtr (nodePtr->mObject, cElement)->mListObject ;\n"
               "        listPtr.dotAssign_operation (elementPtr->mListObject) ;\n"
               "      }\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;

//--- Handle '+=' operator
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mListmapTypeName << "::\n"
               "addAssign_operation (const GGS_string & inKey" ;
  GGS_typeListeAttributsSemantiques::cEnumerator currentAttribute (mAttributesList, true) ;
  PMSInt32 attributeIndex = 0 ;
  while (currentAttribute.hasCurrentObject ()) {
    inCppFile << ",\n"
                 "                      const " ;
    currentAttribute._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "inAttribute" << cStringWithSigned (attributeIndex) ;
    attributeIndex ++ ;
    currentAttribute.next () ;
  }
  inCppFile << ") {\n"
               "  if (isBuilt () && inKey.isBuilt ()" ;
  currentAttribute.rewind () ;
  attributeIndex = 0 ;
  while (currentAttribute.hasCurrentObject ()) {
    inCppFile << " && inAttribute" << cStringWithSigned (attributeIndex) << ".isBuilt ()" ;
    attributeIndex ++ ;
    currentAttribute.next () ;
  }
  inCppFile << ") {\n"
               "    bool wasInserted = false ;\n"
               "    cPtrDictionaryNode * nodePtr = findOrAddNodeForKey (inKey, wasInserted) ;\n"
               "    MF_Assert (nodePtr != NULL, \"NULL pointer (was inserted %d)\", wasInserted, 0) ;\n"
               "    if (wasInserted) {\n"
               "       cElement * p = NULL ;\n"
               "       macroMyNew (p, cElement (HERE)) ;\n"
               "       nodePtr->mObject.setPointer (p) ;\n"
               "    }\n"
               "    GGS_" << mListTypename << " & listPtr = macroPtr (nodePtr->mObject, cElement)->mListObject ;\n"
               "    listPtr.addAssign_operation (" ;
  currentAttribute.rewind () ;
  attributeIndex = 0 ;
  while (currentAttribute.hasCurrentObject ()) {
    if (attributeIndex > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "inAttribute" << cStringWithSigned (attributeIndex) ;
    attributeIndex ++ ;
    currentAttribute.next () ;
  }
  inCppFile << ") ;\n"
               "  }\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mListTypename << " GGS_" << mListmapTypeName << "::\n"
               "reader_listForKey (C_CompilerEx & /* inLexique */,\n"
               "                   const GGS_string & inKey\n"
               "                   COMMA_UNUSED_LOCATION_ARGS) const {\n"
               "  GGS_" << mListTypename << " result ;\n"
               "  if (isBuilt () && inKey.isBuilt ()) {\n"
               "    cPtrDictionaryNode * nodePtr = dictionaryNodeForKey (inKey.string ()) ; \n"
               "    if (nodePtr == NULL) {\n"
               "      result = GGS_" << mListTypename << "::constructor_emptyList () ;\n"
               "    }else{\n"
               "      result = macroPtr (nodePtr->mObject, cElement)->mListObject ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;

//--- Reader 'allKeys'
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_stringset GGS_" << mListmapTypeName << "::\n"
               "reader_allKeys (C_CompilerEx & /* inLexique */\n"
               "                COMMA_UNUSED_LOCATION_ARGS) const {\n\n"
               "  GGS_stringset result ;\n"
               "  result.setPointer (_pointer ()) ;\n"
               "  return result ;\n"
               "}\n\n" ;

//--- Reader 'keyList'
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_stringlist GGS_" << mListmapTypeName << "::\n"
               "reader_keyList (C_CompilerEx & /* inLexique */\n"
               "                COMMA_UNUSED_LOCATION_ARGS) const {\n\n"
               "  GGS_stringlist result ;\n"
               "  if (isBuilt ()) {\n"
               "    result = GGS_stringlist::constructor_emptyList () ;\n"
               "    cPtrDictionary * dictPtr = macroPtr (*this, cPtrDictionary)  ;\n"
               "    cPtrDictionaryNode * nodeSortedArray = dictPtr->nodeSortedArray () ;\n"
               "    const PMSInt32 objectCount = dictPtr->count () ;\n"
               "    for (PMSInt32 i=0 ; i<objectCount ; i++) {\n"
               "      const GGS_string key = nodeSortedArray [i].key () ;\n"
               "      result.addAssign_operation (key) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;

//--- Enumerator
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mListmapTypeName << "::cEnumerator::\n"
               "cEnumerator (const GGS_" << mListmapTypeName << " & inListMap,\n"
               "             const bool inAscending) :\n"
               "cAbstractDictionaryEnumerator (inListMap, inAscending) {\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const GGS_" << mListTypename << " & GGS_" << mListmapTypeName << "::cEnumerator::\n"
               "_object (LOCATION_ARGS) const {\n"
               "  cPtrDictionary * dictPtr = macroPtr (mEnumeratedDictionary, cPtrDictionary)  ;\n"
               "  MF_AssertThere (currentIndex () >= 0, \"Access with negative index %d\", currentIndex (), 0) ;\n"
               "  MF_AssertThere (currentIndex () < dictPtr->count (), \"Access with index %d >= count %d\", currentIndex (), dictPtr->count ()) ;\n"
               "  cPtrDictionaryNode * nodeSortedArray = dictPtr->nodeSortedArray () ;\n"
               "  PM_C_Object listObject = nodeSortedArray [currentIndex ()].mObject ;\n"
               "  cElement * objectPtr = macroPtr (listObject, cElement) ;\n"
               "  return objectPtr->mListObject ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_object GGS_" << mListmapTypeName << "::reader_object (void) const {\n"
               "  GGS_object result ;\n"
               "  if (isBuilt ()) {\n"
               "    GGS_" << mListmapTypeName << " * p = NULL ;\n"
               "    macroMyNew (p, GGS_" << mListmapTypeName << " (*this)) ;\n"
               "    result = GGS_object (p) ;\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mListmapTypeName << " GGS_" << mListmapTypeName << "::castFromObject (C_CompilerEx & inLexique,\n"
               "                                   const GGS_object & inObject,\n"
               "                                   const GGS_location & inErrorLocation\n"
               "                                   COMMA_LOCATION_ARGS) {\n"
               "  GGS_" << mListmapTypeName << " result ;\n"
               "  const GGS__root * embeddedObject = inObject.embeddedObject () ;\n"
               "  if (NULL != embeddedObject) {\n"
               "    const GGS_" << mListmapTypeName << " * p = dynamic_cast <const GGS_" << mListmapTypeName << " *> (embeddedObject) ;\n"
               "    if (NULL != p) {\n"
               "      result = * p ;\n"
               "    }else{\n"
               "      castFromObjectErrorSignaling (inLexique, inErrorLocation, & kTypeDescriptor_GGS_" << mListmapTypeName << ", embeddedObject COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const C_galgas_type_descriptorEX * GGS_" << mListmapTypeName << "::typeDescriptor (void) const {\n"
               "  return & kTypeDescriptor_GGS_" << mListmapTypeName << " ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Map Index Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_CompilerEx & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mMapindexTypeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.appendCppTitleComment (C_String ("Map index '@") + mMapindexTypeName + "'") ;
  inHfile << "extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mMapindexTypeName << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ;
  inHfile << "class GGS_" << mMapindexTypeName << " : public AC_galgas_mapindex {\n"
             "//--- 'null' constructor\n"
             "  public : static GGS_" << mMapindexTypeName << "\n"
             "  constructor_null (C_CompilerEx & inLexique\n"
             "                    COMMA_LOCATION_ARGS) ;\n\n"
             "//--- Comparison operators\n"
             "  public : GGS_bool operator_isEqual (const GGS_" << mMapindexTypeName << " & inOperand) const ;\n"
             "  public : GGS_bool operator_isNotEqual (const GGS_" << mMapindexTypeName << " & inOperand) const ;\n\n"
             "//--- 'description' reader declaration\n"
             "  public : virtual GGS_string reader_description (const PMSInt32 inIndentation = 0) const ;\n\n"
             "//--- Introspection\n"
             "  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;\n\n"
             "  public : GGS_object reader_object (void) const ;\n\n"
             "  public : static GGS_" << mMapindexTypeName << " castFromObject (C_CompilerEx & inLexique,\n"
             "                                           const GGS_object & inObject,\n"
             "                                           const GGS_location & inErrorLocation\n"
             "                                           COMMA_LOCATION_ARGS) ;\n\n"
             "//--- Type Method 'makeRegularIndex'\n"
             "  public : static void\n"
             "  class_method_makeRegularIndex (C_CompilerEx & inLexique,\n"
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
//--- Declare mapindex search error messages
  GGS_mapIndexSearchReaderMap::cEnumerator currentMethod (mMapIndexSearchReaderMap) ;
  while (currentMethod.hasCurrentObject ()) {
    inHfile << "  public : static const utf32 kMapIndexSearchMessage_" << currentMethod._key (HERE) << " [] ;\n\n" ;
    currentMethod.next () ;
  }

  currentMethod.rewind () ;
  while (currentMethod.hasCurrentObject ()) {
    inHfile << "  public : void\n"
               "  method_" << currentMethod._key (HERE) << " (C_CompilerEx & inLexique,\n"
               "                     GGS_lstring & outKey" ;
    GGS_typeListeAttributsSemantiques::cEnumerator currentAttribute (mMapAttributesList, true) ;
    PMSInt32 attributeIndex = 1 ;
    while (currentAttribute.hasCurrentObject ()) {
      inHfile << ",\n"
                 "                     " ;
      currentAttribute._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << "outAttribute" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      currentAttribute.next () ;
    }
    inHfile << "\n"
               "                     COMMA_LOCATION_ARGS) const ;\n" ;
    currentMethod.next () ;
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
                             PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapindexToImplement::
generateCppClassImplementation (C_CompilerEx & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                PMSInt32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  inCppFile.appendCppTitleComment (C_String ("map index '@") + mMapindexTypeName + "'") ;
  inCppFile << "const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mMapindexTypeName << " (\"" << mMapindexTypeName << "\", false, NULL) ;\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mMapindexTypeName << " GGS_" << mMapindexTypeName << "::\n"
               "constructor_null (C_CompilerEx & /* inLexique */\n"
               "                  COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << mMapindexTypeName << " result ;\n"
               "  result.mState = kNull ;\n"
               "  return result ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mMapindexTypeName << "::\n"
               "operator_isEqual (const GGS_" << mMapindexTypeName << " & inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   (mState == inOperand.mState)) ;\n"
               "}\n\n" ;
              
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mMapindexTypeName << "::\n"
               "operator_isNotEqual (const GGS_" << mMapindexTypeName << " & inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (),\n"
               "                   (mState != inOperand.mState)) ;\n"
               "}\n\n" ;
              
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mMapindexTypeName << "::\n"
               "reader_description (const PMSInt32 /* inIndentation */) const {\n"
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
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapindexTypeName << "::\n"
               "class_method_makeRegularIndex (C_CompilerEx & /* inLexique*/ ,\n"
               "                               const GGS_lstring & inKey,\n"
               "                               GGS_" << mMapTypeName << " & ioMap,\n"
               "                               GGS_" << mMapindexTypeName << " & outIndex\n"
               "                               COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  outIndex.mState = kRegular ;\n"
               "  outIndex.mKey = inKey ;\n"
               "  ioMap.enterIndex (inKey, outIndex.mIndex) ;\n"
               "  if (outIndex.mIndex.retrieve () == NULL) {\n"
               "    outIndex.drop () ;\n"
               "  }\n"
               "}\n\n" ;

//--- Declare mapindex search error messages
  GGS_mapIndexSearchReaderMap::cEnumerator currentMethod (mMapIndexSearchReaderMap) ;
  while (currentMethod.hasCurrentObject ()) {
    inCppFile << "const utf32 GGS_" << mMapindexTypeName << "::kMapIndexSearchMessage_" << currentMethod._key (HERE) << " [] = " ;
    inCppFile.appendUTF32LiteralStringConstant (currentMethod._mRetrieveErrorMessage (HERE).string ()) ;
    inCppFile << " ;\n\n" ;
    currentMethod.next () ;
  }

//--- Search methods
  currentMethod.rewind () ;
  while (currentMethod.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mMapindexTypeName << "::\n"
                 "method_" << currentMethod._key (HERE) << " (C_CompilerEx & inLexique,\n"
                 "                   GGS_lstring & outKey" ;
    GGS_typeListeAttributsSemantiques::cEnumerator currentAttribute (mMapAttributesList, true) ;
    PMSInt32 attributeIndex = 1 ;
    while (currentAttribute.hasCurrentObject ()) {
      inCppFile << ",\n"
                   "                   " ;
      currentAttribute._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "outAttribute" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      currentAttribute.next () ;
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
                 "      AC_galgas_map::emitMapSemanticErrorMessage (inLexique, mKey,\n"
                 "                                                  kMapIndexSearchMessage_" << currentMethod._key (HERE) << "\n"
                 "                                                  COMMA_THERE) ;\n"
                 "    }else{\n"
                 "      MF_Assert (reinterpret_cast <const elementOf_GGS_" << mMapTypeName << " *> (mIndex.retrieve ()) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
                 "      const elementOf_GGS_" << mMapTypeName << " * p = (const elementOf_GGS_" << mMapTypeName << " *) mIndex.retrieve () ;\n"
                 "      outKey = mKey ;\n" ;
    currentAttribute.rewind () ;
    attributeIndex = 1 ;
    while (currentAttribute.hasCurrentObject ()) {
      inCppFile << "      outAttribute" << cStringWithSigned (attributeIndex)
                << " = p->mInfo." << currentAttribute._mAttributeName (HERE)
                << " ;\n" ;
      attributeIndex ++ ;
      currentAttribute.next () ;
    }
    inCppFile << "      shouldDropArguments = false ;\n"
                 "    }\n"
                 "    break ;\n"
                 "  case kNull:\n"
                 "    inLexique.onTheFlyRunTimeError (\"key access on a null index\" COMMA_THERE) ;\n"
                 "    break ;\n"
                 "  }\n"
                 "  if (shouldDropArguments) {\n"
                 "    outKey.drop () ;\n" ;
    for (PMSInt32 i=1 ; i<=mMapAttributesList.count () ; i++) {
      inCppFile << "    outAttribute" << cStringWithSigned (i) << ".drop () ;\n" ;
    }
    inCppFile << "  }\n"
                 "}\n\n" ;
    currentMethod.next () ;
  }
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_object GGS_" << mMapindexTypeName << "::reader_object (void) const {\n"
               "  GGS_object result ;\n"
               "  if (isBuilt ()) {\n"
               "    GGS_" << mMapindexTypeName << " * p = NULL ;\n"
               "    macroMyNew (p, GGS_" << mMapindexTypeName << " (*this)) ;\n"
               "    result = GGS_object (p) ;\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mMapindexTypeName << " GGS_" << mMapindexTypeName << "::castFromObject (C_CompilerEx & inLexique,\n"
               "                                   const GGS_object & inObject,\n"
               "                                   const GGS_location & inErrorLocation\n"
               "                                   COMMA_LOCATION_ARGS) {\n"
               "  GGS_" << mMapindexTypeName << " result ;\n"
               "  const GGS__root * embeddedObject = inObject.embeddedObject () ;\n"
               "  if (NULL != embeddedObject) {\n"
               "    const GGS_" << mMapindexTypeName << " * p = dynamic_cast <const GGS_" << mMapindexTypeName << " *> (embeddedObject) ;\n"
               "    if (NULL != p) {\n"
               "      result = * p ;\n"
               "    }else{\n"
               "      castFromObjectErrorSignaling (inLexique, inErrorLocation, & kTypeDescriptor_GGS_" << mMapindexTypeName << ", embeddedObject COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const C_galgas_type_descriptorEX * GGS_" << mMapindexTypeName << "::typeDescriptor (void) const {\n"
               "  return & kTypeDescriptor_GGS_" << mMapindexTypeName << " ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Map Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_CompilerEx & /* inLexique */) const {
  inHfile.appendCppTitleComment (C_String ("Element of map '@") + mMapTypeName + "'") ;
//--- Starting map element class declaration
  inHfile << "class e_" << mMapTypeName << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
  while (current.hasCurrentObject ()) {
    current._mAttributType (HERE) (HERE)->generatePublicDeclaration (inHfile, current._mAttributeName (HERE)) ;
    current.next () ;
  }
  inHfile << "\n" ;
  if (mNonExternAttributesList.count () > 0) {
    inHfile << "  public : e_" << mMapTypeName << " (void) ;\n" ;
  }
  inHfile << "} ;\n\n" ; //--- End of map element class declaration e_...
  inHfile.appendCppHyphenLineComment () ;
  inHfile << "class elementOf_GGS_" << mMapTypeName << " : public AC_galgas_map_element {\n"
             "//--- Constructor\n"
             "  public : elementOf_GGS_" << mMapTypeName << " (const GGS_lstring & inKey,\n"
             "                                     const PMSInt32 inIndex,\n"
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
             "  public : void appendForMapDescription (const PMSInt32 inElementIndex,\n"
             "                                         C_String & ioString,\n"
             "                                         const PMSInt32 inIndentation) const ;\n"
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
  inHfile.appendCppTitleComment (C_String ("Map '@") + mMapTypeName + "'") ;

  inHfile << "class elementOf_GGS_" << mMapTypeName << " ;\n\n" ;
  inHfile << "extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mMapTypeName << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ;
  inHfile << "class GGS_" << mMapTypeName << " : public AC_galgas_map {\n" ;
  inHfile << "//--- Element Class\n"
             "  public : typedef elementOf_GGS_" << mMapTypeName << " cElement ;\n\n"
             "//--- Get pointers\n"
             "  public : inline cElement * firstObject (void) const { return (cElement *) internalFirstObject () ; }\n"
             "  public : inline cElement * lastObject (void) const { return (cElement *) internalLastObject () ; }\n\n"
             "//--- Comparison methods\n"
             "  public : GGS_bool operator_isEqual (const GGS_" << mMapTypeName << " & inOperand) const ;\n"
             "  public : GGS_bool operator_isNotEqual (const GGS_" << mMapTypeName << " & inOperand) const ;\n\n"
             "//--- Introspection\n"
             "  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;\n\n"
             "  public : GGS_object reader_object (void) const ;\n\n"
             "  public : static GGS_" << mMapTypeName << " castFromObject (C_CompilerEx & inLexique,\n"
             "                                           const GGS_object & inObject,\n"
             "                                           const GGS_location & inErrorLocation\n"
             "                                           COMMA_LOCATION_ARGS) ;\n\n"
             "//--- Create an element\n"
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
             "  public : static GGS_" << mMapTypeName << " constructor_emptyMap (C_CompilerEx & inLexique COMMA_LOCATION_ARGS) ;\n\n"
             "//--- Method used for duplicate a map\n"
             "  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;\n\n" ;

//--- Modifiers "set'Value'ForKey"
  inHfile << "//--- Modifiers \"set'Value'ForKey\"\n" ;
  GGS_typeSemanticAttributesMap::cEnumerator currentAttributeForSetter (mAttributeMap, true) ;
  while (currentAttributeForSetter.hasCurrentObject ()) {
    if (currentAttributeForSetter._mHasSetter (HERE).boolValue ()) {
      inHfile << "  public : void modifier_set" << currentAttributeForSetter._key (HERE).stringWithUpperCaseFirstLetter ()
              << "ForKey (C_CompilerEx & inLexique,\n"
                 "                        const " ;
      currentAttributeForSetter._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << "inValue,\n"
                 "                        const GGS_string & inKey\n"
                 "                        COMMA_LOCATION_ARGS) ;\n" ;
    }
    currentAttributeForSetter.next () ;
  }
  inHfile << "\n" ;

//--- Declare remove error messages
  GGS_insertOrSearchMethodList::cEnumerator currentRemoveMethod (mRemoveMethodList, true) ;
  while (currentRemoveMethod.hasCurrentObject ()) {
    inHfile << "  public : static const utf32 kRemoveMessage_" << currentRemoveMethod._mMethodName (HERE) << " [] ;\n\n" ;
    currentRemoveMethod.next () ;
  }

//--- Declaring remove methods
  currentRemoveMethod.rewind () ;
  while (currentRemoveMethod.hasCurrentObject ()) {
    inHfile << "//--- '" << currentRemoveMethod._mMethodName (HERE) << "' Remove Modifier\n" ;
    inHfile << "  public : void modifier_"
            << currentRemoveMethod._mMethodName (HERE)
            << " (C_CompilerEx & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    if (currentRemoveMethod._mIsGetIndexMethod (HERE).boolValue ()) {
      inHfile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::cEnumerator currentAttribute (mNonExternAttributesList, true) ;
    PMSInt32 attributeIndex = 0 ;
    while (currentAttribute.hasCurrentObject ()) {
      inHfile << ",\n                                " ;
      currentAttribute._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << "outParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      currentAttribute.next () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n\n" ;
    currentRemoveMethod.next () ;
  }


//--- Declare insert error messages
  GGS_insertOrSearchMethodList::cEnumerator currentInsertMethod (mInsertMethodList, true) ;
  while (currentInsertMethod.hasCurrentObject ()) {
    inHfile << "  public : static const utf32 kInsertMessage_" << currentInsertMethod._mMethodName (HERE) << " [] ;\n\n" ;
    if (currentInsertMethod._mShadowErrorMessage (HERE).string ().length () > 0) {
      inHfile << "  public : static const utf32 kShadowMessage_" << currentInsertMethod._mMethodName (HERE) << " [] ;\n\n" ;
    }
    currentInsertMethod.next () ;
  }


//--- Declaring insert methods
  currentInsertMethod.rewind () ;
  while (currentInsertMethod.hasCurrentObject ()) {
    inHfile << "//--- '" << currentInsertMethod._mMethodName (HERE) << "' Insert Modifier\n" ;
    inHfile <<    "  public : void modifier_"
            << currentInsertMethod._mMethodName (HERE)
            << " (C_CompilerEx & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    if (currentInsertMethod._mIsGetIndexMethod (HERE).boolValue ()) {
      inHfile << ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::cEnumerator currentAttribute (mNonExternAttributesList, true) ;
    PMSInt32 attributeIndex = 0 ;
    while (currentAttribute.hasCurrentObject ()) {
      inHfile << ",\n                                const " ;
      currentAttribute._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      currentAttribute.next () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n\n" ;
    currentInsertMethod.next () ;
  }

//--- Define search error messages
  GGS_insertOrSearchMethodList::cEnumerator currentSearchMethod (mSearchMethodList, true) ;
  while (currentSearchMethod.hasCurrentObject ()) {
    inHfile << "  public : static const utf32 kSearchMessage_" << currentSearchMethod._mMethodName (HERE) << " [] ;\n\n" ;
    currentSearchMethod.next () ;
  }
//--- Declaring search methods
  currentSearchMethod.rewind () ;
  while (currentSearchMethod.hasCurrentObject ()) {
    inHfile << "//--- '" << currentSearchMethod._mMethodName (HERE) << "' Search Method\n"
               "  public : void method_" 
            << currentSearchMethod._mMethodName (HERE)
            << " (C_CompilerEx & inLexique"
            << ",\n                                const GGS_lstring & inKey" ;
    if (currentSearchMethod._mIsGetIndexMethod (HERE).boolValue ()) {
      inHfile <<  ",\n                                GGS_luint & outIndex" ;
    }
    GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
    PMSInt32 attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inHfile << ",\n                                " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) const ;\n" ;
    currentSearchMethod.next () ;
  }

  if (currentRemoveMethod.count () > 0) {
    inHfile << "//--- Internal method for removing an element\n"
               "  protected : void removeElement (C_CompilerEx & inLexique,\n"
               "                                   const utf32 * inErrorMessage,\n"
               "                                   const GGS_lstring & inKey,\n" ;
    GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
    PMSInt32 attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inHfile << "                                   " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << "outParameter" << cStringWithSigned (attributeIndex) << ",\n" ;
      attributeIndex ++ ;
      current.next () ;
    }
    inHfile << "                                   GGS_luint * outIndex\n"
               "                                   COMMA_LOCATION_ARGS) ;\n" ;
  }

  inHfile << "//--- Internal method for inserting an element\n"
             "  protected : void insertElement (C_CompilerEx & inLexique,\n"
             "                                   const utf32 * inErrorMessage,\n"
             "                                   const GGS_lstring & inKey,\n" ;
  GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
  PMSInt32 attributeIndex = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << "                                   const " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inHfile) ;
    inHfile << "& inParameter" << cStringWithSigned (attributeIndex) << ",\n" ;
    attributeIndex ++ ;
    current.next () ;
  }
  inHfile << "                                   GGS_luint * outIndex\n"
             "                                   COMMA_LOCATION_ARGS) ;\n" ;
  
  inHfile << "//--- Internal method for searching for an element\n"
             "  protected : void searchElement (C_CompilerEx & inLexique,\n"
             "                                   const utf32 * inErrorMessage,\n"
             "                                   const GGS_lstring & inKey,\n" ;
  current.rewind () ;
  attributeIndex = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << "                                   " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inHfile) ;
    inHfile << "& outParameter" << cStringWithSigned (attributeIndex) << ",\n" ;
    attributeIndex ++ ;
    current.next () ;
  }
  inHfile << "                                   GGS_luint * outIndex\n"
             "                                   COMMA_LOCATION_ARGS) const ;\n"
//--- Generate 'description' reader declaration
             "  public : virtual GGS_string reader_description (const PMSInt32 inIndentation = 0) const ;\n"
//--- Generate 'mapWithMapToOverride' constructor declaration
              "  public : static GGS_" << mMapTypeName << " constructor_mapWithMapToOverride (C_CompilerEx & inLexique,\n"
              "                                            const GGS_" << mMapTypeName << " & inMapToOverride\n"
              "                                            COMMA_LOCATION_ARGS) ;\n"
//--- Generate 'overriddenMap' reader declaration
              "  public : GGS_" << mMapTypeName << " reader_overriddenMap (C_CompilerEx & inLexique\n"
              "                                            COMMA_LOCATION_ARGS) const ;\n"
//--- Enumerator declaration
             "//--------------------------------- Map Enumerator\n"
             "  public : class cEnumerator : public cAbstractMapEnumerator {\n"
             "  //--- Constructors\n"
             "    public : inline cEnumerator (const GGS_" << mMapTypeName << " & inMap,\n"
             "                                 const bool inAscending) :\n"
             "    cAbstractMapEnumerator (inMap, inAscending) {\n"
             "    }\n"
             "    public : inline cEnumerator (const GGS_" << mMapTypeName << " & inMap) :\n"
             "    cAbstractMapEnumerator (inMap) {\n"
             "    }\n"
             "  //--- Iterator method\n"
             "    public : inline cElement * nextObject (void) {\n"
             "      return (cElement *) internalNextObject () ;\n"
             "    }\n" ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inHfile << "    public : /* const */ " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inHfile) ;
    inHfile << "  & _" << current._mAttributeName (HERE) << " (LOCATION_ARGS) const ;\n" ;
    current.next () ;
  }
  inHfile << "  } ;\n"
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
                             PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_mapToImplement::
generateCppClassImplementation (C_CompilerEx & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                PMSInt32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
  if (mNonExternAttributesList.count () > 0) {
    inCppFile.appendCppTitleComment (C_String ("class 'e_") + mMapTypeName + "'") ;
    inCppFile << "e_" << mMapTypeName << "::e_" << mMapTypeName << " (void) :\n" ;
    GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
    bool first = true ;
    while (current.hasCurrentObject ()) {
      if (first) {
        first = false ;
      }else{
        inCppFile << ",\n" ;
      }
      inCppFile << current._mAttributeName (HERE) << " ()" ;
      current.next () ;
    }
    inCppFile << " {\n}\n\n" ;
  }

  inCppFile.appendCppTitleComment (C_String ("class map '@") + mMapTypeName + "'") ;

  inCppFile << "const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << mMapTypeName << " (\"" << mMapTypeName << "\", false, NULL) ;\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Constructor for type element
  inCppFile << "elementOf_GGS_" << mMapTypeName << "::\n"
               "elementOf_GGS_" << mMapTypeName << " (const GGS_lstring & inKey,\n"
               "              const PMSInt32 inIndex,\n"
               "              const e_" << mMapTypeName << " & inInfo) :\n"
               "AC_galgas_map_element (inKey, inIndex),\n"
               "mInfo (inInfo) {\n"
               "}\n\n" ;

//--- Method for 'reader' element
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void elementOf_GGS_" << mMapTypeName << "::\n"
               "appendForMapDescription (const PMSInt32 inElementIndex,\n"
               "                         C_String & ioString,\n"
               "                         const PMSInt32 inIndentation) const {\n"
               "  ioString << \"\\n\" ;\n"
               "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
               "  ioString << \"|-key \" ;\n"
               "  ioString.appendSigned (inElementIndex) ;\n"
               "  ioString << \":\" << mKey.reader_description (inIndentation + 1) ;\n" ;
  GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
  while (current.hasCurrentObject ()) {
    inCppFile << "  ioString << \"\\n\" ;\n"
                 "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
                 "  ioString << \"|-value \" ;\n"
                 "  ioString.appendSigned (inElementIndex) ;\n"
                 "  ioString << \":\" << mInfo." << current._mAttributeName (HERE) << ".reader_description (inIndentation + 1) ;\n" ;
    current.next () ;
  }
  inCppFile << "}\n\n" ;

//--- 'isEqualToMapElement' method
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "bool elementOf_GGS_" << mMapTypeName << "::\n" ;
  current.rewind () ;
  if (! current.hasCurrentObject ()) {
    inCppFile << "isEqualToMapElement (const AC_galgas_map_element * /* inOperand */) const {\n"
                 "  return true ;\n" ;
  }else{
    inCppFile << "isEqualToMapElement (const AC_galgas_map_element * inOperand) const {\n"
                 "  const elementOf_GGS_" << mMapTypeName << " * ptr = dynamic_cast <const elementOf_GGS_" << mMapTypeName << " *> (inOperand) ;\n"
                 "  macroValidPointer (ptr) ;\n"
                 "  return " ;
    bool first = true ;
    while (current.hasCurrentObject ()) {
      if (first) {
        first = false ;
      }else{
        inCppFile << "\n           && " ;
      }
      inCppFile << "(mInfo." << current._mAttributeName (HERE) << ".operator_isEqual (ptr->mInfo." << current._mAttributeName (HERE) << ")).boolValue ()" ;
      current.next () ;
    }
    inCppFile << " ;\n" ;
  }
  inCppFile << "}\n\n" ;

//--- 'new_element' method
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "AC_galgas_map_element * GGS_" << mMapTypeName << "::\n"
               "new_element (const GGS_lstring & inKey, void * inInfo) {\n"
               "  MF_Assert (reinterpret_cast <e_" << mMapTypeName << " *> (inInfo) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  AC_galgas_map_element * p = NULL ;\n"
               "  e_" << mMapTypeName << " * info = (e_" << mMapTypeName << " *) inInfo ;\n"
               "  macroMyNew (p, cElement (inKey, nextIndex (), * info)) ;\n"
               "  return p ;\n"
               "}\n\n" ;

//--- 'assignInfo' method
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "assignInfo (AC_galgas_map_element * inPtr, void * inInfo) {\n"
               "  MF_Assert (reinterpret_cast <cElement *> (inPtr) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  MF_Assert (reinterpret_cast <e_" << mMapTypeName << " *> (inInfo) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  cElement * p = (cElement *) inPtr ;\n"
               "  e_" << mMapTypeName << " * info = (e_" << mMapTypeName << " *) inInfo ;\n"
               "  p->mInfo = * info ;\n"
               "}\n\n" ;

//--- 'constructor_emptyMap' static method
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mMapTypeName << " GGS_" << mMapTypeName << "::\n"
               "constructor_emptyMap (C_CompilerEx & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << mMapTypeName << " result ;\n"
               "  macroMyNew (result.mSharedMapRoot, cMapRoot) ;\n"
               "  return result ;\n"
               "}\n\n" ;

//--- 'enterIndex'  method
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "enterIndex (const GGS_lstring & inKey,\n"
               "            AC_galgas_index_core & outIndex) {\n"
               "  e_" << mMapTypeName << " info  ;\n"
               "  internalEnterIndex (inKey,\n"
               "                      (void *) & info,\n"
               "                      outIndex) ;\n"
               "}\n\n" ;

//--- Generate comparison
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mMapTypeName << "::\n"
               "operator_isEqual (const GGS_" << mMapTypeName << " & inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (), isEqualToMap (inOperand)) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << mMapTypeName << "::\n"
               "operator_isNotEqual (const GGS_" << mMapTypeName << " & inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (), ! isEqualToMap (inOperand)) ;\n"
               "}\n\n" ;

//--- 'internalInsertForDuplication' method
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "internalInsertForDuplication (AC_galgas_map_element * inPtr) {\n"
               "  MF_Assert (reinterpret_cast <cElement *> (inPtr) != NULL, \"Dynamic cast error\", 0, 0) ;\n"
               "  cElement * p = (cElement *) inPtr ;\n"
               "  PMSInt32 attributeIndex = -1 ; // Unused here\n"
               "  GGS_location existingKeyLocation ; // Unused here\n"
               "  internalInsert (p->mKey, (void *) & p->mInfo, attributeIndex, existingKeyLocation) ;\n"
               "}\n\n" ;

//--- 'removeElement' method
  if (mRemoveMethodList.firstObject () != NULL) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mMapTypeName << "::\n"
                 "removeElement (C_CompilerEx & inLexique,\n"
                 "                const utf32 * inErrorMessage,\n"
                 "                const GGS_lstring & inKey,\n" ;
    current.rewind () ;
    PMSInt32 attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "                " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "outParameter" << cStringWithSigned (attributeIndex) << ",\n" ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << "                GGS_luint * outIndex\n"
                 "                COMMA_LOCATION_ARGS) {\n"
                 "  AC_galgas_map_element * removedElement = NULL ;\n"
                 "  PMSInt32 elementID = - 1 ;\n"
                 "  if (isBuilt () && inKey.isBuilt ()) {\n"
                 "    removedElement = internalRemove (inKey) ;\n"
                 "    if (removedElement == NULL) {\n"
                 "      emitMapSemanticErrorMessage (inLexique, inKey, inErrorMessage COMMA_THERE) ;\n" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "      outParameter" << cStringWithSigned (attributeIndex) << ".drop () ;\n" ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << "    }else{\n"
                 "      cElement * ptr = (cElement *) removedElement ;\n"
                 "      elementID = ptr->mID ;\n" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "      outParameter" << cStringWithSigned (attributeIndex) << " = ptr->mInfo." << current._mAttributeName (HERE) << " ;\n" ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << "    }\n"
                 "  }\n"
                 "  if (outIndex != NULL) {\n"
                 "    * outIndex = GGS_luint (GGS_uint (elementID >= 0, (PMUInt32) elementID), inKey) ;\n"
                 "  }\n"
                 "  macroMyDelete (removedElement, cElement) ;\n"
                 "}\n\n" ;
  }

//--- 'insertElement' method
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "insertElement (C_CompilerEx & inLexique,\n"
               "                const utf32 * inErrorMessage,\n"
               "                const GGS_lstring & inKey,\n" ;
  current.rewind () ;
  PMSInt32 attributeIndex = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << "                const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "inParameter" << cStringWithSigned (attributeIndex) << ",\n" ;
    attributeIndex ++ ;
    current.next () ;
  }
  inCppFile << "                GGS_luint * outIndex\n"
               "                COMMA_LOCATION_ARGS) {\n"
               "  PMSInt32 elementID = - 1 ;\n"
               "  if (isBuilt ()\n" ;
  current.rewind () ;
  attributeIndex = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << "   && inParameter" << cStringWithSigned (attributeIndex) << ".isBuilt ()\n" ;
    attributeIndex ++ ;
    current.next () ;
  }
  inCppFile<<  "   && inKey.isBuilt ()) {\n"
               "    insulateMap () ;\n"
               "    e_" << mMapTypeName << " info  ;\n" ;
  current.rewind () ;
  attributeIndex = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    info." << current._mAttributeName (HERE) << " = inParameter" << cStringWithSigned (attributeIndex) << " ;\n" ;
    attributeIndex ++ ;
    current.next () ;
  }
  inCppFile << "    GGS_location existingKeyLocation ;\n"
               "    internalInsert (inKey, (void *) & info, elementID, existingKeyLocation) ;\n"
               "    if (elementID < 0) {\n"
               "      emitInsertMapSemanticErrorMessage (inLexique, inKey, inErrorMessage, existingKeyLocation COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (outIndex != NULL) {\n"
               "    * outIndex = GGS_luint (GGS_uint (elementID >= 0, (PMUInt32) elementID), inKey) ;\n"
               "  }\n"
               "}\n\n" ;

//--- 'searchElement' method
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << mMapTypeName << "::\n"
               "searchElement (C_CompilerEx & inLexique,\n"
               "               const utf32 * inErrorMessage,\n"
               "               const GGS_lstring & inKey,\n" ;
  current.rewind () ;
  attributeIndex = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << "               " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, false) ;
    inCppFile << " & outParameter" << cStringWithSigned (attributeIndex) << ",\n" ;
    attributeIndex ++ ;
    current.next () ;
  }
  inCppFile << "               GGS_luint * outIndex\n"
               "               COMMA_LOCATION_ARGS) const {\n"
               "  cElement * node = NULL  ;\n"
               "  if (isBuilt () && inKey.isBuilt ()) {\n"
               "    AC_galgas_map_element * p = internal_search (inKey.string ()) ;\n"
               "    MF_Assert ((p == NULL) || (reinterpret_cast <cElement *> (p) != NULL), \"Dynamic cast error\", 0, 0) ;\n"
               "    node = (cElement *) p ;\n"
               "    if (node == NULL) {\n"
               "      emitMapSemanticErrorMessage (inLexique, inKey, inErrorMessage COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (node == NULL) {\n" ;
    for (PMSInt32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "    outParameter" << cStringWithSigned (i) << ".drop () ;\n" ;
    }
    inCppFile << "    if (outIndex != NULL) {\n"
                 "      outIndex->drop () ;\n"
                 "     }\n"
                 "  }else{\n" ;
  current.rewind () ;
  attributeIndex = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    outParameter" << cStringWithSigned (attributeIndex) << " = node->mInfo." << current._mAttributeName (HERE) << " ;\n" ;
    attributeIndex ++ ;
    current.next () ;
  }
  inCppFile << "    if (outIndex != NULL) {\n"
               "      * outIndex = GGS_luint (GGS_uint (true, (PMUInt32) node->mID), inKey) ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;

//--- Implement modifiers "set'Value'ForKey"
  GGS_typeSemanticAttributesMap::cEnumerator currentAttributeForSetter (mAttributeMap, true) ;
  while (currentAttributeForSetter.hasCurrentObject ()) {
    if (currentAttributeForSetter._mHasSetter (HERE).boolValue ()) {
      inCppFile.appendCppHyphenLineComment () ;
      inCppFile << "void GGS_" << mMapTypeName << "::\n"
                   "modifier_set" << currentAttributeForSetter._key (HERE).stringWithUpperCaseFirstLetter ()
                << "ForKey (C_CompilerEx & inLexique,\n"
                 "                        const " ;
      currentAttributeForSetter._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "inValue,\n"
                 "                        const GGS_string & inKey\n"
                 "                        COMMA_LOCATION_ARGS) {\n"
                 "  if (isBuilt () && inValue.isBuilt () && inKey.isBuilt ()) {\n"
                 "    insulateMap () ;\n"
                 "    AC_galgas_map_element * p = internal_search (inKey.string ()) ;\n"
                 "    MF_Assert ((p == NULL) || (reinterpret_cast <cElement *> (p) != NULL), \"Dynamic cast error\", 0, 0) ;\n"
                 "    cElement * node = (cElement *) p ;\n"
                 "    if (node == NULL) {\n"
                 "      C_String errorMessage ;\n"
                 "      errorMessage << \"the '\" << inKey << \"' key does not exist when calling 'set"
              << currentAttributeForSetter._key (HERE).stringWithUpperCaseFirstLetter ()
              << "ForKey' modifier\" ;\n"
                 "      inLexique.onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n"
                 "    }else{\n"
                 "      node->mInfo." << currentAttributeForSetter._key (HERE) << " = inValue ;\n"
                 "    }\n"
                 "  }\n"
                 "}\n\n" ;
    }
    currentAttributeForSetter.next () ;
  }

//--- Define search error messages
  GGS_insertOrSearchMethodList::cEnumerator currentSearchMethod (mSearchMethodList, true) ;
  while (currentSearchMethod.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "const utf32 GGS_" << mMapTypeName << "::kSearchMessage_" << currentSearchMethod._mMethodName (HERE) << " [] = " ;
    inCppFile.appendUTF32LiteralStringConstant (currentSearchMethod._mErrorMessage (HERE).string ()) ;
    inCppFile << " ;\n\n" ;
    currentSearchMethod.next () ;
  }

//--- Implement search routines
  currentSearchMethod.rewind () ;
  while (currentSearchMethod.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mMapTypeName << "::\n"
              << "method_" << currentSearchMethod._mMethodName (HERE)
              << " (C_CompilerEx & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentSearchMethod._mIsGetIndexMethod (HERE).boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << ",\n                                " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) const {\n" ;
    inCppFile << "  searchElement (inLexique,\n"
                 "                  kSearchMessage_" << currentSearchMethod._mMethodName (HERE) << ",\n"
                 "                  inKey,\n" ;
    for (PMSInt32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                  outParameter" << cStringWithSigned (i) << ",\n" ;
    }
    if (currentSearchMethod._mIsGetIndexMethod (HERE).boolValue ()) {
      inCppFile << "                  & outIndex\n" ;
    }else{
      inCppFile << "                  NULL\n" ;
    }
    inCppFile << "                  COMMA_THERE) ;\n"
                 "}\n\n" ;
    currentSearchMethod.next () ;
  }

//--- Declare remove error messages
  GGS_insertOrSearchMethodList::cEnumerator currentRemoveMethod (mRemoveMethodList, true) ;
  while (currentRemoveMethod.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "const utf32 GGS_" << mMapTypeName << "::kRemoveMessage_" << currentRemoveMethod._mMethodName (HERE) << " [] = " ;
    inCppFile.appendUTF32LiteralStringConstant (currentRemoveMethod._mErrorMessage (HERE).string ()) ;
    inCppFile << " ;\n\n" ;
    currentRemoveMethod.next () ;
  }

//--- Implement remove methods
  currentRemoveMethod.rewind () ;
  while (currentRemoveMethod.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_"
              << mMapTypeName << "::\n"
                 "modifier_" << currentRemoveMethod._mMethodName (HERE)
              << " (C_CompilerEx & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentRemoveMethod._mIsGetIndexMethod (HERE).boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << ",\n                                " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "outParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n"
                 "  removeElement (inLexique,\n"
                 "                  kRemoveMessage_" << currentRemoveMethod._mMethodName (HERE) << ",\n"
                 "                  inKey,\n" ;
    for (PMSInt32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                  outParameter" << cStringWithSigned (i) << ",\n" ;
    }
    if (currentRemoveMethod._mIsGetIndexMethod (HERE).boolValue ()) {
      inCppFile << "                  & outIndex\n" ;
    }else{
      inCppFile << "                  NULL\n" ;
    }
    inCppFile << "                  COMMA_THERE) ;\n"
                 "}\n\n" ;
    currentRemoveMethod.next () ;
  }

//--- Define insert error messages
  GGS_insertOrSearchMethodList::cEnumerator currentInsertMethod (mInsertMethodList, true) ;
  while (currentInsertMethod.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "const utf32 GGS_" << mMapTypeName << "::kInsertMessage_" << currentInsertMethod._mMethodName (HERE) << " [] = " ;
    inCppFile.appendUTF32LiteralStringConstant (currentInsertMethod._mErrorMessage (HERE).string ()) ;
    inCppFile << " ;\n\n" ;
    if (currentInsertMethod._mShadowErrorMessage (HERE).string ().length () > 0) {
      inCppFile << "const utf32 GGS_" << mMapTypeName << "::kShadowMessage_" << currentInsertMethod._mMethodName (HERE) << " [] = " ;
      inCppFile.appendUTF32LiteralStringConstant (currentInsertMethod._mErrorMessage (HERE).string ()) ;
      inCppFile << " ;\n\n" ;
    }
    currentInsertMethod.next () ;
  }

//--- Implement insert routines
  currentInsertMethod.rewind () ;
  while (currentInsertMethod.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_"
              << mMapTypeName << "::\n"
                 "modifier_" << currentInsertMethod._mMethodName (HERE)
              << " (C_CompilerEx & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    if (currentInsertMethod._mIsGetIndexMethod (HERE).boolValue ()) {
      inCppFile << ",\n                                GGS_luint & outIndex" ;
    }
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << ",\n                                const " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "inParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
    if (currentInsertMethod._mShadowErrorMessage (HERE).string ().length () > 0) {
      inCppFile << "  const bool shadowExists = internal_search_in_overridden_maps (inKey) != NULL ;\n"
                   "  if (shadowExists) {\n"
                   "    emitMapSemanticErrorMessage (inLexique, inKey, kShadowMessage_" << currentInsertMethod._mMethodName (HERE) << "\n"
                << "                                 COMMA_THERE) ;\n" ;
      if (currentInsertMethod._mIsGetIndexMethod (HERE).boolValue ()) {
        inCppFile << "    outIndex.drop () ;\n" ;
      }
      inCppFile << "  }else{\n" ;
      inCppFile.incIndentation (2) ;
    
    }
    inCppFile << "  insertElement (inLexique,\n"
                 "                 kInsertMessage_" << currentInsertMethod._mMethodName (HERE) << ",\n"
                 "                 inKey,\n" ;
    for (PMSInt32 i=0 ; i<mNonExternAttributesList.count () ; i++) {
      inCppFile << "                 inParameter" << cStringWithSigned (i) << ",\n" ;
    }
    if (currentInsertMethod._mIsGetIndexMethod (HERE).boolValue ()) {
      inCppFile << "                 & outIndex\n" ;
    }else{
      inCppFile << "                 NULL\n" ;
    }
    inCppFile << "                 COMMA_THERE) ;\n" ;
    if (currentInsertMethod._mShadowErrorMessage (HERE).string ().length () > 0) {
      inCppFile.incIndentation (-2) ;
      inCppFile << "  }\n" ;
    }
    inCppFile << "}\n\n" ;
    currentInsertMethod.next () ;
  }

//--- Implement 'mapWithMapToOverride' constructor
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mMapTypeName << " GGS_" << mMapTypeName << "::\n"
               "constructor_mapWithMapToOverride (C_CompilerEx & /* inLexique */,\n"
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
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mMapTypeName << " GGS_" << mMapTypeName << "::\n"
               "reader_overriddenMap (C_CompilerEx & /* inLexique */\n"
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
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mMapTypeName << "::\n"
               "reader_description (const PMSInt32 inIndentation) const {\n"
               "  C_String s ;\n"
               "  s << \"<map @" << mMapTypeName << " \" ;\n"
               "  if (isBuilt ()) {\n"
               "    s.appendSigned (count ()) ;\n"
               "    s << \" object\" << ((count () > 1) ? \"s \" : \" \") ;\n"
               "    cMapRoot * mapRoot = mSharedMapRoot ;\n"
               "    PMSInt32 level = 0 ;\n"
               "    while (mapRoot != NULL) {\n"
               "      if (level > 0) {\n"
               "        s << \"\\n\" ;\n"
               "        s.writeStringMultiple (\"| \", inIndentation) ;\n"
               "        s << \"------- level \" << cStringWithSigned (level) ;\n"
               "      }\n"
               "      macroValidPointer (mapRoot) ;\n"
               "      cElement * p = (cElement *) mapRoot->mFirstItem ;\n"
               "      PMSInt32 elementID = 0 ;\n"
               "      while (p != NULL) {\n"
               "        macroValidPointer (p) ;\n"
               "        p->appendForMapDescription (elementID, s, inIndentation) ;\n"
               "        p = p->nextObject () ;\n"
               "        elementID ++ ;\n"
               "      }\n"
               "      mapRoot = mapRoot->mNextMap ;\n"
               "      level ++ ;\n"
               "    }\n"
               "  }else{\n"
               "    s << \"not built\" ;\n"
               "  }\n"
               "  s << \"\\n\" ;\n"
               "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
               "  s << \">\" ;\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;

  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "/* const */ " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " & GGS_" << mMapTypeName << "::cEnumerator::_" << current._mAttributeName (HERE) << " (LOCATION_ARGS) const {\n"
                 "  return ((cElement *) mObjectArray (mCurrentIndex COMMA_THERE))->mInfo." << current._mAttributeName (HERE) << " ;\n"
                 "}\n\n" ;
    current.next() ;
  }
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_object GGS_" << mMapTypeName << "::reader_object (void) const {\n"
               "  GGS_object result ;\n"
               "  if (isBuilt ()) {\n"
               "    GGS_" << mMapTypeName << " * p = NULL ;\n"
               "    macroMyNew (p, GGS_" << mMapTypeName << " (*this)) ;\n"
               "    result = GGS_object (p) ;\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << mMapTypeName << " GGS_" << mMapTypeName << "::castFromObject (C_CompilerEx & inLexique,\n"
               "                                   const GGS_object & inObject,\n"
               "                                   const GGS_location & inErrorLocation\n"
               "                                   COMMA_LOCATION_ARGS) {\n"
               "  GGS_" << mMapTypeName << " result ;\n"
               "  const GGS__root * embeddedObject = inObject.embeddedObject () ;\n"
               "  if (NULL != embeddedObject) {\n"
               "    const GGS_" << mMapTypeName << " * p = dynamic_cast <const GGS_" << mMapTypeName << " *> (embeddedObject) ;\n"
               "    if (NULL != p) {\n"
               "      result = * p ;\n"
               "    }else{\n"
               "      castFromObjectErrorSignaling (inLexique, inErrorLocation, & kTypeDescriptor_GGS_" << mMapTypeName << ", embeddedObject COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const C_galgas_type_descriptorEX * GGS_" << mMapTypeName << "::typeDescriptor (void) const {\n"
               "  return & kTypeDescriptor_GGS_" << mMapTypeName << " ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Old Style Map Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_CompilerEx & /* inLexique */) const {
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
  inHfile.appendCppTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

//--- Debut de la declaration de la classe table
  inHfile << "class e_" << aNomTable << " {\n" ;

//--- declarer les attributs
  GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
  while (current.hasCurrentObject ()) {
    current._mAttributType (HERE) (HERE)->generatePublicDeclaration (inHfile, current._mAttributeName (HERE)) ;
    current.next () ;
  }
  
  if (mNonExternAttributesList.count ()) {
    inHfile << "  public : e_" << aNomTable << " (void) ;\n\n" ;
  }
  inHfile << "} ;\n\n" ; //--- Fin de la declaration de la classe e_...

// ---------------------- declaration de la classe table -----------------
  inHfile.appendCppTitleComment (C_String ("Map '@") + aNomTable + "'") ;

  inHfile << "class GGS_" << aNomTable << " : public "  << aNomClasseGenerique
          << " <e_" << aNomTable << "> {\n"
             "//--- Get object pointer\n"
             "  public : inline GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) { return this ; }\n"
             "  public : inline const GGS_" << aNomTable << " * operator () (UNUSED_LOCATION_ARGS) const { return this ; }\n"
             "//--- Comparison methods\n"
             "  public : GGS_bool operator_isEqual (const GGS_" << aNomTable << " & /* inOperand */) const { return GGS_bool (true) ; }\n"
             "  public : GGS_bool operator_isNotEqual (const GGS_" << aNomTable << " & /* inOperand */) const { return GGS_bool (true) ; }\n"
             "//--- Handle 'emptyMap' constructor\n"
             "  public : static GGS_" << aNomTable << " constructor_emptyMap (C_CompilerEx & inLexique COMMA_LOCATION_ARGS) ;\n" ;

//--- Declaring search methods
  GGS_insertOrSearchMethodList::cEnumerator currentSearchMethod (mSearchMethodList, true) ;
  while (currentSearchMethod.hasCurrentObject ()) {
    inHfile << "//--- '" << currentSearchMethod._mMethodName (HERE) << "' search method\n"
               "public : void modifier_" 
            << currentSearchMethod._mMethodName (HERE)
            << " (C_CompilerEx & inLexique"
               ",\n                                const GGS_lstring & inKey" ;
    current.rewind () ;
    PMSInt32 attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inHfile << ",\n                                " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    inHfile << "public : void method_" 
            << currentSearchMethod._mMethodName (HERE)
            << "GetIndex (C_CompilerEx & inLexique"
               ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inHfile << ",\n                                " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, false) ;
      inHfile << " & outParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    currentSearchMethod.next () ;
  }

//--- Declaring insert methods
  GGS_insertOrSearchMethodList::cEnumerator currentInsertMethod (mInsertMethodList, true) ;
  while (currentInsertMethod.hasCurrentObject ()) {
    inHfile << "//---\n"
               "public : void modifier_"
            << currentInsertMethod._mMethodName (HERE)
            << " (C_CompilerEx & inLexique" 
               ",\n                                const GGS_lstring & inKey" ;
    current.rewind () ;
    PMSInt32 attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inHfile << ",\n                                const " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    inHfile << "public : void modifier_"
            << currentInsertMethod._mMethodName (HERE)
            << "GetIndex (C_CompilerEx & inLexique" 
               ",\n                                const GGS_lstring & inKey"
               ",\n                                GGS_luint & outIndex" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inHfile << ",\n                                const " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << " inParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inHfile << " COMMA_LOCATION_ARGS) ;\n" ;
    currentInsertMethod.next () ;
  }
//--- Generate 'description' reader declaration
  inHfile << "  public : GGS_string reader_description (const PMSInt32 inIndentation = 0) const ;\n"
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
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefinitionTableAimplementer::
generateCppClassImplementation (C_CompilerEx & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                  const C_String & /* inTargetFileName */,
                                  PMSInt32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
  inCppFile.appendCppTitleComment (C_String ("class map element 'e_") + aNomTable + "'") ;

  inCppFile << "#include \"" << aNomClasseGenerique << ".hh\"\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

  if (mNonExternAttributesList.count () > 0) {
    inCppFile << "e_" << aNomTable << "::e_" << aNomTable << " (void) :\n" ;
    GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
    bool first = true ;
    while (current.hasCurrentObject ()) {
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
  }

//--- Instanciate the template
  inCppFile << "template class "
            << aNomClasseGenerique
            << " <e_" << aNomTable << "> ;\n\n" ;


//--------------------- ENGENDRER LA CLASSE TABLE ----------------------------
  inCppFile.appendCppTitleComment (C_String ("Map '@") + aNomTable + "'") ;

  inCppFile << "GGS_" << aNomTable << " GGS_" << aNomTable << "::\n"
               "constructor_emptyMap (C_CompilerEx & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << aNomTable << " t ;\n"
               "  t.build () ;\n"
               "  return t ;\n"
               "}\n\n" ;

//--- Implementing search methods
  GGS_insertOrSearchMethodList::cEnumerator currentSearchMethod (mSearchMethodList, true) ;
  while (currentSearchMethod.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::modifier_" 
              << currentSearchMethod._mMethodName (HERE)
              << " (C_CompilerEx & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
    PMSInt32 attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << ",\n                                " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
  //--- Inserer les messages d'erreur
    inCppFile << "  GGS_" << aNomTable << "::cElement * info = "
              << currentSearchMethod._mMethodName (HERE) << " (inLexique, inKey, inKey, " ;
    inCppFile.appendCLiteralStringConstant (currentSearchMethod._mErrorMessage (HERE).string ()) ;
    inCppFile << " COMMA_THERE) ;\n"
                 "  if (info == NULL) {\n" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "    outParameter" << cStringWithSigned (attributeIndex) << ".drop () ;\n" ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << "  }else{\n" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "    outParameter" << cStringWithSigned (attributeIndex) << " = info->mInfo." << current._mAttributeName (HERE) << " ;\n" ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << "  }\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::method_" 
              << currentSearchMethod._mMethodName (HERE)
              << "GetIndex (C_CompilerEx & inLexique"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << ",\n                                " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, false) ;
      inCppFile << " & outParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
    inCppFile << "  GGS_" << aNomTable << "::cElement * info = "
              << currentSearchMethod._mMethodName (HERE) << " (inLexique, inKey, inKey, " ;
    inCppFile.appendCLiteralStringConstant (currentSearchMethod._mErrorMessage (HERE).string ()) ;
    inCppFile << " COMMA_THERE) ;\n"
                 "  if (info == NULL) {\n" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "    outParameter" << cStringWithSigned (attributeIndex) << ".drop () ;\n" ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << "    outIndex.drop () ;\n"
                 "  }else{\n" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "    outParameter" << cStringWithSigned (attributeIndex) << " = info->mInfo." << current._mAttributeName (HERE) << " ;\n" ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << "    outIndex = GGS_luint (GGS_uint (true, (PMUInt32) info->mEntryIndex), inKey) ;\n"
                 "  }\n"
                 "}\n\n" ;
    currentSearchMethod.next () ;
  }

//--- Implementation des methodes d'insertion
  GGS_insertOrSearchMethodList::cEnumerator currentInsertMethod (mInsertMethodList, true) ;
  while (currentInsertMethod.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::modifier_"
              << currentInsertMethod._mMethodName (HERE)
              << " (C_CompilerEx & inLexique"
                 ",\n                                const GGS_lstring & inKey" ;
    GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
    PMSInt32 attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << ",\n                                const " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << " inParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
    inCppFile << "  e_" << aNomTable << " info ;\n" ;
    current.rewind () ;
    PMSInt32 numeroVariable = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "  info." << current._mAttributeName (HERE) << " = inParameter" << cStringWithSigned (numeroVariable) << " ;\n" ;
      numeroVariable ++ ;
      current.next () ;
    }
    inCppFile << "  " << currentInsertMethod._mMethodName (HERE) << " (inLexique, info, inKey, inKey, " ;
    inCppFile.appendCLiteralStringConstant (currentInsertMethod._mErrorMessage (HERE).string ()) ;
    inCppFile << " COMMA_THERE) ;\n"
              << "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomTable << "::modifier_"
              << currentInsertMethod._mMethodName (HERE)
              << "GetIndex (C_CompilerEx & inLexique"
                 ",\n                                const GGS_lstring & inKey"
                 ",\n                                GGS_luint & outIndex" ;
    current.rewind () ;
    attributeIndex = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << ",\n                                const " ;
      current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << " inParameter" << cStringWithSigned (attributeIndex) ;
      attributeIndex ++ ;
      current.next () ;
    }
    inCppFile << " COMMA_LOCATION_ARGS) {\n" ;
    inCppFile << "  e_" << aNomTable << " info ;\n" ;
    current.rewind () ;
    numeroVariable = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "  info." << current._mAttributeName (HERE) << " = inParameter" << cStringWithSigned (numeroVariable) << " ;\n" ;
      numeroVariable ++ ;
      current.next () ;
    }
    inCppFile << "  const PMSInt32 attributeIndex = " << currentInsertMethod._mMethodName (HERE) << " (inLexique, info, inKey, inKey, " ;
    inCppFile.appendCLiteralStringConstant (currentInsertMethod._mErrorMessage (HERE).string ()) ;
    inCppFile << " COMMA_THERE) ;\n"
              << "  outIndex = GGS_luint (GGS_uint (attributeIndex >= 0, (PMUInt32) attributeIndex), inKey) ;\n"
              << "}\n\n" ;
    currentInsertMethod.next () ;
  }

//--- Implement reader 'description'
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << aNomTable << "::\n"
               "reader_description (const PMSInt32 /* inIndentation */) const {\n"
               "  C_String s ;\n"
               "  s << \"<map @" << aNomTable << " \" ;\n"
               "  if (isBuilt ()) {\n"
               "    s.appendSigned (count ()) ;\n"
               "    s << \" object\" << ((count () > 1) ? \"s\" : \"\") ;\n"
               "  }else{\n"
               "    s << \"not built\" ;\n"
               "  }\n"
               "  s << \">\\n\" ;\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;

}

//---------------------------------------------------------------------------*
