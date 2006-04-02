//---------------------------------------------------------------------------*
//                                                                           *
//  Generate GALGAS class declaration and implementation                     *
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

#include "files/C_TextFileWrite.h"
#include "utilities/MF_MemoryControl.h"

#include "semantics_instructions.h"
#include "semantics_generation.h"
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
      inCppFile.writeCHyphenLineComment () ;
      inCppFile << "void cPtr_" << inClassName
                << "::\n"
                   "methode_" << current->mKey << " (C_Lexique &" ;
    //--- L'argument lexique est-il utilise ?
      const bool lexiqueUtilise = isLexiqueFormalArgumentUsedForList (current->mInfo.mInstructionsList, true) ;
      if (! lexiqueUtilise) {
        inCppFile << " /*" ;
      }
      inCppFile << " lexique_var_" ;
      if (! lexiqueUtilise) {
        inCppFile << " */" ;
      }
    //--- Engendrer les arguments formels declares par l'utilisateur
      GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = current->mInfo.aListeTypeEtNomsArguments.firstObject () ;
      while (currentArgument != NULL) {
        macroValidPointer (currentArgument) ;
        inCppFile << ",\n                                " ;
        currentArgument->mType (HERE)->generateFormalParameter (inCppFile, ! currentArgument->aModeIn.boolValue ()) ;
        const bool variableUtilisee = formalArgumentIsUsedForList (current->mInfo.mInstructionsList, currentArgument->mCppName, true) ;
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
      inCppFile << ") {\n" ;
    //--- Engendrer la liste d'instructions
      C_String inutilise ;
      sint32 prototypeIndex = 0 ; // Non used here
      generateInstructionListForList (current->mInfo.mInstructionsList, inCppFile,
                                      inutilise, inTargetFileName, prototypeIndex,
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
    inHfile << "  public : virtual void methode_" << current->mKey << " (C_Lexique &" ;
  //--- Engendrer les arguments formels declares par l'utilisateur
    GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = current->mInfo.aListeTypeEtNomsArguments.firstObject () ;
    while (currentArgument != NULL) {
      macroValidPointer (currentArgument) ;
      inHfile << ",\n                                " ;
      currentArgument->mType (HERE)->generateFormalParameter (inHfile, ! currentArgument->aModeIn.boolValue ()) ;
      currentArgument = currentArgument->nextObject () ;
    }
  //--- Terminer la declaration
    if (current->champEstAbstraite) {
      inHfile << ") = 0 ;\n" ;
    }else{
      inHfile << ") ;\n" ;
    }
    current = current->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseAbstraiteAimplementer::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << aNomClasse << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseAbstraiteAimplementer::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) const {
//--- Generate class forward declaration
  inHfile << "class cPtr_" << aNomClasse << " ;\n\n" ;

//------------- declarer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inHfile.writeCTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

  inHfile << "class GGS_" << aNomClasse << " {\n"

//--- Engendrer la declaration de l'attribut 'mPointer'
             "  protected : cPtr_" << aNomClasse << " * mPointer ;\n"

//--- Engendrer la declaration du constructeur par defaut
             "  public : GGS_" << aNomClasse << " (void) ;\n"

//--- Engendrer la declaration du constructeur de recopie
             "  public : GGS_" << aNomClasse
          << " (const GGS_" << aNomClasse << " &) ;\n"

//--- Engendrer la declaration du destructeur
           "  public : virtual ~GGS_" << aNomClasse << " (void) ;\n"

//--- Engendrer la declaration de la redefinition de l'operateur =
             "  public : void operator = (const GGS_" << aNomClasse << " &) ;\n"

//--- Engendrer la declaration de la methode 'isBuilt'
            "  public : inline bool isBuilt (void) const { return mPointer != NULL ; }\n"

//--- Engendrer la declaration et l'implementation de la methode 'isEqualTo'
             "  public : inline bool isEqualTo (const GGS_" << aNomClasse
          << " & operand_) const {\n"
             "    return mPointer == operand_.mPointer ;\n"
             "  }\n"

//--- Generate declaration and assignment from pointer
             "  public : void operator = (cPtr_" << aNomClasse << " * inSource) ;\n"
             "  public : GGS_" << aNomClasse
          << " (cPtr_" << aNomClasse << " * inSource) ;\n"

//--- Engendrer la declaration de la methode 'getPtr'
              "  public : inline cPtr_" << aNomClasse << " * getPtr (void) const {\n"
              "    return mPointer ;\n"
              "  }\n"

//--- Engendrer la declaration de la methode 'drop_operation'
              "  public : void drop_operation (void) ;\n"

//--- Generate 'description' reader declaration
              "  public : GGS_string reader_description (void) const ;\n"

//--- Engendrer la declaration de la surcharge de l'operateur ()
              "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
              "    public : cPtr_" << aNomClasse << " * operator () (LOCATION_ARGS) const ;\n"
              "  #else\n"
              "    public : inline cPtr_" << aNomClasse << " * operator () (LOCATION_ARGS) const { return mPointer ; }\n"
              "  #endif\n" ;

//--- Generate 'message' reader prototypes              
  GGS_typeClassMessagesMap::element_type * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inHfile << "  public : GGS_string reader_" << messageCourant->mKey << " (void) const ;\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- Engendrer la fin de la declaration de la classe
  inHfile << "} ;\n\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseAbstraiteAimplementer::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & inLexique) const {
  C_String generatedZone2 ;
  generatedZone2.writeCTitleComment (C_String ("abstract class 'cPtr_") + aNomClasse + "'") ;

//--- Generate #indef ... # define directives
  generatedZone2 << "#ifndef " << aNomClasse << "_DEFINED\n"
                 << "#define " << aNomClasse << "_DEFINED\n\n" ;

//--- Classe mere (dernier insere dans la table des ancetres) : NULL si pas de classe mere
  GGS_typeSuperClassesMap::element_type * superClassName = mAncestorClassesMap.lastObject () ;

//--- Engendrer l'en tete de la declaration de la classe abstraite
  generatedZone2.writeCHyphenLineComment () ;
  generatedZone2 << "class cPtr_" << aNomClasse ;
  if (superClassName == NULL) {
    generatedZone2 << " : public C_GGS_Object {\n" ;
  }else{
    macroValidPointer (superClassName) ;
    generatedZone2 << " : public cPtr_" << superClassName->mKey << " {\n"
                      "  private : typedef cPtr_" << superClassName->mKey << " inherited ;\n" ;
  }

  C_String generatedZone3 ; generatedZone3.setAllocationExtra (20000) ;
//--- Generate constructor
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  generatedZone3 << "  public : cPtr_" << aNomClasse << " (" ;
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
    generatedZone3 << " COMMA_LOCATION_ARGS" ;
  }
  generatedZone3 << ") ;\n" ;
  
//--- Engendrer la declaration des attributs
  current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generatePublicDeclaration (generatedZone3, current->aNomAttribut) ;
    current = current->nextObject () ;
  }

