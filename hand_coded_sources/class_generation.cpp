//---------------------------------------------------------------------------*
//                                                                           *
//  Generate GALGAS class declaration and implementation                     *
//                                                                           *
//  Copyright (C) 1999, ..., 2009 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
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
  GGS_typeTableMethodesAimplementer::cElement * current = inMap.mFirstItem ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (! current->champEstAbstraite) {
      inCppFile.appendCppHyphenLineComment () ;
      inCppFile << "void cPtr_" << inClassName
                << "::\n"
                   "method_" << current->mKey << " (C_CompilerEx &" ;
    //--- L'argument lexique est-il utilise ?
      const bool lexiqueUtilise = isLexiqueFormalArgumentUsedForList (current->mInfo.mInstructionList, true) ;
      if (! lexiqueUtilise) {
        inCppFile << " /*" ;
      }
      inCppFile << " inLexique" ;
      if (! lexiqueUtilise) {
        inCppFile << " */" ;
      }
    //--- Engendrer les arguments formels declares par l'utilisateur
      GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = current->mInfo.aListeTypeEtNomsArguments.firstObject () ;
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
      inCppFile << " COMMA_UNUSED_LOCATION_ARGS) const {\n" ;
    //--- Engendrer la liste d'instructions
      PMSInt32 prototypeIndex = 0 ; // Non used here
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
  GGS_typeTableMethodesAimplementer::cElement * current = inMap.mFirstItem ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "//--- Method '" << current->mKey << "'\n"
               "  public : virtual void method_" << current->mKey << " (C_CompilerEx &" ;
  //--- Engendrer les arguments formels declares par l'utilisateur
    GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = current->mInfo.aListeTypeEtNomsArguments.firstObject () ;
    while (currentArgument != NULL) {
      macroValidPointer (currentArgument) ;
      inHfile << ",\n                                " ;
      currentArgument->mType (HERE)->generateFormalParameter (inHfile, ! currentArgument->mModeIn.boolValue ()) ;
      currentArgument = currentArgument->nextObject () ;
    }
  //--- Terminer la declaration
    inHfile << "\n                                " ;
    if (current->champEstAbstraite) {
      inHfile << "COMMA_LOCATION_ARGS) const = 0 ;\n" ;
    }else{
      inHfile << "COMMA_LOCATION_ARGS) const ;\n" ;
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
generateHdeclarations (AC_OutputStream & inHfile) const {
//------------- declarer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  C_String title = "GALGAS class 'GGS_" ;
  title.appendString (aNomClasse) ;
  title.appendCString ("'") ;
  inHfile.appendCppTitleComment (title) ;

//--- Super class name (empty if no super class)
  const C_String superClassName = (mAncestorClassesMap.firstObject () == NULL)
    ? C_String ()
    : mAncestorClassesMap.lastObject ()->mKey.string () ;

  inHfile << "extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << aNomClasse << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ;

  inHfile << "class GGS_" << aNomClasse ;
  if (superClassName.length () > 0) {
    inHfile << " : public GGS_" << superClassName ;
  }else{
    inHfile << " : public AC_GGS_class" ;
  }
  inHfile << " {\n" ;

//--- Default constructor
  inHfile << "//--- Default constructor\n"
             "  public : inline GGS_" << aNomClasse << " (void) :\n  " ;
  if (superClassName.length () > 0) {
    inHfile << "GGS_" << superClassName ;
  }else{
    inHfile << "AC_GGS_class" ;
  }
  inHfile << " () {}\n\n" ;
//--- Pointer assignment constructor
  inHfile << "//--- Pointer assignment constructor\n"
             "  public : GGS_" << aNomClasse << " (const cPtr__AC_galgas_class * inPointer) ;\n\n" ;

  inHfile << "//--- Object assignment constructor\n"
             "  public : GGS_" << aNomClasse << " (cPtr__AC_galgas_class & inObject) ;\n\n" ;

//--- castFrom class method
  inHfile << "//--- castFrom class method (implements cast expression)\n"
             "  public : static GGS_" << aNomClasse << "\n"
             "  castFrom (C_CompilerEx & inLexique,\n"
             "             cPtr__AC_galgas_class * inPointer,\n"
             "             const bool inUseKindOfClass,\n"
             "             const GGS_location & inErrorLocation\n"
             "             COMMA_LOCATION_ARGS) ;\n\n" ;


//--- 'new' constructor
  if (! mIsAbstract.boolValue ()) {
    inHfile << "//--- 'new' constructor\n"
               "  public : static GGS_" << aNomClasse
            << " constructor_new (C_CompilerEx & inLexique" ;
    PMSInt32 variableIndex = 0 ;
    GGS_typeListeAttributsSemantiques::cElement * current = aListeTousAttributsNonExternes.firstObject () ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inHfile << ",\n                                "
                 "const " ;
      current->mAttributType(HERE)->generateFormalParameter (inHfile, true) ;
      inHfile << "argument_" << cStringWithSigned (variableIndex) ;
      current = current->nextObject () ;
      variableIndex ++ ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) ;\n\n" ;
  }

//--- Engendrer la declaration de la methode 'getPtr'
  inHfile << "//--- getPtr\n"
             "  public : inline cPtr_" << aNomClasse << " * getPtr (void) const {\n"
             "    return (cPtr_" << aNomClasse << " *) mPointer ;\n"
             "  }\n\n" ;

//--- Generate 'description' reader declaration
  inHfile << "//--- 'description' reader\n"
             "  public : virtual const char * actualTypeName (void) const ;\n\n"

//--- Implicitly declared Readers
             "//--- Readers\n" ;
  GGS_typeListeAttributsSemantiques::cElement * current = mGetterAttributeReaderToImplementList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "  public : " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile << " reader_" << current->mAttributeName
            << " (C_CompilerEx & inLexique COMMA_LOCATION_ARGS) const ;\n" ;
    current = current->nextObject () ;
  }
  inHfile << "\n" ;

//--- Modifiers ('set...')
  inHfile << "//--- Modifiers\n" ;
  current = mSetterAttributeModifierToImplementList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "  public : void" ;
    inHfile << " modifier_set" << current->mAttributeName.stringByCapitalizingFirstCharacter ()
            << " (C_CompilerEx & inLexique, const " ;
    current->mAttributType(HERE)->generateCppClassName (inHfile) ;
    inHfile  << " & inValue COMMA_LOCATION_ARGS) ;\n" ;
    current = current->nextObject () ;
  }
  inHfile << "\n" ;

