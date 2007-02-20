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

#include "common_semantics.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

static void
generate_metamodel_header_file (C_Lexique & inLexique,
                                const GGS_entityToImplementMap & ioEntityMap,
                                const GGS_lstring & inMetamodelComponentName,
                                const GGS_stringset & inMultipleReferencedEntities,
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
    generatedZone3 << "class GGM_" << currentEntity->mKey << " ;\n" ;
    currentEntity = currentEntity->nextObject () ;
  }
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3 << "class GGM__listOf_" << currentMultipleReferencedEntity->mKey << " ;\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }
  generatedZone3 << "\n"
                    "void _logMetamodel_" << inMetamodelComponentName
                 << " (C_Lexique & _inLexique,\n"
                    "                          const GGM_" << inRootEntityName << " * inRootObject\n"
                    "                          COMMA_LOCATION_ARGS) ;\n"
                    "\n" ;
  
//--- Generate list of entities declarations
  currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCppTitleComment (C_String ("Declaration of GGM__listOf_") + currentMultipleReferencedEntity->mKey + " Class") ;
    generatedZone3 << "class GGM__listOf_" << currentMultipleReferencedEntity->mKey << " {\n"
                      "  protected : uint32 _mObjectCount ;\n"
                      "//--- Default Constructor\n"
                      "  public : GGM__listOf_" << currentMultipleReferencedEntity->mKey << " (void) ;\n"
                      "//--- Destructor\n"
                      "  public : ~GGM__listOf_" << currentMultipleReferencedEntity->mKey << " (void) ;\n"
                      "//--- Copy destroy source\n"
                      "  public : GGM__listOf_" << currentMultipleReferencedEntity->mKey
                   << " (GGM__listOf_" << currentMultipleReferencedEntity->mKey << "&) ;\n"
                      "  private : void operator = "
                      " (GGM__listOf_" << currentMultipleReferencedEntity->mKey << "&) ;\n"
                      "//--- Add an Object\n"
                      "  public : void add (GGM_" << currentMultipleReferencedEntity->mKey << " * inObject) ;\n"
                      "//--- Object count\n"
                      "  public : uint32 count (void) const { return _mObjectCount ; }\n"
                      "//--- Attributes\n"
                      "  public : GGM_" << currentMultipleReferencedEntity->mKey << " * _mFirstObject ;\n"
                      "  public : GGM_" << currentMultipleReferencedEntity->mKey << " * _mLastObject ;\n"
                      "//--- 'description' reader\n"
                      "  public : GGS_string reader_description (C_Lexique & _inLexique\n"
                      "                                          COMMA_LOCATION_ARGS,\n"
                      "                                          const sint32 inIndentation = 0) const ;\n"
                      "} ;\n\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }
  
