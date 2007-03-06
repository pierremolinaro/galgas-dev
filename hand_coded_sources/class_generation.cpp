//---------------------------------------------------------------------------*
//                                                                           *
//  Generate GALGAS class declaration and implementation                     *
//                                                                           *
//  Copyright (C) 1999, ..., 2007 Pierre Molinaro.                           *
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

#include "files/C_TextFileWrite.h"
#include "utilities/MF_MemoryControl.h"

#include "semantics_instructions.h"
#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

static void
generateClassMethodsImplementation (const GGS_typeTableMethodesAimplementer & inMap,
                                    AC_OutputStream & inCppFile,
                                    const GGS_lstring & inClassName,
                                    const C_String & inTargetFileName,
                                    const bool inGenerateDebug) {
  GGS_typeTableMethodesAimplementer::element_type * current = inMap.mFirstItem ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (! current->champEstAbstraite) {
      inCppFile.writeCppHyphenLineComment () ;
      inCppFile << "void cPtr_" << inClassName
                << "::\n"
                   "method_" << current->mKey << " (C_Lexique &" ;
    //--- L'argument lexique est-il utilise ?
      const bool lexiqueUtilise = isLexiqueFormalArgumentUsedForList (current->mInfo.mInstructionList, true) ;
      if (! lexiqueUtilise) {
        inCppFile << " /*" ;
      }
      inCppFile << " _inLexique" ;
      if (! lexiqueUtilise) {
        inCppFile << " */" ;
      }
    //--- Engendrer les arguments formels declares par l'utilisateur
      GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = current->mInfo.aListeTypeEtNomsArguments.firstObject () ;
      while (currentArgument != NULL) {
        macroValidPointer (currentArgument) ;
        inCppFile << ",\n                                " ;
        currentArgument->mType (HERE)->generateFormalParameter (inCppFile, ! currentArgument->mModeIn.boolValue ()) ;
        const bool variableUtilisee = formalArgumentIsUsedForList (current->mInfo.mInstructionList, currentArgument->mCppName, true) ;
        if (! variableUtilisee) {
          inCppFile << "/* " ;
        }
        currentArgument->mCppName (HERE)->generateCplusPlusName (inCppFile) ;
        if (! variableUtilisee) {
          inCppFile << " */" ;
        }
        currentArgument = currentArgument->nextObject () ;
      }
    //--- Terminer la declaration
      inCppFile << " COMMA_UNUSED_LOCATION_ARGS) {\n" ;
    //--- Engendrer la liste d'instructions
      sint32 prototypeIndex = 0 ; // Non used here
      generateInstructionListForList (current->mInfo.mInstructionList, inCppFile,
                                      inTargetFileName, prototypeIndex,
                                      inGenerateDebug, true) ; 
      inCppFile << "}\n\n" ;
    }
    current = current->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateClassMethodsDeclaration (const GGS_typeTableMethodesAimplementer & inMap,
                                 AC_OutputStream & inHfile) {
  GGS_typeTableMethodesAimplementer::element_type * current = inMap.mFirstItem ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "//--- Method '" << current->mKey << "'\n"
               "  public : virtual void method_" << current->mKey << " (C_Lexique &" ;
  //--- Engendrer les arguments formels declares par l'utilisateur
    GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = current->mInfo.aListeTypeEtNomsArguments.firstObject () ;
    while (currentArgument != NULL) {
      macroValidPointer (currentArgument) ;
      inHfile << ",\n                                " ;
      currentArgument->mType (HERE)->generateFormalParameter (inHfile, ! currentArgument->mModeIn.boolValue ()) ;
      currentArgument = currentArgument->nextObject () ;
    }
  //--- Terminer la declaration
    inHfile << "\n                                " ;
    if (current->champEstAbstraite) {
      inHfile << "COMMA_LOCATION_ARGS) = 0 ;\n" ;
    }else{
      inHfile << "COMMA_LOCATION_ARGS) ;\n" ;
    }
    inHfile << "\n" ;
    current = current->nextObject () ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_C_classToImplement::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << aNomClasse << " ;\n"
             "class cPtr_" << aNomClasse << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_classToImplement::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) const {
//------------- declarer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inHfile.writeCppTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

//--- Super class name (empty if no super class)
  const C_String superClassName = (mAncestorClassesMap.firstObject () == NULL)
    ? C_String ()
    : mAncestorClassesMap.lastObject ()->mKey.string () ;

  inHfile << "class GGS_" << aNomClasse ;
  if (superClassName.length () > 0) {
    inHfile << " : public GGS_" << superClassName ;
  }
  inHfile << " {\n" ;

//--- Engendrer la declaration de l'attribut 'mPointer'
  if (superClassName.length () == 0) {
    inHfile << "//--- Pointer to actual instance\n"
               "  protected : cPtr_" << aNomClasse << " * mPointer ;\n" ;
  }

//--- Engendrer la declaration du constructeur par defaut
  inHfile << "//--- Default constructor\n"
             "  public : GGS_" << aNomClasse << " (void) ;\n"

//--- Engendrer la declaration du constructeur de recopie
             "//--- Copy constructor\n"
             "  public : GGS_" << aNomClasse
          << " (const GGS_" << aNomClasse << " &) ;\n"

//--- Engendrer la declaration du destructeur
             "//--- Virtual destructor\n"
             "  public : virtual ~GGS_" << aNomClasse << " (void) ;\n" ;

  if (! mIsAbstract.boolValue ()) {
  //--- 'new' constructor
    inHfile << "//--- 'new' constructor\n"
               "  public : static GGS_" << aNomClasse
            << " constructor_new (C_Lexique & inLexique" ;
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

//--- Engendrer la declaration de la redefinition de l'operateur =
  inHfile << "//--- Assignment operator\n"
             "  public : void operator = (const GGS_" << aNomClasse << " &) ;\n"

//--- Comparison
             "//--- Comparison methods\n"
             "  public : GGS_bool operator == (const GGS_" << aNomClasse << " & inOperand) const ;\n"
             "  public : GGS_bool operator != (const GGS_" << aNomClasse << " & inOperand) const ;\n" ;

  if (superClassName.length () == 0) {
//--- Engendrer la declaration de la methode '_isBuilt'
    inHfile << "//--- _isBuilt\n"
               "  public : inline bool _isBuilt (void) const { return mPointer != NULL ; }\n"


//--- Engendrer la declaration et l'implementation de la methode 'isEqualTo'
               "//--- isEqualTo\n"
               "  public : inline bool isEqualTo (const GGS_" << aNomClasse
            << " & _inOperand) const {\n"
               "    return mPointer == _inOperand.mPointer ;\n"
               "  }\n"

//--- Engendrer la declaration de la methode 'getPtr'
               "//--- getPtr\n"
               "  public : inline cPtr_" << aNomClasse << " * getPtr (void) const {\n"
               "    return mPointer ;\n"
               "  }\n"

//--- Engendrer la declaration de la methode '_drop_operation'
               "//--- drop\n"
               "  public : void _drop_operation (void) ;\n" ;
  }

//--- Generate 'description' reader declaration
  inHfile << "//--- 'description' reader\n"
             "  public : GGS_string reader_description (C_Lexique & _inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const sint32 inIndentation = 0) const ;\n"

//--- Implicitly declared Readers
             "//--- Readers\n" ;
  GGS_typeListeAttributsSemantiques::element_type * current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "  public : " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile << " reader_" << current->aNomAttribut
            << " (C_Lexique & inLexique COMMA_LOCATION_ARGS) const ;\n" ;
    current = current->nextObject () ;
  }
//--- Engendrer la declaration de la surcharge de l'operateur ()
  inHfile << "//--- operator ()\n"
             "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
             "    public : cPtr_" << aNomClasse << " * operator () (LOCATION_ARGS) const ;\n"
             "  #else\n"
             "    public : inline cPtr_" << aNomClasse << " * operator () (LOCATION_ARGS) const {\n"
             "      return " ;
  if (superClassName.length () > 0) {
    inHfile << "(cPtr_" << aNomClasse << " *) " ;
  }
  inHfile << "mPointer ;\n"
             "    }\n"
             "  #endif\n\n" ;

//--- Generate 'message' reader prototypes              
  GGS_typeClassMessagesMap::element_type * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inHfile << "//--- '" << messageCourant->mKey << "' message\n"
               "  public : GGS_string reader_" << messageCourant->mKey << " (C_Lexique & _inLexique COMMA_LOCATION_ARGS) const ;\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- Engendrer la fin de la declaration de la classe
  inHfile << "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_C_classToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & inLexique) const {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.writeCppTitleComment (C_String ("abstract class 'cPtr_") + aNomClasse + "'") ;

//--- Super class name (empty if no super class)
  const C_String superClassName = (mAncestorClassesMap.firstObject () == NULL)
    ? C_String ()
    : mAncestorClassesMap.lastObject ()->mKey.string () ;

//--- Engendrer l'en tete de la declaration de la classe abstraite
  generatedZone2 << "class cPtr_" << aNomClasse ;
  if (superClassName.length () == 0) {
    generatedZone2 << " : public C_GGS_Object {\n" ;
  }else{
    generatedZone2 << " : public cPtr_" << superClassName << " {\n"
                      "  private : typedef cPtr_" << superClassName << " inherited ;\n" ;
  }

  C_String generatedZone3 ; generatedZone3.setCapacity (20000) ;
//--- Generate constructor
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  generatedZone3 << "//--- Constructor\n"
                    "  public : cPtr_" << aNomClasse << " (" ;
  bool first = true ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (first) {
      first = false ;
    }else{
      generatedZone3 << ",\n                                " ;
    }
    generatedZone3 << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (generatedZone3, true) ;
    current = current->nextObject () ;
  }
  if (first) {
    generatedZone3 << "LOCATION_ARGS" ;
  }else{
    generatedZone3 << "\n                                "
                      "COMMA_LOCATION_ARGS" ;
  }
  generatedZone3 << ") ;\n\n" ;

  generatedZone3 << "//--- Declaring a protected virtual destructor enables the compiler to raise\n"
                    "//    an error if a direct delete is performed; only the static method\n"
                    "//    C_GGS_Object::detachPointer may invoke delete.\n"
                    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "    protected : virtual ~cPtr_" << aNomClasse << " (void) {}\n"
                    "  #endif\n\n" ;
  
//--- Engendrer la declaration des attributs
  generatedZone3 << "//--- Attributes\n" ;
  current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generatePublicDeclaration (generatedZone3, current->aNomAttribut) ;
    current = current->nextObject () ;
  }

