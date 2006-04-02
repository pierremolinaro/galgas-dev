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

static GGS_lstring
entityForProperty (C_Lexique & inLexique,
                   GGS_entityToImplementMap & inEntityMap,
                   const GGS_lstring & inEntityName,
                   const GGS_lstring & inPropertyName) {
  GGS_entityPropertyMap  entityPropertyMap ;
  GGS_bool var_cas_8635 ;
  GGS_entityPropertyMap  allPropertiesMap ;
  GGS_lstring  var_cas_8641 ;
  inEntityMap.methode_searchKey (inLexique, inEntityName, entityPropertyMap,
                                 var_cas_8635, allPropertiesMap, var_cas_8641
                                 COMMA_HERE) ;
//---
  GGS_metamodelPropertyKind var_cas_kind ;
  GGS_lstring  var_cas_propertyTypeName ;
  allPropertiesMap.methode_searchKey (inLexique, inPropertyName, var_cas_kind,
                                      var_cas_propertyTypeName
                                      COMMA_HERE) ;
//---
  return var_cas_propertyTypeName ;
}

//---------------------------------------------------------------------------*

static void
generate_metamodel_header_file (C_Lexique & inLexique,
                                const GGS_entityToImplementMap & inEntityMap,
                                const GGS_mapEntityMap & inMapEntityMap,
                                const GGS_lstring & inMetamodelComponentName,
                                const GGS_lstring & inConstraintComponentName,
                                const GGS_constrainedEntityMap & inConstrainedEntityMap,
                                const GGS_constraintToImplementMap & inConstraintToImplementMap,
                                const GGS_stringset & inMultipleReferencedEntities,
                                const GGS_lstring & inRootEntityName) {
  C_String generatedZone2 ;
  generatedZone2 << "#ifndef " << inConstraintComponentName << "_CONSTRAINTS_DEFINED\n"
                 << "#define " << inConstraintComponentName << "_CONSTRAINTS_DEFINED\n"
                 << "\n#include <string.h>\n\n" ;

//--- Include declaration of predefined types
  generatedZone2 << "#include \"" << inMetamodelComponentName << ".h\"\n"
                    "#include \"galgas/C_GGS_entityMap.h\"\n"
                    "\n" ;
  
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (20000) ;
//--- Generate entities predeclarations
  generatedZone3.writeCTitleComment ("Class Predeclarations") ;
  GGS_constrainedEntityMap::element_type * currentConstrainedEntity = inConstrainedEntityMap.firstObject () ;
  while (currentConstrainedEntity != NULL) {
    macroValidPointer (currentConstrainedEntity) ;
    generatedZone3 << "class GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " ;\n" ;
    currentConstrainedEntity = currentConstrainedEntity->nextObject () ;
  }
  GGS_mapEntityMap::element_type * currentMap = inMapEntityMap.firstObject () ;
  while (currentMap != NULL) {
    macroValidPointer (currentMap) ;
    generatedZone3 << "class GGS_" << currentMap->mKey << " ;\n" ;
    currentMap = currentMap->nextObject () ;
  }
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3 << "class GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " ;\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }
  generatedZone3 << "\n"
                    "void _addConstraintsTo_" << inConstraintComponentName
                 << " (C_Lexique & _inLexique,\n"
                    "                  GGS_" << inRootEntityName << " * inRootObject,\n"
                    "                  GGS__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << " * & ioRootObjectConstraint) ;\n"
                    "\n" ;
  
//--- Generate map of entities declarations
  currentMap = inMapEntityMap.firstObject () ;
  while (currentMap != NULL) {
    macroValidPointer (currentMap) ;
    generatedZone3.writeCTitleComment (C_String ("Declaration of GGS_") + currentMap->mKey + " Map") ;
    generatedZone3 << "class GGS_" << currentMap->mKey << " : public C_GGS_entityMap {\n"
                      "//--- Default Constructor\n"
                      "  public : GGS_" << currentMap->mKey << " (LOCATION_ARGS) ;\n"
                      "//--- First object accessor\n"
                      "  public : GGS_" << currentMap->mInfo.mElementEntityName << " * firstObject (void) ;\n"
                      "} ;\n\n" ;
    currentMap = currentMap->nextObject () ;
  }
  
