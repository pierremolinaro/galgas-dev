//---------------------------------------------------------------------------*
//                                                                           *
//  Generate list declaration and implementation                             *
//                                                                           *
//  Copyright (C) 1999, ..., 2009 Pierre Molinaro.                           *
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

void
routine_extern_build_stringlist_type (C_Compiler & inLexique,
                                      GGS_AC_galgasType & outStringListType
                                      COMMA_LOCATION_ARGS) {
  routine_build_stringlist_type (inLexique, outStringListType COMMA_THERE) ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark List Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & /* inLexique */) const {
//----------------------- Element of list class declaration ----------------  
  inHfile.appendCppTitleComment (C_String ("Element of list '@") + aNomListe + "'") ;
//--------- Declare internal element class ------------
  inHfile << "class elementOf_GGS_" << aNomListe << " : public AC_galgas_list::cListElement {\n"
//--- Attributes
             "//--- Attributes\n" ;
  GGS_typeListeAttributsSemantiques::cEnumerator attributCourant (mNonExternAttributesList, true) ;
  while (attributCourant.hasCurrentObject ()) {
    attributCourant._mAttributType (HERE) (HERE)->generatePublicDeclaration (inHfile, attributCourant._mAttributeName (HERE)) ;
    attributCourant.next () ;
  }
//--- declaration constructeur
  inHfile << "//--- Constructor\n"
             "  public : elementOf_GGS_" << aNomListe << " (" ;
  attributCourant.rewind () ;
  bool premier = true ;
  while (attributCourant.hasCurrentObject ()) {
    if (premier) {
      premier = false ;
    }else{
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    attributCourant._mAttributType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    attributCourant.next () ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n\n"
//--- Access to next and previous item
             "//--- Access to next\n"
             "  public : inline elementOf_GGS_" << aNomListe << " * nextObject (void) const { return (elementOf_GGS_" << aNomListe << " *) internalNextItem () ; }\n\n"
             "//--- Access to previous\n"
             "  public : inline elementOf_GGS_" << aNomListe << " * previousObject (void) const { return (elementOf_GGS_" << aNomListe << " *) internalPreviousItem () ; }\n\n"

//--- Element comparison
             "//--- Element comparison\n"
             "  protected : virtual bool\n"
             "  isEqualToObject (const cListElement * inOperand) const ;\n\n"
//--- Method for list 'description' reader
             "//--- Method used for description\n"
             "  public : virtual void\n"
             "  appendForDescription (C_Compiler & inLexique,\n"
             "                        C_String & ioString,\n"
             "                        const PMSInt32 inIndentation\n"
             "                        COMMA_LOCATION_ARGS) const ;\n\n" ;

//--- Friend declaration
  inHfile << "//--- Friend class declaration\n" 
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
generateHdeclarations (AC_OutputStream & inHfile) const {
//----------------------- List class declaration ----------------  
  inHfile.appendCppTitleComment (C_String ("list '@") + aNomListe + "'") ;

  inHfile << "class elementOf_GGS_" << aNomListe << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ;
  inHfile << "extern const C_galgas_type_reference kTypeReference_" << aNomListe << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ;
  inHfile << "class GGS_" << aNomListe << " : public AC_galgas_list {\n"
             "  public : typedef elementOf_GGS_" << aNomListe << " cElement ;\n\n"

//--- Constructor 'emptyList'
             "//--- Constructor 'emptyList'\n"
             "  public : static GGS_" << aNomListe << " constructor_emptyList (void) ;\n"

//--- Constructor 'listWithValue'
             "  public : static GGS_" << aNomListe << " constructor_listWithValue (" ;
  GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
  PMSInt32 numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"

//--- Get a sub list
             "//--- Get sublist\n"
             "  protected : void\n"
             "  internalSubListWithRange (GGS_" << aNomListe << " & ioList,\n"
             "                            const PMSInt32 inFirstIndex,\n"
             "                            const PMSInt32 inCount) const ;\n\n"
             "  public : GGS_" << aNomListe << "\n"
             "  reader_subListWithRange (C_Compiler & inLexique,\n"
             "                           const GGS_uint & inFirstIndex,\n"
             "                           const GGS_uint & inCount\n"
             "                           COMMA_LOCATION_ARGS) const ;\n\n"
             "  public : GGS_" << aNomListe << "\n"
             "  reader_subListFromIndex (C_Compiler & inLexique,\n"
             "                           const GGS_uint & inIndex\n"
             "                           COMMA_LOCATION_ARGS) const ;\n\n"

//--- Get first inserted object
             "//--- Get first object\n"
             "  public : inline cElement * firstObject (void) const {\n"
             "    return (cElement *) internalFirstObject () ;\n"
             "  }\n"

//--- Get last inserted object
             "//--- Get last object\n"
             "  public : inline cElement * lastObject (void) const {\n"
             "    return (cElement *) internalLastObject () ;\n"
             "  }\n"

//--- operators () for method call
             "//--- Operator () used for method call\n"
             "  public : const GGS_" << aNomListe << " * operator () (UNUSED_LOCATION_ARGS) const { return this ;} \n"

//--- Declare method 'first'
             "//--- Method 'first'\n"
             "  public : void method_first (C_Compiler & inLexique" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << ",\n                              " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inHfile << "\n                              "
             "COMMA_LOCATION_ARGS) const ;\n"

//--- Declare method 'last'
             "//--- Method 'last'\n"
             "  public : void method_last (C_Compiler & inLexique" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << ",\n                             " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inHfile << "\n                             "
             "COMMA_LOCATION_ARGS) const ;\n"

//--- Declare modifier 'popLast'
             "//--- Modifier 'popLast'\n"
             "  public : void modifier_popLast (C_Compiler & inLexique" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << ",\n                                " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n"

//--- Declare modifier 'popFirst'
             "//--- Modifier 'popFirst'\n"
             "  public : void modifier_popFirst (C_Compiler & inLexique" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << ",\n                                 " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inHfile << "\n                                 "
             "COMMA_LOCATION_ARGS) ;\n"

//--- Append a new value
             "//--- Handle '.=' operator\n"
             "  public : void dotAssign_operation (const GGS_" << aNomListe << " inOperand) ;\n\n"
             "//--- Handling '+=' GALGAS operator\n"
             "  public : void addAssign_operation (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"

//--- List concatenation
             "//--- Handling '.' GALGAS operator\n"
             "  public : GGS_" << aNomListe << " operator_concat (const GGS_" << aNomListe << " & inOperand) const ;\n"

//--- Direct element access
//             "//--- Direct element access\n"
//             "  public : cElement * operator () (const PMSInt32 inIndex COMMA_LOCATION_ARGS) const ;\n"

//--- Prepend a new value
             "  public : void modifier_prependValue (C_Compiler & inLexique" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << ",\n                                "
               "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n"
             "//--- Internal Methods\n"
              "  protected : void _internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n\n"
             "  protected : void _internalPrependValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n\n"
             "//--- List Insulation\n"
             "  protected : void _insulateList (void) ;\n\n"
             "//--- Reader 'description\n"
             "  public : GGS_string\n"
             "  reader_description (C_Compiler & inLexique\n"
             "                      COMMA_LOCATION_ARGS,\n"
             "                      const PMSInt32 inIndentation = 0) const ;\n\n" ;

//--- Direct read access
  inHfile << "//--------------------------------- Direct Read Access\n" ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inHfile << "  public : " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inHfile) ;
    inHfile << "\n"
               "  reader_" << current._mAttributeName (HERE) << "AtIndex (C_Compiler & inLexique, const GGS_uint & inIndex COMMA_LOCATION_ARGS) const ;\n" ;
    current.next () ;
  }
  inHfile << "\n" ;

//--- Direct write access
  inHfile << "//--------------------------------- Direct Write Access\n" ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inHfile << "  public : void\n"
               "  modifier_set" << current._mAttributeName (HERE).stringWithUpperCaseFirstLetter () << "AtIndex (C_Compiler & inLexique,\n"
               "                              const " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inHfile) ;
    inHfile << " & inObject,\n"
               "                              const GGS_uint & inIndex\n"
               "                              COMMA_LOCATION_ARGS) const ;\n" ;
    current.next () ;
  }
  inHfile << "\n" ;