//--- Generate 'message' reader prototypes              
  GGS_typeClassMessagesMap::cElement * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inHfile << "//--- '" << messageCourant->mKey << "' message\n"
               "  public : GGS_string reader_" << messageCourant->mKey << " (C_CompilerEx & inLexique COMMA_LOCATION_ARGS) const ;\n\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- Generate 'lazy' reader prototypes              
  GGS_L_lazyAttributeList::cElement * currentLazyDeclaration = mLazyAttributeList.firstObject () ;
  while (currentLazyDeclaration != NULL) {
    macroValidPointer (currentLazyDeclaration) ;
    GGS_typeListeAttributsSemantiques::cElement * currentOnceAttribute = currentLazyDeclaration->mComputedAttributeTypeAndNameList.firstObject () ;
    while (currentOnceAttribute != NULL) {
      macroValidPointer (currentOnceAttribute) ;
      inHfile << "//--- 'lazy' attribute reader\n"
                "  public : " ;
      currentOnceAttribute->mAttributType (HERE)->generateCppClassName (inHfile) ;
      inHfile << " reader_" <<  currentOnceAttribute->mAttributeName << " (C_CompilerEx & inLexique COMMA_LOCATION_ARGS) const ;\n" ;
      currentOnceAttribute = currentOnceAttribute->nextObject () ;
    }
    currentLazyDeclaration = currentLazyDeclaration->nextObject () ;
  }

//--- Engendrer la declaration de la surcharge de l'operateur ()
  inHfile << "//--- operator ()\n"
             "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
             "    public : cPtr_" << aNomClasse << " * operator () (LOCATION_ARGS) const ;\n"
             "  #else\n"
             "    public : inline cPtr_" << aNomClasse << " * operator () (LOCATION_ARGS) const {\n"
             "      return (cPtr_" << aNomClasse << " *) mPointer ;\n"
             "    }\n"
             "  #endif\n\n" ;

  if (superClassName.length () == 0) {
    inHfile << "//--- Galgas RTTI\n"
               "AC_galgasClassRunTimeInformationEX * galgasObjectRunTimeInfo (void) const ;\n\n" ;
  }

  inHfile << "//--- Introspection\n"
             "  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;\n\n"
             "  public : GGS_object reader_object (void) const ;\n\n"
             "  public : static GGS_" << aNomClasse << " castFromObject (C_CompilerEx & inLexique,\n"
             "                                           const GGS_object & inObject,\n"
             "                                           const GGS_location & inErrorLocation\n"
             "                                           COMMA_LOCATION_ARGS) ;\n\n" ;