//--- Generate list of entities declarations
  currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Declaration of GGS__listOfConstraint_") + currentMultipleReferencedEntity->mKey + " Class") ;
    generatedZone3 << "class GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " {\n"
                      "//--- Default Constructor\n"
                      "  public : GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " (void) ;\n"
                      "//--- Destructor\n"
                      "  public : ~GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " (void) ;\n"
                      "//--- Copy destroy source\n"
                      "  public : GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey
                   << " (GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "&) ;\n"
                      "  private : void operator = "
                      " (GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "&) ;\n"
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
  currentConstrainedEntity = inConstrainedEntityMap.firstObject () ;
  while (currentConstrainedEntity != NULL) {
    macroValidPointer (currentConstrainedEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Declaration of GGS__") + inConstraintComponentName + "_ConstraintOn_" + currentConstrainedEntity->mKey + " Class") ;
    generatedZone3 << "class GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " : public " ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName.length () == 0) {
      generatedZone3 << "C_GGS_Object" ;
    }else{
      generatedZone3 << "GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mInfo.mSuperEntityName ;
    }
    generatedZone3 << " {\n" ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName.length () == 0) {
      generatedZone3 << "//--- Next Object in a list\n"
                        "  public : GGS__" << inConstraintComponentName
                     << "_ConstraintOn_"<< currentConstrainedEntity->mKey << " * _mNextObject ;\n" ;
    }
  //--- Constructor
    generatedZone3 << "//--- Constructor\n"
                      "  public : GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " (" ;
    bool first = true ;
/*    GGS_entityPropertyMap::element_type * currentProperty = currentConstrainedEntity->mInfo.mAllPropertiesMap.firstObject () ;
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
        generatedZone3 << "GGS__listOfConstraint_" << currentProperty->mInfo.mTypeName
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
    }*/
    if (first) {
      generatedZone3 << "LOCATION_ARGS" ;
    }else{
      generatedZone3 << "\n                             "
                        "COMMA_LOCATION_ARGS" ;
    }
    generatedZone3 << ") ;\n" ;
    generatedZone3 << "//--- Destructor\n"
                      "  public : virtual ~GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " (void) ;\n"
                      "//--- Build Owner links and Maps\n"
                      "  public : virtual void buildMaps (C_Lexique & _inLexique,\n"
                      "                                                bool & _ioOk" ;
/*    GGS_contextPropertyMap::element_type * currentContextProperty = currentConstrainedEntity->mInfo.mAllContextAttributes.firstObject () ;
    while (currentContextProperty != NULL) {
      macroValidPointer (currentContextProperty) ;
      generatedZone3 << ",\n"
                        "                                                "
                     << "GGS_" << currentContextProperty->mInfo.mTypeName
                     << " * _in_" << currentContextProperty->mKey ;
      currentContextProperty = currentContextProperty->nextObject () ;
    }*/
    generatedZone3 << ") ;\n" ;

  //--- Attributes                 
    generatedZone3 << "//--- Fetch properties\n"
                      "  public : virtual void fetchProperties (C_Lexique & _inLexique,\n"
                      "                                         bool & _ioOk) ;\n"
                      "//--- Build relations\n"
                      "  public : virtual void buildRelations (C_Lexique & _inLexique,\n"
                      "                                         bool & _ioOk) ;\n"
                      "//--- Properties\n" ;
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
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
                       << " * " << currentProperty->mKey << " ;\n"  ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << "  public : GGS__listOfConstraint_" << currentProperty->mInfo.mTypeName
                       << " " << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_mapProperty:
        generatedZone3 << "  public : GGS_" << currentProperty->mInfo.mTypeName
                       << " * " << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_relationProperty:
        generatedZone3 << "  public : C_BDD " << currentProperty->mKey << " ;\n" ;
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }*/
    generatedZone3 << "//--- Indexes\n" ;
/*    GGS_indexMap::element_type * currentIndex = currentEntity->mInfo.mIndexMap.firstObject () ;
    while (currentIndex != NULL) {
      macroValidPointer (currentIndex) ;
      generatedZone3 << "  public : uint32 " << currentIndex->mKey << " ;\n" ;
      currentIndex = currentIndex->nextObject () ;
    }*/
  //--- 'description' reader                 
    generatedZone3 << "//--- 'description' reader\n"
                      "  public : virtual GGS_string reader_description (void) const"