//--- Pour chaque methode, engendrer sa declaration
  generateClassMethodsDeclaration (mMethodsMap, generatedZone3) ;

//--- Pour chaque message abstrait, engendrer les declarations de methodes virtuelles pures correspondantes
//    et engendrer la methode statique correspondante
  GGS_typeClassMessagesMap::element_type * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    generatedZone3 << "  public : virtual const char * message_" << messageCourant->mKey << " (void) const ;\n" ;
    generatedZone3 << "  public : static const char * static_string_message_" << messageCourant->mKey << " (void) ;\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- Method for 'description' reader
  generatedZone3 << "//--- Method for 'description' reader\n"
                    "  public : virtual void appendForDescription (C_Lexique & _inLexique,\n"
                    "                                              C_String & ioString,\n"
                    "                                              const sint32 inIndentation\n"
                    "                                              COMMA_LOCATION_ARGS) const ;\n"
                    "\n"
                    "//--- Comparison\n"
                    "  public : virtual bool isEqualToObject (const C_GGS_Object * inOperand) const"
                 << (mIsAbstract.boolValue () ? " = 0" : "")
                 << " ;\n" ;

//--- End of Class Declaration
  generatedZone3 << "} ;\n\n" ;
  generatedZone3.writeCppHyphenLineComment () ;
 
