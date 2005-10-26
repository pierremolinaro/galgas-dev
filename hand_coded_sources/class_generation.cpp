//---------------------------------------------------------------------------*
//                                                                           *
//  Generate GALGAS class declaration and implementation                     *
//                                                                           *
//  Copyright (C) 1999-2004 Pierre Molinaro.                                 *
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
      inCppFile.writeHyphenLineComment () ;
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
        currentArgument->mType ()->generateFormalParameter (inCppFile, ! currentArgument->aModeIn.boolValue ()) ;
        const bool variableUtilisee = formalArgumentIsUsedForList (current->mInfo.mInstructionsList, currentArgument->mCppName, true) ;
        if (! variableUtilisee) {
          inCppFile << "/* " ;
        }
        currentArgument->mCppName ()->generateCplusPlusName (inCppFile) ;
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
      currentArgument->mType ()->generateFormalParameter (inHfile, ! currentArgument->aModeIn.boolValue ()) ;
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
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
//--- Generate class forward declaration
  inHfile << "class cPtr_" << aNomClasse << " ;\n\n" ;

//------------- declarer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inHfile.writeTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

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
            "  public : bool isBuilt (void) const ;\n"

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

//--- Engendrer la declaration de la surcharge de l'operateur ()
              "  public : cPtr_" << aNomClasse << " * operator () (void) const ;\n" ;

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
                         C_Lexique & inLexique) {
  C_String generatedZone2 ;
  generatedZone2.writeTitleComment (C_String ("abstract class 'cPtr_") + aNomClasse + "'") ;

//--- Generate #indef ... # define directives
  generatedZone2 << "#ifndef " << aNomClasse << "_DEFINED\n"
                 << "#define " << aNomClasse << "_DEFINED\n\n" ;

//--- Engendrer l'inclusion ou la macro
  if (mGenerateIncludeHeader.boolValue ()) {
    generatedZone2 << "#include \"" << aNomClasse << ".h\"\n" ;
  }else{
    generatedZone2 << "#define macro_" << aNomClasse << "\n"
               "#define macroInheritFrom_" << aNomClasse << "\n" ;
  }
  generatedZone2 << '\n' ;

//--- Classe mre (dernier insere dans la table des anctres) : NULL si pas de classe mre
  GGS_typeSuperClassesMap::element_type * mereDirecte = mAncestorClassesMap.lastObject () ;

//--- Engendrer l'en tte de la declaration de la classe abstraite
  generatedZone2 << "class cPtr_" << aNomClasse ;
  if (mereDirecte == NULL) {
    generatedZone2 << " : public C_GGS_Object {\n" ;
  }else{
    macroValidPointer (mereDirecte) ;
    generatedZone2 << " : public cPtr_" << mereDirecte->mKey << " {\n"
                   << "  private : typedef cPtr_" << mereDirecte->mKey << " inherited ;\n" ;
  }


  C_String generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
//--- Engendrer la macro
  generatedZone3 << "  macro_" << aNomClasse << '\n' ;

//--- Engendrer la declaration du constructeur (uniquement si il y a des attributs)
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  if (current != NULL) {
    generatedZone3 << "  public : cPtr_" << aNomClasse << " (" ;
    bool premier = true ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (premier) {
        premier = false ;
       }else{
        generatedZone3 << ",\n                                " ;
      }
      generatedZone3 << "const " ;
      current->mAttributType()->generateFormalParameter (generatedZone3, true) ;
      current = current->nextObject () ;
    }
    generatedZone3 << ") ;\n" ;
  }
  
//--- Engendrer la declaration des attributs
  current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType()->generatePublicDeclaration (generatedZone3, current->aNomAttribut) ;
    current = current->nextObject () ;
  }

//--- declaration des attributs externes
  generateExternAttributesDeclaration (aListeExternesCourants, generatedZone3) ;
    
//--- Engendrer la declaration de la methode 'isBuilt'
  generatedZone3 << "  public : virtual bool isBuilt (void) const = 0 ;\n" ;

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

//--- Fin de la declaration de la classe
  generatedZone3 << "} ;\n\n" ;

  
  generatedZone3 << "#endif\n\n" ; 
 