//                   << (currentEntity->mInfo.mIsAbstract.boolValue () ? " = 0" : "")
                   << " ;\n" ;
  //--- Friend Declaration                 
//    generatedZone3 << "//--- Friend Class\n"
//                      "  friend class GGS__listOfConstraint_" << currentEntity->mKey << " ;\n" ;
  //--- End of Class Declaration                 
    generatedZone3 << "} ;\n\n" ;
    currentConstrainedEntity = currentConstrainedEntity->nextObject () ;
  }
  
//--- End of ".h" file
  generatedZone3.writeCHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile ("//",
                          inConstraintComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

static void
generate_metamodel_cpp_file (C_Lexique & inLexique,
                             const GGS_entityToImplementMap & inEntityMap,
                             const GGS_mapEntityMap & inMapEntityMap,
                             const GGS_lstring & inMetamodelComponentName,
                             const GGS_lstring & inConstraintComponentName,
                             const GGS_constrainedEntityMap & inConstrainedEntityMap,
                             const GGS_constraintToImplementMap & inConstraintToImplementMap,
                             const GGS_stringset & inMultipleReferencedEntities,
                             const GGS_lstring & inRootEntityName) {
  C_String generatedZone2 ;
//--- Include declaration of header file
  generatedZone2 << "#include \"" << inConstraintComponentName << ".h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n\n" ;
  generatedZone2.writeCHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  static const char gGGSsourceFile [] = \"" << inLexique.sourceFileName ().lastPathComponent () << "\" ;\n"
                    "  #define SOURCE_FILE_AT_LINE(line) , gGGSsourceFile, line\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

  C_String generatedZone3 ; generatedZone3.setAllocationExtra (200000) ;
  
  generatedZone3.writeCTitleComment ("Adding Constraints To Metamodel") ;
  generatedZone3 << "void _addConstraintsTo_" << inConstraintComponentName
                 << " (C_Lexique & _inLexique,\n"
                    "                  GGS_" << inRootEntityName << " * inRootObject,\n"
                    "                  GGS__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << " * & ioRootObjectConstraint) {\n"
                    "  macroMyDelete (ioRootObjectConstraint, GGS__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << ") ;\n"
                    "  if (inRootObject != NULL) {\n"
                    "    macroValidPointer (inRootObject) ;\n"
                    "    // const GGS_string s = inRootObject->reader_description () ;\n"
                    "    // printf (\"%s\\n\", s.cString ()) ;\n"
                    "  //--- Build object tree\n"
                    "    macroMyNew (ioRootObjectConstraint, GGS__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << " (HERE)) ;\n"
                    "  //--- Build owner links\n"
                    "    bool ok = true ;\n"
                    "//    inRootObject->buildMaps (_inLexique, NULL, ok) ;\n"
                    "    if (ok) {\n"
                    "//      inRootObject->fetchProperties (_inLexique, ok) ;\n"
                    "    }\n"
                    "    if (ok) {\n"
                    "//      inRootObject->buildRelations (_inLexique, ok) ;\n"
                    "    }\n"
                    "    if (! ok) {\n"
                    "      macroMyDelete (ioRootObjectConstraint, GGS__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << ") ;\n"
                    "    }\n"
                    "  }\n"
                    "}\n\n" ;

//--- Generate map of entities declarations
  GGS_mapEntityMap::element_type * currentMap = inMapEntityMap.firstObject () ;
  while (currentMap != NULL) {
    macroValidPointer (currentMap) ;
    generatedZone3.writeCTitleComment (C_String ("Implementation of GGS_") + currentMap->mKey + " Map") ;
    generatedZone3 << "GGS_" << currentMap->mKey << "::GGS_" << currentMap->mKey << " (LOCATION_ARGS)\n"
                      ":C_GGS_entityMap (THERE) {\n"
                   << "  setErrorMessages (" ;
    generatedZone3.writeCstringConstant (currentMap->mInfo.mInsertErrorMessage) ;
    generatedZone3 << ",\n"
                      "                    " ;
    generatedZone3.writeCstringConstant (currentMap->mInfo.mSearchErrorMessage) ;      
    generatedZone3 << ") ;\n"
                      "}\n\n" ;
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "GGS_" << currentMap->mInfo.mElementEntityName << " * GGS_" << currentMap->mKey << "::firstObject (void) {\n"
                      "  return (GGS_" << currentMap->mInfo.mElementEntityName << " *) mFirstItem ;\n"
                      "}\n\n" ;
    currentMap = currentMap->nextObject () ;
  }

