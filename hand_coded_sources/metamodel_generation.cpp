//---------------------------------------------------------------------------*
//                                                                           *
//  GALGAS Metamodel generation; started March 16th, 2006.                   *
//                                                                           *
//  Copyright (C) 2006 Pierre Molinaro.                                      *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "semantics_semantics.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark List Implementation
#endif

//---------------------------------------------------------------------------*

void cPtr_C_metamodelEntityToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  const C_String listClassName = aNomClasse + "List" ;
  inHfile << "class GGS_" << listClassName << " ;\n"
             "class GGS_" << aNomClasse << " ;\n"
             "class cPtr_" << aNomClasse << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_metamodelEntityToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_Compiler & /* inLexique */) const {
  const C_String listClassName = aNomClasse + "List" ;
//----------------------- Element of list class declaration ----------------  
  inHfile.writeCppTitleComment (C_String ("Element of list '@") + listClassName + "'") ;
//--------- Declare internal element class ------------
  inHfile << "class cPtr_" << aNomClasse << " : public " ;
  if (mSuperClassName.length () == 0) {
    inHfile << "C_GGS_MetamodelEntity" ;
  }else{
    inHfile << "cPtr_" << mSuperClassName ;
  }
  inHfile << " {\n"
//--- Attributes
             "//--- Attributes\n" ;
  GGS_typeListeAttributsSemantiques::element_type * attributCourant = aListeAttributsCourants.firstObject () ;
  while (attributCourant != NULL) {
    macroValidPointer (attributCourant) ;
    attributCourant->mAttributType(HERE)->generatePublicDeclaration (inHfile, attributCourant->aNomAttribut) ;
    attributCourant = attributCourant->nextObject () ;
  }
//--- declaration constructeur
  inHfile << "//--- Constructor\n"
             "  public : cPtr_" << aNomClasse << " (" ;
  attributCourant = aListeTousAttributsNonExternes.firstObject () ;
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
  if (premier) {
    inHfile << "LOCATION_ARGS) ;\n\n" ;
  }else{
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) ;\n\n" ;
  }
//--- Access to next and previous item
  inHfile << "//--- Access to next\n"
             "  public : inline cPtr_" << aNomClasse << " * nextObject (void) const {\n"
             "    return (cPtr_" << aNomClasse << " *) internalNextItem () ;\n"
             "  }\n\n"
             "//--- Access to previous\n"
             "  public : inline cPtr_" << aNomClasse << " * previousObject (void) const {\n"
             "    return (cPtr_" << aNomClasse << " *) internalPreviousItem () ;\n"
             "  }\n\n"

//--- Element comparison
             "//--- Element comparison\n"
             "  public : virtual bool isEqualToObject (const cListElement * inOperand) const ;\n\n"
//--- Method for list 'description' reader
             "//--- Method used for description\n"
             "  public : virtual void\n"
             "  appendForDescription (C_Compiler & _inLexique,\n"
             "                        C_String & ioString,\n"
             "                        const sint32 inIndentation\n"
             "                        COMMA_LOCATION_ARGS) const ;\n\n"

//--- Generate metamodel Index Method
             "//--- Metamodel Component Index\n"
             "  public : virtual sint32 _metamodelComponentIndex (void) const ;\n\n"
             "  public : static sint32 _metamodelComponentIndexForClass (void) ;\n\n"

//--- Generate metamodel Component name Method
             "//--- Metamodel Component Name\n"
             "  public : virtual const char * _metamodelComponentName (void) const ;\n\n"

//--- Generate metamodel class ID method
             "//--- Metamodel Class ID\n"
             "  public : virtual sint32 _metamodelClassID (void) const ;\n\n"
             "  public : static sint32 _metamodelClassIDForClass (void) ;\n\n"

//--- Generate metamodel class name method
             "//--- Metamodel Class Name\n"
             "  public : virtual const char * _metamodelClassName (void) const ;\n\n"

//--- Clone virtual method
             "//--- 'clone' virtual method\n"
             "  public : virtual cPtr_" << aNomClasse << " * _cloneObject (void) const ;\n\n"

//--- Generate super class metamodel Index Method
             "//--- Super Class Metamodel Component Index\n"
             "  public : virtual sint32 _superClassMetamodelComponentIndex (void) const ;\n\n"

//--- Friend declaration
             "//--- Friend class declarations\n" 
             "  friend class GGS_" << listClassName << " ;\n"