//--- Engendrer la fin de la declaration de la classe
  inHfile << "} ;\n\n" ;
  
  inHfile.appendCppHyphenLineComment () ;
  if (superClassName.length () == 0) {
    inHfile << "extern C_galgasRootClassRunTimeInformationEX gClassInfoFor__" << aNomClasse << " ;\n\n" ;
  }else{
    inHfile << "extern C_galgasClassRunTimeInformationEX gClassInfoFor__" << aNomClasse << " ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_classToImplement::
generateHdeclarations_2 (AC_OutputStream & inHfile,
                         C_CompilerEx & inLexique) const {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.appendCppTitleComment (C_String ("abstract class 'cPtr_") + aNomClasse + "'") ;

//--- Super class name (empty if no super class)
  const C_String superClassName = (mAncestorClassesMap.firstObject () == NULL)
    ? C_String ()
    : mAncestorClassesMap.lastObject ()->mKey.string () ;

//--- Engendrer l'en tete de la declaration de la classe abstraite
  generatedZone2 << "class cPtr_" << aNomClasse ;
  if (superClassName.length () == 0) {
    generatedZone2 << " : public cPtr__AC_galgas_class {\n" ;
  }else{
    generatedZone2 << " : public cPtr_" << superClassName << " {\n"
                      "  private : typedef cPtr_" << superClassName << " inherited ;\n" ;
  }

  C_String generatedZone3 ; generatedZone3.setCapacity (20000) ;
//--- Generate constructor
  GGS_typeListeAttributsSemantiques::cElement * current = aListeTousAttributsNonExternes.firstObject () ;
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

//--- Engendrer la declaration des attributs
  generatedZone3 << "//--- Attributes\n" ;
  current = aListeAttributsCourants.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generatePublicDeclaration (generatedZone3, current->mAttributeName) ;
    current = current->nextObject () ;
  }

//--- "once" reader
  GGS_L_lazyAttributeList::cElement * currentLazyDeclaration = mLazyAttributeList.firstObject () ;
  while (currentLazyDeclaration != NULL) {
    macroValidPointer (currentLazyDeclaration) ;
    generatedZone3 << "//--- 'lazy' declaration\n"
                      "  private : mutable bool _mOnce" << cStringWithSigned (currentLazyDeclaration->mLocationMagicNumber.location ()) << "isComputed ;\n" ;
    GGS_typeListeAttributsSemantiques::cElement * currentOnceAttribute = currentLazyDeclaration->mComputedAttributeTypeAndNameList.firstObject () ;
    while (currentOnceAttribute != NULL) {
      macroValidPointer (currentOnceAttribute) ;
      generatedZone3 << "  private : mutable " ;
      currentOnceAttribute->mAttributType (HERE)->generateCppClassName (generatedZone3) ;
      generatedZone3 << " " << currentOnceAttribute->mAttributeName << " ;\n"
                        "  public : " ;
      currentOnceAttribute->mAttributType (HERE)->generateCppClassName (generatedZone3) ;
      generatedZone3 << " reader_" << currentOnceAttribute->mAttributeName << " (C_CompilerEx & inLexique COMMA_LOCATION_ARGS) const ;\n" ;
      currentOnceAttribute = currentOnceAttribute->nextObject () ;
    }
    generatedZone3 << "  private : void computeOnce" << cStringWithSigned (currentLazyDeclaration->mLocationMagicNumber.location ()) << " (C_CompilerEx & inLexique) const ;\n\n" ;
    currentLazyDeclaration = currentLazyDeclaration->nextObject () ;
  }

//--- Pour chaque methode, engendrer sa declaration
  generateClassMethodsDeclaration (mMethodsMap, generatedZone3) ;

//--- Pour chaque message abstrait, engendrer les declarations de methodes virtuelles pures correspondantes
//    et engendrer la methode statique correspondante
  GGS_typeClassMessagesMap::cElement * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    generatedZone3 << "  public : virtual const char * message_" << messageCourant->mKey << " (void) const ;\n" ;
    generatedZone3 << "  public : static const char * static_string_message_" << messageCourant->mKey << " (void) ;\n" ;
    messageCourant = messageCourant->nextObject () ;
  }
  generatedZone3 << "//--- Class message\n"
                    "  public : virtual const char * instanceMessage (void) const ;\n"
                    "  public : static const char * _static_message (void) ;\n\n" ;

//--- Method for 'description' reader
  generatedZone3 << "//--- Method for 'description' reader\n"
                    "  public : virtual void\n"
                    "  appendForDescription (C_String & ioString,\n"
                    "                        const PMSInt32 inIndentation) const ;\n" ;
  if (! mIsAbstract.boolValue ()){
    generatedZone3 << "\n"
                      "//--- Comparison\n"
                      "  public : virtual bool\n"
                      "  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;\n" ;
  }

  generatedZone3 << "\n"
                    "//--- Galgas RTTI\n"
                    "  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;\n" ;

//--- Generate 'makeClone' method
  if ((aListeTousAttributsNonExternes.firstObject () != NULL) && ! mIsAbstract.boolValue ()) {
    generatedZone3 << "\n"
                      "//--- Make clone\n"
                      "  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;\n" ;
  }
//--- End of Class Declaration
  generatedZone3 << "} ;\n\n" ;
 