//--- Generate Implementations of Lists
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Implementation of GGS__listOfConstraint_") + currentMultipleReferencedEntity->mKey + " Class") ;
    generatedZone3 << "GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " (void)\n"
                      ":mFirstObject (NULL), mLastObject (NULL) {\n"
                      "}\n\n" ;
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " ("
                      "GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " & ioSource)\n"
                      ":mFirstObject (ioSource.mFirstObject), mLastObject (ioSource.mLastObject) {\n"
                      "  ioSource.mFirstObject = NULL ;\n"
                      "  ioSource.mLastObject = NULL ;\n"
                      "}\n\n" ;
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "~GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " (void) {\n"
                      "  while (mFirstObject != NULL) {\n"
                      "    GGS_" << currentMultipleReferencedEntity->mKey << " * p = mFirstObject->_mNextObject ;\n"
                      "    delete mFirstObject ;\n"
                      "    mFirstObject = p ;\n"
                      "  }\n"
                      "}\n\n" ;
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << " void GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey
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
    generatedZone3 << "GGS_string GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey
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
  GGS_constrainedEntityMap::element_type * currentConstrainedEntity = inConstrainedEntityMap.firstObject () ;
  while (currentConstrainedEntity != NULL) {
    macroValidPointer (currentConstrainedEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Implementation of GGS__") + inConstraintComponentName + "_ConstraintOn_" + currentConstrainedEntity->mKey + " Class") ;
    const C_String superClass = currentConstrainedEntity->mInfo.mSuperEntityName ;
    generatedZone3 << "GGS__" << inConstraintComponentName << "_ConstraintOn_"  << currentConstrainedEntity->mKey << "::\n"
                      "GGS__" << inConstraintComponentName << "_ConstraintOn_"  << currentConstrainedEntity->mKey << " (" ;
//    GGS_entityPropertyMap::element_type * currentProperty = currentConstrainedEntity->mInfo.mAllPropertiesMap.firstObject () ;
    bool first = true ;
/*    while (currentProperty != NULL) {
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
        generatedZone3 << "GGS__listOfConstraint_" << currentProperty->mInfo.mTypeName
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
    }*/
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
      generatedZone3 << "GGS__" << inConstraintComponentName << "_ConstraintOn_" << superClass ;
    }
    generatedZone3 << " (" ;
/*    currentProperty = currentConstrainedEntity->mInfo.mAllPropertiesMap.firstObject () ;
    const sint32 inheritedPropertyCount = currentConstrainedEntity->mInfo.mAllPropertiesMap.count ()
                                        - currentConstrainedEntitycurrentConstrainedEntity->mInfo.mEntityPropertiesMap.count () ;
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
    }*/
    if (first) {
      generatedZone3 << "THERE" ;
    }else{
      generatedZone3 << "\n                             "
                        "COMMA_THERE" ;
    }
    generatedZone3 << ")" ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName.length () == 0) {
      generatedZone3 << ",\n"    
                        "_mNextObject (NULL)" ;
    }
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
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
        generatedZone3 << ",\n" << currentProperty->mKey << " (NULL)" ;
        break ;
      case GGS_metamodelPropertyKind::enum_fetchedProperty:
      case GGS_metamodelPropertyKind::enum_contextProperty:
      case GGS_metamodelPropertyKind::enum_relationProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }*/
    generatedZone3 << " {\n" ;
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_mapProperty:
        generatedZone3 << "  macroMyNew (" << currentProperty->mKey
                       << ", GGS_" << currentProperty->mInfo.mTypeName << " (HERE)) ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_fetchedProperty:
      case GGS_metamodelPropertyKind::enum_contextProperty:
      case GGS_metamodelPropertyKind::enum_relationProperty:
      case GGS_metamodelPropertyKind::enum_attributeProperty:
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }*/
    generatedZone3 << "}\n\n" ;

    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << "::\n"
                      "~GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " (void) {\n" ;
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
      case GGS_metamodelPropertyKind::enum_mapProperty:
        generatedZone3 << "  macroMyDelete (" << currentProperty->mKey
                       << ", GGS_" << currentProperty->mInfo.mTypeName << ") ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_attributeProperty:
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
      case GGS_metamodelPropertyKind::enum_fetchedProperty:
      case GGS_metamodelPropertyKind::enum_contextProperty:
      case GGS_metamodelPropertyKind::enum_relationProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }*/
    generatedZone3 << "}\n\n" ;

    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "void GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << "::\n"
                      "buildMaps (C_Lexique & _inLexique,\n"
                      "           bool & _ioOk" ;