//--- Fin de la declaration de la classe e_...
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_metamodelEntityToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
//------------- declarer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inHfile.writeCppTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

  inHfile << "class GGS_" << aNomClasse << " : public " ;
  if (mSuperClassName.length () > 0) {
    inHfile << "GGS_" << mSuperClassName ;
  }else{
    inHfile << "AC_galgas_entity" ;
  }
  inHfile << " {\n" ;

  if (! mIsAbstract.boolValue ()) {
  //--- 'new' constructor
    inHfile << "//--- 'new' constructor\n"
               "  public : static GGS_" << aNomClasse
            << " constructor_new (C_Compiler & inLexique" ;
    sint32 variableIndex = 0 ;
    GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                "
                 "const " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << "argument_" << variableIndex ;
      current = current->nextObject () ;
      variableIndex ++ ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) ;\n" ;
  }

  if (mSuperClassName.length () == 0) {
//--- Engendrer la declaration de la methode 'getPtr'
   inHfile << "//--- getPtr\n"
               "  public : inline cPtr_" << aNomClasse << " * getPtr (void) const {\n"
               "    return (cPtr_" << aNomClasse << " *) mPointer ;\n"
               "  }\n\n" ;
  }

//--- Generate 'description' reader declaration
  inHfile << "//--- 'description' reader\n"
             "  public : virtual const char * actualTypeName (void) const ;\n\n"

//--- Implicitly declared Readers
             "//--- Readers\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "  public : " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile << " reader_" << current->aNomAttribut
            << " (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;\n" ;
    current = current->nextObject () ;
  }
//--- Engendrer la declaration de la surcharge de l'operateur ()
  inHfile << "//--- operator ()\n"
             "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
             "    public : cPtr_" << aNomClasse << " * operator () (LOCATION_ARGS) const ;\n"
             "  #else\n"
             "    public : inline cPtr_" << aNomClasse << " * operator () (void) const {\n"
             "      return (cPtr_" << aNomClasse << " *) mPointer ;\n"
             "    }\n"
             "  #endif\n\n" ;

//--- Engendrer la fin de la declaration de la classe
  inHfile << "} ;\n\n" ;



//----------------------- List class declaration ----------------  
  const C_String listClassName = aNomClasse + "List" ;
  inHfile.writeCppTitleComment (C_String ("list '@") + listClassName + "'") ;

  inHfile << "class GGS_" << listClassName << " : public AC_galgas_list {\n"
             "  public : typedef cPtr_" << aNomClasse << " element_type ;\n"

//--- Constructor 'emptyList'
             "//--- Constructor 'emptyList'\n"
             "  public : static GGS_" << listClassName << " constructor_emptyList (C_Compiler & inLexique COMMA_LOCATION_ARGS) ;\n"

//--- Constructor 'listWithValue'
             "  public : static GGS_" << listClassName << " constructor_listWithValue (C_Compiler & _inLexique" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
             "//--- Operator () used for method call\n"
             "  public : inline const GGS_" << listClassName << " * operator () (UNUSED_LOCATION_ARGS) const { return this ;}\n\n"

//--- Declare method 'first'
             "//--- Method 'first'\n"
             "/*  public : void method_first (C_Compiler & _inLexique,\n"
             "                              GGS_" << aNomClasse << " & outElement\n"
             "                              COMMA_LOCATION_ARGS) const ; */\n"

//--- Declare method 'last'
             "//--- Method 'last'\n"
             "/*  public : void method_last (C_Compiler & _inLexique,\n"
             "                             GGS_" << aNomClasse << " & outElement\n"
             "                             COMMA_LOCATION_ARGS) const ; */\n"

//--- Declare modifier 'popLast'
             "//--- Modifier 'popLast'\n"
             "/*  public : void modifier_popLast (C_Compiler & _inLexique,\n"
             "                                  GGS_" << aNomClasse << " & outElement\n"
             "                                  COMMA_LOCATION_ARGS) ; */\n"

//--- Declare modifier 'popFirst'
             "//--- Modifier 'popFirst'\n"
             "/*  public : void modifier_popFirst (C_Compiler & _inLexique,\n"
             "                                   GGS_" << aNomClasse << " & outElement\n"
             "                                   COMMA_LOCATION_ARGS) ; */\n"

