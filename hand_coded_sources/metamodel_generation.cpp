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
  C_String generatedZone2 ;
  generatedZone2 << "#ifndef " << inMetamodelComponentName << "_METAMODEL_DEFINED\n"
                 << "#define " << inMetamodelComponentName << "_METAMODEL_DEFINED\n"
                 << "\n#include <string.h>\n\n" ;

//--- Include declaration of predefined types
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"bdd/C_BDD.h\"\n"
                    "#include \"galgas/C_GGS_Object.h\"\n"
                    "#include \"galgas/AC_galgas_io.h\"\n"
                    "#include \"galgas/GGS_location.h\"\n"
                    "#include \"galgas/GGS_lbool.h\"\n"
                    "#include \"galgas/GGS_lchar.h\"\n"
                    "#include \"galgas/GGS_lstring.h\"\n"
                    "#include \"galgas/GGS_ldouble.h\"\n"
                    "#include \"galgas/GGS_luint.h\"\n"
                    "#include \"galgas/GGS_lsint.h\"\n\n" ;
  
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (20000) ;
//--- Generate entities predeclarations
  generatedZone3.writeCppTitleComment ("Class Predeclarations") ;
  GGS_entityToImplementMap::element_type * currentEntity = ioEntityMap.firstObject () ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    generatedZone3 << "class GGS_" << currentEntity->mKey << " ;\n" ;
    currentEntity = currentEntity->nextObject () ;
  }
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3 << "class GGS__listOf_" << currentMultipleReferencedEntity->mKey << " ;\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }
  generatedZone3 << "\n"
                    "void _checkMetamodel_" << inMetamodelComponentName
                 << " (C_Lexique & _inLexique, GGS_" << inRootEntityName << " * & ioRootObject) ;\n"
                    "\n" ;
  
//--- Generate list of entities declarations
  currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCppTitleComment (C_String ("Declaration of GGS__listOf_") + currentMultipleReferencedEntity->mKey + " Class") ;
    generatedZone3 << "class GGS__listOf_" << currentMultipleReferencedEntity->mKey << " {\n"
                      "//--- Default Constructor\n"
                      "  public : GGS__listOf_" << currentMultipleReferencedEntity->mKey << " (void) ;\n"
                      "//--- Destructor\n"
                      "  public : ~GGS__listOf_" << currentMultipleReferencedEntity->mKey << " (void) ;\n"
                      "//--- Copy destroy source\n"
                      "  public : GGS__listOf_" << currentMultipleReferencedEntity->mKey
                   << " (GGS__listOf_" << currentMultipleReferencedEntity->mKey << "&) ;\n"
                      "  private : void operator = "
                      " (GGS__listOf_" << currentMultipleReferencedEntity->mKey << "&) ;\n"
                      "//--- Add an Object\n"
                      "  public : void add (GGS_" << currentMultipleReferencedEntity->mKey << " * inObject) ;\n"
                      "//--- Attributes\n"
                      "  public : GGS_" << currentMultipleReferencedEntity->mKey << " * mFirstObject ;\n"
                      "  public : GGS_" << currentMultipleReferencedEntity->mKey << " * mLastObject ;\n"
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
    generatedZone3.writeCppTitleComment (C_String ("Declaration of GGS_") + currentEntity->mKey + " Class") ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
    generatedZone3 << "class GGS_" << currentEntity->mKey << " : public " ;
    if (superClass.length () == 0) {
      generatedZone3 << "C_GGS_Object" ;
    }else{
      generatedZone3 << "GGS_" << superClass ;
    }
    generatedZone3 << " {\n" ;
  //--- Constructor
    if (superClass.length () == 0) {
    generatedZone3 << "//--- Next Object in a list\n"
                      "  public : GGS_" << currentEntity->mKey << " * _mNextObject ;\n" ;
    }
    generatedZone3 << "//--- Constructor\n"
                      "  public : GGS_" << currentEntity->mKey << " (" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
    bool first = true ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      if (first) {
        first = false ;
      }else{
        generatedZone3 << ",\n                             " ;
      }
      currentProperty->mInfo.mProperty (HERE)->generateFormalParameter (generatedZone3, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
    if (first) {
      generatedZone3 << "LOCATION_ARGS" ;
    }else{
      generatedZone3 << "\n                             "
                        "COMMA_LOCATION_ARGS" ;
    }
    generatedZone3 << ") ;\n"
                      "//--- Destructor\n"
                      "  public : virtual ~GGS_" << currentEntity->mKey << " (void) ;\n" ;

  //--- Attributes                 
    generatedZone3 << "//--- Properties\n" ;
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
  //--- Friend Declaration                 
    generatedZone3 << "//--- Friend Class\n"
                      "  friend class GGS__listOf_" << currentEntity->mKey << " ;\n" ;
  //--- End of Class Declaration                 
    generatedZone3 << "} ;\n\n" ;
    currentEntity = currentEntity->nextObject () ;
  }
  