/*    GGS_contextPropertyMap::element_type * currentContextProperty = currentConstrainedEntity->mInfo.mAllContextAttributes.firstObject () ;
    while (currentContextProperty != NULL) {
      macroValidPointer (currentContextProperty) ;
      generatedZone3 << ",\n"
                        "                        "
                     << "GGS_" << currentContextProperty->mInfo.mTypeName
                     << " * _in_" << currentContextProperty->mKey ;
      currentContextProperty = currentContextProperty->nextObject () ;
    }*/
    generatedZone3 << ") {\n" ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName != "") {
      generatedZone3 << "  GGS__" << inConstraintComponentName << "_ConstraintOn_"
                     << currentConstrainedEntity->mInfo.mSuperEntityName << "::buildMaps (_inLexique, _ioOk" ;
/*      currentContextProperty = currentConstrainedEntity->mInfo.mAllContextAttributes.firstObject () ;
      while (currentContextProperty != NULL) {
        macroValidPointer (currentContextProperty) ;
        generatedZone3 << ", _in_" << currentContextProperty->mKey ;
        currentContextProperty = currentContextProperty->nextObject () ;
      }*/
      generatedZone3 << ") ;\n" ;
    }else{

    }
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
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
    }*/
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      GGS_L_ListOfPropertyPathes::element_type * currentPathList = currentProperty->mInfo.mPropertyOptionPathes.firstObject () ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  " << currentProperty->mKey << "->buildMaps (_inLexique, this, _ioOk" ;
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
                          "    _p_" << currentProperty->mKey << "->buildMaps (_inLexique, this, _ioOk" ;
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
    }*/