//--- Append a new value
             "//--- Handling '+=' GALGAS operator\n"
             "  public : void _addAssign_operation (const GGS_" << aNomClasse << " & inElement) ;\n"

//--- List concatenation
             "//--- Handling '.' GALGAS operator\n"
             "  public : GGS_" << listClassName << " _operator_concat (const GGS_" << listClassName << " & inOperand) const ;\n"

//--- Prepend a new value
             "  public : void modifier_prependValue (C_Compiler & _inLexique" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  inHfile << ") ;\n\n"
              "  protected : void _internalPrependValues (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  inHfile << ") ;\n\n"
             "//--- List Insulation\n"
             "  protected : void _insulateList (void) ;\n\n"
             "//--- Reader 'description\n"
             "  public : GGS_string\n"
             "  reader_description (C_Compiler & _inLexique\n"
             "                      COMMA_LOCATION_ARGS,\n"
             "                      const sint32 inIndentation = 0) const ;\n\n"

//--- Generate add method ?
             "//--- Metamodel Add method\n"
             "  public : void _addModel (const GGS_"
          << aNomClasse << " & inOperand) ;\n"

//--- End of list class declaration
             "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_metamodelEntityToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_metamodelEntityToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_metamodelEntityToImplement::
generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
  const C_String listClassName = aNomClasse + "List" ;
//------------- Implementation de l'element de liste -----------------
  inCppFile.writeCppTitleComment (C_String ("Element of list '@") + listClassName + "'") ;

//--- Engendrer le constructeur de l'element de liste
  inCppFile << "cPtr_" << aNomClasse << "::\n"
               "cPtr_" << aNomClasse << " (" ;
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  sint32 numeroVariable = 0 ;
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
  if (numeroVariable == 0) {
    inCppFile << "LOCATION_ARGS" ;
  }else{
    inCppFile << "\n                                "
                 "COMMA_LOCATION_ARGS" ;
  }
  inCppFile << ") :\n" ;
  const sint32 inheritedAttributeCount = aListeTousAttributsNonExternes.count ()
                                       - aListeAttributsCourants.count () ;
  if (mSuperClassName.length () == 0) {
    inCppFile << "C_GGS_MetamodelEntity (THERE)" ;
  }else{
    inCppFile << "cPtr_" << mSuperClassName << " (" ;
    current = aListeTousAttributsNonExternes.firstObject () ;
    for (sint32 i=0 ; i<inheritedAttributeCount ; i++) {
      macroValidPointer (current) ;
      if (i != 0) {
        inCppFile << ", " ;
      }
      inCppFile << "argument_" << i ;
      current = current->nextObject () ;
    }
    if (inheritedAttributeCount == 0) {
      inCppFile << "THERE)" ;
    }else{
      inCppFile << " COMMA_THERE)" ;
    }
  }
  current = aListeAttributsCourants.firstObject () ;
  numeroVariable = inheritedAttributeCount ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n"
              << current->aNomAttribut
              << " (argument_" << numeroVariable << ")" ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Element comparison
  inCppFile.writeCppHyphenLineComment () ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  inCppFile << "bool cPtr_" << aNomClasse << "::\n" ;
  if (current == NULL) {
    inCppFile << "isEqualToObject (const cListElement * /* inOperand */) const {\n"
                 "  return true ;\n" ;
  }else{
    inCppFile << "isEqualToObject (const cListElement * inOperand) const {\n"
                 "  bool equal = inOperand == this ;\n"
                 "  if (! equal) {\n"
                 "    const cPtr_" << aNomClasse << " * _p = dynamic_cast <const cPtr_" << aNomClasse << " *> (inOperand) ;\n"
                 "    macroValidPointer (_p) ;\n"
                 "    equal = " ;
    numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (numeroVariable > 0) {
        inCppFile << "\n         && " ;
      }
      inCppFile << current->aNomAttribut << "._operator_isEqual (_p->"  << current->aNomAttribut << ").boolValue ()" ;
      current = current->nextObject () ;
      numeroVariable ++ ;
    }
    inCppFile << " ;\n"
                 "  }\n"
                 "  return equal ;\n" ;
  }
  inCppFile << "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  if (current == NULL) {
    inCppFile << "void cPtr_" << aNomClasse << "::\n"
                 "appendForDescription (C_Compiler & /* _inLexique */,\n"
                 "                      C_String & ioString,\n"
                 "                      const sint32 /* inIndentation */\n"
                 "                      COMMA_UNUSED_LOCATION_ARGS) const {\n" ;
  }else{
    inCppFile << "void cPtr_" << aNomClasse << "::\n"
                 "appendForDescription (C_Compiler & _inLexique,\n"
                 "                      C_String & ioString,\n"
                 "                      const sint32 inIndentation\n"
                 "                      COMMA_LOCATION_ARGS) const {\n" ;
  }
  inCppFile << "  ioString << \"-> instance of @" << aNomClasse << "\" ;\n" ;
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

