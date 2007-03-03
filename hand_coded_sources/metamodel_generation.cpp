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

static void
generate_metamodel_header_file (C_Lexique & inLexique,
                                const GGS_entityToImplementMap & ioEntityMap,
                                const GGS_lstring & inMetamodelComponentName,
                                const GGS_typeEntitiesToGenerateList & inEntitiesToGenerateList,
                                const GGS_lstring & inRootEntityName) {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#ifndef " << inMetamodelComponentName << "_METAMODEL_DEFINED\n"
                 << "#define " << inMetamodelComponentName << "_METAMODEL_DEFINED\n"
                 << "\n#include <string.h>\n\n" ;

//--- Include declaration of predefined types
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"bdd/C_BDD.h\"\n"
                    "#include \"galgas/C_GGS_Object.h\"\n"
                    "#include \"galgas/GGS_location.h\"\n"
                    "#include \"galgas/GGS_lbool.h\"\n"
                    "#include \"galgas/GGS_lchar.h\"\n"
                    "#include \"galgas/GGS_lstring.h\"\n"
                    "#include \"galgas/GGS_ldouble.h\"\n"
                    "#include \"galgas/GGS_luint.h\"\n"
                    "#include \"galgas/GGS_lsint.h\"\n\n" ;
  
  C_String generatedZone3 ; generatedZone3.setCapacity (20000) ;
//--- Generate entities predeclarations
  generatedZone3.writeCppTitleComment ("Class Predeclarations") ;
  GGS_entityToImplementMap::element_type * currentEntity = ioEntityMap.firstObject () ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    generatedZone3 << "class GGS_" << currentEntity->mKey << " ;\n"
                      "class cPtr_" << currentEntity->mKey << " ;\n"
                      "class GGS_listOf" << currentEntity->mKey.stringWithUpperCaseFirstLetter () << " ;\n" ;
    currentEntity = currentEntity->nextObject () ;
  }
  generatedZone3 << "\n"
                    "void _logMetamodel_" << inMetamodelComponentName
                 << " (C_Lexique & _inLexique,\n"
                    "                          const GGS_" << inRootEntityName << " * inRootObject\n"
                    "                          COMMA_LOCATION_ARGS) ;\n"
                    "\n" ;


//--- Generate classes declarations
  GGS_typeEntitiesToGenerateList::element_type * element = inEntitiesToGenerateList.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateHdeclarations (generatedZone3, "C_Lexique", inLexique) ;
    element = element->nextObject () ;
  }
  element = inEntitiesToGenerateList.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateHdeclarations_2 (generatedZone3, "C_Lexique", inLexique) ;
    element = element->nextObject () ;
  }
  