//--- declaration des attributs externes
  generateExternAttributesDeclaration (aListeExternesCourants, generatedZone3) ;
    
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
  generatedZone3 << "  public : virtual void appendForDescription (C_String & ioString) const = 0 ;\n" ;
//--- End of Class Declaration
  generatedZone3 << "} ;\n\n" ;
  generatedZone3.writeCHyphenLineComment () ;
  generatedZone3 << "#endif\n\n" ; 
 
//--- Generate file
  inLexique.generateFile ("//",
                          C_String ("include_") + aNomClasse + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;

  inHfile.writeCHyphenLineComment () ;
  inHfile << "\n#include \"include_" << aNomClasse << ".h\"\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeDefClasseAbstraiteAimplementer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseAbstraiteAimplementer
::generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseAbstraiteAimplementer
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & inTargetFileName,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool inGenerateDebug) const {
  inCppFile.writeCTitleComment (C_String ("abstract class 'cPtr_") + aNomClasse + "'") ;

//--- Super class (last inserted in ancestor map) : NULL if no super class
  GGS_typeSuperClassesMap::element_type * superClassName = mAncestorClassesMap.lastObject () ;

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
    inCppFile << " COMMA_LOCATION_ARGS" ;    
  }else{
    inCppFile << "LOCATION_ARGS" ;
  }
  inCppFile << ")" ;
  const sint32 nombreArgumentsHerites = aListeTousAttributsNonExternes.count () - aListeAttributsCourants.count () ;
  current = aListeTousAttributsNonExternes.firstObject () ;