//--- Generate metamodel component index
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "sint32 cPtr_" << aNomClasse << "::_metamodelComponentIndex (void) const {\n"
               "  return gMetamodelManager.mMetamodelComponentIndex ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "sint32 cPtr_" << aNomClasse << "::_metamodelComponentIndexForClass (void) {\n"
               "  return gMetamodelManager.mMetamodelComponentIndex ;\n"
               "}\n\n" ;

//--- Generate super class metamodel component index
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "sint32 cPtr_" << aNomClasse << "::_superClassMetamodelComponentIndex (void) const {\n" ;
  if (mSuperClassName.length () > 0) {
    inCppFile << "  return cPtr_" << mSuperClassName << "::_metamodelComponentIndex () ;\n" ;
  }else{
    inCppFile << "  return -1 ;\n" ;
  }
  inCppFile << "}\n\n" ;

//--- Generate metamodel component name
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "const char * cPtr_" << aNomClasse << "::_metamodelComponentName (void) const {\n"
               "  return gMetamodelManager.mMetamodelComponentName ;\n"
               "}\n\n" ;

//--- Generate metamodel class ID method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "sint32 cPtr_" << aNomClasse << "::_metamodelClassID (void) const {\n"
               "  return " << mMetamodelClassID.uintValue () << " ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "sint32 cPtr_" << aNomClasse << "::_metamodelClassIDForClass (void) {\n"
               "  return " << mMetamodelClassID.uintValue () << " ;\n"
               "}\n\n" ;

//--- Generate metamodel class Name method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "const char * cPtr_" << aNomClasse << "::_metamodelClassName (void) const {\n"
               "  return \"" << aNomClasse << "\" ;\n"
               "}\n\n" ;

//--- Clone virtual method
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "cPtr_" << aNomClasse << " * cPtr_" << aNomClasse << "::\n"
               "_cloneObject (void) const {\n"
               "  cPtr_" << aNomClasse << " * _p = NULL ;\n"
               "  macroMyNew (_p, cPtr_" << aNomClasse << " (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ", " ;
    }
    inCppFile << current->aNomAttribut ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  if (numeroVariable == 0) {
    inCppFile << "HERE" ;
  }else{
    inCppFile << " COMMA_HERE" ;
  }
  inCppFile << ")) ;\n"
               "  return _p ;\n"
               "}\n\n" ;

// ------------- List Implementation -----------------
  inCppFile.writeCppTitleComment (C_String ("List '@") + listClassName + "'") ;

//--- Engendrer la methode _internalAppendValues
  inCppFile << "void GGS_" << listClassName << "::\n"
               "_internalAppendValues (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  current = aListeTousAttributsNonExternes.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  if (numeroVariable == 0) {
    inCppFile << "HERE" ;
  }else{
    inCppFile << "\n                                "
                 "COMMA_HERE" ;
  }
  inCppFile << ")) ;\n" 
               "  _internalAppendItem (nouvelElement) ;\n" 
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;