//--- Generate entities declarations
  currentEntity = ioEntityMap.firstObject () ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    generatedZone3.writeCppTitleComment (C_String ("Declaration of GGM_") + currentEntity->mKey + " Class") ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
    generatedZone3 << "class GGM_" << currentEntity->mKey << " : public " ;
    if (superClass.length () == 0) {
      generatedZone3 << "C_GGS_Object" ;
    }else{
      generatedZone3 << "GGM_" << superClass ;
    }
    generatedZone3 << " {\n" ;
  //--- Constructor
    if (superClass.length () == 0) {
    generatedZone3 << "//--- Next Object in a list\n"
                      "  public : GGM_" << currentEntity->mKey << " * _mNextObject ;\n" ;
    }
    generatedZone3 << "//--- Constructor\n"
                      "  public : GGM_" << currentEntity->mKey << " (C_Lexique & _inLexique" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      generatedZone3 << ",\n                             " ;
      currentProperty->mInfo.mProperty (HERE)->generateFormalParameter (generatedZone3, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "\n                             "
                      "COMMA_LOCATION_ARGS) ;\n"
                      "//--- Destructor (only C_GGS_Object::detachPointer may delete this object)\n"
                      "  protected : virtual ~GGM_" << currentEntity->mKey << " (void) ;\n" ;

  //--- Attributes                 
    generatedZone3 << "//--- Properties\n" ;
    // printf ("mCurrentMetamodelPropertyMap %s\n", currentEntity->mInfo.mCurrentMetamodelPropertyMap.reader_description (inLexique COMMA_HERE).cString ()) ;
    currentProperty = currentEntity->mInfo.mCurrentMetamodelPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      currentProperty->mInfo.mProperty (HERE)->generateAttributeInMetamodel (generatedZone3, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
  //--- 'description' reader                 
    generatedZone3 << "//--- 'description' reader\n"
                      "  public : virtual GGS_string reader_description (C_Lexique & _inLexique\n"
                      "                                                  COMMA_LOCATION_ARGS,\n"
                      "                                                  const sint32 inIndentation = 0) const"
                   << (currentEntity->mInfo.mIsAbstract.boolValue () ? " = 0" : "")
                   << " ;\n" ;
  //--- Class ID method Declaration                 
    generatedZone3 << "//--- Class ID\n"
                      "  public : virtual uint32 metamodelClassID (void) const ;\n" ;
  //--- Friend Declaration                 
    generatedZone3 << "//--- Friend Class\n"
                      "  friend class GGM__listOf_" << currentEntity->mKey << " ;\n" ;
  //--- End of Class Declaration                 
    generatedZone3 << "} ;\n\n" ;
    currentEntity = currentEntity->nextObject () ;
  }
  
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
                             const GGS_stringset & inMultipleReferencedEntities,
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
                    "                          const GGM_" << inRootEntityName << " * inRootObject\n"
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

//--- Generate Implementations of Lists
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCppTitleComment (C_String ("Implementation of GGM__listOf_") + currentMultipleReferencedEntity->mKey + " Class") ;
    generatedZone3 << "GGM__listOf_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGM__listOf_" << currentMultipleReferencedEntity->mKey << " (void)\n"
                      ":_mObjectCount (0), _mFirstObject (NULL), _mLastObject (NULL) {\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGM__listOf_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGM__listOf_" << currentMultipleReferencedEntity->mKey << " ("
                      "GGM__listOf_" << currentMultipleReferencedEntity->mKey << " & ioSource)\n"
                      ":_mFirstObject (ioSource._mFirstObject), _mLastObject (ioSource._mLastObject) {\n"
                      "  ioSource._mFirstObject = NULL ;\n"
                      "  ioSource._mLastObject = NULL ;\n"
                      "  GGM_" << currentMultipleReferencedEntity->mKey << " * _p = _mFirstObject ;\n"
                      "  while (_p != NULL) {\n"
                      "    _mObjectCount ++ ;\n"
                      "    _p = _p->_mNextObject ;\n"
                      "  }\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGM__listOf_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "~GGM__listOf_" << currentMultipleReferencedEntity->mKey << " (void) {\n"
                      "  while (_mFirstObject != NULL) {\n"
                      "    GGM_" << currentMultipleReferencedEntity->mKey << " * p = _mFirstObject->_mNextObject ;\n"
                      "    macroDetachPointer (_mFirstObject, GGM_" << currentMultipleReferencedEntity->mKey << ") ;\n"
                      "    _mFirstObject = p ;\n"
                      "  }\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << " void GGM__listOf_" << currentMultipleReferencedEntity->mKey
                   << "::\n"
                      "add (GGM_" << currentMultipleReferencedEntity->mKey << " * inObject) {\n"
                      "  if (inObject != NULL) {\n"
                      "    macroValidObject (inObject) ;\n"
                      "    if (_mFirstObject == NULL) {\n"
                      "      _mFirstObject = inObject ;\n"
                      "    }else{\n"
                      "      _mLastObject->_mNextObject = inObject ;\n"
                      "    }\n"
                      "    _mLastObject = inObject ;\n"
                      "    _mObjectCount ++ ;\n"
                      "  }\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGS_string GGM__listOf_" << currentMultipleReferencedEntity->mKey
                   << "::\n"
                      "reader_description (C_Lexique & _inLexique\n"
                      "                    COMMA_LOCATION_ARGS,\n"
                      "                    const sint32 inIndentation) const {\n"
                      "  C_String s ;\n"
                      "  s << \"<list @" << currentMultipleReferencedEntity->mKey << " \" ;\n"
                      "  GGM_" << currentMultipleReferencedEntity->mKey << " * p = _mFirstObject ;\n"
                      "  while (p != NULL) {\n"
                      "    s << \"\\n\" ;\n"
                      "    s.writeSpaces (inIndentation + 1) ;\n"
                      "    s << p->reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;\n"
                      "    p = p->_mNextObject ;\n"
                      "  }\n"
                      "  s << \">\" ;\n"
                      "  return GGS_string (true, s) ;\n"
                      "}\n\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }


//--- Generate Implementation of classes
  GGS_entityToImplementMap::element_type * currentEntity = ioEntityMap.firstObject () ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    generatedZone3.writeCppTitleComment (C_String ("Implementation of GGM_") + currentEntity->mKey + " Class") ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
  //--- Constructor
    generatedZone3 << "GGM_" << currentEntity->mKey << "::\n"
                      "GGM_" << currentEntity->mKey << " (C_Lexique & _inLexique" ;
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
      generatedZone3 << "GGM_" << superClass ;
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
    generatedZone3 << "GGM_" << currentEntity->mKey << "::\n"
                      "~GGM_" << currentEntity->mKey << " (void) {\n" ;
    currentProperty = currentEntity->mInfo.mCurrentMetamodelPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      currentProperty->mInfo.mProperty (HERE)->releasePropertyInDestructor (generatedZone3, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "}\n\n" ;

     generatedZone3.writeCppHyphenLineComment () ;
     generatedZone3 << "uint32 GGM_" << currentEntity->mKey << "::\n"
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
      generatedZone3 << "GGS_string GGM_" << currentEntity->mKey << "::\n"
                        "reader_description (C_Lexique & " ;
      if (descriptionReaderCallImplementationNeedsLexique) {
        generatedZone3 << "_inLexique" ;
      }else{
        generatedZone3 << "/* _inLexique */" ;
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
        generatedZone3 << "/* inIndentation */" ;
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
                            GGS_stringset inMultipleReferencedEntities,
                            GGS_lstring inRootEntityName
                            COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.currentFileErrorCount () == 0) {
  //--- Generate header file
    generate_metamodel_header_file (inLexique, inEntityMap, inMetamodelComponentName,
                                    inMultipleReferencedEntities, inRootEntityName) ;
  //--- Generate implementation file
    generate_metamodel_cpp_file (inLexique, inEntityMap, inMetamodelComponentName,
                                 inMultipleReferencedEntities, inRootEntityName) ;
  }
}

//---------------------------------------------------------------------------*