//--- Generate file
  inHfile << "#include \"include_" << aNomClasse << ".h\"\n\n" ;
  inLexique.generateFile (C_String ("include_") + aNomClasse + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
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
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseAbstraiteAimplementer
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & inTargetFileName,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool inGenerateDebug) {
  inCppFile.writeTitleComment (C_String ("abstract class 'cPtr_") + aNomClasse + "'") ;

//--- Classe mre (dernier insere dans la table des anctres) : NULL si pas de classe mre
  GGS_typeSuperClassesMap::element_type * mereDirecte = mAncestorClassesMap.lastObject () ;

//--- Engendrer le constructeur de la classe (uniquement si il y a des attributs)
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  if (current != NULL) {
    inCppFile << "cPtr_" << aNomClasse << "::\n"
                 "cPtr_" << aNomClasse << " (" ;
    sint16 numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (numeroVariable > 0) {
        inCppFile << ",\n                                " ;
      }
      inCppFile << "const " ;
      current->mAttributType()->generateFormalParameter (inCppFile, true) ;
      inCppFile << "argument_" << numeroVariable ;
      current = current->nextObject () ;
      numeroVariable ++ ;
    }
    numeroVariable = 0 ;
    const sint32 nombreArgumentsHerites = aListeTousAttributsNonExternes.count () - aListeAttributsCourants.count () ;
    current = aListeTousAttributsNonExternes.firstObject () ;
    inCppFile << ")" ;
    bool engendrerVirgule = false ;
  //--- Appel du constructeur de la classe mre, si il y en a une
    if (nombreArgumentsHerites > 0) {
      macroValidPointer (mereDirecte) ;
      inCppFile << "\n:"
                   "cPtr_" << mereDirecte->mKey << " (" ;
      for (sint32 i=0 ; i<nombreArgumentsHerites ; i++)  {
        if (i != 0) {
          inCppFile << ", " ;
        }
        inCppFile << "argument_" << numeroVariable ;
        macroValidPointer (current) ;
        current = current->nextObject () ;
        numeroVariable ++ ;
      }
      inCppFile << ')' ;
      engendrerVirgule = true ;
    }
    while (current != NULL) {
      if (engendrerVirgule) {
        inCppFile << ",\n" ;
      }else{
        inCppFile << "\n:" ;
        engendrerVirgule = true ;
      }
      macroValidPointer (current) ;
      inCppFile << current->aNomAttribut << " (argument_" << numeroVariable << ")" ;
      numeroVariable ++ ;
      current = current->nextObject () ;
    }
    inCppFile << " {\n}\n\n" ;
  }

//--- Pour chaque methode non abstraite, engendrer son implementation
  generateClassMethodsImplementation (mMethodsMap, inCppFile, aNomClasse, inTargetFileName,
                                      inGenerateDebug) ;

//--- Pour chaque message abstrait, engendrer la methode statique correspondante
  GGS_typeClassMessagesMap::element_type * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "const char * cPtr_" << aNomClasse
              << "\n::static_string_message_" << messageCourant->mKey
              << " (void) {\n"
                 "  return " ;
    inCppFile.writeCstringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "}\n\n" ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "const char * cPtr_" << aNomClasse << "::\n"
                 "message_" << messageCourant->mKey << " (void) const {\n"
                 "  return " ;
    inCppFile.writeCstringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "} ;\n\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//------------- Implementer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inCppFile.writeTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

//--- Implementer la declaration du constructeur par defaut
  inCppFile << "GGS_" << aNomClasse << "::\n"
               "GGS_" << aNomClasse << " (void) {\n"
               "  mPointer = (cPtr_" << aNomClasse << " *) NULL ;\n"
               "}\n\n" ;

//--- Implementer la declaration du constructeur de recopie
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_" << aNomClasse
           << "::\nGGS_" << aNomClasse << " (const "
              "GGS_" << aNomClasse << " & inOperand) {\n"
              "  mPointer = (cPtr_" << aNomClasse << " *) NULL ;\n"
              "  macroAttachPointer (mPointer, inOperand.mPointer) ;\n"
              "}\n\n" ;

//--- Implementer la declaration du destructeur
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_" << aNomClasse
            << "::\n~GGS_" << aNomClasse << " (void) {\n"
               "  macroDetachPointer (mPointer, cPtr_" << aNomClasse << ") ;\n"
               "}\n\n" ;

//--- Implementer la declaration de la redefinition de l'operateur =
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomClasse << "::\n"
           << "operator = (const GGS_" << aNomClasse << " & inOperand) {\n"
           << "  macroAttachPointer (mPointer, inOperand.mPointer) ;\n"
           << "}\n\n" ;

//--- Engendrer l'implementation de la methode 'isBuilt'
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "bool GGS_" << aNomClasse
            << "::isBuilt (void) const {\n"
               "  bool result = false ;\n"
               "  if (mPointer != NULL) {\n"
               "    macroValidPointer (mPointer) ;\n"
               "    result = mPointer->isBuilt () ;\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;

//--- Generate construction and assignment from pointer
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomClasse
            << "::\noperator = (cPtr_" << aNomClasse << " * inSource) {\n"
               "  macroAttachPointer (mPointer, inSource) ;\n"
               "}\n\n" ;

  inCppFile.writeHyphenLineComment () ;
  inCppFile << "GGS_" << aNomClasse
            << "::\nGGS_" << aNomClasse << " ("
               "cPtr_" << aNomClasse << " * inSource) {\n"
               "  mPointer = (cPtr_" << aNomClasse << " *) NULL ;\n"
               "  macroAttachPointer (mPointer, inSource) ;\n"
               "}\n\n" ;