//--- Engendrer la methode _internalPrependValues
  inCppFile << "void GGS_" << listClassName << "::\n"
               "_internalPrependValues (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  current = aListeTousAttributsNonExternes.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  if (numeroVariable == 0) {
    inCppFile << "HERE" ;
  }else{
    inCppFile << "\n                                "
                 "COMMA_HERE" ;
  }
  inCppFile << ")) ;\n" 
               "  _internalPrependItem (nouvelElement) ;\n" 
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Generate _addAssign_operation
  inCppFile << "void GGS_" << listClassName << "::\n"
               "_addAssign_operation (const GGS_" << aNomClasse << " & inElement) {\n"
               "  if (_isBuilt () && inElement._isBuilt ()) {\n"
               "    _insulateList () ;\n"
               "    _internalAppendValues (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) inCppFile << ",\n                                " ;
    inCppFile << "((cPtr_" << aNomClasse << " *) inElement.getPtr ())->" << current->aNomAttribut ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") ;\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_" << listClassName << " GGS_" << listClassName << "::\n"
               "_operator_concat (const GGS_" << listClassName << " & inOperand) const {\n"
               "  GGS_" << listClassName << " result ;\n"
               "  if (_isBuilt () && inOperand._isBuilt ()) {\n"
               "    if (count () == 0) {\n"
               "      result = inOperand ;\n"
               "    }else{\n"
               "      result = * this ;\n"
               "      if (inOperand.count () > 0) {\n"
               "        result._insulateList () ;\n"
               "        cPtr_" << aNomClasse << " * p = inOperand.firstObject () ;\n"
               "        while (p != NULL) {\n"
               "          macroValidPointer (p) ;\n" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  inCppFile << "void GGS_" << listClassName << "::\n"
               "modifier_prependValue (C_Compiler & /* inLexique */" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  inCppFile << "void GGS_" << listClassName << "::\n"
               "_insulateList (void) {\n"
               "  if (_shared ()) {\n"
               "    element_type * _p = firstObject () ;\n"
               "    _alloc () ;\n"
               "    while (_p != NULL) {\n"
               "      macroValidPointer (_p) ;\n"
               "      _internalAppendValues (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  inCppFile << "GGS_" << listClassName << "  GGS_" << listClassName << "::\n"
               "constructor_emptyList (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  GGS_" << listClassName << " result ;\n"
               "  result._alloc () ;\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement constructor 'emptyList'
  inCppFile << "GGS_" << listClassName << "  GGS_" << listClassName << "::\n"
               "constructor_listWithValue (C_Compiler & /* _inLexique */" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
               "  GGS_" << listClassName << " result ;\n"
               "  result._alloc () ;\n"
               "  result._internalAppendValues (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
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
  inCppFile << "GGS_string GGS_" << listClassName << "::\n"
               "reader_description (C_Compiler & _inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  return _description (_inLexique, \"@" << listClassName << "\", inIndentation COMMA_THERE) ;\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Generate add method ?
  inCppFile << "void GGS_" << listClassName << "::\n"
               "_addModel (const GGS_"
            << aNomClasse << " & inOperand) {\n"
               "  if (_isBuilt () && inOperand._isBuilt ()) {\n"
               "    _insulateList () ;\n"
               "    _internalAppendItem (inOperand (HERE)->_cloneObject ()) ;\n"
               "  }\n"
               "}\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement method 'first'
  inCppFile << "/* void GGS_" << listClassName << "::\n"
               "method_first (C_Compiler & _inLexique,\n"
               "              GGS_" << aNomClasse << " & outElement\n"
               "              COMMA_LOCATION_ARGS) const {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = firstObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'first' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n"
               "    outElement = GGS_" << aNomClasse << "::constructor_new (_inLexique" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n"
                 "       _p->" << current->aNomAttribut ;
    current = current->nextObject () ;
  }
  inCppFile << ") ;\n"
               "  }else{\n"
               "    outElement._drop_operation () ;\n"
               "  }\n"
               "} */\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;


//--- Implement method 'last'
  inCppFile << "/* void GGS_" << listClassName << "::\n"
               "method_last (C_Compiler & _inLexique,\n"
               "             GGS_" << aNomClasse << " & outElement\n"
               "             COMMA_LOCATION_ARGS) const {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = lastObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'last' method invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n"
               "    outElement = GGS_" << aNomClasse << "::constructor_new (_inLexique" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n"
                 "       _p->" << current->aNomAttribut ;
    current = current->nextObject () ;
  }
  inCppFile << ") ;\n"
               "  }else{\n"
               "    outElement._drop_operation () ;\n"
               "  }\n"
               "} */\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;

//--- Implement method 'popFirst'
  inCppFile << "/* void GGS_" << listClassName << "::\n"
               "modifier_popFirst (C_Compiler & _inLexique,\n"
               "                   GGS_" << aNomClasse << " & outElement\n"
               "                   COMMA_LOCATION_ARGS) {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = firstObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'popFirst' modifier invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n"
               "    outElement = GGS_" << aNomClasse << "::constructor_new (_inLexique" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n"
                 "       _p->" << current->aNomAttribut ;
    current = current->nextObject () ;
  }
  inCppFile << ") ;\n"
               "  }else{\n"
               "    outElement._drop_operation () ;\n"
               "  }\n"
               "} */\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;

