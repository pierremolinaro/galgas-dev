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
                                const GGS_entityToImplementMap & /* inEntityMap */,
                                const GGS_mapEntityMap & inMapEntityMap,
                                const GGS_lstring & inMetamodelComponentName,
                                const GGS_lstring & inConstraintComponentName,
                                const GGS_constrainedEntityMap & inConstrainedEntityMap,
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
                      "  public : void add (GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * inObject) ;\n"
                      "//--- Attributes\n"
                      "  public : GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * mFirstObject ;\n"
                      "  public : GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * mLastObject ;\n"
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
                      "  public : GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " (GGS_"
                   << currentConstrainedEntity->mKey << " * _inMetamodelObject" ;
    GGS_contextPropertyMap::element_type * currentContextParameter = currentConstrainedEntity->mInfo.mContextPropertyMap.firstObject () ;
    while (currentContextParameter != NULL) {
      macroValidPointer (currentContextParameter) ;
      generatedZone3 << ",\n"
                        "                               GGS_"
                     << currentContextParameter->mInfo.mTypeName << " * _inContext_" << currentContextParameter->mKey ;
      currentContextParameter = currentContextParameter->nextObject () ;
    }
    generatedZone3 << " COMMA_LOCATION_ARGS) ; \n" ;
    generatedZone3 << "//--- Destructor\n"
                      "  public : virtual ~GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " (void) ;\n"
                      "//--- Build Owner links and Maps\n"
                      "  public : virtual void buildMaps (C_Lexique & _inLexique,\n"
                      "                                                bool & _ioOk) ;\n" ;

  //--- Attributes                 
    generatedZone3 << "//--- Fetch properties\n"
                      "  public : virtual void fetchProperties (C_Lexique & _inLexique,\n"
                      "                                         bool & _ioOk) ;\n"
                      "//--- Build relations\n"
                      "  public : virtual void buildRelations (C_Lexique & _inLexique,\n"
                      "                                         bool & _ioOk) ;\n"
                      "//--- Pointer to metamodel Object\n"
                      "  private : const GGS_"
                   << currentConstrainedEntity->mKey << " * _mMetamodelObject ;\n"
                      "//--- Properties\n" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  public : GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentProperty->mInfo.mTypeName
                       << " * _constraintFor_" << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << "  public : GGS__listOfConstraint_" << currentProperty->mInfo.mTypeName
                       << " _constraintFor_" << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_attributeProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "//--- Maps\n" ;
    GGS_mapPropertyMap::element_type * currentMap = currentConstrainedEntity->mInfo.mMapPropertyMap.firstObject () ;
    while (currentMap != NULL) {
      macroValidPointer (currentMap) ;
      generatedZone3 << "  public : GGS_" << currentMap->mInfo.mTypeName
                       << " * " << currentMap->mKey << " ;\n" ;
      currentMap = currentMap->nextObject () ;
    }
    generatedZone3 << "//--- Context Parameters\n" ;
    GGS_contextPropertyMap::element_type * currentPropertyMap = currentConstrainedEntity->mInfo.mContextPropertyMap.firstObject () ;
    while (currentPropertyMap != NULL) {
      macroValidPointer (currentPropertyMap) ;
      generatedZone3 << "  public : GGS_" << currentPropertyMap->mInfo.mTypeName
                       << " * " << currentPropertyMap->mKey << " ;\n" ;
      currentPropertyMap = currentPropertyMap->nextObject () ;
    }
    generatedZone3 << "//--- Indexes\n" ;
    GGS_indexMap::element_type * currentIndex = currentConstrainedEntity->mInfo.mIndexMap.firstObject () ;
    while (currentIndex != NULL) {
      macroValidPointer (currentIndex) ;
      generatedZone3 << "  public : uint32 " << currentIndex->mKey << " ;\n" ;
      currentIndex = currentIndex->nextObject () ;
    }
    generatedZone3 << "//--- Fetched Properties\n" ;
    GGS_fetchedPropertyMap::element_type * currentFetchedProperty = currentConstrainedEntity->mInfo.mFetchedPropertyMap.firstObject () ;
    while (currentFetchedProperty != NULL) {
      macroValidPointer (currentFetchedProperty) ;
      generatedZone3 << "  public : GGS_" << currentFetchedProperty->mInfo.mTypeName
                     << " * " << currentFetchedProperty->mKey << " ;\n" ;
      currentFetchedProperty = currentFetchedProperty->nextObject () ;
    }

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
generate_constraint_object_creation (C_Lexique & inLexique,
                                     const GGS_lstring & inConstraintComponentName,
                                     GGS_constrainedEntityMap & inConstrainedEntityMap,
                                     GGS_entityPropertyMap::element_type * inCurrentProperty,
                                     const GGS_L_lstringList & inContextParameterList,
                                     const C_String & inCurrentVariableName,
                                     const C_String & inDestinationVar,
                                     AC_OutputStream & ioGeneratedZone3) {
             GGS_relationMap allRelationMap ;
             GGS_lstring superEntityName ;
             GGS_entityPropertyMap entityPropertiesMap ;
             GGS_contextPropertyMap contextPropertyMap ;
             GGS_mapPropertyMap mapPropertyMap ;
             GGS_contextParameterMap contextParameterMap ;
             GGS_insertionList insertionList ;
             GGS_indexMap indexMap ;
             GGS_fetchedPropertyMap fetchedPropertyMap ;
             GGS_stringset allDescendant ;
             inConstrainedEntityMap.methode_searchKey (inLexique,
                                                       inCurrentProperty->mInfo.mTypeName,
                                                       allRelationMap,
                                                       superEntityName,
                                                       entityPropertiesMap,
                                                       contextPropertyMap,
                                                       mapPropertyMap,
                                                       contextParameterMap,
                                                       insertionList,
                                                       indexMap,
                                                       fetchedPropertyMap,
                                                       allDescendant
                                                       COMMA_HERE) ;
             GGS_stringset::element_type * currentDescendant = allDescendant.firstObject () ;
             bool first = true ;
             while (currentDescendant != NULL) {
               macroValidPointer (currentDescendant) ;
               if (inConstrainedEntityMap.indexOfKey (currentDescendant->mKey) >= 0) {
                 if (first) {
                   first = false ;
                   ioGeneratedZone3 << "    if" ;
                 }else{
                   ioGeneratedZone3 << "    }else if" ;
                 }
                 ioGeneratedZone3 << " (dynamic_cast <GGS_" << currentDescendant->mKey << " *> ("
                                << inCurrentVariableName << ") != NULL) {\n"
                                   "      macroMyNew (" << inDestinationVar << ", GGS__"
                                << inConstraintComponentName << "_ConstraintOn_"  << currentDescendant->mKey
                                << " ((GGS_" << currentDescendant->mKey << " *) " << inCurrentVariableName ;
                 GGS_L_lstringList::element_type * currentParameter = inContextParameterList.firstObject () ;
                 while (currentParameter != NULL) {
                   ioGeneratedZone3 << ", " << currentParameter->mString ;
                   currentParameter = currentParameter->nextObject () ;
                 }
                 ioGeneratedZone3 << " COMMA_HERE)) ;\n" ;
               }
               currentDescendant = currentDescendant->nextObject () ;
             }
             if (! first) {
               ioGeneratedZone3 << "    }else{\n"
                                 "  " ;
             }
             ioGeneratedZone3 << "    macroMyNew (" << inDestinationVar << ", GGS__" 
                              << inConstraintComponentName << "_ConstraintOn_"  << inCurrentProperty->mInfo.mTypeName
                              << " (" << inCurrentVariableName ;
             GGS_L_lstringList::element_type * currentParameter = inContextParameterList.firstObject () ;
             while (currentParameter != NULL) {
               ioGeneratedZone3 << ", " << currentParameter->mString ;
               currentParameter = currentParameter->nextObject () ;
             }
             ioGeneratedZone3 << " COMMA_HERE)) ;\n" ;
             if (! first) {
               ioGeneratedZone3 << "    }\n" ;
             }
}

//---------------------------------------------------------------------------*

static void
generate_metamodel_cpp_file (C_Lexique & inLexique,
                             const GGS_entityToImplementMap & /* inEntityMap */,
                             const GGS_mapEntityMap & inMapEntityMap,
                             const GGS_lstring & /* inMetamodelComponentName */,
                             const GGS_lstring & inConstraintComponentName,
                             GGS_constrainedEntityMap & inConstrainedEntityMap,
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
                    "    macroMyNew (ioRootObjectConstraint, GGS__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << " (inRootObject COMMA_HERE)) ;\n"
                    "  //--- Build owner links\n"
                    "    bool ok = true ;\n"
                    "    ioRootObjectConstraint->buildMaps (_inLexique, ok) ;\n"
                    "    if (ok) {\n"
                    "      ioRootObjectConstraint->fetchProperties (_inLexique, ok) ;\n"
                    "    }\n"
                    "    if (ok) {\n"
                    "//      ioRootObjectConstraint->buildRelations (_inLexique, ok) ;\n"
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
                      "    GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * _p = mFirstObject->_mNextObject ;\n"
                      "    delete mFirstObject ;\n"
                      "    mFirstObject = _p ;\n"
                      "  }\n"
                      "}\n\n" ;
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << " void GGS__listOfConstraint_" << currentMultipleReferencedEntity->mKey
                   << "::\n"
                      "add (GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * inObject) {\n"
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
                      "  const GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * _p = mFirstObject ;\n"
                      "  while (_p != NULL) {\n"
                      "    s << _p->reader_description () ;\n"
                      "    _p = _p->_mNextObject ;\n"
                      "  }\n"
                      "  s << \">\" ;\n"
                      "  return GGS_string (true, s) ;\n"
                      "}\n\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructor
#endif

//--- Generate Implementation of classes
  GGS_constrainedEntityMap::element_type * currentConstrainedEntity = inConstrainedEntityMap.firstObject () ;
  while (currentConstrainedEntity != NULL) {
    macroValidPointer (currentConstrainedEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Implementation of GGS__") + inConstraintComponentName + "_ConstraintOn_" + currentConstrainedEntity->mKey + " Class") ;
    generatedZone3 << "GGS__" << inConstraintComponentName << "_ConstraintOn_"  << currentConstrainedEntity->mKey << "::\n"
                      "GGS__" << inConstraintComponentName << "_ConstraintOn_"  << currentConstrainedEntity->mKey << " (GGS_"
                   << currentConstrainedEntity->mKey << " * _inMetamodelObject" ;
    GGS_contextPropertyMap::element_type * currentContextParameter = currentConstrainedEntity->mInfo.mContextPropertyMap.firstObject () ;
    while (currentContextParameter != NULL) {
      macroValidPointer (currentContextParameter) ;
      generatedZone3 << ",\n"
                        "                               GGS_"
                     << currentContextParameter->mInfo.mTypeName << " * _inContext_" << currentContextParameter->mKey ;
      currentContextParameter = currentContextParameter->nextObject () ;
    }
    generatedZone3 << " COMMA_LOCATION_ARGS)\n"
                      ":" ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName.length () == 0) {
      generatedZone3 << "C_GGS_Object (THERE), _mNextObject (NULL)" ;
    }else{
      generatedZone3 << "GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mInfo.mSuperEntityName
                     << "(_inMetamodelObject" ;
      currentContextParameter = currentConstrainedEntity->mInfo.mContextPropertyMap.firstObject () ;
      while (currentContextParameter != NULL) {
        macroValidPointer (currentContextParameter) ;
        generatedZone3 << ", _inContext_" << currentContextParameter->mKey ;
        currentContextParameter = currentContextParameter->nextObject () ;
      }
      generatedZone3 << " COMMA_HERE)" ;
    }
    generatedZone3 << ",\n"
                      "_mMetamodelObject (_inMetamodelObject)" ;
    GGS_mapPropertyMap::element_type * currentMap = currentConstrainedEntity->mInfo.mMapPropertyMap.firstObject () ;
    while (currentMap != NULL) {
      macroValidPointer (currentMap) ;
      generatedZone3 << ",\n" << currentMap->mKey << " (NULL)" ;
      currentMap = currentMap->nextObject () ;
    }
    GGS_contextPropertyMap::element_type * currentPropertyMap = currentConstrainedEntity->mInfo.mContextPropertyMap.firstObject () ;
    while (currentPropertyMap != NULL) {
      macroValidPointer (currentPropertyMap) ;
      generatedZone3 << ",\n" << currentPropertyMap->mKey
                       << " (_inContext_" << currentPropertyMap->mKey << ")" ;
      currentPropertyMap = currentPropertyMap->nextObject () ;
    }
    generatedZone3 << " {\n" ;
    currentMap = currentConstrainedEntity->mInfo.mMapPropertyMap.firstObject () ;
    while (currentMap != NULL) {
      macroValidPointer (currentMap) ;
      generatedZone3 << " macroMyNew (" << currentMap->mKey << ", GGS_" << currentMap->mInfo.mTypeName << "(HERE)) ;\n" ;
      currentMap = currentMap->nextObject () ;
    }
    GGS_entityPropertyMap::element_type * currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      if (currentConstrainedEntity->mInfo.mContextParameterMap.indexOfKey (currentProperty->mKey) >= 0) {
        GGS_L_lstringList contextParameterList ;
        currentConstrainedEntity->mInfo.mContextParameterMap.methode_searchKey (inLexique, currentProperty->mKey, contextParameterList COMMA_HERE) ;
        switch (currentProperty->mInfo.mKind.enumValue ()) {
        case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
          { C_String currentVarName = C_String ("_p_") ;
            currentVarName << currentProperty->mKey.currentLocation () ;
            const C_String destinationVar ("_p") ;
            generatedZone3 << "  GGS_" << currentProperty->mInfo.mTypeName << " * " << currentVarName
                           << " = _inMetamodelObject->" << currentProperty->mKey << ".mFirstObject ;\n"
                           << "  while (" << currentVarName << " != NULL) {\n"
                              "    GGS__" << inConstraintComponentName << "_ConstraintOn_"
                           << currentProperty->mInfo.mTypeName << " * " << destinationVar << " = NULL ;\n" ;
            generate_constraint_object_creation (inLexique,
                                                 inConstraintComponentName,
                                                 inConstrainedEntityMap,
                                                 currentProperty,
                                                 contextParameterList,
                                                 currentVarName,
                                                 destinationVar,
                                                 generatedZone3) ;
            generatedZone3 << "    _constraintFor_" << currentProperty->mKey << ".add (" << destinationVar << ") ;\n"
                              "    " << currentVarName << " = " << currentVarName << "->_mNextObject ;\n"
                              "  }\n" ;
          }break ;
        case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
          { const C_String currentVarName = C_String ("_inMetamodelObject->") + currentProperty->mKey ;
            const C_String destinationVar = C_String ("_constraintFor_") + currentProperty->mKey ;
            generatedZone3 << "  macroValidPointer (_inMetamodelObject) ;\n"
                              "  "  << destinationVar << " = NULL ;\n" ;
            generate_constraint_object_creation (inLexique,
                                                 inConstraintComponentName,
                                                 inConstrainedEntityMap,
                                                 currentProperty,
                                                 contextParameterList,
                                                 currentVarName,
                                                 destinationVar,
                                                 generatedZone3) ;
          }break ;
        case GGS_metamodelPropertyKind::enum_attributeProperty:
        case GGS_metamodelPropertyKind::kNotBuilt:
          break ;
        }
      }
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "}\n\n" ;

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Destructor
#endif

    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << "::\n"
                      "~GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " (void) {\n"
                      "  macroValidPointer (_mMetamodelObject) ;\n" ;
    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  macroMyDelete (_constraintFor_" << currentProperty->mKey
                       << ", GGS__" << inConstraintComponentName << "_ConstraintOn_"
                       << currentProperty->mInfo.mTypeName
                       << ") ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
      case GGS_metamodelPropertyKind::enum_attributeProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }
    currentMap = currentConstrainedEntity->mInfo.mMapPropertyMap.firstObject () ;
    while (currentMap != NULL) {
      macroValidPointer (currentMap) ;
      generatedZone3 << "  macroMyDelete (" << currentMap->mKey << ", GGS_" << currentMap->mInfo.mTypeName << ") ;\n" ;
      currentMap = currentMap->nextObject () ;
    }
    generatedZone3 << "}\n\n" ;

    generatedZone3.writeCHyphenLineComment () ;

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark buildMaps
#endif

    generatedZone3 << "void GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << "::\n"
                      "buildMaps (C_Lexique & _inLexique,\n"
                      "           bool & _ioOk) {\n" ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName != "") {
      generatedZone3 << "  GGS__" << inConstraintComponentName << "_ConstraintOn_"
                     << currentConstrainedEntity->mInfo.mSuperEntityName << "::buildMaps (_inLexique, _ioOk) ;\n" ;
    }
    GGS_insertionList::element_type * currentInsertion = currentConstrainedEntity->mInfo.mInsertionList.firstObject () ;
    while (currentInsertion != NULL) {
      macroValidPointer (currentInsertion) ;
      generatedZone3 << "  macroValidPointer (" << currentInsertion->mMapName << ") ;\n"
                        "  " << currentInsertion->mMapName << "->insertObject (_inLexique, "
                     << "_mMetamodelObject->" << currentInsertion->mInsertedAttributeName
                     << ", this, _ioOk" ;
      if (currentInsertion->mIndexName.length () > 0) {
        generatedZone3 << ", " << currentInsertion->mIndexName ;
      }
      generatedZone3 << " SOURCE_FILE_AT_LINE ("
                     << currentInsertion->mMapName.currentLineNumber () << ")) ;\n" ;
      currentInsertion = currentInsertion->nextObject () ;
    }
    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      if (currentConstrainedEntity->mInfo.mContextParameterMap.indexOfKey (currentProperty->mKey) >= 0) {
        GGS_L_lstringList contextParameterList ;
        currentConstrainedEntity->mInfo.mContextParameterMap.methode_searchKey (inLexique, currentProperty->mKey, contextParameterList COMMA_HERE) ;
        switch (currentProperty->mInfo.mKind.enumValue ()) {
        case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
          generatedZone3 << "  GGS__" << inConstraintComponentName << "_ConstraintOn_"  << currentProperty->mInfo.mTypeName
                         << " * _p_" << currentProperty->mKey.currentLocation ()
                         << " = _constraintFor_" << currentProperty->mKey << ".mFirstObject ;\n"
                         << "  while (_p_" << currentProperty->mKey.currentLocation () << " != NULL) {\n"
                            "    macroValidPointer (_p_" << currentProperty->mKey.currentLocation () << ") ;\n"
                            "    _p_" << currentProperty->mKey.currentLocation () << "->buildMaps (_inLexique, _ioOk) ;\n"
                            "    _p_" << currentProperty->mKey.currentLocation () << " = _p_" << currentProperty->mKey.currentLocation () << "->_mNextObject ;\n"
                            "  }\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
          generatedZone3 << "  macroValidPointer (_constraintFor_"  << currentProperty->mKey << ") ;\n"
                            "  _constraintFor_"  << currentProperty->mKey << "->buildMaps (_inLexique, _ioOk) ;\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_attributeProperty:
        case GGS_metamodelPropertyKind::kNotBuilt:
          break ;
        }
      }
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << "}\n\n" ;

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark fetchProperties
#endif

  //--- fetchProperties
    generatedZone3.writeCHyphenLineComment () ;
    generatedZone3 << "void GGS__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << "::\n"
                      "fetchProperties (C_Lexique & _inLexique,\n"
                      "                 bool & _ioOk) {\n" ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName != "") {
      generatedZone3 << "  GGS__" << inConstraintComponentName << "_ConstraintOn_"
                     << currentConstrainedEntity->mInfo.mSuperEntityName << "::fetchProperties (_inLexique, _ioOk) ;\n" ;
    }
    GGS_fetchedPropertyMap::element_type * currentFetchedProperty = currentConstrainedEntity->mInfo.mFetchedPropertyMap.firstObject () ;
    while (currentFetchedProperty != NULL) {
      macroValidPointer (currentFetchedProperty) ;
      generatedZone3 << "  macroValidPointer (" << currentFetchedProperty->mInfo.mMapAttributeName << ") ;\n"
                        "  " << currentFetchedProperty->mKey << " = (GGS_" << currentFetchedProperty->mInfo.mTypeName << " *) "
                     << currentFetchedProperty->mInfo.mMapAttributeName << "->searchKey (_inLexique, "
                     << "_mMetamodelObject->" << currentFetchedProperty->mInfo.mAttributeName
                     << ", _ioOk" ;
      if (currentFetchedProperty->mInfo.mIndexName.length () > 0) {
        generatedZone3 << ", " << currentFetchedProperty->mInfo.mIndexName ;
      }
      generatedZone3 << " SOURCE_FILE_AT_LINE ("
                     << currentFetchedProperty->mKey.currentLineNumber () << ")) ;\n" ;
      currentFetchedProperty = currentFetchedProperty->nextObject () ;
    }
    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      if (currentConstrainedEntity->mInfo.mContextParameterMap.indexOfKey (currentProperty->mKey) >= 0) {
        GGS_L_lstringList contextParameterList ;
        currentConstrainedEntity->mInfo.mContextParameterMap.methode_searchKey (inLexique, currentProperty->mKey, contextParameterList COMMA_HERE) ;
        switch (currentProperty->mInfo.mKind.enumValue ()) {
        case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
          generatedZone3 << "  GGS__" << inConstraintComponentName << "_ConstraintOn_"  << currentProperty->mInfo.mTypeName
                         << " * _p_" << currentProperty->mKey.currentLocation ()
                         << " = _constraintFor_" << currentProperty->mKey << ".mFirstObject ;\n"
                         << "  while (_p_" << currentProperty->mKey.currentLocation () << " != NULL) {\n"
                            "    macroValidPointer (_p_" << currentProperty->mKey.currentLocation () << ") ;\n"
                            "    _p_" << currentProperty->mKey.currentLocation () << "->fetchProperties (_inLexique, _ioOk) ;\n"
                            "    _p_" << currentProperty->mKey.currentLocation () << " = _p_" << currentProperty->mKey.currentLocation () << "->_mNextObject ;\n"
                            "  }\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
          generatedZone3 << "  macroValidPointer (_constraintFor_"  << currentProperty->mKey << ") ;\n"
                            "  _constraintFor_"  << currentProperty->mKey << "->fetchProperties (_inLexique, _ioOk) ;\n" ;
          break ;
        case GGS_metamodelPropertyKind::enum_attributeProperty:
        case GGS_metamodelPropertyKind::kNotBuilt:
          break ;
        }
      }
      currentProperty = currentProperty->nextObject () ;
    }
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

  generatedZone3.writeCHyphenLineComment () ;
  
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
                              GGS_stringset inMultipleReferencedEntities,
                              GGS_lstring inRootEntityName
                              COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.galgas_IO_Ptr ()->currentFileErrorsCount () == 0) {
  //--- Generate header file
    generate_metamodel_header_file (inLexique, ioEntityMap, ioMapEntityMap,
                                    inMetamodelComponentName, inConstraintComponentName,
                                    inConstrainedEntityMap,
                                    inMultipleReferencedEntities, inRootEntityName) ;
  //--- Generate implementation file
    generate_metamodel_cpp_file (inLexique, ioEntityMap, ioMapEntityMap,
                                 inMetamodelComponentName, inConstraintComponentName,
                                 inConstrainedEntityMap,
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