//--- Engendrer la deeclaration de la surcharge de l'opeerateur ()
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "cPtr_" << aNomClasse << " * "
               "GGS_" << aNomClasse
            << "\n::operator () (void) const {\n"
               "  macroValidPointer (mPointer) ;\n"
// §               "  return (cPtr_" << aNomClasse << " *) mPointer ;\n"
               "  return mPointer ;\n"
               "}\n\n" ;

//--- Generate declaration of message readers
  messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inCppFile.writeHyphenLineComment () ;
    inCppFile << "GGS_string GGS_" << aNomClasse << "::reader_" << messageCourant->mKey << " (void) const {\n"
                 "  return GGS_string (mPointer != NULL, C_String ((mPointer == NULL) ? \"\" : mPointer->message_" << messageCourant->mKey << " ())) ;\n"
                 "}\n\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- Engendrer la declaration de la methode 'drop_operation'
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "void GGS_" << aNomClasse
            << "\n::drop_operation (void) {\n"
               "  macroDetachPointer (mPointer, cPtr_" << aNomClasse << ") ;\n"
               "}\n\n" ; 
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseNonAbstraiteAimplementer::
generateHdeclarations (AC_OutputStream & /* inHfile */,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseNonAbstraiteAimplementer::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                        const C_String & /* inLexiqueClassName */,
                        C_Lexique & /* inLexique */) {
  inHfile.writeTitleComment (C_String ("class '") + aNomClasse + "'") ;

//--- Engendrer la macro
  if (mGenerateIncludeHeader.boolValue ()) {
    inHfile << "#include \"" << aNomClasse << ".h\"\n\n" ;
  }else{
    inHfile << "#define macro_" << aNomClasse << "\n\n"
               "#define macroInheritFrom_" << aNomClasse << "\n\n" ;
  }

//--- Classe mre (dernier insere dans la table des anctres)
  GGS_typeSuperClassesMap::element_type * classeAncetre = mAncestorClassesMap.lastObject () ;
  macroValidPointer (classeAncetre) ;

//--- En tte de la classe
  inHfile << "class cPtr_" << aNomClasse << " : public "
             "cPtr_" << classeAncetre->mKey << " {\n"
             "  private : typedef cPtr_" << classeAncetre->mKey << " inherited ;\n" ;

//--- Engendrer la directive #include "xxx.j"
  classeAncetre = mAncestorClassesMap.firstObject () ;
  while (classeAncetre != NULL) {
    macroValidPointer (classeAncetre) ;
    inHfile << "  macroInheritFrom_" << classeAncetre->mKey << '\n' ;
    classeAncetre = classeAncetre->nextObject () ;
  }
//--- Engendrer la macro
  inHfile << "  macro_" << aNomClasse << '\n' ;

//--- Engendrer la declaration du constructeur (uniquement si il y a des attributs)
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  if (current != NULL) {
    inHfile << "  public : cPtr_" << aNomClasse << " (" ;
    bool premier = true ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (premier) {
        premier = false ;
       }else{
        inHfile << ",\n                                " ;
      }
      inHfile << "const " ;
      current->mAttributType()->generateFormalParameter (inHfile, true) ;
      current = current->nextObject () ;
    }
    inHfile << ") ;\n" ;
  }
  
//--- Engendrer la declaration des attributs
  current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType()->generatePublicDeclaration (inHfile, current->aNomAttribut) ;
    current = current->nextObject () ;
  }

//--- declaration des attributs externes
  generateExternAttributesDeclaration (aListeExternesCourants, inHfile) ;
  
//--- Engendrer la declaration de la methode 'isBuilt'
  inHfile << "  public : virtual bool isBuilt (void) const ;\n\n" ;

//--- Pour chaque methode, engendrer sa declaration
  generateClassMethodsDeclaration (mMethodsMap, inHfile) ;

//--- Pour chaque message, engendrer les declarations de methodes virtuelles correspondantes
  GGS_typeClassMessagesMap::element_type * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inHfile << "  public : virtual const char * message_" << messageCourant->mKey << " (void) const ;\n" ;
    inHfile << "  public : static const char * static_string_message_" << messageCourant->mKey << " (void) ;\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- Fin de la declaration de la classe
  inHfile << "} ;\n\n" ;

//------------- declarer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inHfile.writeTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

  inHfile << "class GGS_" << aNomClasse << " {\n" ;