//--- Implement method 'popLast'
  inCppFile << "/* void GGS_" << listClassName << "::\n"
               "modifier_popLast (C_Compiler & _inLexique,\n"
               "                  GGS_" << aNomClasse << " & outElement\n"
               "                  COMMA_LOCATION_ARGS) {\n"
               "  element_type * _p = NULL ;\n"
               "  if (_isBuilt ()) {\n"
               "    _p = lastObject () ;\n"
               "    if (_p == NULL) {\n"
               "      _inLexique.onTheFlyRunTimeError (\"'popLast' modifier invoked on an empty list\" COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  if (_p != NULL) {\n"
               "    outElement = GGS_" << aNomClasse << "::constructor_new (_inLexique" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << ",\n"
                 "       _p->" << current->aNomAttribut ;
    current = current->nextObject () ;
  }
  inCppFile << ") ;\n"
               "  }else{\n"
               "    outElement._drop_operation () ;\n"
               "  }\n"
               "} */\n\n" ;

//------------- Implementer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inCppFile.writeCppTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

  if (! mIsAbstract.boolValue ()) {
    inCppFile << "GGS_" << aNomClasse
              << " GGS_" << aNomClasse << "::\n"
                 "constructor_new (C_Compiler & /* inLexique */" ;
    current = aListeTousAttributsNonExternes.firstObject () ;
    sint32 variableIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n"
                   "                 const " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "argument_" << variableIndex ;
      current = current->nextObject () ;
      variableIndex ++ ;
    }
    inCppFile << "\n                                "
                 "COMMA_LOCATION_ARGS) {\n"
                 "  GGS_" << aNomClasse << " result ;\n"
                 "  macroMyNew (result.mPointer, cPtr_" << aNomClasse << " (" ;
    current = aListeTousAttributsNonExternes.firstObject () ;
    variableIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (variableIndex > 0) {
        inCppFile << ",\n                                " ;
      }
      inCppFile << "argument_" << variableIndex ;
      current = current->nextObject () ;
      variableIndex ++ ;
    }
    if (variableIndex > 0) {
      inCppFile << " COMMA_THERE" ;
    }else{
      inCppFile << "THERE" ;
    }
    inCppFile << ")) ;\n"
                 "  return result ;\n"
                 "}\n\n" ;
    inCppFile.writeCppHyphenLineComment () ;
  }
  
//--- For every attribute, generate a reader
  current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " GGS_" << aNomClasse << "::\n"
                 "reader_" << current->aNomAttribut
              << " (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  " ;
    current->mAttributType(HERE)->generateCppClassName (inCppFile) ;
    inCppFile << "  result ;\n"
                 "  if (mPointer != NULL) {\n"
                 "    macroValidPointer (mPointer) ;\n"
                 "    MF_Assert (dynamic_cast <cPtr_" << aNomClasse << " *> (mPointer) != NULL,\n"
                 "               \"dynamic cast error\", 0, 0) ;\n"
                 "    result = ((cPtr_" << aNomClasse << " *) mPointer)->" << current->aNomAttribut << " ;\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
    inCppFile.writeCppHyphenLineComment () ;
    current = current->nextObject () ;
  }

//--- Generate 'description' reader implementation
  inCppFile << "const char * GGS_" << aNomClasse << "::actualTypeName (void) const {\n"
               " return \"" << aNomClasse << "\" ;\n"
               "}\n\n" ;
 
//--- Engendrer la declaration de la surcharge de l'operateur ()
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile <<"#ifndef DO_NOT_GENERATE_CHECKINGS\n"
             "  cPtr_" << aNomClasse << " * GGS_" << aNomClasse << "::operator () (LOCATION_ARGS) const {\n"
             "    macroValidPointerThere (mPointer) ;\n"
             "    return (cPtr_" << aNomClasse << " *) mPointer ;\n"
             "  }\n"
             "#endif\n\n" ;
}


//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Metamodel Generation
#endif

//---------------------------------------------------------------------------*