//--- Enumerator declaration
  inHfile << "//--------------------------------- List Enumerator\n"
             "  public : class cEnumerator : public cAbstractListEnumerator {\n"
             "  //--- Constructor\n"
             "    public : inline cEnumerator (const GGS_" << aNomListe << " & inList,\n"
             "                                 const bool inAscending) :\n"
             "    cAbstractListEnumerator (inList, inAscending) {\n"
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
  inHfile << "  } ;\n\n" ;
//--- End of list class declaration
 inHfile << "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_listTypeToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                               const C_String & /* inTargetFileName*/,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_listTypeToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                  const C_String & /* inTargetFileName */,
                                  PMSInt32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
//------------- Implementation de l'element de liste -----------------
  inCppFile.appendCppTitleComment (C_String ("Element of list '@") + aNomListe + "'") ;

//--- Engendrer le constructeur de l'element de liste
  inCppFile << "elementOf_GGS_" << aNomListe << "::\n"
               "elementOf_GGS_" << aNomListe << " (" ;
  GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
  PMSInt32 numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                                "
               "COMMA_LOCATION_ARGS) :\n"
               "AC_galgas_list::cListElement (THERE)" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n"
              << current._mAttributeName (HERE) << " (argument_" << cStringWithSigned (numeroVariable) << ")" ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Element comparison
  inCppFile.appendCppHyphenLineComment () ;
  current.rewind () ;
  inCppFile << "bool elementOf_GGS_" << aNomListe << "::\n" ;
  if (! current.hasCurrentObject ()) {
    inCppFile << "isEqualToObject (const cListElement * /* inOperand */) const {\n"
                 "  return true ;\n" ;
  }else{
    inCppFile << "isEqualToObject (const cListElement * inOperand) const {\n"
                 "  bool equal = inOperand == this ;\n"
                 "  if (! equal) {\n"
                 "    const elementOf_GGS_" << aNomListe << " * ptr = dynamic_cast <const elementOf_GGS_" << aNomListe << " *> (inOperand) ;\n"
                 "    macroValidPointer (ptr) ;\n"
                 "    equal = " ;
    numeroVariable = 0 ;
    while (current.hasCurrentObject ()) {
      if (numeroVariable > 0) {
        inCppFile << "\n         && " ;
      }
      inCppFile << current._mAttributeName (HERE) << ".operator_isEqual (ptr->"  << current._mAttributeName (HERE) << ").boolValue ()" ;
      current.next () ;
      numeroVariable ++ ;
    }
    inCppFile << " ;\n"
                 "  }\n"
                 "  return equal ;\n" ;
  }
  inCppFile << "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  current.rewind () ;
  if (! current.hasCurrentObject ()) {
    inCppFile << "void elementOf_GGS_" << aNomListe << "::\n"
                 "appendForDescription (C_Compiler & /* inLexique */,\n"
                 "                          C_String & /* ioString */,\n"
                 "                          const PMSInt32 /* inIndentation */\n"
                 "                          COMMA_UNUSED_LOCATION_ARGS) const {\n" ;
  }else{
    inCppFile << "void elementOf_GGS_" << aNomListe << "::\n"
                 "appendForDescription (C_Compiler & inLexique,\n"
                 "                      C_String & ioString,\n"
                 "                      const PMSInt32 inIndentation\n"
                 "                      COMMA_LOCATION_ARGS) const {\n" ;
    numeroVariable = 0 ;
    while (current.hasCurrentObject ()) {
      inCppFile << "  ioString << \"\\n\" ;\n"
                   "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
                   "  ioString << \"|-\" ;\n"
                   "  ioString << " << current._mAttributeName (HERE) << ".reader_description  (inLexique COMMA_THERE, inIndentation) ;\n" ;
      current.next () ;
      numeroVariable ++ ;
    }
  }
  inCppFile << "}\n\n" ;