//--- End of ".h" file
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
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
  C_String generatedZone2 ;
//--- Include declaration of header file
  generatedZone2 << "#include \"" << inMetamodelComponentName << ".h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  static const char gGGSsourceFile [] = \"" << inLexique.sourceFileName ().lastPathComponent () << "\" ;\n"
                    "  #define SOURCE_FILE_AT_LINE(line) , gGGSsourceFile, line\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

  C_String generatedZone3 ; generatedZone3.setAllocationExtra (200000) ;
  
  generatedZone3.writeCppTitleComment ("Checking Metamodel") ;
    generatedZone3 << "void _checkMetamodel_" << inMetamodelComponentName
                   << " (C_Lexique & _inLexique, GGS_" << inRootEntityName << " * & ioRootObject) {\n"
                      "  if (ioRootObject != NULL) {\n"
                      "    macroValidPointer (ioRootObject) ;\n"
                      "    // const GGS_string s = ioRootObject->reader_description  (_inLexique COMMA_THERE, 0) ;\n"
                      "    // co << s << \"\\n\" ;\n"
                      "  }\n"
                      "}\n\n" ;

//--- Generate Implementations of Lists
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCppTitleComment (C_String ("Implementation of GGS__listOf_") + currentMultipleReferencedEntity->mKey + " Class") ;
    generatedZone3 << "GGS__listOf_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGS__listOf_" << currentMultipleReferencedEntity->mKey << " (void)\n"
                      ":mFirstObject (NULL), mLastObject (NULL) {\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGS__listOf_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGS__listOf_" << currentMultipleReferencedEntity->mKey << " ("
                      "GGS__listOf_" << currentMultipleReferencedEntity->mKey << " & ioSource)\n"
                      ":mFirstObject (ioSource.mFirstObject), mLastObject (ioSource.mLastObject) {\n"
                      "  ioSource.mFirstObject = NULL ;\n"
                      "  ioSource.mLastObject = NULL ;\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGS__listOf_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "~GGS__listOf_" << currentMultipleReferencedEntity->mKey << " (void) {\n"
                      "  while (mFirstObject != NULL) {\n"
                      "    GGS_" << currentMultipleReferencedEntity->mKey << " * p = mFirstObject->_mNextObject ;\n"
                      "    delete mFirstObject ;\n"
                      "    mFirstObject = p ;\n"
                      "  }\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << " void GGS__listOf_" << currentMultipleReferencedEntity->mKey
                   << "::\n"
                      "add (GGS_" << currentMultipleReferencedEntity->mKey << " * inObject) {\n"
                      "  if (inObject != NULL) {\n"
                      "    macroValidObject (inObject) ;\n"
                      "    if (mFirstObject == NULL) {\n"
                      "      mFirstObject = inObject ;\n"
                      "    }else{\n"
                      "      mLastObject->_mNextObject = inObject ;\n"
                      "    }\n"
                      "    mLastObject = inObject ;\n"
                      "  }\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGS_string GGS__listOf_" << currentMultipleReferencedEntity->mKey
                   << "::\n"
                      "reader_description (C_Lexique & _inLexique\n"
                      "                    COMMA_LOCATION_ARGS,\n"
                      "                    const sint32 inIndentation) const {\n"
                      "  C_String s ;\n"
                      "  s << \"<list @" << currentMultipleReferencedEntity->mKey << " \" ;\n"
                      "  GGS_" << currentMultipleReferencedEntity->mKey << " * p = mFirstObject ;\n"
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
    generatedZone3.writeCppTitleComment (C_String ("Implementation of GGS_") + currentEntity->mKey + " Class") ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
    generatedZone3 << "GGS_" << currentEntity->mKey << "::\n"
                      "GGS_" << currentEntity->mKey << " (" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
    bool first = true ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      currentProperty->mInfo.mProperty (HERE)->generateFormalParameter (generatedZone3, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
    if (first) {
      generatedZone3 << "LOCATION_ARGS" ;
    }else{
      generatedZone3 << "\n                             "
                        "COMMA_LOCATION_ARGS" ;
    }
    generatedZone3 << ")\n:" ;
    if (superClass.length () == 0) {
      generatedZone3 << "C_GGS_Object" ;
    }else{
      generatedZone3 << "GGS_" << superClass ;
    }
    generatedZone3 << " (" ;
    const sint32 inheritedPropertyCount = currentEntity->mInfo.mAllMetamodelPropertyMap.count ()
                                        - currentEntity->mInfo.mCurrentMetamodelPropertyMap.count () ;
    first = true ;
    currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
    for (sint32 i=0 ; i<inheritedPropertyCount ; i++) {
      macroValidPointer (currentProperty) ;
      if (currentProperty->mInfo.mProperty (HERE)->isMetamodelDefined ()) {
        if (first) {
          first = false ;
        }else{
          generatedZone3 << ",\n                             " ;
        }
        generatedZone3 << "_in_" << currentProperty->mKey ;
      }
      currentProperty = currentProperty->nextObject () ;
    }
    if (first) {
      generatedZone3 << "THERE" ;
    }else{
      generatedZone3 << "\n                             "
                        "COMMA_THERE" ;
    }
    generatedZone3 << ")" ;
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
    generatedZone3 << "}\n\n" ;

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

//--- reader_description (C_Lexique & inLexique COMMA_LOCATION_ARGS)
    if (! currentEntity->mInfo.mIsAbstract.boolValue ()) {
      generatedZone3.writeCppHyphenLineComment () ;
      generatedZone3 << "GGS_string GGS_" << currentEntity->mKey << "::\n"
                        "reader_description (C_Lexique & _inLexique\n"
                        "                    COMMA_LOCATION_ARGS,\n"
                        "                    const sint32 inIndentation) const {\n"
                        "  C_String s ;\n"
                        "  s << \"<@" << currentEntity->mKey << " {\"\n" ;
      currentProperty = currentEntity->mInfo.mAllMetamodelPropertyMap.firstObject () ;
      while (currentProperty != NULL) {
        macroValidPointer (currentProperty) ;
        currentProperty->mInfo.mProperty (HERE)->descriptionReaderCall (generatedZone3, currentProperty->mKey) ;
        currentProperty = currentProperty->nextObject () ;
      }
      generatedZone3 << "   << \"}>\" ;\n"
                        "  return GGS_string (true, s) ;\n"
                        "}\n\n" ;
    }
    currentEntity = currentEntity->nextObject () ;
  }
  
//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
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
                            GGS_entityToImplementMap & ioEntityMap,
                            GGS_lstring inMetamodelComponentName,
                            GGS_stringset inMultipleReferencedEntities,
                            GGS_lstring inRootEntityName
                            COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.galgas_IO_Ptr ()->currentFileErrorCount () == 0) {
  //--- Generate header file
    generate_metamodel_header_file (inLexique, ioEntityMap, inMetamodelComponentName,
                                    inMultipleReferencedEntities, inRootEntityName) ;
  //--- Generate implementation file
    generate_metamodel_cpp_file (inLexique, ioEntityMap, inMetamodelComponentName,
                                 inMultipleReferencedEntities, inRootEntityName) ;
  }
}

//---------------------------------------------------------------------------*