static void
generate_metamodel_header_file (C_Compiler & inLexique,
                                const GGS_entityToImplementMap & /* ioEntityMap */,
                                const GGS_lstring & inMetamodelComponentName,
                                const GGS_typeEntitiesToGenerateList & inEntitiesToGenerateList,
                                const GGS_lstring & /* inRootEntityName */,
                                const GGS_stringlist & inHeaderInclusionList) {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#ifndef " << inMetamodelComponentName << "_METAMODEL_DEFINED\n"
                 << "#define " << inMetamodelComponentName << "_METAMODEL_DEFINED\n"
                 << "\n#include <string.h>\n\n" ;

//--- Include declaration of predefined types
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"galgas/predefined_types.h\"\n" ;
  GGS_stringlist::element_type * currentInclusion = inHeaderInclusionList.firstObject () ;
  while (currentInclusion != NULL) {
    macroValidPointer (currentInclusion) ;
    generatedZone2 << "#include \"" << currentInclusion->mValue << ".h\"\n" ;
    currentInclusion = currentInclusion->nextObject () ;
  }
  generatedZone2 << "\n" ;
  C_String generatedZone3 ; generatedZone3.setCapacity (20000) ;

  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "sint32 _metamodel_index_for_" << inMetamodelComponentName << " (void) ;\n"
                    "\n" ;

//--- Generate entities predeclarations
  generatedZone3.writeCppTitleComment ("Class Predeclarations") ;
  GGS_typeEntitiesToGenerateList::element_type * element = inEntitiesToGenerateList.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generatePredeclarations (generatedZone3) ;
    element = element->nextObject () ;
  }
  generatedZone3 << "\n" ;

//--- Generate classes declarations
  element = inEntitiesToGenerateList.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateHdeclarations (generatedZone3) ;
    element = element->nextObject () ;
  }
  element = inEntitiesToGenerateList.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateHdeclarations_2 (generatedZone3, inLexique) ;
    element = element->nextObject () ;
  }
  
//--- End of ".h" file
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile ("//",
                          inMetamodelComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

static void
generate_metamodel_cpp_file (C_Compiler & inLexique,
                             GGS_entityToImplementMap & /* ioEntityMap */,
                             const GGS_lstring & inMetamodelComponentName,
                             const GGS_typeEntitiesToGenerateList & inEntitiesToGenerateList,
                             const GGS_lstring & /* inRootEntityName */) {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
//--- Include declaration of header file
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2 << "#include \"" << inMetamodelComponentName << ".h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include <typeinfo>\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inLexique.sourceFileName ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

  C_String generatedZone3 ; generatedZone3.setCapacity (200000) ;

//------------- Metamodel Management -----------------
  generatedZone3.writeCppTitleComment ("Metamodel Management") ;
  generatedZone3 << "static C_MetamodelManager gMetamodelManager (\"" << inMetamodelComponentName << "\") ;\n"
                    "\n" ;
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "sint32 _metamodel_index_for_" << inMetamodelComponentName << " (void) {\n"
                    "  return gMetamodelManager.mMetamodelComponentIndex ;\n"
                    "}\n"
                    "\n" ;

//------------- Generate classes -----------------
  GGS_typeEntitiesToGenerateList::element_type * element = inEntitiesToGenerateList.firstObject () ;
  sint32 select_repeat_production_index = 0 ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateCppClassImplementation (generatedZone3,
                                         inMetamodelComponentName,
                                         select_repeat_production_index,
                                         false) ;
    element = element->nextObject () ;
  }
  
//--- Generate file
  inLexique.generateFile ("//",
                          inMetamodelComponentName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void
routine_generate_metamodel (C_Compiler & inLexique,
                            GGS_entityToImplementMap inEntityMap,
                            GGS_lstring inMetamodelComponentName,
                            GGS_typeEntitiesToGenerateList inEntitiesToGenerateList,
                            GGS_lstring inRootEntityName,
                            GGS_stringlist inHeaderInclusionList
                            COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.currentFileErrorCount () == 0) {
  //--- Generate header file
    generate_metamodel_header_file (inLexique,
                                    inEntityMap,
                                    inMetamodelComponentName,
                                    inEntitiesToGenerateList,
                                    inRootEntityName,
                                    inHeaderInclusionList) ;
  //--- Generate implementation file
    generate_metamodel_cpp_file (inLexique,
                                 inEntityMap,
                                 inMetamodelComponentName,
                                 inEntitiesToGenerateList,
                                 inRootEntityName) ;
  }
}

//---------------------------------------------------------------------------*