//--- Generate 'constructor_new' method declaration
  inHfile << "  #ifndef DO_NOT_GENERATE_MEMORY_CHECK_CODE\n"  
             "    public : static cPtr_" << aNomClasse
          << " * constructor_new (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  sint32 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current->mAttributType()->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"
             "  #else\n"
             "    public : inline static cPtr_" << aNomClasse
          << " * constructor_new (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "const " ;
    current->mAttributType()->generateFormalParameter (inHfile, true) ;
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") {\n"
             "      return new cPtr_" << aNomClasse << "(" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inHfile << ",\n                                " ;
    }
    inHfile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inHfile << ") ;\n"
             "    }\n"
             "  #endif\n"

//--- Engendrer la fin de la declaration de la classe
             "} ;\n\n" ;
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
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeDefClasseNonAbstraiteAimplementer
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & inTargetFileName,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool inGenerateDebug) {
  inCppFile.writeTitleComment (C_String ("class '") + aNomClasse + "'") ;

//--- Classe mre (dernier insere dans la table des anctres) : NULL si pas de classe mre
  GGS_typeSuperClassesMap::element_type * mereDirecte = mAncestorClassesMap.lastObject () ;

//--- Engendrer le constructeur de la classe (uniquement si il y a des attributs)
  GGS_typeListeAttributsSemantiques::element_type * current = aListeTousAttributsNonExternes.firstObject () ;
  if (current != NULL) {
    inCppFile << "cPtr_" << aNomClasse << "::cPtr_" << aNomClasse << " (" ;
    sint16 numeroVariable = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (numeroVariable > 0) {
        inCppFile << ",\n                                " ;
      }
      inCppFile << "const " ;
      current->mAttributType()->generateFormalParameter (inCppFile, true) ;
      inCppFile << "argument_" << numeroVariable ;
      current = current->nextObject () ;
      numeroVariable ++ ;
    }
    numeroVariable = 0 ;
    const sint32 nombreArgumentsHerites = aListeTousAttributsNonExternes.count () - aListeAttributsCourants.count () ;
    current = aListeTousAttributsNonExternes.firstObject () ;
    inCppFile << ")" ;
    bool engendrerVirgule = false ;
  //--- Appel du constructeur de la classe mre, si il y en a une
    if (nombreArgumentsHerites > 0) {
      macroValidPointer (mereDirecte) ;
      inCppFile << "\n:"
                   "cPtr_" << mereDirecte->mKey << " (" ;
      for (sint32 i=0 ; i<nombreArgumentsHerites ; i++)  {
        if (i != 0) {
          inCppFile << ", " ;
        }
        inCppFile << "argument_" << numeroVariable ;
        macroValidPointer (current) ;
        current = current->nextObject () ;
        numeroVariable ++ ;
      }
      inCppFile << ')' ;
      engendrerVirgule = true ;
    }
    while (current != NULL) {
      if (engendrerVirgule) {
        inCppFile << ",\n" ;
      }else{
        inCppFile << "\n:" ;
        engendrerVirgule = true ;
      }
      macroValidPointer (current) ;
      inCppFile << current->aNomAttribut << " (argument_" << numeroVariable << ")" ;
      numeroVariable ++ ;
      current = current->nextObject () ;
    }
    inCppFile << " {\n}\n\n" ;
  }
  
//--- Engendrer la declaration de la methode 'isBuilt'
  inCppFile.writeHyphenLineComment () ;
  inCppFile << "bool cPtr_" << aNomClasse << "::isBuilt (void) const {\n" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  inCppFile << "  return" ;
  if (current == NULL) {
    inCppFile << " true ;\n" ;
  }else{
    bool premier = true ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << " " ;
      if (premier) {
        premier = false ;
      }else{
        inCppFile << "&&\n       " ;
      }
      inCppFile << current->aNomAttribut << ".isBuilt ()" ;
      current = current->nextObject () ;
    }
    inCppFile << " ;\n" ;
  }
  inCppFile << "}\n\n" ;

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

//------------- Implementer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inCppFile.writeTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

  inCppFile << "#ifndef DO_NOT_GENERATE_MEMORY_CHECK_CODE\n"  
               "  cPtr_" << aNomClasse
            << " * GGS_" << aNomClasse
            << "::\n    constructor_new (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  sint32 numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "const " ;
    current->mAttributType()->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ") {\n"
            << "    cPtr_" << aNomClasse
            << " * ptr_ = (cPtr_" << aNomClasse << " *) NULL ;\n"
               "    macroMyNew (ptr_, cPtr_" << aNomClasse << " (" ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  numeroVariable = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (numeroVariable > 0) {
      inCppFile << ",\n                                " ;
    }
    inCppFile << "argument_" << numeroVariable ;
    current = current->nextObject () ;
    numeroVariable ++ ;
  }
  inCppFile << ")) ;\n"
               "    return ptr_ ;\n"
               "  }\n"
               "#endif\n\n" ;
}

//---------------------------------------------------------------------------*