//--- Generate class declaration
  const C_String separateFileName = C_String ("include_") + aNomClasse + ".h" ;
  if (mHasGeneratedInSeparateFileSetting.boolValue ()) {
    generatedZone3.appendCppHyphenLineComment () ;
    inLexique.generateFileInGALGAS_OUTPUT ("//",
                            separateFileName,
                            "\n\n", // User Zone 1
                            generatedZone2,
                            "\n\n", // User Zone 2
                            generatedZone3) ;

    inHfile.appendCppHyphenLineComment () ;
    inHfile << "#include \"include_" << aNomClasse << ".h\"\n\n" ;
  }else{
    inHfile << generatedZone2 << generatedZone3 ;
    const C_String startPath = inLexique.sourceFileName ().stringByDeletingLastPathComponent () + "/GALGAS_OUTPUT" ;
    TC_UniqueArray <C_String> directoriesToExclude ;
    const C_String fullPathName = startPath.findFileInDirectory (separateFileName, directoriesToExclude) ;
    if (fullPathName.length () > 0) { // A file has been found
      C_String message ;
      message << "the file '" << fullPathName << "' has became useless: you can delete it" ;
      inLexique.onTheFlySemanticWarning (message COMMA_HERE) ;
//      fullPathName.deleteFile () ;
    }
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_classToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_C_classToImplement::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & inEpilogueActions) const {
  if ((! mIsAbstract.boolValue ()) && (aListeTousAttributsNonExternes.count () == 0)) {
    inEpilogueActions << "  macroReleaseObject (gSingleton_" << aNomClasse << ") ;\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_C_classToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inTargetFileName*/,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_C_classToImplement::
generateCppClassImplementation (C_CompilerEx & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                  const C_String & inTargetFileName,
                                  PMSInt32 & /* ioPrototypeIndex */,
                                  const bool inGenerateDebug) const {
  inCppFile.appendCppTitleComment (C_String ("class 'cPtr_") + aNomClasse + "'") ;

//--- Super class name (empty if no super class)
  const C_String superClassName = (mAncestorClassesMap.firstObject () == NULL)
    ? C_String ()
    : mAncestorClassesMap.lastObject ()->mKey.string () ;

//--- Generate Constructor
  GGS_typeListeAttributsSemantiques::cElement * current = aListeTousAttributsNonExternes.firstObject () ;
  inCppFile << "cPtr_" << aNomClasse << "::\n"
               "cPtr_" << aNomClasse << " (" ;
  PMSInt16 variableIndex = 0 ;
  while (current != NULL) {
    macroValidPointer (current) ;
    if (variableIndex > 0) {
      inCppFile << ",\n                                " ;    
    }
    inCppFile << "const " ;
    current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
    inCppFile << "argument_" << cStringWithSigned (variableIndex) ;
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
  const PMSInt32 nombreArgumentsHerites = aListeTousAttributsNonExternes.count () - aListeAttributsCourants.count () ;
  current = aListeTousAttributsNonExternes.firstObject () ;
//--- Call super class constructor
  inCppFile << "\n:" ;
  if (superClassName.length () == 0) {
    inCppFile << "cPtr__AC_galgas_class" ;
  }else{
    inCppFile << "cPtr_" << superClassName ;
  }
  inCppFile << " (" ;
  variableIndex = 0 ;
  for (PMSInt32 i=0 ; i<nombreArgumentsHerites ; i++)  {
    if (variableIndex > 0) {
      inCppFile << ", " ;
    }
    inCppFile << "argument_" << cStringWithSigned (variableIndex) ;
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
    inCppFile << current->mAttributeName << " (argument_" << cStringWithSigned (variableIndex) << ")" ;
    variableIndex ++ ;
    current = current->nextObject () ;
  }

//--- "once" readers
  GGS_L_lazyAttributeList::cElement * currentLazyDeclaration = mLazyAttributeList.firstObject () ;
  while (currentLazyDeclaration != NULL) {
    macroValidPointer (currentLazyDeclaration) ;
    inCppFile << ",\n"
                 "_mOnce" << cStringWithSigned (currentLazyDeclaration->mLocationMagicNumber.location ()) << "isComputed (false)" ;
    GGS_typeListeAttributsSemantiques::cElement * currentOnceAttribute = currentLazyDeclaration->mComputedAttributeTypeAndNameList.firstObject () ;
    while (currentOnceAttribute != NULL) {
      macroValidPointer (currentOnceAttribute) ;
          inCppFile << ",\n"
                    << currentOnceAttribute->mAttributeName << " ()" ;
      currentOnceAttribute = currentOnceAttribute->nextObject () ;
    }
    currentLazyDeclaration = currentLazyDeclaration->nextObject () ;
  }
  inCppFile << " {\n"
               "}\n\n" ;

//--- Engendrer la declaration de la surcharge de l'operateur ()
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
               "  cPtr_" << aNomClasse << " * GGS_" << aNomClasse << "::\n"
               "  operator () (LOCATION_ARGS) const {\n"
               "    macroValidObjectThere (mPointer, cPtr_" << aNomClasse << ") ;\n"
               "    return (cPtr_" << aNomClasse << " *) mPointer ;\n"
               "  }\n"
               "#endif\n\n" ;

  if (! mIsAbstract.boolValue ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "bool cPtr_" << aNomClasse << "::\n"
                 "isEqualToObject (const cPtr__AC_galgas_class * inOperand) const {\n" ;
    current = aListeTousAttributsNonExternes.firstObject () ;
    if (current == NULL) {
      inCppFile << "  return typeid (this) == typeid (inOperand) ;\n" ;
    }else{
      inCppFile << "  bool equal = typeid (this) == typeid (inOperand) ;\n"
                   "  if (equal) {\n"
                   "    const cPtr_" << aNomClasse << " * ptr = dynamic_cast <const cPtr_" << aNomClasse << " *> (inOperand) ;\n"
                   "    macroValidPointer (ptr) ;\n"
                   "    equal = " ;
      bool first = true ;
      while (current != NULL) {
        macroValidPointer (current) ;
        if (first) {
          first = false ;
        }else{
          inCppFile << "\n         && " ;
        }
        inCppFile << current->mAttributeName << ".operator_isEqual (ptr->" << current->mAttributeName << ").boolValue ()" ;
        current = current->nextObject () ;
      }
      inCppFile << " ;\n"
                   "  }\n"
                   "  return equal ;\n" ;
    }
    inCppFile << "}\n\n" ;
  }

//--- Engender les attributs "once"
  currentLazyDeclaration = mLazyAttributeList.firstObject () ;
  while (currentLazyDeclaration != NULL) {
    macroValidPointer (currentLazyDeclaration) ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void cPtr_" << aNomClasse << "::computeOnce" << cStringWithSigned (currentLazyDeclaration->mLocationMagicNumber.location ()) << " (C_CompilerEx & " ;
  //--- L'argument lexique est-il utilise ?
    const bool lexiqueUtilise = isLexiqueFormalArgumentUsedForList (currentLazyDeclaration->mInstructionList, true) ;
    if (! lexiqueUtilise) {
      inCppFile << "/* " ;
    }
    inCppFile << "inLexique" ;
    if (! lexiqueUtilise) {
      inCppFile << " */" ;
    }
    inCppFile << ") const {\n"
                 "  _mOnce" << cStringWithSigned (currentLazyDeclaration->mLocationMagicNumber.location ()) << "isComputed = true ;\n" ;
    GGS_typeListeAttributsSemantiques::cElement * currentOnceAttribute = currentLazyDeclaration->mComputedAttributeTypeAndNameList.firstObject () ;
    while (currentOnceAttribute != NULL) {
      macroValidPointer (currentOnceAttribute) ;
      inCppFile << "  " << currentOnceAttribute->mAttributeName << ".drop () ;\n" ;
      currentOnceAttribute = currentOnceAttribute->nextObject () ;
    }
    PMSInt32 prototypeIndex = 0 ; // Non used here
    generateInstructionListForList (currentLazyDeclaration->mInstructionList, inCppFile,
                                    inTargetFileName, prototypeIndex,
                                    inGenerateDebug, true) ; 
    inCppFile << "}\n\n" ;
    currentLazyDeclaration = currentLazyDeclaration->nextObject () ;
  }
  currentLazyDeclaration = mLazyAttributeList.firstObject () ;
  while (currentLazyDeclaration != NULL) {
    macroValidPointer (currentLazyDeclaration) ;
    GGS_typeListeAttributsSemantiques::cElement * currentOnceAttribute = currentLazyDeclaration->mComputedAttributeTypeAndNameList.firstObject () ;
    while (currentOnceAttribute != NULL) {
      macroValidPointer (currentOnceAttribute) ;
      inCppFile.appendCppHyphenLineComment () ;
      currentOnceAttribute->mAttributType (HERE)->generateCppClassName (inCppFile) ;
      inCppFile << " cPtr_" << aNomClasse << "::reader_" <<  currentOnceAttribute->mAttributeName << " (C_CompilerEx & inLexique COMMA_UNUSED_LOCATION_ARGS) const {\n"
                   "  if (! _mOnce" << cStringWithSigned (currentLazyDeclaration->mLocationMagicNumber.location ()) << "isComputed) {\n"
                   "    computeOnce" << cStringWithSigned (currentLazyDeclaration->mLocationMagicNumber.location ()) << " (inLexique) ;\n"
                   "  }\n"
                   "  return " <<  currentOnceAttribute->mAttributeName << " ;\n"
                   "}\n\n" ;
      currentOnceAttribute = currentOnceAttribute->nextObject () ;
    }
    currentLazyDeclaration = currentLazyDeclaration->nextObject () ;
  }

//--- Pour chaque methode non abstraite, engendrer son implementation
  generateClassMethodsImplementation (mMethodsMap, inCppFile, aNomClasse, inTargetFileName,
                                      inGenerateDebug) ;

//--- Method for 'description' reader
  inCppFile.appendCppHyphenLineComment () ;
  current = aListeTousAttributsNonExternes.firstObject () ;
  inCppFile << "void cPtr_" << aNomClasse << "::\n"
               "appendForDescription (C_String & ioString,\n"
               "                      const PMSInt32 "
            << ((current == NULL) ? "/* inIndentation */" : "inIndentation")
            << ") const {\n"
               "  ioString << \"->@" << aNomClasse << ":\"" ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "\n"
                 "           << " << current->mAttributeName
              << ".reader_description (inIndentation + 1)" ;
    current = current->nextObject () ;
  }
  inCppFile << " ;\n"
               "}\n\n" ;

//--- Pour chaque message abstrait, engendrer la methode statique correspondante
  GGS_typeClassMessagesMap::cElement * messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "const char * cPtr_" << aNomClasse << "::\n"
                 "static_string_message_" << messageCourant->mKey
              << " (void) {\n"
                 "  return " ;
    inCppFile.appendCLiteralStringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "const char * cPtr_" << aNomClasse << "::\n"
                 "message_" << messageCourant->mKey << " (void) const {\n"
                 "  return " ;
    inCppFile.appendCLiteralStringConstant (messageCourant->mInfo.mMessage) ;
    inCppFile << " ;\n"
                 "} ;\n\n" ;
    messageCourant = messageCourant->nextObject () ;
  }

  inCppFile.appendCppTitleComment ("Class message") ;
  inCppFile << "const char * cPtr_" << aNomClasse << "::\n"
               "instanceMessage (void) const {\n"
               "  return " ;
  inCppFile.appendCLiteralStringConstant (mClassMessage.string ()) ;
  inCppFile << " ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const char * cPtr_" << aNomClasse << "::\n"
               "_static_message (void) {\n"
               "  return " ;
  inCppFile.appendCLiteralStringConstant (mClassMessage.string ()) ;
  inCppFile << " ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "C_galgas_class_inspector _gInspectorFor_" << aNomClasse
            << " (& typeid (cPtr_" << aNomClasse << "), " ;
  if (superClassName.length () == 0) {
    inCppFile << "NULL" ;
  }else{
    inCppFile << "& typeid (cPtr_" << superClassName << ")" ;
  }
  inCppFile << ", " ;
  inCppFile.appendCLiteralStringConstant (mClassMessage.string ()) ;
  inCppFile << ") ;\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "AC_galgasClassRunTimeInformationEX * cPtr_" << aNomClasse << "::galgasRTTI (void) const {\n"
               "  return & gClassInfoFor__" << aNomClasse << " ;\n"
               "}\n\n" ;

//--- Generate 'makeClone' method
  current = aListeTousAttributsNonExternes.firstObject () ;
  if ((current != NULL) && ! mIsAbstract.boolValue ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "cPtr__AC_galgas_class * cPtr_" << aNomClasse << "::makeClone (void) const {\n"
                 "  cPtr__AC_galgas_class * result = NULL ;\n"
                 "  macroMyNew (result, cPtr_" << aNomClasse << " (" ;
    bool first = true ;
    while (current != NULL) {
      macroValidPointer (current) ;
      if (first) {
        first = false ;
      }else{
        inCppFile << ", " ;
      }
      inCppFile << current->mAttributeName ;
      current = current->nextObject () ;
    }
    inCppFile << " COMMA_HERE)) ;\n"
                 "  return result ;\n"
                 "}\n\n" ;
  }

//------------- Implementer la classe contenant un champ pointeur vers un objet heritier de la classe abstraite
  inCppFile.appendCppTitleComment (C_String ("GALGAS class 'GGS_") + aNomClasse + "'") ;

  inCppFile << "const C_galgas_type_descriptorEX kTypeDescriptor_GGS_" << aNomClasse << " (\"" << aNomClasse << "\", true, " ;
  if (superClassName.length () == 0) {
    inCppFile << "NULL" ;
  }else{
    inCppFile << "& kTypeDescriptor_GGS_" << superClassName ;
  }
  inCppFile << ") ;\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Pointer assignment constructor
  inCppFile << "GGS_" << aNomClasse << "::\n"
               "GGS_" << aNomClasse << " (const cPtr__AC_galgas_class * inPointer) {\n"
               "  macroAssignObject (mPointer, (cPtr__AC_galgas_class *) inPointer) ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- Object assignment constructor
  inCppFile << "GGS_" << aNomClasse << "::\n"
               "GGS_" << aNomClasse << " (cPtr__AC_galgas_class & inObject) {\n"
               "  macroAssignObject (mPointer, & inObject) ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

//--- castFrom method
  inCppFile << "//--- castFrom class method (implements cast expression)\n"
               "GGS_" << aNomClasse << " GGS_" << aNomClasse << "::\n"
               "castFrom (C_CompilerEx & inLexique,\n"
               "           cPtr__AC_galgas_class * inPointer,\n"
               "           const bool inUseKindOfClass,\n"
               "           const GGS_location & inErrorLocation\n"
               "           COMMA_LOCATION_ARGS) {\n"
               "  GGS_" << aNomClasse << " result ;\n"
               "  if (inPointer != NULL) {\n"
               "    macroValidPointer (inPointer) ;\n"
               "    const bool ok = inUseKindOfClass\n"
               "      ? (dynamic_cast <cPtr_" << aNomClasse << " *> (inPointer) != NULL)\n"
               "      : (typeid (cPtr_" << aNomClasse << ") == typeid (*inPointer)) ;\n"
               "    if (ok) {\n"
               "      result = GGS_" << aNomClasse << " (inPointer) ;\n"
               "    }else{\n"
               "      inErrorLocation.signalCastError (inLexique,\n"
               "                                       & typeid (cPtr_" << aNomClasse << "),\n"
               "                                       inUseKindOfClass,\n"
               "                                       inPointer->instanceMessage ()\n"
               "                                       COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;

  if (! mIsAbstract.boolValue ()) {
    if (NULL == aListeTousAttributsNonExternes.firstObject ()) {
      inCppFile << "static cPtr_" << aNomClasse << " * gSingleton_" << aNomClasse << " = NULL ;\n\n" ;
      inCppFile.appendCppHyphenLineComment () ;
    }
    inCppFile << "GGS_" << aNomClasse << " GGS_" << aNomClasse << "::\n"
                 "constructor_new (C_CompilerEx & /* inLexique */" ;
    current = aListeTousAttributsNonExternes.firstObject () ;
    variableIndex = 0 ;
    while (current != NULL) {
      macroValidPointer (current) ;
      inCppFile << ",\n"
                   "                 const " ;
      current->mAttributType(HERE)->generateFormalParameter (inCppFile, true) ;
      inCppFile << "argument_" << cStringWithSigned (variableIndex) ;
      current = current->nextObject () ;
      variableIndex ++ ;
    }
    inCppFile << "\n                                "
                 "COMMA_LOCATION_ARGS) {\n"
                 "  GGS_" << aNomClasse << " result ;\n" ;
    if (NULL == aListeTousAttributsNonExternes.firstObject ()) {
      inCppFile << "  if (NULL == gSingleton_" << aNomClasse << ") {\n"
                   "    macroMyNew (gSingleton_" << aNomClasse << ", cPtr_" << aNomClasse << " (THERE)) ;\n"
                   "  }\n"
                   "  macroAssignObject (result.mPointer, gSingleton_" << aNomClasse << ") ;\n" ;
    }else{
      inCppFile << "  macroMyNew (result.mPointer, cPtr_" << aNomClasse << " (" ;
      current = aListeTousAttributsNonExternes.firstObject () ;
      variableIndex = 0 ;
      while (current != NULL) {
        macroValidPointer (current) ;
        if (variableIndex > 0) {
          inCppFile << ",\n                                " ;
        }
        inCppFile << "argument_" << cStringWithSigned (variableIndex) ;
        current = current->nextObject () ;
        variableIndex ++ ;
      }
      if (variableIndex > 0) {
        inCppFile << " COMMA_THERE" ;
      }else{
        inCppFile << "THERE" ;
      }
      inCppFile << ")) ;\n" ;
    }
    inCppFile << "  return result ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
  }
  
//--- Generate declaration of message readers
  messageCourant = mMessagesMap.firstObject () ;
  while (messageCourant != NULL) {
    macroValidPointer (messageCourant) ;
    inCppFile << "GGS_string GGS_" << aNomClasse << "::\n"
                 "reader_" << messageCourant->mKey << " (C_CompilerEx & /* inLexique */\n"
                 "                            COMMA_LOCATION_ARGS) const {\n"
                 "  GGS_string result ;\n"
                 "  if (mPointer != NULL) {\n"
                 "    macroValidObjectThere (mPointer, cPtr_" << aNomClasse << ") ;\n"
                 "    cPtr_" << aNomClasse << " * p = (cPtr_" << aNomClasse << " *) mPointer ;\n"
                 "    result = GGS_string (true, p->message_" << messageCourant->mKey << " ()) ;\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    messageCourant = messageCourant->nextObject () ;
  }

//--- For every attribute, generate a reader
  current = mGetterAttributeReaderToImplementList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    current->mAttributType(HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " GGS_" << aNomClasse << "::\n"
                 "reader_" << current->mAttributeName
              << " (C_CompilerEx & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  " ;
    current->mAttributType(HERE)->generateCppClassName (inCppFile) ;
    inCppFile << "  result ;\n"
                 "  if (mPointer != NULL) {\n"
                 "    macroValidPointer (mPointer) ;\n"
                 "    MF_Assert (dynamic_cast <cPtr_" << aNomClasse << " *> (mPointer) != NULL,\n"
                 "               \"dynamic cast error\", 0, 0) ;\n"
                 "    result = ((cPtr_" << aNomClasse << " *) mPointer)->" << current->mAttributeName << " ;\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    current = current->nextObject () ;
  }

//--- Generate modifiers ('set...')
  current = mSetterAttributeModifierToImplementList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inCppFile << "void GGS_" << aNomClasse << "::\n" ;
    inCppFile << "modifier_set" << current->mAttributeName.stringByCapitalizingFirstCharacter ()
            << " (C_CompilerEx & /* inLexique */, const " ;
    current->mAttributType(HERE)->generateCppClassName (inCppFile) ;
    inCppFile  << "& inValue COMMA_UNUSED_LOCATION_ARGS) {\n"
                  "  if ((mPointer != NULL) && inValue.isBuilt ()) {\n"
                  "    macroValidPointer (mPointer) ;\n"
                  "    if (mPointer->retainCount () > 1) {\n"
                  "      cPtr_" << aNomClasse << " * clone = dynamic_cast <cPtr_" << aNomClasse << " *> (mPointer->makeClone ()) ;\n"
                  "      macroValidPointer (clone) ;\n"
                  "      macroAssignObject (mPointer, clone) ;\n"
                  "    }\n"
                  "    ((cPtr_" << aNomClasse << " *) mPointer)->" << current->mAttributeName << " = inValue ;\n"
                  "  }\n"
                  "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    current = current->nextObject () ;
  }

//--- Generate 'lazy' reader methods              
  currentLazyDeclaration = mLazyAttributeList.firstObject () ;
  while (currentLazyDeclaration != NULL) {
    macroValidPointer (currentLazyDeclaration) ;
    GGS_typeListeAttributsSemantiques::cElement * currentOnceAttribute = currentLazyDeclaration->mComputedAttributeTypeAndNameList.firstObject () ;
    while (currentOnceAttribute != NULL) {
      macroValidPointer (currentOnceAttribute) ;
      currentOnceAttribute->mAttributType(HERE)->generateCppClassName (inCppFile) ;
      inCppFile << " GGS_" << aNomClasse << "::\n"
                    "reader_" << currentOnceAttribute->mAttributeName
                << " (C_CompilerEx & inLexique COMMA_LOCATION_ARGS) const {\n"
                   "  " ;
      currentOnceAttribute->mAttributType(HERE)->generateCppClassName (inCppFile) ;
      inCppFile << "  result ;\n"
                   "  if (mPointer != NULL) {\n"
                   "    macroValidPointer (mPointer) ;\n"
                   "    MF_Assert (dynamic_cast <cPtr_" << aNomClasse << " *> (mPointer) != NULL,\n"
                   "               \"dynamic cast error\", 0, 0) ;\n"
                   "    result = ((cPtr_" << aNomClasse << " *) mPointer)->reader_" << currentOnceAttribute->mAttributeName << " (inLexique COMMA_THERE) ;\n"
                   "  }\n"
                   "  return result ;\n"
                   "}\n\n" ;
      inCppFile.appendCppHyphenLineComment () ;
      currentOnceAttribute = currentOnceAttribute->nextObject () ;
    }
    currentLazyDeclaration = currentLazyDeclaration->nextObject () ;
  }


//--- Generate 'description' reader implementation
  inCppFile << "const char * GGS_" << aNomClasse << "::actualTypeName (void) const {\n"
               "  return \"" << aNomClasse << "\" ;\n"
               "}\n\n" ;

  if (superClassName.length () == 0) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "AC_galgasClassRunTimeInformationEX * GGS_" << aNomClasse << "::galgasObjectRunTimeInfo (void) const {\n"
                 "  AC_galgasClassRunTimeInformationEX * result = NULL ;\n"
                 "  if (mPointer != NULL) {\n"
                 "    result = mPointer->galgasRTTI () ;\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
  }

  inCppFile.appendCppHyphenLineComment () ;
  if (superClassName.length () == 0) {
    inCppFile << "C_galgasRootClassRunTimeInformationEX gClassInfoFor__" << aNomClasse << " (\"" << aNomClasse << "\", & kTypeDescriptor_GGS_" << aNomClasse << ") ;\n\n" ;
  }else{
    inCppFile << "C_galgasClassRunTimeInformationEX gClassInfoFor__" << aNomClasse << " (\"" << aNomClasse << "\", gClassInfoFor__" << superClassName << ", & kTypeDescriptor_GGS_" << aNomClasse << ") ;\n\n" ;
  }

  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_object GGS_" << aNomClasse << "::reader_object (void) const {\n"
               "  GGS_object result ;\n"
               "  if (isBuilt ()) {\n"
               "    GGS_" << aNomClasse << " * p = NULL ;\n"
               "    macroMyNew (p, GGS_" << aNomClasse << " (*this)) ;\n"
               "    result = GGS_object (p) ;\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_" << aNomClasse << " GGS_" << aNomClasse << "::castFromObject (C_CompilerEx & inLexique,\n"
               "                                   const GGS_object & inObject,\n"
               "                                   const GGS_location & inErrorLocation\n"
               "                                   COMMA_LOCATION_ARGS) {\n"
               "  GGS_" << aNomClasse << " result ;\n"
               "  const GGS__root * embeddedObject = inObject.embeddedObject () ;\n"
               "  if (NULL != embeddedObject) {\n"
               "    const GGS_" << aNomClasse << " * p = dynamic_cast <const GGS_" << aNomClasse << " *> (embeddedObject) ;\n"
               "    if (NULL != p) {\n"
               "      result = * p ;\n"
               "    }else{\n"
               "      castFromObjectErrorSignaling (inLexique, inErrorLocation, & kTypeDescriptor_GGS_" << aNomClasse << ", embeddedObject COMMA_THERE) ;\n"
               "    }\n"
               "  }\n"
               "  return result ;\n"
               "}\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const C_galgas_type_descriptorEX * GGS_" << aNomClasse << "::typeDescriptor (void) const {\n"
               "  return & kTypeDescriptor_GGS_" << aNomClasse << " ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*