//---------------------------------------------- GGS_XXXXXX class
/*  currentEntity = ioEntityMap.firstObject () ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
    generatedZone3.writeCppTitleComment (C_String ("Declaration of GGS_") + currentEntity->mKey + " Class") ;
    generatedZone3 << "class GGS_" << currentEntity->mKey << " : public " ;
    if (superClass.length () == 0) {
      generatedZone3 << "C_GGS_Object" ;
    }else{
      generatedZone3 << "GGS_" << superClass ;
    }
    generatedZone3 << " {\n" ;
  //--- Engendrer la declaration de l'attribut 'mPointer'
    if (superClass.length () == 0) {
      generatedZone3 << "//--- Pointer to actual instance\n"
                        "  protected : cPtr_" << currentEntity->mKey << " * mPointer ;\n\n" ;
    }

  //--- Engendrer la declaration du constructeur par defaut
    generatedZone3 << "//--- Default constructor\n"
                      "  public : GGS_" << currentEntity->mKey << " (void) ;\n\n"

  //--- Engendrer la declaration du constructeur de recopie
                      "//--- Copy constructor\n"
                      "  public : GGS_" << currentEntity->mKey
                   << " (const GGS_" << currentEntity->mKey << " &) ;\n\n"

  //--- Engendrer la declaration du destructeur
                      "//--- Virtual destructor\n"
                      "  public : virtual ~GGS_" << currentEntity->mKey << " (void) ;\n\n" ;

  if (superClass.length () != 0) {
  //--- 'new' constructor
    generatedZone3 << "//--- 'new' constructor\n"
                      "  public : static GGS_" << currentEntity->mKey
                   << " constructor_new (C_Lexique & inLexique" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentEntity->mInfo.mCurrentMetamodelPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      generatedZone3 << ",\n                                " ;
      currentProperty->mInfo.mProperty (HERE)->generateFormalParameter (generatedZone3, currentEntity->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "\n                                "
                      "COMMA_LOCATION_ARGS) ;\n" ;
  }

  //--- Engendrer la declaration de la redefinition de l'operateur =
    generatedZone3 << "//--- Assignment operator\n"
                      "  public : void operator = (const GGS_" << currentEntity->mKey << " &) ;\n"

  //--- Comparison
                      "//--- Comparison methods\n"
                      "  public : GGS_bool operator == (const GGS_" << currentEntity->mKey << " & inOperand) const ;\n"
                      "  public : GGS_bool operator != (const GGS_" << currentEntity->mKey << " & inOperand) const ;\n" ;

    if (superClass.length () == 0) {
    //--- Engendrer la declaration de la methode '_isBuilt'
        generatedZone3 << "//--- _isBuilt\n"
                          "  public : inline bool _isBuilt (void) const { return mPointer != NULL ; }\n"

    //--- Engendrer la declaration et l'implementation de la methode 'isEqualTo'
                          "//--- isEqualTo\n"
                          "  public : inline bool isEqualTo (const GGS_" << currentEntity->mKey
                       << " & _inOperand) const {\n"
                          "    return mPointer == _inOperand.mPointer ;\n"
                          "  }\n\n"

    //--- Engendrer la declaration de la methode 'getPtr'
                          "//--- getPtr\n"
                          "  public : inline cPtr_" << currentEntity->mKey << " * getPtr (void) const {\n"
                          "    return mPointer ;\n"
                          "  }\n\n"

    //--- Engendrer la declaration de la methode '_drop_operation'
                         "//--- drop\n"
                         "  public : void _drop_operation (void) ;\n" ;
  }
  
//--- Generate 'description' reader declaration
  generatedZone3 << "//--- 'description' reader\n"
                    "  public : GGS_string reader_description (C_Lexique & _inLexique\n"
                    "                                          COMMA_LOCATION_ARGS,\n"
                    "                                          const sint32 inIndentation = 0) const ;\n\n"

//--- Engendrer la declaration de la surcharge de l'operateur ()
             "//--- operator ()\n"
             "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
             "    public : cPtr_" << currentEntity->mKey << " * operator () (LOCATION_ARGS) const ;\n"
             "  #else\n"
             "    public : inline cPtr_" << currentEntity->mKey << " * operator () (LOCATION_ARGS) const {\n"
             "      return " ;
  if (superClass.length () > 0) {
    generatedZone3 << "(cPtr_" << currentEntity->mKey << " *) " ;
  }
  generatedZone3 << "mPointer ;\n"
                    "    }\n"
                    "  #endif\n" ;
  //--- Class ID method Declaration                 
    generatedZone3 << "//--- Class ID\n"
                      "  public : virtual uint32 metamodelClassID (void) const ;\n" ;
  //--- Friend Declaration                 
    generatedZone3 << "//--- Friend Class\n"
                      "  friend class GGS_listOf" << currentEntity->mKey.stringWithUpperCaseFirstLetter () << " ;\n" ;
  //--- End of Class Declaration                 
    generatedZone3 << "} ;\n\n" ;
    currentEntity = currentEntity->nextObject () ;
  }
  
//------------------------------------------------ cPtr_XXXXXX class
  currentEntity = ioEntityMap.firstObject () ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
    generatedZone3.writeCppTitleComment (C_String ("Declaration of cPtr_") + currentEntity->mKey + " Class") ;
    generatedZone3 << "class cPtr_" << currentEntity->mKey << " : public " ;
    if (superClass.length () == 0) {
      generatedZone3 << "C_GGS_Object" ;
    }else{
      generatedZone3 << "cPtr_" << superClass ;
    }
    generatedZone3 << " {\n" ;
    if (superClass.length () == 0) {
    generatedZone3 << "//--- Next Object in a list\n"
                      "  public : cPtr_" << currentEntity->mKey << " * _mNextObject ;\n\n" ;
    }
    generatedZone3 << "//--- Constructor\n"
                      "  public : cPtr_" << currentEntity->mKey << " (LOCATION_ARGS) ;\n\n"
                      "//--- Declaring a protected virtual destructor enables the compiler to raise\n"
                      "//    an error if a direct delete is performed; only the static method\n"
                      "//    C_GGS_Object::detachPointer may invoke delete.\n"
                      "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                      "    protected : virtual ~cPtr_" << currentEntity->mKey << " (void) {}\n"
                      "  #endif\n\n" ;
  //--- Properties
    generatedZone3 << "//--- Properties\n" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentEntity->mInfo.mCurrentMetamodelPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      currentProperty->mInfo.mProperty (HERE)->generateAttributeInMetamodel (generatedZone3, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "\n" ;
  //--- Method for 'description' reader
    generatedZone3 << "//--- Method for 'description' reader\n"
                      "  public : virtual void appendForDescription (C_Lexique & _inLexique,\n"
                      "                                              C_String & ioString,\n"
                      "                                              const sint32 inIndentation\n"
                      "                                              COMMA_LOCATION_ARGS) const ;\n"
                      "\n"
                      "//--- Comparison\n"
                      "  public : virtual bool isEqualToObject (const C_GGS_Object * inOperand) const"
                   << ((superClass.length () == 0) ? " = 0" : "")
                   << " ;\n" ;
  //--- End of Class Declaration
    generatedZone3 << "} ;\n\n" ;
    currentEntity = currentEntity->nextObject () ;
  }
*/  
//--- End of ".h" file
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output"
                                                                   COMMA_HERE) ;
  inLexique.generateFile ("//",
                          inMetamodelComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

static void
generate_metamodel_cpp_file (C_Lexique & inLexique,
                             GGS_entityToImplementMap & ioEntityMap,
                             const GGS_lstring & inMetamodelComponentName,
                             const GGS_typeEntitiesToGenerateList & inEntitiesToGenerateList,
                             const GGS_lstring & inRootEntityName) {
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
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  static const char gGGSsourceFile [] = \"" << inLexique.sourceFileName ().lastPathComponent () << "\" ;\n"
                    "  #define SOURCE_FILE_AT_LINE(line) , gGGSsourceFile, line\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

  C_String generatedZone3 ; generatedZone3.setCapacity (200000) ;
  
  generatedZone3.writeCppTitleComment ("Logging Metamodel") ;
  generatedZone3 << "void _logMetamodel_" << inMetamodelComponentName
                 << " (C_Lexique & _inLexique,\n"
                    "                          const GGS_" << inRootEntityName << " * inRootObject\n"
                    "                          COMMA_LOCATION_ARGS) {\n"
                    "  co << \"LOGGING " << inMetamodelComponentName << " metamodel: <\" ;\n"
                    "  if (inRootObject == NULL) {\n"
                    "    co << \"NULL\" ;\n"
                    "  }else{\n"
                    "    macroValidPointer (inRootObject) ;\n"
                    "    co << inRootObject->reader_description  (_inLexique COMMA_THERE, 1) ;\n"
                    "  }\n"
                    "  co << \">\\n\" ;\n"
                    "}\n\n" ;

  GGS_typeEntitiesToGenerateList::element_type * element = inEntitiesToGenerateList.firstObject () ;
  sint32 select_repeat_production_index = 0 ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateCppClassImplementation (generatedZone3,
                                         "C_Lexique",
                                         inMetamodelComponentName,
                                         select_repeat_production_index,
                                         false) ;
    element = element->nextObject () ;
  }
  
//--- Generate Implementation of classes
/*  GGS_entityToImplementMap::element_type * currentEntity = ioEntityMap.firstObject () ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    generatedZone3.writeCppTitleComment (C_String ("Implementation of GGS_") + currentEntity->mKey + " Class") ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
  //--- Constructor
    generatedZone3 << "GGS_" << currentEntity->mKey << "::\n"
                      "GGS_" << currentEntity->mKey << " (C_Lexique & _inLexique" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      generatedZone3 << ",\n                             " ;
      currentProperty->mInfo.mProperty (HERE)->generateFormalParameter (generatedZone3, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "\n                             "
                      "COMMA_LOCATION_ARGS)\n:" ;
    if (superClass.length () == 0) {
      generatedZone3 << "C_GGS_Object" ;
    }else{
      generatedZone3 << "GGS_" << superClass ;
    }
    generatedZone3 << " (_inLexique" ;
    const sint32 inheritedPropertyCount = currentEntity->mInfo.mAllMetamodelPropertyMap.count ()
                                        - currentEntity->mInfo.mCurrentMetamodelPropertyMap.count () ;
    currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
    for (sint32 i=0 ; i<inheritedPropertyCount ; i++) {
      macroValidPointer (currentProperty) ;
      if (currentProperty->mInfo.mProperty (HERE)->isMetamodelDefined ()) {
        generatedZone3 << ",\n                             "
                          "_in_" << currentProperty->mKey ;
      }
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "\n                             "
                      "COMMA_THERE)" ;
    if (superClass.length () == 0) {
      generatedZone3 << ",\n"
                        "_mNextObject (NULL)" ;
    }
    currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      generatedZone3 << ",\n" << currentProperty->mKey << " (_in_" << currentProperty->mKey << ")" ;
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << " {\n" ;
    currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      currentProperty->mInfo.mProperty (HERE)->generateMultiplicityConstraintChecking (generatedZone3, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "}\n\n" ;

  //--- Destructor
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGS_" << currentEntity->mKey << "::\n"
                      "~GGS_" << currentEntity->mKey << " (void) {\n" ;
    currentProperty = currentEntity->mInfo.mCurrentMetamodelPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      currentProperty->mInfo.mProperty (HERE)->releasePropertyInDestructor (generatedZone3, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "}\n\n" ;

     generatedZone3.writeCppHyphenLineComment () ;
     generatedZone3 << "uint32 GGS_" << currentEntity->mKey << "::\n"
                       "metamodelClassID (void) const {\n"
                       "  return " << currentEntity->mID << " ;\n"
                       "}\n\n" ;

//--- reader_description (C_Lexique & inLexique COMMA_LOCATION_ARGS)
    if (! currentEntity->mInfo.mIsAbstract.boolValue ()) {
      generatedZone3.writeCppHyphenLineComment () ;
      bool descriptionReaderCallImplementationNeedsLexique = false ;
      currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
      while ((currentProperty != NULL) && ! descriptionReaderCallImplementationNeedsLexique) {
        macroValidPointer (currentProperty) ;
        descriptionReaderCallImplementationNeedsLexique = currentProperty->mInfo.mProperty (HERE)->descriptionReaderCallImplementationNeedsLexique () ;
        currentProperty = currentProperty->nextObject () ;
      }
      generatedZone3 << "GGS_string GGS_" << currentEntity->mKey << "::\n"
                        "reader_description (C_Lexique & " ;
      if (descriptionReaderCallImplementationNeedsLexique) {
        generatedZone3 << "_inLexique" ;
      }else{
        generatedZone3 << " _inLexique " ;
      }
      generatedZone3 << "\n"
                        "                    " ;
      if (descriptionReaderCallImplementationNeedsLexique) {
        generatedZone3 << "COMMA_LOCATION_ARGS" ;
      }else{
        generatedZone3 << "COMMA_UNUSED_LOCATION_ARGS" ;
      }
      generatedZone3 << ",\n"
                        "                    const sint32 " ;
      if (descriptionReaderCallImplementationNeedsLexique) {
        generatedZone3 << "inIndentation" ;
      }else{
        generatedZone3 << " inIndentation " ;
      }
      generatedZone3 << ") const {\n"
                        "  C_String s ;\n"
                        "  s << \"<@" << currentEntity->mKey << " {\"\n" ;
      currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
      while (currentProperty != NULL) {
        macroValidPointer (currentProperty) ;
        currentProperty->mInfo.mProperty (HERE)->descriptionReaderCall (generatedZone3, currentProperty->mKey) ;
        currentProperty = currentProperty->nextObject () ;
      }
      generatedZone3 << "    << \"}>\" ;\n"
                        "  return GGS_string (true, s) ;\n"
                        "}\n\n" ;
    }
    currentEntity = currentEntity->nextObject () ;
  }
*/  
//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output"
                                                                   COMMA_HERE) ;
  inLexique.generateFile ("//",
                          inMetamodelComponentName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

void
routine_generate_metamodel (C_Lexique & inLexique,
                            GGS_entityToImplementMap inEntityMap,
                            GGS_lstring inMetamodelComponentName,
                            GGS_typeEntitiesToGenerateList inEntitiesToGenerateList,
                            GGS_lstring inRootEntityName
                            COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.currentFileErrorCount () == 0) {
  //--- Generate header file
    generate_metamodel_header_file (inLexique,
                                    inEntityMap,
                                    inMetamodelComponentName,
                                    inEntitiesToGenerateList,
                                    inRootEntityName) ;
  //--- Generate implementation file
    generate_metamodel_cpp_file (inLexique,
                                 inEntityMap,
                                 inMetamodelComponentName,
                                 inEntitiesToGenerateList,
                                 inRootEntityName) ;
  }
}

//---------------------------------------------------------------------------*