//--- Call super class constructor
  inCppFile << "\n:" ;
  if (superClassName == NULL) {
    inCppFile << "C_GGS_Object" ;
  }else{
    macroValidPointer (superClassName) ;
    inCppFile << "cPtr_" << superClassName->mKey ;
  }
  inCppFile << " (" ;
  variableIndex = 0 ;
  for (sint32 i=0 ; i<nombreArgumentsHerites ; i++)  {
    inCppFile << "argument_" << variableIndex ;
    inCppFile << ", " ;
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
  inCppFile << " {\n}\n\n" ;

//--- Pour chaque methode non abstraite, engendrer son implementation
  generateClassMethodsImplementation (mMethodsMap, inCppFile, aNomClasse, inTargetFileName,
                                      inGenerateDebug) ;

//--- Pour chaque message abstrait, engendrer la methode statique correspondante
  GGS_typeClassMessagesMap::element_type * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inCppFile.writeCHyphenLineComment () ;
    inCppFile << "const char * cPtr_" << aNomClasse
              << "\n::static_string_message_" << messageCourant->mKey
              << " (void) {\n"
                 "  return " ;
    inCppFile.writeCstringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "}\n\n" ;
    inCppFile.writeCHyphenLineComment () ;
    inCppFile << "const char * cPtr_" << aNomClasse << "::\n"
                 "message_" << messageCourant->mKey << " (void) const {\n"
                 "  return " ;
    inCppFile.writeCstringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "} ;\n\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//------------- Implementer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inCppFile.writeCTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

//--- Implementer la declaration du constructeur par defaut
  inCppFile << "GGS_" << aNomClasse << "::\n"
               "GGS_" << aNomClasse << " (void) {\n"
               "  mPointer = (cPtr_" << aNomClasse << " *) NULL ;\n"
               "}\n\n" ;

//--- Implementer la declaration du constructeur de recopie
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "GGS_" << aNomClasse
           << "::\nGGS_" << aNomClasse << " (const "
              "GGS_" << aNomClasse << " & inOperand) {\n"
              "  mPointer = (cPtr_" << aNomClasse << " *) NULL ;\n"
              "  macroTransfertPointer (mPointer, inOperand.mPointer) ;\n"
              "}\n\n" ;

//--- Implementer la declaration du destructeur
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "GGS_" << aNomClasse
            << "::\n~GGS_" << aNomClasse << " (void) {\n"
               "  macroDetachPointer (mPointer, cPtr_" << aNomClasse << ") ;\n"
               "}\n\n" ;

//--- Implementer la declaration de la redefinition de l'operateur =
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomClasse << "::\n"
           << "operator = (const GGS_" << aNomClasse << " & inOperand) {\n"
           << "  macroTransfertPointer (mPointer, inOperand.mPointer) ;\n"
           << "}\n\n" ;

//--- Generate construction and assignment from pointer
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomClasse
            << "::\noperator = (cPtr_" << aNomClasse << " * inSource) {\n"
               "  macroTransfertPointer (mPointer, inSource) ;\n"
               "}\n\n" ;

  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "GGS_" << aNomClasse
            << "::\nGGS_" << aNomClasse << " ("
               "cPtr_" << aNomClasse << " * inSource) {\n"
               "  mPointer = (cPtr_" << aNomClasse << " *) NULL ;\n"
               "  macroTransfertPointer (mPointer, inSource) ;\n"
               "}\n\n" ;

//--- Engendrer la deeclaration de la surcharge de l'opeerateur ()
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
               "  cPtr_" << aNomClasse << " * GGS_" << aNomClasse
            << "\n::operator () (LOCATION_ARGS) const {\n"
               "    macroValidPointerThere (mPointer) ;\n"
               "    return mPointer ;\n"
               "  }\n"
               "#endif\n\n" ;

//--- Generate declaration of message readers
  messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inCppFile.writeCHyphenLineComment () ;
    inCppFile << "GGS_string GGS_" << aNomClasse << "::reader_" << messageCourant->mKey << " (void) const {\n"
                 "  return GGS_string (mPointer != NULL, C_String ((mPointer == NULL) ? \"\" : mPointer->message_" << messageCourant->mKey << " ())) ;\n"
                 "}\n\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- Engendrer la declaration de la methode 'drop_operation'
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomClasse
            << "\n::drop_operation (void) {\n"
               "  macroDetachPointer (mPointer, cPtr_" << aNomClasse << ") ;\n"
               "}\n\n" ; 

//--- Generate 'description' reader implementation
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << aNomClasse
            << "\n::reader_description (void) const {\n"
               "  C_String s ;\n"
               "  s << \"<class @" << aNomClasse << "\" ;\n"
               "  if (isBuilt ()) {\n"
               "    mPointer->appendForDescription (s) ;\n"
               "  }else{\n"
               "    s << \" not built\" ;\n"
               "  }\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ; 

}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseNonAbstraiteAimplementer::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << aNomClasse << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseNonAbstraiteAimplementer::
generateHdeclarations (AC_OutputStream & /* inHfile */,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseNonAbstraiteAimplementer::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                        const C_String & /* inLexiqueClassName */,
                        C_Lexique & inLexique) const {
  inHfile.writeCTitleComment (C_String ("class '") + aNomClasse + "'") ;

  C_String generatedZone2 ;
  generatedZone2.writeCTitleComment (C_String ("class 'cPtr_") + aNomClasse + "'") ;

//--- Generate #indef ... # define directives
  generatedZone2 << "#ifndef " << aNomClasse << "_DEFINED\n"
                 << "#define " << aNomClasse << "_DEFINED\n\n" ;

//--- Classe mere (dernier insere dans la table des ancetres)
  GGS_typeSuperClassesMap::element_type * classeAncetre = mAncestorClassesMap.lastObject () ;
  macroValidPointer (classeAncetre) ;

//--- En tete de la classe
  generatedZone2 << "class cPtr_" << aNomClasse << " : public "
                    "cPtr_" << classeAncetre->mKey << " {\n"
                    "  private : typedef cPtr_" << classeAncetre->mKey << " inherited ;\n" ;

//--- Engendrer la declaration du constructeur (uniquement si il y a des attributs)
  C_String generatedZone3 ;
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  generatedZone3 << "  public : cPtr_" << aNomClasse << " (" ;
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
    generatedZone3 << "LOCATION_ARGS) ;\n" ;
  }else{
    generatedZone3 << " COMMA_LOCATION_ARGS) ;\n" ;
  }
  