/*    GGS_insertedPropertyMap::element_type * currentInsertedProperty = currentConstrainedEntity->mInfo.mInsertedPropertyMap.firstObject () ;
    while (currentInsertedProperty != NULL) {
      macroValidPointer (currentInsertedProperty) ;
      GGS_insertionMap::element_type * currentInsertionMap = currentInsertedProperty->mInfo.mMaps.firstObject () ;
      while (currentInsertionMap != NULL) {
        macroValidPointer (currentInsertionMap) ;
        generatedZone3 << "  " << currentInsertionMap->mKey << "->insertObject (_inLexique, "
                       << currentInsertedProperty->mKey << ", this, _ioOk SOURCE_FILE_AT_LINE ("
                       << currentInsertedProperty->mKey.currentLineNumber () << ")) ;\n" ;
        currentInsertionMap = currentInsertionMap->nextObject () ;
      }
      currentInsertedProperty = currentInsertedProperty->nextObject () ;
    }*/
    generatedZone3 << "}\n\n" ;

  //--- fetchProperties
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "void GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << "::\n"
                      "fetchProperties (C_Lexique & _inLexique,\n"
                      "                 bool & _ioOk) {\n" ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName != "") {
      generatedZone3 << "  GGS__" << inConstraintComponentName << "_ConstraintOn_"
                     << currentConstrainedEntity->mInfo.mSuperEntityName << "::\n"
                        "fetchProperties (_inLexique, _ioOk) ;\n" ;
    }
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  " << currentProperty->mKey << "->fetchProperties (_inLexique, _ioOk) ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << "  GGS_" << currentProperty->mInfo.mTypeName << " * _p_" << currentProperty->mKey
                       << " = " << currentProperty->mKey << ".mFirstObject ;\n"
                          "  while (_p_" << currentProperty->mKey << " != NULL) {\n"
                          "    _p_" << currentProperty->mKey << "->fetchProperties (_inLexique, _ioOk) ;\n"
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
    GGS_fetchedPropertyMap::element_type * fetchedProperty = currentConstrainedEntity->mInfo.mFetchedPropertyMap.firstObject () ;
    while (fetchedProperty != NULL) {
      macroValidPointer (fetchedProperty) ;
      generatedZone3 << "  " << fetchedProperty->mKey << " = (GGS_" << fetchedProperty->mInfo.mTypeName << " *) "
                     << fetchedProperty->mInfo.mMapAttributeName
                     << "->searchKey (_inLexique, " << fetchedProperty->mInfo.mAttributeName
                     << ", " << fetchedProperty->mInfo.mIndexName << ", _ioOk SOURCE_FILE_AT_LINE ("
                     << fetchedProperty->mKey.currentLineNumber ()
                     << ")) ;\n" ;
      fetchedProperty = fetchedProperty->nextObject () ;
    }*/
    generatedZone3 << "}\n\n" ;
    
  //--- buildRelations
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "void GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << "::\n"
                      "buildRelations (C_Lexique & _inLexique,\n"
                      "                 bool & _ioOk) {\n" ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName != "") {
      generatedZone3 << "  GGS__" << inConstraintComponentName << "_ConstraintOn_"
                     << currentConstrainedEntity->mInfo.mSuperEntityName << "::\n"
                        "buildRelations (_inLexique, _ioOk) ;\n" ;
    }
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  " << currentProperty->mKey << "->fetchProperties (_inLexique, _ioOk) ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << "  GGS_" << currentProperty->mInfo.mTypeName << " * _p_" << currentProperty->mKey
                       << " = " << currentProperty->mKey << ".mFirstObject ;\n"
                          "  while (_p_" << currentProperty->mKey << " != NULL) {\n"
                          "    _p_" << currentProperty->mKey << "->buildRelations (_inLexique, _ioOk) ;\n"
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
    }*/
/*    GGS_relationMap::element_type * currentRelation = currentConstrainedEntity->mInfo.mRelationMap.firstObject () ;
    while (currentRelation != NULL) {
      macroValidPointer (currentRelation) ;
      C_String s ;
      s << "  " << currentRelation->mKey << " = " ;
      currentRelation->mInfo.mExpression (HERE)->generateCodeForRelation (inLexique,
                                                                          inEntityMap,
                                                                          currentConstrainedEntity->mKey,
                                                                          s, generatedZone3) ;
      s << " ;\n" ;
      generatedZone3 << s ;
      currentRelation = currentRelation->nextObject () ;
    }*/
    generatedZone3 << "}\n\n" ;
    
//--- reader_description
//    if (! currentConstrainedEntity->mInfo.mIsAbstract.boolValue ()) {
      generatedZone3.writeCHyphenLineComment () ;
      generatedZone3 << "GGS_string GGS__" << inConstraintComponentName << "_ConstraintOn_"
                     << currentConstrainedEntity->mKey << "::\n"
                        "reader_description (void) const {\n"
                        "  C_String s ;\n"
                        "  s << \"<" << inConstraintComponentName << " constraint for @" << currentConstrainedEntity->mKey << " {\"\n" ;
/*      currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
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
      }*/
      generatedZone3 << "    << \"}>\" ;\n"
                        "  return GGS_string (true, s) ;\n"
                        "}\n\n" ;
//    }
    currentConstrainedEntity = currentConstrainedEntity->nextObject () ;
  }
  