// ------------- List Implementation -----------------
  inCppFile.appendCppTitleComment (C_String ("List '@") + aNomListe + "'") ;

  inCppFile << "const C_galgas_type_reference kTypeReference_" << aNomListe << " (\"" << aNomListe << "\") ;\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Engendrer la methode _internalAppendValues
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                    " ;
    }
    inCppFile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                    "
               "COMMA_LOCATION_ARGS) {\n"
               "  cElement * nouvelElement = (cElement *) NULL ;\n" 
               "  macroMyNew (nouvelElement, cElement (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                                "
               "COMMA_THERE)) ;\n" 
               "  _internalAppendItem (nouvelElement) ;\n" 
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;


//--- Engendrer la methode _internalPrependValues
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_internalPrependValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) inCppFile << ",\n                    " ;
    inCppFile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                    "
               "COMMA_LOCATION_ARGS) {\n"
               "  cElement * nouvelElement = (cElement *) NULL ;\n" 
               "  macroMyNew (nouvelElement, cElement (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                                "
               "COMMA_THERE)) ;\n" 
               "  _internalPrependItem (nouvelElement) ;\n" 
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Generate addAssign_operation
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "addAssign_operation (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  if (isBuilt ()" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << "&& argument_" << cStringWithSigned (numeroVariable) << ".isBuilt ()" ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "    _insulateList () ;\n"
               "    _internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                                "
               "COMMA_HERE) ;\n"
               "  }\n"
               "}\n\n" ;