//--- Engendrer la declaration des attributs
  current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generatePublicDeclaration (generatedZone3, current->aNomAttribut) ;
    current = current->nextObject () ;
  }

//--- declaration des attributs externes
  generateExternAttributesDeclaration (aListeExternesCourants, generatedZone3) ;
  
//--- Pour chaque methode, engendrer sa declaration
  generateClassMethodsDeclaration (mMethodsMap, generatedZone3) ;

//--- Pour chaque message, engendrer les declarations de methodes virtuelles correspondantes
  GGS_typeClassMessagesMap::element_type * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    generatedZone3 << "  public : virtual const char * message_" << messageCourant->mKey << " (void) const ;\n" ;
    generatedZone3 << "  public : static const char * static_string_message_" << messageCourant->mKey << " (void) ;\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- Method for 'description' reader
  generatedZone3 << "  public : virtual void appendForDescription (C_String & ioString) const ;\n" ;
//--- End of Class Declaration
  generatedZone3 << "} ;\n\n" ;
  generatedZone3.writeCHyphenLineComment () ;  
  generatedZone3 << "#endif\n\n" ; 

  inLexique.generateFile ("//",
                          C_String ("include_") + aNomClasse + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;

//------------- declarer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  generatedZone3.writeCHyphenLineComment () ;  
  inHfile << "\n#include \"include_" << aNomClasse << ".h\"\n\n" ;
  inHfile.writeCTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

  inHfile << "class GGS_" << aNomClasse << " {\n" ;
//--- Generate 'constructor_new' method declaration
  inHfile << "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"  
             "    public : static cPtr_" << aNomClasse
          << " * constructor_new (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  sint32 variableIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (variableIndex > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << variableIndex ;
    current = current->nextObject () ;
    variableIndex ++ ;
  }
  if (variableIndex > 0) {
    inHfile << " COMMA_LOCATION_ARGS" ;
  }else{
    inHfile << "LOCATION_ARGS" ;
  }
  inHfile << ") ;\n"
             "  #else\n"
             "    public : inline static cPtr_" << aNomClasse
          << " * constructor_new (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  variableIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (variableIndex > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << variableIndex ;
    current = current->nextObject () ;
    variableIndex ++ ;
  }
  if (variableIndex > 0) {
    inHfile << " COMMA_LOCATION_ARGS" ;
  }else{
    inHfile << "LOCATION_ARGS" ;
  }
  inHfile << ") {\n"
             "      return new cPtr_" << aNomClasse << "(" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  variableIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (variableIndex > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "argument_" << variableIndex ;
    current = current->nextObject () ;
    variableIndex ++ ;
  }
  if (variableIndex > 0) {
    inHfile << " COMMA_THERE" ;
  }else{
    inHfile << "THERE" ;
  }
  inHfile << ") ;\n"
             "    }\n"
             "  #endif\n"
             "} ;\n\n" ; //--- End of class declaration

}

