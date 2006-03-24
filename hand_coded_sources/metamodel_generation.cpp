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
  generatedZone2 << "#include \"galgas/C_GGS_Object.h\"\n"
                    "#include \"galgas/C_GGS_entityMap.h\"\n"
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
  generatedZone3.writeCTitleComment ("Class Predeclarations") ;
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
    generatedZone3.writeCTitleComment (C_String ("Declaration of GGS__listOf_") + currentMultipleReferencedEntity->mKey + " Class") ;
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
                      "//--- List access\n"
                      "  public : GGS_" << currentMultipleReferencedEntity->mKey << " * firstObject (void) {\n"
                      "    return mFirstObject ;\n"
                      "  }\n"
                      "//--- 'description' reader\n"
                      "  public : GGS_string reader_description (void) const ;\n"
                      "} ;\n\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }
  
//--- Generate entities declarations
  currentEntity = ioEntityMap.firstObject () ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Declaration of GGS_") + currentEntity->mKey + " Class") ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
    generatedZone3 << "class GGS_" << currentEntity->mKey << " : public " ;
    if (superClass.length () == 0) {
      generatedZone3 << "C_GGS_Object" ;
    }else{
      generatedZone3 << "GGS_" << superClass ;
    }
    generatedZone3 << " {\n" ;
  //--- Constructor
    generatedZone3 << "//--- Next Object in a list\n"
                      "  public : GGS_" << currentEntity->mKey << " * _mNextObject ;\n"
                      "//--- Owner pointer\n"
                      "  public : C_GGS_Object * _mOwnerObject ;\n"
                      "//--- Constructor\n"
                      "  public : GGS_" << currentEntity->mKey << " (" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentEntity->mInfo.mAllPropertiesMap.firstObject () ;
    bool first = true ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        if (first) {
          first = false ;
        }else{
          generatedZone3 << ",\n                             " ;
        }
        generatedZone3 << "GGS_" << currentProperty->mInfo.mTypeName
                       << " & _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        if (first) {
          first = false ;
        }else{
          generatedZone3 << ",\n                             " ;
        }
        generatedZone3 << "GGS_" << currentProperty->mInfo.mTypeName
                       << " * _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        if (first) {
          first = false ;
        }else{
          generatedZone3 << ",\n                             " ;
        }
        generatedZone3 << "GGS__listOf_" << currentProperty->mInfo.mTypeName
                       << " & _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_fetchedProperty:
      case GGS_metamodelPropertyKind::enum_mapProperty:
      case GGS_metamodelPropertyKind::enum_contextProperty:
      case GGS_metamodelPropertyKind::enum_relationProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
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
    generatedZone3 << "//--- Build Owner links and Maps\n"
                      "  public : virtual void buildOwnerLinksAndMaps (C_Lexique & _inLexique,\n"
                      "                                                C_GGS_Object * _inOwner,\n"
                      "                                                bool & _ioOk" ;
    GGS_contextPropertyMap::element_type * currentContextProperty = currentEntity->mInfo.mAllContextAttributes.firstObject () ;
    while (currentContextProperty != NULL) {
      macroValidPointer (currentContextProperty) ;
      generatedZone3 << ",\n"
                        "                                                "
                     << "GGS_" << currentContextProperty->mInfo.mTypeName
                     << " * _in_" << currentContextProperty->mKey ;
      currentContextProperty = currentContextProperty->nextObject () ;
    }
    generatedZone3 << ") ;\n" ;

  //--- Attributes                 
    generatedZone3 << "//--- Properties\n" ;
    currentProperty = currentEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        generatedZone3 << "  public : GGS_" << currentProperty->mInfo.mTypeName
                       << " " << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
      case GGS_metamodelPropertyKind::enum_contextProperty:
        generatedZone3 << "  public : GGS_" << currentProperty->mInfo.mTypeName
                       << " * " << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_fetchedProperty:
        generatedZone3 << "  public : GGS_" << currentProperty->mInfo.mTypeName
                       << " * " << currentProperty->mKey << " ;\n"
                       << "  public : uint32 _indexOf_" << currentProperty->mKey << " ;\n"  ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << "  public : GGS__listOf_" << currentProperty->mInfo.mTypeName
                       << " " << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_mapProperty:
        generatedZone3 << "  public : C_GGS_entityMap "
                       << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::kNotBuilt:
      case GGS_metamodelPropertyKind::enum_relationProperty:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }
  //--- 'description' reader                 
    generatedZone3 << "//--- 'description' reader\n"
                      "  public : virtual GGS_string reader_description (void) const"
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
  generatedZone3.writeCHyphenLineComment () ;
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
generate_metamodel_cpp_file (C_Lexique & inLexique,
                             GGS_entityToImplementMap & ioEntityMap,
                             const GGS_lstring & inMetamodelComponentName,
                             const GGS_stringset & inMultipleReferencedEntities,
                             const GGS_lstring & inRootEntityName) {
  C_String generatedZone2 ;
//--- Include declaration of header file
  generatedZone2 << "#include \"" << inMetamodelComponentName << ".h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n" ;
  
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (200000) ;
  
  generatedZone3.writeCTitleComment ("Checking Metamodel") ;
    generatedZone3 << "void _checkMetamodel_" << inMetamodelComponentName
                   << " (C_Lexique & _inLexique, GGS_" << inRootEntityName << " * & ioRootObject) {\n"
                      "  if (ioRootObject != NULL) {\n"
                      "    macroValidPointer (ioRootObject) ;\n"
                      "    // const GGS_string s = ioRootObject->reader_description () ;\n"
                      "    // printf (\"%s\\n\", s.cString ()) ;\n"
                      "  //--- Build owner links\n"
                      "    bool ok = true ;\n"
                      "    ioRootObject->buildOwnerLinksAndMaps (_inLexique, NULL, ok) ;\n"
                      "    if (! ok) {\n"
                      "      macroMyDelete (ioRootObject, GGS_" << inRootEntityName << ") ;\n"
                      "    }\n"
                      "  }\n"
                      "}\n" ;

//--- Generate Implementations of Lists
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Implementation of GGS__listOf_") + currentMultipleReferencedEntity->mKey + " Class") ;
    generatedZone3 << "GGS__listOf_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGS__listOf_" << currentMultipleReferencedEntity->mKey << " (void)\n"
                      ":mFirstObject (NULL), mLastObject (NULL) {\n"
                      "}\n\n" ;
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "GGS__listOf_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGS__listOf_" << currentMultipleReferencedEntity->mKey << " ("
                      "GGS__listOf_" << currentMultipleReferencedEntity->mKey << " & ioSource)\n"
                      ":mFirstObject (ioSource.mFirstObject), mLastObject (ioSource.mLastObject) {\n"
                      "  ioSource.mFirstObject = NULL ;\n"
                      "  ioSource.mLastObject = NULL ;\n"
                      "}\n\n" ;
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "GGS__listOf_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "~GGS__listOf_" << currentMultipleReferencedEntity->mKey << " (void) {\n"
                      "  while (mFirstObject != NULL) {\n"
                      "    GGS_" << currentMultipleReferencedEntity->mKey << " * p = mFirstObject->_mNextObject ;\n"
                      "    delete mFirstObject ;\n"
                      "    mFirstObject = p ;\n"
                      "  }\n"
                      "}\n\n" ;
    generatedZone3.writeCHyphenLineComment () ;
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
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "GGS_string GGS__listOf_" << currentMultipleReferencedEntity->mKey
                   << "::\n"
                      "reader_description (void) const {\n"
                      "  C_String s ;\n"
                      "  s << \"<list @" << currentMultipleReferencedEntity->mKey << " \" ;\n"
                      "  GGS_" << currentMultipleReferencedEntity->mKey << " * p = mFirstObject ;\n"
                      "  while (p != NULL) {\n"
                      "    s << p->reader_description () ;\n"
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
    generatedZone3.writeCTitleComment (C_String ("Implementation of GGS_") + currentEntity->mKey + " Class") ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
    generatedZone3 << "GGS_" << currentEntity->mKey << "::\n"
                      "GGS_" << currentEntity->mKey << " (" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentEntity->mInfo.mAllPropertiesMap.firstObject () ;
    bool first = true ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        if (first) {
          first = false ;
        }else{
          generatedZone3 << ",\n                             " ;
        }
        generatedZone3 << "GGS_" << currentProperty->mInfo.mTypeName
                       << " & _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        if (first) {
          first = false ;
        }else{
          generatedZone3 << ",\n                             " ;
        }
        generatedZone3 << "GGS_" << currentProperty->mInfo.mTypeName
                       << " * _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        if (first) {
          first = false ;
        }else{
          generatedZone3 << ",\n                             " ;
        }
        generatedZone3 << "GGS__listOf_" << currentProperty->mInfo.mTypeName
                       << " & _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_mapProperty:
      case GGS_metamodelPropertyKind::enum_contextProperty:
      case GGS_metamodelPropertyKind::enum_fetchedProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
      case GGS_metamodelPropertyKind::enum_relationProperty:
        break ;
      }
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
    currentProperty = currentEntity->mInfo.mAllPropertiesMap.firstObject () ;
    const sint32 inheritedPropertyCount = currentEntity->mInfo.mAllPropertiesMap.count ()
                                        - currentEntity->mInfo.mEntityPropertiesMap.count () ;
    first = true ;
    for (sint32 i=0 ; i<inheritedPropertyCount ; i++) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        if (first) {
          first = false ;
        }else{
          generatedZone3 << ",\n                             " ;
        }
        generatedZone3 << "_in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_mapProperty:
      case GGS_metamodelPropertyKind::enum_contextProperty:
      case GGS_metamodelPropertyKind::enum_fetchedProperty:
      case GGS_metamodelPropertyKind::enum_relationProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }
    if (first) {
      generatedZone3 << "THERE" ;
    }else{
      generatedZone3 << "\n                             "
                        "COMMA_THERE" ;
    }
    generatedZone3 << "),\n"
                      "_mNextObject (NULL), _mOwnerObject (NULL)" ;
    currentProperty = currentEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        generatedZone3 << ",\n" << currentProperty->mKey << " (_in_" << currentProperty->mKey << ")" ;
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << ",\n" << currentProperty->mKey << " (_in_" << currentProperty->mKey << ")" ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << ",\n" << currentProperty->mKey << " (_in_" << currentProperty->mKey << ")" ;
        break ;
      case GGS_metamodelPropertyKind::enum_mapProperty:
      case GGS_metamodelPropertyKind::enum_fetchedProperty:
      case GGS_metamodelPropertyKind::enum_contextProperty:
      case GGS_metamodelPropertyKind::enum_relationProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << " {\n" ;
    GGS_mapPropertyMap::element_type * currentMapProperty = currentEntity->mInfo.mMapOfPropertyMaps.firstObject () ;
    while (currentMapProperty != NULL) {
      macroValidPointer (currentMapProperty) ;
      generatedZone3 << " " << currentMapProperty->mKey << ".setErrorMessages (" ;
      generatedZone3.writeCstringConstant (currentMapProperty->mInfo.mInsertErrorMessage) ;
      generatedZone3 << ", " ;
      generatedZone3.writeCstringConstant (currentMapProperty->mInfo.mSearchErrorMessage) ;      
      generatedZone3 << ") ;\n" ;
      currentMapProperty = currentMapProperty->nextObject () ;
    }
    generatedZone3 << "}\n\n" ;

    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "GGS_" << currentEntity->mKey << "::\n"
                      "~GGS_" << currentEntity->mKey << " (void) {\n" ;
    currentProperty = currentEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  delete " << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_attributeProperty:
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
      case GGS_metamodelPropertyKind::enum_mapProperty:
      case GGS_metamodelPropertyKind::enum_fetchedProperty:
      case GGS_metamodelPropertyKind::enum_contextProperty:
      case GGS_metamodelPropertyKind::enum_relationProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "}\n\n" ;

    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "void GGS_" << currentEntity->mKey << "::\n"
                      "buildOwnerLinksAndMaps (C_Lexique & _inLexique,\n"
                      "                        C_GGS_Object * _inOwner,\n"
                      "                        bool & _ioOk" ;
    GGS_contextPropertyMap::element_type * currentContextProperty = currentEntity->mInfo.mAllContextAttributes.firstObject () ;
    while (currentContextProperty != NULL) {
      macroValidPointer (currentContextProperty) ;
      generatedZone3 << ",\n"
                        "                        "
                     << "GGS_" << currentContextProperty->mInfo.mTypeName
                     << " * _in_" << currentContextProperty->mKey ;
      currentContextProperty = currentContextProperty->nextObject () ;
    }
      generatedZone3 << ") {\n" ;
    if (currentEntity->mInfo.mSuperEntityName != "") {
      generatedZone3 << "  GGS_" << currentEntity->mInfo.mSuperEntityName << "::buildOwnerLinksAndMaps (_inLexique"
                        ", _inOwner, _ioOk" ;
      currentContextProperty = currentEntity->mInfo.mAllContextAttributes.firstObject () ;
      while (currentContextProperty != NULL) {
        macroValidPointer (currentContextProperty) ;
        generatedZone3 << ", _in_" << currentContextProperty->mKey ;
        currentContextProperty = currentContextProperty->nextObject () ;
      }
      generatedZone3 << ") ;\n" ;
    }else{
      generatedZone3 << "  _mOwnerObject = _inOwner ;\n" ;
    }
      currentProperty = currentEntity->mInfo.mEntityPropertiesMap.firstObject () ;
      while (currentProperty != NULL) {
        macroValidPointer (currentProperty) ;
        switch (currentProperty->mInfo.mKind.enumValue ()) {
        case GGS_metamodelPropertyKind::enum_contextProperty:
          generatedZone3 << "  " << currentProperty->mKey
                         << " = _in_" << currentProperty->mKey << " ;\n"
                            "  macroValidObject (" << currentProperty->mKey << ") ;\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_attributeProperty:
        case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        case GGS_metamodelPropertyKind::enum_mapProperty:
        case GGS_metamodelPropertyKind::enum_fetchedProperty:
        case GGS_metamodelPropertyKind::enum_relationProperty:
        case GGS_metamodelPropertyKind::kNotBuilt:
          break ;
        }
        currentProperty = currentProperty->nextObject ();
      }
      currentProperty = currentEntity->mInfo.mEntityPropertiesMap.firstObject () ;
      while (currentProperty != NULL) {
        macroValidPointer (currentProperty) ;
        GGS_L_ListOfPropertyPathes::element_type * currentPathList = currentProperty->mInfo.mPropertyOptionPathes.firstObject () ;
        switch (currentProperty->mInfo.mKind.enumValue ()) {
        case GGS_metamodelPropertyKind::enum_attributeProperty:
          break ;
        case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
          generatedZone3 << "  " << currentProperty->mKey << "->buildOwnerLinksAndMaps (_inLexique, this, _ioOk" ;
          while (currentPathList != NULL) {
            generatedZone3 << ", this" ;
            GGS_L_propertyPath::element_type * currentPath = currentPathList->mPath.firstObject () ;
            while (currentPath != NULL) {
              generatedZone3 << "->" << currentPath->mPathElement ;
              currentPath = currentPath->nextObject () ;
            }
            currentPathList = currentPathList->nextObject () ;
          }
          generatedZone3 << ") ;\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
          generatedZone3 << "  GGS_" << currentProperty->mInfo.mTypeName << " * _p_" << currentProperty->mKey
                         << " = " << currentProperty->mKey << ".mFirstObject ;\n"
                            "  while (_p_" << currentProperty->mKey << " != NULL) {\n"
                            "    _p_" << currentProperty->mKey << "->buildOwnerLinksAndMaps (_inLexique, this, _ioOk" ;
          while (currentPathList != NULL) {
            generatedZone3 << ", this" ;
            GGS_L_propertyPath::element_type * currentPath = currentPathList->mPath.firstObject () ;
            while (currentPath != NULL) {
              generatedZone3 << "->" << currentPath->mPathElement ;
              currentPath = currentPath->nextObject () ;
            }
            currentPathList = currentPathList->nextObject () ;
          }
          generatedZone3 << ") ;\n"
                            "    _p_" << currentProperty->mKey << " = _p_" << currentProperty->mKey << "->_mNextObject ;\n"
                            "  }\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_mapProperty:
        case GGS_metamodelPropertyKind::enum_contextProperty:
        case GGS_metamodelPropertyKind::enum_fetchedProperty:
        case GGS_metamodelPropertyKind::enum_relationProperty:
        case GGS_metamodelPropertyKind::kNotBuilt:
          break ;
        }
        currentProperty = currentProperty->nextObject () ;
      }
      GGS_mapPropertyMap::element_type * currentMap = currentEntity->mInfo.mMapOfPropertyMaps.firstObject () ;
      sint32 index = 0 ;
      while (currentMap != NULL) {
        index ++ ;
        macroValidPointer (currentMap) ;
        generatedZone3 << "//--- Build '" << currentMap->mKey << "' map\n" ;
        GGS_L_ListOfPropertyPathes::element_type * currentPathList = currentMap->mInfo.mListOfPropertyPathes.firstObject () ;
        while (currentPathList != NULL) {
          macroValidPointer (currentPathList) ;
          C_String epilogueString ;
          GGS_L_propertyPath::element_type * currentPath = currentPathList->mPath.firstObject () ;
          GGS_entityPropertyMap currentPropertyMap = currentEntity->mInfo.mAllPropertiesMap ;
          const sint32 pathLength = currentPathList->mPath.count () ;
          for (sint32 i=1 ; i<pathLength ; i++) {
            GGS_metamodelPropertyKind var_cas_kind ;
            GGS_lstring  var_cas_typeName ;
            GGS_L_ListOfPropertyPathes pathes ;
            if (currentPath->mPathElement.readCharOrNul (0 COMMA_HERE) == '.') {
              const C_String typeName = currentPath->mPathElement.pathExtension () ;
              generatedZone3.appendSpaces (i + i) ;
              generatedZone3 << "GGS_" << typeName << " * _current_" << index << "_" << i
                             << " = dynamic_cast <GGS_" << typeName << " *> (" ;
              if (i > 1) {
                generatedZone3 << "_current_" << index << "_" << (i-1) ;
              }else{
                generatedZone3 << "this" ;
              }
              generatedZone3 << ") ;\n" ;
              generatedZone3.appendSpaces (i + i) ;
              generatedZone3 << "if (_current_" << index << "_" << i << " != NULL) {\n" ;
              C_String s ;
              s.appendSpaces (i + i) ;
              s << "}\n" ;
              epilogueString = s + epilogueString ;                  
            }else{
              currentPropertyMap.methode_searchKey (inLexique, currentPath->mPathElement, var_cas_kind, var_cas_typeName, pathes) ;
              switch (var_cas_kind.enumValue ()) {
              case GGS_metamodelPropertyKind::enum_attributeProperty:
                break ;
              case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
                { generatedZone3.appendSpaces (i + i) ;
                  generatedZone3 << "GGS_" << var_cas_typeName << " * _current_" << index << "_" << i << " = " << currentPath->mPathElement << ".firstObject () ;\n" ;
                  generatedZone3.appendSpaces (i + i) ;
                  generatedZone3 << "if (_current_" << index << "_" << i << " != NULL) {\n" ;
                  generatedZone3.appendSpaces (i + i + 2) ;
                  generatedZone3 << "macroValidObject (_current_" << index << "_" << i << ") ;\n" ;
                  C_String s ;
                  s.appendSpaces (i + i) ;
                  s << "}\n" ;
                  epilogueString = s + epilogueString ;
                  GGS_bool var_cas_7574 ;
                  GGS_entityPropertyMap  var_cas_7577 ;
                  GGS_lstring  var_cas_7580 ;
                  GGS_mapPropertyMap  var_cas_7583 ;
                  GGS_contextPropertyMap allContextPropertyMap ;
                  GGS_fetchedPropertyMap fetchedPropertyMap ;
                  GGS_fetchedPropertyMap allFetchedPropertyMap ;
                  ioEntityMap.methode_searchKey (inLexique, var_cas_typeName, currentPropertyMap,
                                                 var_cas_7574, var_cas_7577, var_cas_7580, var_cas_7583,
                                                 allContextPropertyMap,
                                                 fetchedPropertyMap, allFetchedPropertyMap) ;
                }
                break ;
              case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
                { generatedZone3.appendSpaces (i + i) ;
                  generatedZone3 << "GGS_" << var_cas_typeName << " * _current_" << index << "_" << i << " = " << currentPath->mPathElement << ".firstObject () ;\n" ;
                  generatedZone3.appendSpaces (i + i) ;
                  generatedZone3 << "while (_current_" << index << "_" << i << " != NULL) {\n" ;
                  generatedZone3.appendSpaces (i + i + 2) ;
                  generatedZone3 << "macroValidObject (_current_" << index << "_" << i << ") ;\n" ;
                  C_String s ;
                  s.appendSpaces (i + i + 2) ;
                  s << "_current_" << index << "_" << i << " = _current_" << index << "_" << i << "->_mNextObject ;\n" ;
                  s.appendSpaces (i + i) ;
                  s << "}\n" ;
                  epilogueString = s + epilogueString ;
                  GGS_bool var_cas_7574 ;
                  GGS_entityPropertyMap  var_cas_7577 ;
                  GGS_lstring  var_cas_7580 ;
                  GGS_mapPropertyMap  var_cas_7583 ;
                  GGS_contextPropertyMap contextPropertyMap ;
                  GGS_contextPropertyMap allContextPropertyMap ;
                  GGS_fetchedPropertyMap fetchedPropertyMap ;
                  GGS_fetchedPropertyMap allFetchedPropertyMap ;
                  ioEntityMap.methode_searchKey (inLexique, var_cas_typeName, currentPropertyMap,
                                                 var_cas_7574, var_cas_7577, var_cas_7580, var_cas_7583,
                                                 allContextPropertyMap,
                                                 fetchedPropertyMap, allFetchedPropertyMap) ;
                }
                break ;
              case GGS_metamodelPropertyKind::enum_contextProperty:
              case GGS_metamodelPropertyKind::enum_mapProperty:
              case GGS_metamodelPropertyKind::enum_fetchedProperty:
              case GGS_metamodelPropertyKind::enum_relationProperty:
              case GGS_metamodelPropertyKind::kNotBuilt:
                break ;
              }
            }
            currentPath = currentPath->nextObject () ;
          }
          generatedZone3.appendSpaces (pathLength + pathLength) ;
          generatedZone3 << currentMap->mKey << ".insertObject (_inLexique, _current_" << index << "_"
                         << (pathLength - 1) << "->" << currentPath->mPathElement
                         << ", _current_" << index << "_" << (pathLength - 1)
                         << ", _ioOk) ;\n"
                         << epilogueString ;
          currentPathList = currentPathList->nextObject () ;
        }
        currentMap = currentMap->nextObject () ;
      }
    //--- Fetched properties
    GGS_fetchedPropertyMap::element_type * fetchedProperty = currentEntity->mInfo.mFetchedPropertyMap.firstObject () ;
    while (fetchedProperty != NULL) {
      macroValidPointer (fetchedProperty) ;
      generatedZone3 << "  " << fetchedProperty->mKey << " = (GGS_" << fetchedProperty->mInfo.mTypeName << " *) " ;
      GGS_L_propertyPath::element_type * pathElement = fetchedProperty->mInfo.mPath.firstObject () ;
      bool first = true ;
      while (pathElement != NULL) {
        macroValidPointer (pathElement) ;
        if (first) { first = false ; }else{ generatedZone3 << "->" ; }
        generatedZone3 << pathElement->mPathElement ;
        pathElement = pathElement->nextObject () ;
      }
      generatedZone3 << ".searchKey (_inLexique, " << fetchedProperty->mInfo.mAttributeName
                     << ", _indexOf_" << fetchedProperty->mKey << ", _ioOk) ;\n" ;
      fetchedProperty = fetchedProperty->nextObject () ;
    }
    generatedZone3 << "}\n\n" ;
    
    if (! currentEntity->mInfo.mIsAbstract.boolValue ()) {
      generatedZone3.writeCHyphenLineComment () ;
      generatedZone3 << "GGS_string GGS_" << currentEntity->mKey << "::reader_description (void) const {\n"
                        "  C_String s ;\n"
                        "  s << \"<@" << currentEntity->mKey << " {\"\n" ;
      currentProperty = currentEntity->mInfo.mEntityPropertiesMap.firstObject () ;
      while (currentProperty != NULL) {
        macroValidPointer (currentProperty) ;
        switch (currentProperty->mInfo.mKind.enumValue ()) {
        case GGS_metamodelPropertyKind::enum_attributeProperty:
          generatedZone3 << "    << " << currentProperty->mKey << ".reader_description ()\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
          generatedZone3 << "    << " << currentProperty->mKey << "->reader_description ()\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
          generatedZone3 << "    << " << currentProperty->mKey << ".reader_description ()\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_mapProperty:
        case GGS_metamodelPropertyKind::enum_fetchedProperty:
        case GGS_metamodelPropertyKind::enum_contextProperty:
        case GGS_metamodelPropertyKind::enum_relationProperty:
        case GGS_metamodelPropertyKind::kNotBuilt:
          break ;
        }
        currentProperty = currentProperty->nextObject () ;
      }
      generatedZone3 << "    << \"}>\" ;\n"
                        "  return GGS_string (true, s) ;\n"
                        "}\n\n" ;
    }
    currentEntity = currentEntity->nextObject () ;
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
routine_generate_metamodel (C_Lexique & inLexique,
                            GGS_entityToImplementMap & ioEntityMap,
                            GGS_lstring inMetamodelComponentName,
                            GGS_stringset inMultipleReferencedEntities,
                            GGS_lstring inRootEntityName) {
  if (inLexique.galgas_IO_Ptr ()->currentFileErrorsCount () == 0) {
  //--- Generate header file
    generate_metamodel_header_file (inLexique, ioEntityMap, inMetamodelComponentName,
                                    inMultipleReferencedEntities, inRootEntityName) ;
  //--- Generate implementation file
    generate_metamodel_cpp_file (inLexique, ioEntityMap, inMetamodelComponentName,
                                 inMultipleReferencedEntities, inRootEntityName) ;
  }
}

//---------------------------------------------------------------------------*