//--- Direct element access
/*  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << aNomListe << "::cEnumerator GGS_" << aNomListe << "::\n"
               "operator () (const PMSInt32 inIndex COMMA_LOCATION_ARGS) const {\n"
               "  MF_AssertThere (inIndex >= 0, \"inIndex (%ld) < 0\", inIndex, 0) ;\n"
               "  MF_AssertThere (inIndex < count (), \"inIndex (%ld) >= mCount (%ld)\", inIndex, count ()) ;\n"
               "  return (cElement *) objectAtIndexOrNULL (inIndex) ;\n"
               "}\n\n" ;*/

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << aNomListe << " GGS_" << aNomListe << "::\n"
               "operator_concat (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  GGS_" << aNomListe << " result = * this ;\n"
               "  result.dotAssign_operation (inOperand) ;\n"
               "  return result ;\n"
               "}\n\n" ;
               
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "dotAssign_operation (const GGS_" << aNomListe << " inOperand) {\n"
               "  if (isBuilt () && inOperand.isBuilt ()) {\n"
               "    if (count () == 0) {\n"
               "      * this = inOperand ;\n"
               "    }else{\n"
               "      if (inOperand.count () > 0) {\n"
               "        _insulateList () ;\n"
               "        elementOf_GGS_" << aNomListe << " * p = inOperand.firstObject () ;\n"
               "        while (p != NULL) {\n"
               "          macroValidPointer (p) ;\n" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << "          " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " p_" << cStringWithSigned (numeroVariable) << " = p->" << current._mAttributeName (HERE) << " ;\n" ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "          _internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "p_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << " COMMA_HERE) ;\n"
               "          p = p->nextObject () ;\n"
               "        }\n"
               "      }\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Generate 'prepend' method
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_prependValue (C_Compiler & /* inLexique */" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n                     "
                 "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                     "
               "COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  if (isBuilt ()" ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << " && argument_" << cStringWithSigned (numeroVariable) << ".isBuilt ()" ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "    _insulateList () ;\n"
               "    _internalPrependValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                                "
               "COMMA_HERE) ;\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Engendrer la methode _insulateList
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_insulateList (void) {\n"
               "  if (_shared ()) {\n"
               "    cElement * ptr = firstObject () ;\n"
               "    alloc () ;\n"
               "    while (ptr != NULL) {\n"
               "      macroValidPointer (ptr) ;\n"
               "      _internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "ptr->" << current._mAttributeName (HERE) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "\n                                "
               "COMMA_HERE) ;\n"
               "      ptr = ptr->nextObject () ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement constructor 'emptyList'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_emptyList (void) {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  result.alloc () ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement constructor 'emptyList'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_listWithValue (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  result.alloc () ;\n"
               "  result.addAssign_operation (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement 'subListWithRange' reader
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "internalSubListWithRange (GGS_" << aNomListe << " & ioList,\n"
               "                          const PMSInt32 inFirstIndex,\n"
               "                          const PMSInt32 inCount) const {\n"
               "  ioList.alloc () ;\n"
               "  if (inCount > 0) {\n"
               "    cElement * ptr = firstObject () ;\n"
               "    for (PMSInt32 i=0 ; i<inFirstIndex ; i++) {\n"
               "      macroValidPointer (ptr) ;\n"
               "      ptr = ptr->nextObject () ;\n"
               "    }\n"
               "    for (PMSInt32 i=0 ; i<inCount ; i++) {\n"
               "      macroValidPointer (ptr) ;\n"
               "      ioList.addAssign_operation (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "ptr->" << current._mAttributeName (HERE) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "      ptr = ptr->nextObject () ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_" << aNomListe << " GGS_" << aNomListe << "::\n"
               "reader_subListWithRange (C_Compiler & inLexique,\n"
               "                         const GGS_uint & inFirstIndex,\n"
               "                         const GGS_uint & inCount\n"
               "                         COMMA_LOCATION_ARGS) const {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  if (isBuilt () && inFirstIndex.isBuilt () && inCount.isBuilt ()) {\n"
               "    const PMSInt32 firstIndex = (PMSInt32) inFirstIndex.uintValue () ;\n"
               "    const PMSInt32 rangeCount = (PMSInt32) inCount.uintValue () ;\n"
               "    if ((firstIndex + rangeCount) > count ()) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'subListWithRange' method invoked with upper bound greater than list object count\" COMMA_THERE) ;\n"
               "    }else{\n"
               "      internalSubListWithRange (result, firstIndex, rangeCount) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_" << aNomListe << " GGS_" << aNomListe << "::\n"
               "reader_subListFromIndex (C_Compiler & inLexique,\n"
               "                         const GGS_uint & inIndex\n"
               "                         COMMA_LOCATION_ARGS) const {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  if (isBuilt () && inIndex.isBuilt ()) {\n"
               "    const PMSInt32 startIndex = (PMSInt32) inIndex.uintValue () ;\n"
               "    if (startIndex > count ()) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'subListFromIndex' method invoked with start index greater than list object count\" COMMA_THERE) ;\n"
               "    }else{\n"
               "      internalSubListWithRange (result, startIndex, count () - startIndex) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement reader 'description'
  inCppFile << "GGS_string GGS_" << aNomListe << "::\n"
               "reader_description (C_Compiler & inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const PMSInt32 inIndentation) const {\n"
               "  return _description (inLexique, \"@" << aNomListe << "\", inIndentation COMMA_THERE) ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement method 'first'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "method_first (C_Compiler & inLexique" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n              " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "\n              "
               "COMMA_LOCATION_ARGS) const {\n"
               "  cElement * ptr = NULL ;\n"
               "  if (isBuilt ()) {\n"
               "    ptr = firstObject () ;\n"
               "    if (ptr == NULL) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'first' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (ptr != NULL) {\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << " = ptr->" << current._mAttributeName (HERE) << " ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }else{\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << ".drop () ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;


//--- Implement method 'last'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "method_last (C_Compiler & inLexique" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n             " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "\n             "
               "COMMA_LOCATION_ARGS) const {\n"
               "  cElement * ptr = NULL ;\n"
               "  if (isBuilt ()) {\n"
               "    ptr = lastObject () ;\n"
               "    if (ptr == NULL) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'last' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (ptr != NULL) {\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << " = ptr->" << current._mAttributeName (HERE) << " ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }else{\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << ".drop () ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

//--- Implement method 'popFirst'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_popFirst (C_Compiler & inLexique" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n                 " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "\n                 "
               "COMMA_LOCATION_ARGS) {\n"
               "  cElement * ptr = NULL ;\n"
               "  if (isBuilt ()) {\n"
               "    ptr = firstObject () ;\n"
               "    if (ptr == NULL) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'popFirst' modifier invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (ptr != NULL) {\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << " = ptr->" << current._mAttributeName (HERE) << " ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "    _insulateList () ;\n"
               "    _internalRemoveFirst () ;\n"
               "  }else{\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << ".drop () ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement method 'popLast'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_popLast (C_Compiler & inLexique" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n                " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "\n                "
               "COMMA_LOCATION_ARGS) {\n"
               "  cElement * ptr = NULL ;\n"
               "  if (isBuilt ()) {\n"
               "    ptr = lastObject () ;\n"
               "    if (ptr == NULL) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'popLast' modifier invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (ptr != NULL) {\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << " = ptr->" << current._mAttributeName (HERE) << " ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "    _insulateList () ;\n"
               "    _internalRemoveLast () ;\n"
               "  }else{\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << ".drop () ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

//--- Direct read access
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " GGS_" << aNomListe << "::\n"
                 "reader_" << current._mAttributeName (HERE) << "AtIndex (C_Compiler & inLexique, const GGS_uint & inIndex COMMA_LOCATION_ARGS) const {\n"
                 "  " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " result ;\n"
                 "  if (isBuilt () && inIndex.isBuilt ()) {\n"
                 "    cElement * object = (cElement *) objectAtIndex (inLexique, inIndex.uintValue () COMMA_THERE) ;\n"
                 "    if (object != NULL) {\n"
                 "      result = object->" << current._mAttributeName (HERE) << " ;\n"
                 "    }\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
    current.next () ;
  }

//--- Direct write access
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomListe << "::\n"
                 "modifier_set" << current._mAttributeName (HERE).stringWithUpperCaseFirstLetter () << "AtIndex (C_Compiler & inLexique,\n"
                 "                              const " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " & inObject,\n"
                 "                              const GGS_uint & inIndex\n"
                 "                              COMMA_LOCATION_ARGS) const {\n"
                 "  if (isBuilt () && inIndex.isBuilt ()) {\n"
                 "    cElement * object = (cElement *) objectAtIndex (inLexique, inIndex.uintValue () COMMA_THERE) ;\n"
                 "    if (object != NULL) {\n"
                 "      object->" << current._mAttributeName (HERE) << " = inObject ;\n"
                 "    }\n"
                 "  }\n"
                 "}\n\n" ;
    current.next () ;
  }

  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "/* const */ " ;
    current._mAttributType (HERE)(HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " & GGS_" << aNomListe << "::cEnumerator::_" << current._mAttributeName (HERE) << " (LOCATION_ARGS) const {\n"
                 "  macroValidPointerThere (mCurrentEnumeratedObject) ;\n"
                 "  return ((/* const */ cElement *) mCurrentEnumeratedObject)->" << current._mAttributeName (HERE) << " ;\n"
                 "}\n\n" ;
    current.next () ;
  }
}


//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Sorted List Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_sortedListTypeToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & /* inLexique */) const {
//----------------------- Element of list class declaration ----------------  
  inHfile.appendCppTitleComment (C_String ("Element of sorted list '@") + aNomListe + "'") ;
//--------- Declare internal element class ------------
  inHfile << "class elementOf_GGS_" << aNomListe << " : public AC_galgas_sortedlist::cSortedListElement {\n"
//--- Attributes
             "//--- Attributes\n" ;
  GGS_typeListeAttributsSemantiques::cEnumerator attributCourant (mNonExternAttributesList, true) ;
  while (attributCourant.hasCurrentObject ()) {
    attributCourant._mAttributType (HERE)(HERE)->generatePublicDeclaration (inHfile, attributCourant._mAttributeName (HERE)) ;
    attributCourant.next () ;
  }
//--- declaration constructeur
  inHfile << "//--- Constructor\n"
             "  public : elementOf_GGS_" << aNomListe << " (" ;
  attributCourant.rewind () ;
  bool premier = true ;
  while (attributCourant.hasCurrentObject ()) {
    if (premier) {
      premier = false ;
    }else{
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    attributCourant._mAttributType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    attributCourant.next () ;
  }
  inHfile << ") ;\n\n"
//--- Access to next and previous item
             "//--- Access to next\n"
             "  public : inline elementOf_GGS_" << aNomListe << " * nextObject (void) const { return (elementOf_GGS_" << aNomListe << " *) internalNextItem () ; }\n"
             "//--- Access to previous\n"
             "  public : inline elementOf_GGS_" << aNomListe << " * previousObject (void) const { return (elementOf_GGS_" << aNomListe << " *) internalPreviousItem () ; }\n"

//--- Element comparison
             "//--- Element comparison\n"
             "  protected : virtual bool\n"
             "  isEqualToObject (const cSortedListElement * inOperand) const ;\n"
//--- Virtual method for implementing element comparison
             "//--- Method used for sorting elements\n"
             "  protected : virtual PMSInt32 compareForSorting (const cSortedListElement * inOperand) const ;\n"
//--- Method for list 'description' reader
             "//--- Method used for description\n"
             "  public : virtual void\n"
             "  appendForDescription (C_Compiler & inLexique,\n"
             "                        C_String & ioString,\n"
             "                        const PMSInt32 inIndentation\n"
             "                        COMMA_LOCATION_ARGS) const ;\n"

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
generateHdeclarations (AC_OutputStream & inHfile) const {
//----------------------- List class declaration ----------------  
  inHfile.appendCppTitleComment (C_String ("sorted list '@") + aNomListe + "'") ;

  inHfile << "class elementOf_GGS_" << aNomListe << " ;\n" ;
  inHfile.appendCppHyphenLineComment () ;
  inHfile << "extern const C_galgas_type_reference kTypeReference_" << aNomListe << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ;
  inHfile << "\n"
             "class GGS_" << aNomListe << " : public AC_galgas_sortedlist {\n"
             "  public : typedef elementOf_GGS_" << aNomListe << " cElement ;\n"
//--- Constructors and assignment operator declaration
             "//--- Default Constructor\n"
             "  public : GGS_" << aNomListe << " (void) ;\n"
             "//--- Copy Constructor\n"
             "  public : GGS_" << aNomListe << " (const GGS_" << aNomListe << " & inSource) ;\n"
             "//--- Comparison Operators\n"
             "  public : GGS_bool operator_isEqual (const GGS_" << aNomListe << " & inOperand) const ;\n"
             "  public : GGS_bool operator_isNotEqual (const GGS_" << aNomListe << " & inOperand) const ;\n"

//--- Constructor 'emptySortedList'
             "//--- Constructor 'emptySortedList'\n"
             "  public : static GGS_" << aNomListe << " constructor_emptySortedList (void) ;\n"

//--- Constructor 'sortedListWithValue'
             "  public : static GGS_" << aNomListe << " constructor_sortedListWithValue (" ;
  GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
  PMSInt32 numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inHfile << ",\n                           " ;
    }
    inHfile << "const " ;
    current._mAttributType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"

//--- Get smallest object
             "//--- Get smallest object\n"
             "  public : inline cElement * firstObject (void) const {\n"
             "    return (cElement *) internalSmallestObject () ;\n"
             "  }\n"

//--- Get greatest object
             "//--- Get greatest object\n"
             "  public : inline cElement * lastObject (void) const {\n"
             "    return (cElement *) internalGreatestObject () ;\n"
             "  }\n"

//--- operators () for method call
             "//--- Operators () used for method call\n"
             "  public : const GGS_" << aNomListe << " * operator () (UNUSED_LOCATION_ARGS) const { return this ;} \n"

//--- Declare method 'smallest'
             "//--- Method 'smallest'\n"
             "  public : void method_smallest (C_Compiler & inLexique" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << ",\n                              " ;
    current._mAttributType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inHfile << "\n                              "
             "COMMA_LOCATION_ARGS) const ;\n"

//--- Declare method 'greatest'
             "//--- Method 'greatest'\n"
             "  public : void method_greatest (C_Compiler & inLexique" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << ",\n                             " ;
    current._mAttributType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inHfile << "\n                             "
             "COMMA_LOCATION_ARGS) const ;\n"

//--- Declare modifier 'popGreatest'
             "//--- Method 'popGreatest'\n"
             "  public : void modifier_popGreatest (C_Compiler & inLexique" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << ",\n                                " ;
    current._mAttributType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inHfile << "\n                                "
             "COMMA_LOCATION_ARGS) ;\n"

//--- Declare modifier 'popSmallest'
             "//--- Modifier 'popSmallest'\n"
             "  public : void modifier_popSmallest (C_Compiler & inLexique" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inHfile << ",\n                                 " ;
    current._mAttributType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inHfile << "\n                                 "
             "COMMA_LOCATION_ARGS) ;\n"

             "//--- Handle '.=' operator\n"
             "  public : void dotAssign_operation (const GGS_" << aNomListe << " inOperand) ;\n\n"

//--- Append a new value
             "//--- Handling '+=' GALGAS operator\n"
             "  public : void addAssign_operation (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current._mAttributType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"

//--- List concatenation
             "//--- Handling '.' GALGAS operator\n"
             "  public : GGS_" << aNomListe << " operator_concat (const GGS_" << aNomListe << " & inOperand) const ;\n\n"

//--- Internal methods
             "//--- Internal Methods\n"
              "  protected : void _internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current._mAttributType (HERE)(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"
             "//--- List Insulation\n"
             "  protected : void _insulateList (void) ;\n"
             "//--- Reader 'description\n"
             "  public : GGS_string reader_description (C_Compiler & inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const PMSInt32 inIndentation = 0) const ;\n"

//--- Enumerator declaration
             "//--------------------------------- Sorted List Enumerator\n"
             "  public : class cEnumerator : public cAbstractSortedListEnumerator {\n"
             "  //--- Constructor\n"
             "    public : inline cEnumerator (const GGS_" << aNomListe << " & inList,\n"
             "                                 const bool inAscending) :\n"
             "    cAbstractSortedListEnumerator (inList, inAscending) {\n"
             "    }\n"
             "  //--- Iterator method\n"
             "    public : inline cElement * nextObject (void) {\n"
             "      return (cElement *) internalNextObject () ;\n"
             "    }\n" ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inHfile << "    public : /* const */ " ;
    current._mAttributType (HERE)(HERE)->generateCppClassName (inHfile) ;
    inHfile << " & _" << current._mAttributeName (HERE) << " (LOCATION_ARGS) const ;\n" ;
    current.next () ;
  }
  inHfile << "  } ;\n" ;
//---
  inHfile << "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_sortedListTypeToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_sortedListTypeToImplement::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_sortedListTypeToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                               const C_String & /* inTargetFileName*/,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_sortedListTypeToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                  const C_String & /* inTargetFileName */,
                                  PMSInt32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
//------------- Implementation de l'element de liste -----------------
  inCppFile.appendCppTitleComment (C_String ("Element of list '@") + aNomListe + "'") ;

//--- Engendrer le constructeur de l'element de liste
  inCppFile << "elementOf_GGS_" << aNomListe << "::\n"
               "elementOf_GGS_" << aNomListe << " (" ;
  GGS_typeListeAttributsSemantiques::cEnumerator current (mNonExternAttributesList, true) ;
  PMSInt32 numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "const " ;
    current._mAttributType (HERE)(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ")" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable == 0) {
      inCppFile << ":\n" ;
    }else{
      inCppFile << ",\n" ;
    }
    inCppFile << current._mAttributeName (HERE) << " (argument_" << cStringWithSigned (numeroVariable) << ")" ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Element comparison
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "bool elementOf_GGS_" << aNomListe << "::\n"
               "isEqualToObject (const cSortedListElement * inOperand) const {\n"
               "  bool equal = inOperand == this ;\n"
               "  if (! equal) {\n"
               "    const elementOf_GGS_" << aNomListe << " * ptr = dynamic_cast <const elementOf_GGS_" << aNomListe << " *> (inOperand) ;\n"
               "    macroValidPointer (ptr) ;\n"
               "    equal = " ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << "\n         && " ;
    }
    inCppFile << current._mAttributeName (HERE) << ".operator_isEqual (ptr->"  << current._mAttributeName (HERE) << ").boolValue ()" ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << " ;\n"
               "  }\n"
               "  return equal ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "PMSInt32 elementOf_GGS_" << aNomListe << "::\n"
               "compareForSorting (const cSortedListElement * inOperand) const {\n"
               "  const elementOf_GGS_" << aNomListe << " * operand = (const elementOf_GGS_" << aNomListe << " *) inOperand ;\n" ;
  
  GGS_EXsortDescriptorList::cEnumerator sortAttribute (mSortDescriptorList, true) ;
  if (sortAttribute.hasCurrentObject ()) {
    inCppFile << "  PMSInt32 result = "
              << (sortAttribute._mAscendingOrder (HERE).boolValue () ? "" : "- ")
              << sortAttribute._mSortAttribute (HERE)
              << ".compareForSortedList (operand->" << sortAttribute._mSortAttribute (HERE) << ") ;\n" ;
    sortAttribute.next () ;
    while (sortAttribute.hasCurrentObject ()) {
      inCppFile << "  if (result == 0) {\n"
                   "    result = "
                << (sortAttribute._mAscendingOrder (HERE).boolValue () ? "" : "- ")
                << sortAttribute._mSortAttribute (HERE)
                << ".compareForSortedList (operand->" << sortAttribute._mSortAttribute (HERE) << ") ;\n"
                << "  }\n" ;
      sortAttribute.next() ;
    }
  }
  inCppFile << "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void elementOf_GGS_" << aNomListe << "::\n"
               "appendForDescription (C_Compiler & inLexique,\n"
               "                      C_String & ioString,\n"
               "                      const PMSInt32 inIndentation\n"
               "                      COMMA_LOCATION_ARGS) const {\n" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << "  ioString << \"\\n\" ;\n"
                 "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
                 "  ioString << \"|-\" ;\n"
                 "  ioString << " << current._mAttributeName (HERE) << ".reader_description  (inLexique COMMA_THERE, inIndentation) ;\n" ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "}\n\n" ;