//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output"
                                                                   COMMA_HERE) ;
  inLexique.generateFile ("//",
                          C_String ("include_") + aNomClasse + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;

  inHfile.writeCppHyphenLineComment () ;
  inHfile << "#include \"include_" << aNomClasse << ".h\"\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_classToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_classToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_classToImplement::
generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & inTargetFileName,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool inGenerateDebug) const {
  inCppFile.writeCppTitleComment (C_String ("abstract class 'cPtr_") + aNomClasse + "'") ;

//--- Super class name (empty if no super class)
  const C_String superClassName = (mAncestorClassesMap.firstObject () == NULL)
    ? C_String ()
    : mAncestorClassesMap.lastObject ()->mKey.string () ;

//--- Generate Constructor
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  inCppFile << "cPtr_" << aNomClasse << "::\n"
               "cPtr_" << aNomClasse << " (" ;
  sint16 variableIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (variableIndex > 0) {
      inCppFile << ",\n                                " ;    
    }
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << variableIndex ;
    current = current->nextObject () ;
    variableIndex ++ ;
  }
  if (variableIndex > 0) {
    inCppFile << "\n                                "
                 "COMMA_LOCATION_ARGS" ;    
  }else{
    inCppFile << "LOCATION_ARGS" ;
  }
  inCppFile << ")" ;
  const sint32 nombreArgumentsHerites = aListeTousAttributsNonExternes.count () - aListeAttributsCourants.count () ;
  current = aListeTousAttributsNonExternes.firstObject () ;