//---------------------------------------------------------------------------*

bool cPtr_typeDefClasseNonAbstraiteAimplementer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseNonAbstraiteAimplementer
::generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseNonAbstraiteAimplementer
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & inTargetFileName,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool inGenerateDebug) const {
  inCppFile.writeCTitleComment (C_String ("class '") + aNomClasse + "'") ;

//--- Classe mere (dernier insere dans la table des ancetres) : NULL si pas de classe mere
  GGS_typeSuperClassesMap::element_type * superClassName = mAncestorClassesMap.lastObject () ;

//--- Engendrer le constructeur de la classe (uniquement si il y a des attributs)
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  inCppFile << "cPtr_" << aNomClasse << "::cPtr_" << aNomClasse << " (" ;
  sint32 variableIndex = 0 ;
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
  if (variableIndex == 0) {
    inCppFile << "LOCATION_ARGS)" ;
  }else{
    inCppFile << " COMMA_LOCATION_ARGS)" ;
  }
  variableIndex = 0 ;
  const sint32 nombreArgumentsHerites = aListeTousAttributsNonExternes.count () - aListeAttributsCourants.count () ;
  current = aListeTousAttributsNonExternes.firstObject () ;
//--- Appel du constructeur de la classe mere, si il y en a une
  macroValidPointer (superClassName) ;
  inCppFile << "\n:"
               "cPtr_" << superClassName->mKey << " (" ;
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
  if (variableIndex > 0) {
    inCppFile << " COMMA_THERE)" ;
  }else{
    inCppFile << "THERE)" ;
  }
  while (current != NULL) {
    inCppFile << ",\n" ;
    macroValidPointer (current) ;
    inCppFile << current->aNomAttribut << " (argument_" << variableIndex << ")" ;
    variableIndex ++ ;
    current = current->nextObject () ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Pour chaque methode non abstraite, engendrer son implementation
  generateClassMethodsImplementation (mMethodsMap, inCppFile, aNomClasse, inTargetFileName,
                                      inGenerateDebug) ;

//--- Pour chaque message, engendrer l'implementation des methodes correspondantes
  GGS_typeClassMessagesMap::element_type * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inCppFile << "\n"
                 "const char * cPtr_"
              << aNomClasse
              << "::message_"
              << messageCourant->mKey
              << " (void) const {\n"
                 "  return " ;
    inCppFile.writeCstringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "}\n" ;


    inCppFile << "\nconst char * cPtr_"
              << aNomClasse
              << "::static_string_message_"
              << messageCourant->mKey
              << " (void) {\n"
                 "  return " ;
    inCppFile.writeCstringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "}\n\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- Method for 'description' reader
  inCppFile.writeCHyphenLineComment () ;
  inCppFile << "void cPtr_" << aNomClasse << "::appendForDescription (C_String & ioString) const {\n"
               "  ioString << \"->@" << aNomClasse << ":\" ;\n" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << current->aNomAttribut << ".reader_description () ;\n" ;
    current = current->nextObject () ;
  }
  inCppFile << "}\n\n" ;

//------------- Implementer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inCppFile.writeCTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

  inCppFile << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"  
               "  cPtr_" << aNomClasse
            << " * GGS_" << aNomClasse
            << "::\n    constructor_new (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  variableIndex = 0 ;
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
    inCppFile << " COMMA_LOCATION_ARGS" ;
  }else{
    inCppFile << "LOCATION_ARGS" ;
  }
  inCppFile << ") {\n"
            << "    cPtr_" << aNomClasse
            << " * ptr_ = (cPtr_" << aNomClasse << " *) NULL ;\n"
               "    macroMyNew (ptr_, cPtr_" << aNomClasse << " (" ;
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
               "    return ptr_ ;\n"
               "  }\n"
               "#endif\n\n" ;
}

//---------------------------------------------------------------------------*