// ------------- List Implementation -----------------
  inCppFile.appendCppTitleComment (C_String ("Sorted list '@") + aNomListe + "'") ;

  inCppFile << "const C_galgas_type_reference kTypeReference_" << aNomListe << " (\"" << aNomListe << "\") ;\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Generate default constructor
  inCppFile << "GGS_" << aNomListe
            << "::GGS_" << aNomListe
            << " (void): AC_galgas_sortedlist () { // Default Constructor\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Engendrer le constructeur de recopie
  inCppFile << "GGS_" << aNomListe << "::\n"
               "GGS_" << aNomListe
            << " (const GGS_" << aNomListe << " & inSource): AC_galgas_sortedlist (inSource) {\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Generate comparison
  inCppFile << "GGS_bool GGS_" << aNomListe << "::\n"
               "operator_isEqual (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (), isEqualToList (inOperand)) ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << aNomListe << "::\n"
               "operator_isNotEqual (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  return GGS_bool (isBuilt () && inOperand.isBuilt (), ! isEqualToList (inOperand)) ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Engendrer la methode _internalAppendValues
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) inCppFile << ",\n                    " ;
    inCppFile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  cElement * nouvelElement = (cElement *) NULL ;\n" 
               "  macroMyNew (nouvelElement, cElement (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ")) ;\n" 
               "  _internalAppendItem (nouvelElement) ;\n" 
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Generate addAssign_operation
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "addAssign_operation (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  if (isBuilt ()) {\n"
               "    _insulateList () ;\n"
               "    _internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "  }\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << aNomListe << " GGS_" << aNomListe << "::\n"
               "operator_concat (const GGS_" << aNomListe << " & inOperand) const {\n"
               "  GGS_" << aNomListe << " result = * this ;\n"
               "  result.dotAssign_operation (inOperand) ;\n"
               "  return result ;\n"
               "}\n\n" ;
               
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "dotAssign_operation (const GGS_" << aNomListe << " inOperand) {\n"
               "  if (isBuilt () && inOperand.isBuilt ()) {\n"
               "    if (count () == 0) {\n"
               "      *this = inOperand ;\n"
               "    }else{\n"
               "      if (inOperand.count () > 0) {\n"
               "        _insulateList () ;\n"
               "        elementOf_GGS_" << aNomListe << " * p = inOperand.firstObject () ;\n"
               "        while (p != NULL) {\n"
               "          macroValidPointer (p) ;\n" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    inCppFile << "          " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " p_" << cStringWithSigned (numeroVariable) << " = p->" << current._mAttributeName (HERE) << " ;\n" ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << "          _internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "p_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "          p = p->nextObject () ;\n"
               "        }\n"
               "      }\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Engendrer la methode _insulateList
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "_insulateList (void) {\n"
               "  if (_shared ()) {\n"
               "    cElement * ptr = firstObject () ;\n"
               "    alloc () ;\n"
               "    while (ptr != NULL) {\n"
               "      macroValidPointer (ptr) ;\n"
               "      _internalAppendValues (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "ptr->" << current._mAttributeName (HERE) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "      ptr = ptr->nextObject () ;\n"
               "    }\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement constructor 'emptySortedList'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_emptySortedList (void) {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  result.alloc () ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement constructor 'sortedListWithValue'
  inCppFile << "GGS_" << aNomListe << "  GGS_" << aNomListe << "::\n"
               "constructor_sortedListWithValue (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ",\n                           " ;
    }
    inCppFile << "const " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
               "  GGS_" << aNomListe << " result ;\n"
               "  result.alloc () ;\n"
               "  result.addAssign_operation (" ;
  current.rewind () ;
  numeroVariable = 0 ;
  while (current.hasCurrentObject ()) {
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "argument_" << cStringWithSigned (numeroVariable) ;
    current.next () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement reader 'description'
  inCppFile << "GGS_string GGS_" << aNomListe << "::\n"
               "reader_description (C_Compiler & inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const PMSInt32 inIndentation) const {\n"
               "  return _description (inLexique, \"@" << aNomListe << "\", inIndentation COMMA_THERE) ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement method 'smallest'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "method_smallest (C_Compiler & inLexique" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n                 " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "\n                 "
               "COMMA_LOCATION_ARGS) const {\n"
               "  cElement * ptr = NULL ;\n"
               "  if (isBuilt ()) {\n"
               "    ptr = firstObject () ;\n"
               "    if (ptr == NULL) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'first' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (ptr != NULL) {\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << " = ptr->" << current._mAttributeName (HERE) << " ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }else{\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << ".drop () ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;


//--- Implement method 'greatest'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "method_greatest (C_Compiler & inLexique" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n             " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "\n             "
               "COMMA_LOCATION_ARGS) const {\n"
               "  cElement * ptr = NULL ;\n"
               "  if (isBuilt ()) {\n"
               "    ptr = lastObject () ;\n"
               "    if (ptr == NULL) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'greatest' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (ptr != NULL) {\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << " = ptr->" << current._mAttributeName (HERE) << " ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }else{\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << ".drop () ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

//--- Implement method 'popSmallest'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_popSmallest (C_Compiler & inLexique" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n                 " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "\n                 "
               "COMMA_LOCATION_ARGS) {\n"
               "  cElement * ptr = NULL ;\n"
               "  if (isBuilt ()) {\n"
               "    ptr = firstObject () ;\n"
               "    if (ptr == NULL) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'popSmallest' modifier invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (ptr != NULL) {\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << " = ptr->" << current._mAttributeName (HERE) << " ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "    _insulateList () ;\n"
               "    _internalRemoveSmallest () ;\n"
               "  }else{\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << ".drop () ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Implement modifier 'popGreatest'
  inCppFile << "void GGS_" << aNomListe << "::\n"
               "modifier_popGreatest (C_Compiler & inLexique" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << ",\n                " ;
    current._mAttributType (HERE) (HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "_out_" << cStringWithSigned (numeroVariable) ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "\n                "
               "COMMA_LOCATION_ARGS) {\n"
               "  cElement * ptr = NULL ;\n"
               "  if (isBuilt ()) {\n"
               "    ptr = lastObject () ;\n"
               "    if (ptr == NULL) {\n"
               "      inLexique.onTheFlyRunTimeError (\"'popGreatest' modifier invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (ptr != NULL) {\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << " = ptr->" << current._mAttributeName (HERE) << " ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "    _insulateList () ;\n"
               "    _internalRemoveGreatest () ;\n"
               "  }else{\n" ;
  numeroVariable = 0 ;
  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile << "    _out_" << cStringWithSigned (numeroVariable) << ".drop () ;\n" ;
    numeroVariable ++ ;
    current.next () ;
  }
  inCppFile << "  }\n"
               "}\n\n" ;

  current.rewind () ;
  while (current.hasCurrentObject ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "/* const */ " ;
    current._mAttributType (HERE) (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " & GGS_" << aNomListe << "::cEnumerator::_" << current._mAttributeName (HERE) << " (LOCATION_ARGS) const {\n"
                 "  macroValidPointerThere (mCurrentEnumeratedObject) ;\n"
                 "  return ((/* const */ cElement *) mCurrentEnumeratedObject)->" << current._mAttributeName (HERE) << " ;\n"
                 "}\n\n" ;
    current.next () ;
  }
}


//---------------------------------------------------------------------------*