//--- Generate file
  inLexique.generateFile ("//",
                          inConstraintComponentName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void
routine_generate_constraints (C_Lexique & inLexique,
                              GGS_entityToImplementMap & ioEntityMap,
                              GGS_mapEntityMap & ioMapEntityMap,
                              GGS_lstring inMetamodelComponentName,
                              GGS_lstring inConstraintComponentName,
                              GGS_constrainedEntityMap & inConstrainedEntityMap,
                              GGS_constraintToImplementMap & ioConstraintToImplementMap,
                              GGS_stringset inMultipleReferencedEntities,
                              GGS_lstring inRootEntityName
                              COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.galgas_IO_Ptr ()->currentFileErrorsCount () == 0) {
  //--- Generate header file
    generate_metamodel_header_file (inLexique, ioEntityMap, ioMapEntityMap,
                                    inMetamodelComponentName, inConstraintComponentName,
                                    inConstrainedEntityMap, ioConstraintToImplementMap,
                                    inMultipleReferencedEntities, inRootEntityName) ;
  //--- Generate implementation file
    generate_metamodel_cpp_file (inLexique, ioEntityMap, ioMapEntityMap,
                                 inMetamodelComponentName, inConstraintComponentName,
                                 inConstrainedEntityMap, ioConstraintToImplementMap,
                                 inMultipleReferencedEntities, inRootEntityName) ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_metamodelRelationAnd::
generateCodeForRelation (C_Lexique & inLexique,
                         GGS_entityToImplementMap & inEntityMap,
                         const GGS_lstring & inCurrentEntityName,
                         C_String & ioBufferString,
                         C_String & ioCPPFile) const {
  ioBufferString << "((" ;
  mLeftOperand (HERE)->generateCodeForRelation (inLexique, inEntityMap, inCurrentEntityName, ioBufferString, ioCPPFile) ;
  ioBufferString << ") & (" ;
  mRightOperand (HERE)->generateCodeForRelation (inLexique, inEntityMap, inCurrentEntityName, ioBufferString, ioCPPFile) ;
  ioBufferString << "))" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelRelationOr::
generateCodeForRelation (C_Lexique & inLexique,
                         GGS_entityToImplementMap & inEntityMap,
                         const GGS_lstring & inCurrentEntityName,
                         C_String & ioBufferString,
                         C_String & ioCPPFile) const {
  ioBufferString << "((" ;
  mLeftOperand (HERE)->generateCodeForRelation (inLexique, inEntityMap, inCurrentEntityName, ioBufferString, ioCPPFile) ;
  ioBufferString << ") | (" ;
  mRightOperand (HERE)->generateCodeForRelation (inLexique, inEntityMap, inCurrentEntityName, ioBufferString, ioCPPFile) ;
  ioBufferString << "))" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelRelationNot::
generateCodeForRelation (C_Lexique & inLexique,
                         GGS_entityToImplementMap & inEntityMap,
                         const GGS_lstring & inCurrentEntityName,
                         C_String & ioBufferString,
                         C_String & ioCPPFile) const {
  ioBufferString << "( ~ (" ;
  mOperand (HERE)->generateCodeForRelation (inLexique, inEntityMap, inCurrentEntityName, ioBufferString, ioCPPFile) ;
  ioBufferString << "))" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelRelationFalse::
generateCodeForRelation (C_Lexique & /* inLexique */,
                         GGS_entityToImplementMap & /* inEntityMap */,
                         const GGS_lstring & /* inCurrentEntityName */,
                         C_String & ioBufferString,
                         C_String & /* ioCPPFile */) const {
  ioBufferString << "C_BDD ()" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelRelationTrue::
generateCodeForRelation (C_Lexique & /* inLexique */,
                         GGS_entityToImplementMap & /* inEntityMap */,
                         const GGS_lstring & /* inCurrentEntityName */,
                         C_String & ioBufferString,
                         C_String & /* ioCPPFile */) const {
  ioBufferString << "(~C_BDD ())" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelRelationPrimary::
generateCodeForRelation (C_Lexique & /* inLexique */,
                         GGS_entityToImplementMap & /* inEntityMap */,
                         const GGS_lstring & /* inCurrentEntityName */,
                         C_String & ioBufferString,
                         C_String & /* ioCPPFile */) const {
  ioBufferString << "(C_BDD::varCompareConst (0" ;
  GGS_relationVarMap::element_type * currentVar = mRelationVariableMap.firstObject () ;
  uint32 index = 0 ;
  while ((currentVar != NULL) && (index < mVariableIndex.uintValue ())) {
    ioBufferString << " + " << currentVar->mInfo.mDomainVariableName << "->bitCount ()" ;
    index ++ ;
    currentVar = currentVar->nextObject () ;
  }
  ioBufferString << ", "
            << mDomainName
            << "->bitCount (), C_BDD::kEqual, "
            << mVariableMap
            << "))" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelRelationDo::
generateCodeForRelation (C_Lexique & inLexique,
                         GGS_entityToImplementMap & inEntityMap,
                         const GGS_lstring & inCurrentEntityName,
                         C_String & ioBufferString,
                         C_String & ioCPPFile) const {
  ioBufferString << "_relation_" << mOperationIsAnd.currentLocation () ;
  ioCPPFile << "  C_BDD _relation_" << mOperationIsAnd.currentLocation () << " ;\n" ;
  if (mOperationIsAnd.boolValue ()) {
    ioCPPFile << "   _relation_" << mOperationIsAnd.currentLocation () << ".setToTrue () ;\n" ;
  }
  const sint32 pathLength = mPath.count () ;
  GGS_L_propertyPath::element_type * currentPathElement = mPath.firstObject () ;
  GGS_lstring entityName = inCurrentEntityName ;
  GGS_lstring propertyEntityName = currentPathElement->mPathElement ;
  C_String epilogue ;
  for (sint32 i=1 ; i<pathLength ; i++) {
    ioCPPFile.appendSpaces (i + i) ;
    propertyEntityName = entityForProperty (inLexique,
                                            inEntityMap,
                                            entityName,
                                            propertyEntityName) ;
    ioCPPFile << "GGS_" << propertyEntityName << " * _p_" << i << "_" << mOperationIsAnd.currentLocation ()
              << " = " << currentPathElement->mPathElement << ".mFirstObject ;\n" ;
    ioCPPFile.appendSpaces (i + i) ;
    ioCPPFile << "while (_p_" << i << "_" << mOperationIsAnd.currentLocation () << " != NULL) {\n" ;
    C_String endCode ;
    endCode.appendSpaces (i + i + 2) ;
    endCode << "_p_" << i << "_" << mOperationIsAnd.currentLocation ()
            << " = _p_" << i << "_" << mOperationIsAnd.currentLocation () << "->_mNextObject ;\n" ;
    endCode.appendSpaces (i + i) ;
    endCode << "}\n" ;
    epilogue = endCode + epilogue ;
    currentPathElement = currentPathElement->nextObject () ;
  }
  ioCPPFile.appendSpaces (pathLength + pathLength) ;
  ioCPPFile << "_relation_" << mOperationIsAnd.currentLocation () << " " ;
  if (mOperationIsAnd.boolValue ()) {
    ioCPPFile << "&=" ;
  }else{
    ioCPPFile << "|=" ;
  }
  ioCPPFile << " _p_" << (pathLength - 1) << "_" << mOperationIsAnd.currentLocation ()
            << "->" << currentPathElement->mPathElement
            << " ;\n"
            << epilogue ;
  bool needVariableTranslation = false ;
  GGS_metamodelRelationParameterList::element_type * currentParameter = mParameterList.firstObject () ;
  uint32 i = 0 ;
  while ((currentParameter != NULL) && ! needVariableTranslation) {
    needVariableTranslation = currentParameter->mParameterIndex.uintValue () != i ;
    currentParameter = currentParameter->nextObject () ;
    i ++ ;
  }
  if (needVariableTranslation) {
    ioCPPFile << "  { //--- Translation\n" ;
    GGS_relationVarMap::element_type * currentVar = mRelationVariableMap.firstObject () ;
    ioCPPFile << "    const uint16 _finalDomain [] = {" ;
    while (currentVar != NULL) {
      ioCPPFile << currentVar->mInfo.mDomainVariableName
                << "->bitCount ()"
                << ",\n                                    " ;
      currentVar = currentVar->nextObject () ;
    }
    ioCPPFile << "0\n"
                 "    } ;\n"
                 "    const uint16 _sourceDomain [] = {" ;
    currentParameter = mParameterList.firstObject () ;
    i = 0 ;
    while (currentParameter != NULL) {
      ioCPPFile << ((i > 0) ? ", " : "") << currentParameter->mParameterIndex.uintValue () ;
      currentParameter = currentParameter->nextObject () ;
      i ++ ;
    }
    ioCPPFile << "} ;\n"
                 "     C_GGS_entityMap::translate (_finalDomain, "
              << mRelationVariableMap.count ()
              << ", _sourceDomain, "
              << mParameterList.count ()
              << ", _relation_" << mOperationIsAnd.currentLocation () << ") ;\n"
                 "  }\n" ;
  }
}

//---------------------------------------------------------------------------*