//--- Call super class constructor
  inCppFile << "\n:" ;
  if (superClassName.length () == 0) {
    inCppFile << "C_GGS_Object" ;
  }else{
    inCppFile << "cPtr_" << superClassName ;
  }
  inCppFile << " (" ;
  variableIndex = 0 ;
  for (sint32 i=0 ; i<nombreArgumentsHerites ; i++)  {
    if (variableIndex > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "argument_" << variableIndex ;
    macroValidPointer (current) ;
    current = current->nextObject () ;
    variableIndex ++ ;
  }
  if (variableIndex == 0) {
    inCppFile << "THERE" ;
  }else{
    inCppFile << " COMMA_THERE" ;
  }
  inCppFile << ")" ;
  while (current != NULL) {
    inCppFile << ",\n" ;
    macroValidPointer (current) ;
    inCppFile << current->aNomAttribut << " (argument_" << variableIndex << ")" ;
    variableIndex ++ ;
    current = current->nextObject () ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Engendrer la declaration de la surcharge de l'opeerateur ()
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
               "  cPtr_" << aNomClasse << " * GGS_" << aNomClasse << "::\n"
               "  operator () (LOCATION_ARGS) const {\n"
               "    macroValidPointerThere (mPointer) ;\n" ;
  if (superClassName.length () == 0) {
    inCppFile << "      return mPointer ;\n" ;
  }else{
    inCppFile << "    MF_Assert (dynamic_cast <cPtr_" << aNomClasse << " *> (mPointer) != NULL,\n"
                 "               \"dynamic cast error\", 0, 0) ;\n"
                 "    return (cPtr_" << aNomClasse << " *) mPointer ;\n" ;
  }
  inCppFile << "  }\n"
               "#endif\n\n" ;

  if (! mIsAbstract.boolValue ()) {
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "bool cPtr_" << aNomClasse << "::\n"
                 "isEqualToObject (const C_GGS_Object * inOperand) const {\n" ;
    current = aListeTousAttributsNonExternes.firstObject () ;
    if (current == NULL) {
      inCppFile << "  return typeid (this) == typeid (inOperand) ;\n" ;
    }else{
      inCppFile << "  bool equal = typeid (this) == typeid (inOperand) ;\n"
                   "  if (equal) {\n"
                   "    const cPtr_" << aNomClasse << " * _p = dynamic_cast <const cPtr_" << aNomClasse << " *> (inOperand) ;\n"
                   "    macroValidPointer (_p) ;\n"
                   "    equal = " ;
      bool first = true ;
      while (current != NULL) {
        macroValidPointer (current) ;
        if (first) {
          first = false ;
        }else{
          inCppFile << "\n         && " ;
        }
        inCppFile << "(" << current->aNomAttribut << " == _p->" << current->aNomAttribut << ").boolValue ()" ;
        current = current->nextObject () ;
      }
      inCppFile << " ;\n"
                   "  }\n"
                   "  return equal ;\n" ;
    }
    inCppFile << "}\n\n" ;
  }

//--- Pour chaque methode non abstraite, engendrer son implementation
  generateClassMethodsImplementation (mMethodsMap, inCppFile, aNomClasse, inTargetFileName,
                                      inGenerateDebug) ;

//--- Method for 'description' reader
  inCppFile.writeCppHyphenLineComment () ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  inCppFile << "void cPtr_" << aNomClasse << "::\n"
               "appendForDescription (C_Lexique & "
            << ((current == NULL) ? "/* _inLexique */" : "_inLexique")
            << ",\n"
               "                      C_String & ioString,\n"
               "                      const sint32 "
            << ((current == NULL) ? "/* inIndentation */" : "inIndentation")
            << "\n"
               "                      " ;
  if (current == NULL) {
    inCppFile << "COMMA_UNUSED_LOCATION_ARGS" ;
  }else{
    inCppFile << "COMMA_LOCATION_ARGS" ;
  }
  inCppFile << ") const {\n"
               "  ioString << \"->@" << aNomClasse << ":\"" ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "\n"
                 "           << " << current->aNomAttribut
              << ".reader_description  (_inLexique COMMA_THERE, inIndentation + 1)" ;
    current = current->nextObject () ;
  }
  inCppFile << " ;\n"
               "}\n\n" ;

//--- Pour chaque message abstrait, engendrer la methode statique correspondante
  GGS_typeClassMessagesMap::element_type * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "const char * cPtr_" << aNomClasse
              << "\n::static_string_message_" << messageCourant->mKey
              << " (void) {\n"
                 "  return " ;
    inCppFile.writeCstringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "}\n\n" ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "const char * cPtr_" << aNomClasse << "::\n"
                 "message_" << messageCourant->mKey << " (void) const {\n"
                 "  return " ;
    inCppFile.writeCstringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "} ;\n\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//------------- Implementer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inCppFile.writeCppTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

//--- Implementer la declaration du constructeur par defaut
  inCppFile << "GGS_" << aNomClasse << "::\n"
               "GGS_" << aNomClasse << " (void) {\n"
               "  mPointer = NULL ;\n"
               "}\n\n" ;

//--- Implementer la declaration du constructeur de recopie
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << aNomClasse << "::\n"
               "GGS_" << aNomClasse << " (const GGS_" << aNomClasse << " & inOperand)" ;
  if (superClassName.length () == 0) {
     inCppFile << " {\n"
                  "  mPointer = (cPtr_" << aNomClasse << " *) NULL ;\n" ;
  }else{
     inCppFile << "\n"
                  ":GGS_" << superClassName << " () {\n" ;
  }
  inCppFile << "  macroAssignPointer (mPointer, inOperand.mPointer) ;\n"
               "}\n\n" ;

//--- Implementer la declaration du destructeur
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_" << aNomClasse
            << "::\n~GGS_" << aNomClasse << " (void) {\n"
               "  macroDetachPointer (mPointer, cPtr_" << aNomClasse << ") ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomClasse << "::\n"
               "operator = ("
               "const GGS_" << aNomClasse << " & inSource) {\n"
               "  macroAssignPointer (mPointer, inSource.mPointer) ;\n"
               "}\n\n" ;

  if (! mIsAbstract.boolValue ()) {
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "GGS_" << aNomClasse
              << " GGS_" << aNomClasse << "::\n"
                 "constructor_new (C_Lexique & /* inLexique */" ;
    current = aListeTousAttributsNonExternes.firstObject () ;
    variableIndex = 0 ;
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
  }
  
//--- Generate declaration of message readers
  messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "GGS_string GGS_" << aNomClasse << "::\n"
                 "reader_" << messageCourant->mKey << " (C_Lexique & /* _inLexique */\n"
                 "                            COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  return GGS_string (mPointer != NULL, C_String ((mPointer == NULL) ? \"\" : mPointer->message_" << messageCourant->mKey << " ())) ;\n"
                 "}\n\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- For every attribute, generate a reader
  current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile.writeCppHyphenLineComment () ;
    current->mAttributType(HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " GGS_" << aNomClasse << "::\n"
                 "reader_" << current->aNomAttribut
              << " (C_Lexique & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  " ;
    current->mAttributType(HERE)->generateCppClassName (inCppFile) ;
    inCppFile << "  result ;\n"
                 "  if (mPointer != NULL) {\n"
                 "    macroValidPointer (mPointer) ;\n" ;
    if (superClassName.length () == 0) {
      inCppFile << "    result = mPointer->" << current->aNomAttribut << " ;\n" ;
   }else{
      inCppFile << "    MF_Assert (dynamic_cast <cPtr_" << aNomClasse << " *> (mPointer) != NULL,\n"
                   "               \"dynamic cast error\", 0, 0) ;\n"
                   "    result = ((cPtr_" << aNomClasse << " *) mPointer)->" << current->aNomAttribut << " ;\n" ;
    }
    inCppFile << "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
    current = current->nextObject () ;
  }

//--- Engendrer la declaration de la methode '_drop_operation'
  if (superClassName.length () == 0) {
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << aNomClasse << "::\n"
                 "_drop_operation (void) {\n"
                 "  macroDetachPointer (mPointer, cPtr_" << aNomClasse << ") ;\n"
                 "}\n\n" ; 
  }

//--- Generate comparison operators
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << aNomClasse << "::\n"
               "operator == (const GGS_" << aNomClasse << " & inOperand) const {\n"
               "  bool equal = mPointer == inOperand.mPointer ;\n"
               "  if (_isBuilt () && inOperand._isBuilt () && ! equal) {\n"
               "    equal = mPointer->isEqualToObject (inOperand.mPointer) ;\n"
               "  }\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), equal) ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_bool GGS_" << aNomClasse << "::\n"
               "operator != (const GGS_" << aNomClasse << " & inOperand) const {\n"
               "  bool equal = mPointer == inOperand.mPointer ;\n"
               "  if (_isBuilt () && inOperand._isBuilt () && ! equal) {\n"
               "    equal = mPointer->isEqualToObject (inOperand.mPointer) ;\n"
               "  }\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (), ! equal) ;\n"
               "}\n\n" ;

//--- Generate 'description' reader implementation
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << aNomClasse << "::\n"
            << "reader_description (C_Lexique & _inLexique\n"
               "                    COMMA_LOCATION_ARGS,\n"
               "                    const sint32 inIndentation) const {\n"
               "  C_String s ;\n"
               "  s << \"<class @" << aNomClasse << "\" ;\n"
               "  if (_isBuilt ()) {\n"
               "    mPointer->appendForDescription (_inLexique, s, inIndentation + 1 COMMA_THERE) ;\n"
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
