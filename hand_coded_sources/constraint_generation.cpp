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

#include "semantics_instructions.h"
#include "semantics_semantics.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

/*static GGS_lstring
entityForProperty (C_Lexique & inLexique,
                   GGS_entityToImplementMap & inEntityMap,
                   const GGS_lstring & inEntityName,
                   const GGS_lstring & inPropertyName) {
  GGS_entityPropertyMap mAllMetamodelPropertyMap ;
  GGS_bool mIsAbstract ;
  GGS_entityPropertyMap mCurrentMetamodelPropertyMap ;
  GGS_lstring mSuperEntityName ;
  GGS_entityPropertyMap mCurrentConstraintPropertyMap ;
  GGS_stringset mSuperEntitySet ;
  GGS_entityPropertyMap mAllConstraintPropertyMap ;
  GGS_bool mIsImplicitlyDefined ;
  GGS_entityPropertyMap mAllAvailablePropertyMap ;
  inEntityMap.method_searchKey (inLexique, inEntityName,
                                mAllMetamodelPropertyMap,
                                mIsAbstract,
                                mCurrentMetamodelPropertyMap,
                                mSuperEntityName,
                                mCurrentConstraintPropertyMap,
                                mSuperEntitySet,
                                mAllConstraintPropertyMap,
                                mIsImplicitlyDefined,
                                mAllAvailablePropertyMap
                                COMMA_HERE) ;
//---
  GGS_metamodelPropertyKind var_cas_kind ;
  GGS_lstring  var_cas_propertyTypeName ;
  allPropertiesMap.method_searchKey (inLexique, inPropertyName, var_cas_kind,
                                     var_cas_propertyTypeName
                                     COMMA_HERE) ;
//---
  return var_cas_propertyTypeName ;
}*/

//---------------------------------------------------------------------------*

static void
generate_constraint_header_file (C_Lexique & inLexique,
                                 const GGS_entityToImplementMap & /* inEntityMap */,
                                 const GGS_mapEntityMap & inMapEntityMap,
                                 const GGS_lstring & inMetamodelComponentName,
                                 const GGS_lstring & inConstraintComponentName,
                                 const GGS_entityToImplementMap & inConstrainedEntityMap,
                                 const GGS_stringset & inMultipleReferencedEntities,
                                 const GGS_lstring & inRootEntityName) {
  C_String generatedZone2 ; generatedZone2.setAllocationExtra (200000) ;
  generatedZone2 << "#ifndef " << inConstraintComponentName << "_CONSTRAINTS_DEFINED\n"
                 << "#define " << inConstraintComponentName << "_CONSTRAINTS_DEFINED\n"
                    "\n"
                    "#include <typeinfo>\n"
                    "#include <string.h>\n"
                    "\n" ;

//--- Include declaration of predefined types
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"" << inMetamodelComponentName << ".h\"\n"
                    "#include \"galgas/C_GGS_entityMap.h\"\n"
                    "#include \"galgas/C_GGS_MapIndex.h\"\n"
                    "\n" ;
  
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (20000) ;
//--- Generate entities predeclarations
  generatedZone3.writeCppTitleComment ("Class Predeclarations") ;
  GGS_entityToImplementMap::element_type * currentConstrainedEntity = inConstrainedEntityMap.firstObject () ;
  while (currentConstrainedEntity != NULL) {
    macroValidPointer (currentConstrainedEntity) ;
    generatedZone3 << "class GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " ;\n" ;
    currentConstrainedEntity = currentConstrainedEntity->nextObject () ;
  }
  GGS_mapEntityMap::element_type * currentMap = inMapEntityMap.firstObject () ;
  while (currentMap != NULL) {
    macroValidPointer (currentMap) ;
    generatedZone3 << "class GGM_" << currentMap->mKey << " ;\n" ;
    currentMap = currentMap->nextObject () ;
  }
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3 << "class GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " ;\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }
  generatedZone3 << "\n" ;
  generatedZone3.writeCppTitleComment ("Main Routine") ;
  generatedZone3 << "void _addConstraintsTo_" << inConstraintComponentName
                 << " (C_Lexique & _inLexique,\n"
                    "                  GGM_" << inRootEntityName << " * inRootObject,\n"
                    "                  GGM__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << " * & ioRootObjectConstraint) ;\n"
                    "\n" ;
  
//--- Generate map of entities declarations
  currentMap = inMapEntityMap.firstObject () ;
  while (currentMap != NULL) {
    macroValidPointer (currentMap) ;
    generatedZone3.writeCppTitleComment (C_String ("Declaration of GGM_") + currentMap->mKey + " Map") ;
    generatedZone3 << "class GGM_" << currentMap->mKey << " : public C_GGS_entityMap {\n"
                      "//--- Default Constructor\n"
                      "  public : GGM_" << currentMap->mKey << " (LOCATION_ARGS) ;\n"
                      "//--- First object accessor\n"
                      "  public : GGM_" << currentMap->mInfo.mElementEntityName << " * firstObject (void) ;\n"
                      "//--- Operator ()\n"
                      "  public : inline const GGM_" << currentMap->mKey << " * operator () (UNUSED_LOCATION_ARGS) const { return this ; }\n"
                      "//--- Reader 'searchKey'\n"
                      "  public : void method_searchKey (C_Lexique & inLexique,\n"
                      "                                  const GGS_lstring & inKey,\n"
                      "                                  GGM_" << currentMap->mInfo.mElementEntityName << " * & outInfo\n"
                      "                                  COMMA_LOCATION_ARGS) const ;\n"
                      "//--- Reader 'searchKeyAndGetIndex'\n"
                      "  public : void method_searchKeyAndGetIndex (C_Lexique & inLexique,\n"
                      "                                             const GGS_lstring & inKey,\n"
                      "                                             GGM_" << currentMap->mInfo.mElementEntityName << " * & outInfo,\n"
                      "                                             C_GGS_MapIndex & outIndex\n"
                      "                                             COMMA_LOCATION_ARGS) const ;\n"
                      "} ;\n\n" ;
    currentMap = currentMap->nextObject () ;
  }
  
//--- Generate list of entities declarations
  currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCppTitleComment (C_String ("Declaration of GGM__listOfConstraint_") + currentMultipleReferencedEntity->mKey + " Class") ;
    generatedZone3 << "class GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " {\n"
                      "//--- Default Constructor\n"
                      "  public : GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " (void) ;\n"
                      "//--- Destructor\n"
                      "  public : ~GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " (void) ;\n"
                      "//--- Copy destroy source\n"
                      "  public : GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey
                   << " (GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "&) ;\n"
                      "  private : void operator = "
                      " (GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "&) ;\n"
                      "//--- Add an Object\n"
                      "  public : void add (GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * inObject) ;\n"
                      "//--- Attributes\n"
                      "  public : GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * mFirstObject ;\n"
                      "  public : GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * mLastObject ;\n"
                      "//--- 'description' reader\n"
                      "  public : GGS_string reader_description (C_Lexique & _inLexique\n"
                      "                                          COMMA_LOCATION_ARGS,\n"
                      "                                          const sint32 inIndentation = 0) const ;\n"
                      "} ;\n\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }
  
//--- Generate entities declarations
  TC_UniqueArray <C_String> generatedEntitySet ;
  generatedEntitySet.addObjectIfUnique ("") ;
  bool performLoop = true ;
  while (performLoop) {
    performLoop = false ;
    currentConstrainedEntity = inConstrainedEntityMap.firstObject () ;
    while (currentConstrainedEntity != NULL) {
      macroValidPointer (currentConstrainedEntity) ;
      if (generatedEntitySet.containsObjectEqualTo (currentConstrainedEntity->mInfo.mSuperEntityName)
       && ! generatedEntitySet.containsObjectEqualTo (currentConstrainedEntity->mKey)) {
        performLoop = true ;
        generatedEntitySet.addObjectIfUnique (currentConstrainedEntity->mKey) ;
        generatedZone3.writeCppTitleComment (C_String ("Declaration of GGM__") + inConstraintComponentName + "_ConstraintOn_" + currentConstrainedEntity->mKey + " Class") ;
        generatedZone3 << "class GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " : public " ;
        if (currentConstrainedEntity->mInfo.mSuperEntityName.length () == 0) {
          generatedZone3 << "C_GGS_Object" ;
        }else{
          generatedZone3 << "GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mInfo.mSuperEntityName ;
        }
        generatedZone3 << " {\n" ;
        if (currentConstrainedEntity->mInfo.mSuperEntityName.length () == 0) {
          generatedZone3 << "//--- Next Object in a list\n"
                            "  public : GGM__" << inConstraintComponentName
                         << "_ConstraintOn_"<< currentConstrainedEntity->mKey << " * _mNextObject ;\n" ;
        }
      //--- Constructor
        generatedZone3 << "//--- Constructor\n"
                          "  public : GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " (GGM_"
                       << currentConstrainedEntity->mKey << " * _inMetamodelObject COMMA_LOCATION_ARGS) ; \n" ;
        generatedZone3 << "//--- Destructor\n"
                          "  public : virtual ~GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " (void) ;\n"
      //--- Attributes                 
                          "//--- Properties\n" ;
        GGS_entityPropertyMap::element_type * currentProperty = currentConstrainedEntity->mInfo.mCurrentConstraintPropertyMap.firstObject () ;
        while (currentProperty != NULL) {
          macroValidPointer (currentProperty) ;
          currentProperty->mInfo.mProperty (HERE)->generateAttributeInConstraint (generatedZone3, inConstraintComponentName, currentProperty->mKey) ;
          currentProperty = currentProperty->nextObject () ;
        }
/*        if (! currentConstrainedEntity->mInfo.mIsImplicitlyDefined.boolValue ()) {
          GGS_constrainedPropertyList::element_type * currentParameterProperty = currentConstrainedEntity->mInfo.mConstrainedParameterPropertyToImplementList.firstObject () ;
          while (currentParameterProperty != NULL) {
            macroValidPointer (currentParameterProperty) ;
            generatedZone3 << "  public : GGM_"
                           << currentParameterProperty->mPropertyTypeName
                           << " * " << currentParameterProperty->mPropertyName << " ;\n" ;
            currentParameterProperty = currentParameterProperty->nextObject () ;
          }
        }*/
/*        GGS_indexMap::element_type * currentIndex = currentConstrainedEntity->mInfo.mCurrentIndexes.firstObject () ;
        if (currentIndex != NULL) {
          generatedZone3 << "//--- Indexes\n" ;
          while (currentIndex != NULL) {
            macroValidPointer (currentIndex) ;
            generatedZone3 << "  public : C_GGS_MapIndex " << currentIndex->mKey << " ;\n" ;
            currentIndex = currentIndex->nextObject () ;
          }
          generatedZone3 << "\n" ;
        }*/
      //--- 'description' reader                 
        generatedZone3 << "//--- 'description' reader\n"
                          "  public : virtual GGS_string reader_description (C_Lexique & _inLexique\n"
                          "                                                  COMMA_LOCATION_ARGS,\n"
                          "                                                  const sint32 inIndentation = 0) const ;\n" ;
        generatedZone3 << "//--- Build Transformed tree\n"
                          "  public : virtual void _performTreeWalking (C_Lexique & _inLexique" ;
/*        GGS_constrainedPropertyList::element_type * currentParameterProperty = currentConstrainedEntity->mInfo.mConstrainedParameterPropertyToImplementList.firstObject () ;
        while (currentParameterProperty != NULL) {
          macroValidPointer (currentParameterProperty) ;
          generatedZone3 << ",\n"
                            "                  GGM_"
                         << currentParameterProperty->mPropertyTypeName << " * _inParameter_" << currentParameterProperty->mPropertyName ;
          currentParameterProperty = currentParameterProperty->nextObject () ;
        }*/
        generatedZone3 << ") ;\n" ;
      //--- End of Class Declaration                 
        generatedZone3 << "} ;\n\n" ;
      }
      currentConstrainedEntity = currentConstrainedEntity->nextObject () ;
    }
  }
  
//--- End of ".h" file
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
  inLexique.generateFile ("//",
                          inConstraintComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

/*static void
generate_constraint_object_creation (const GGS_representativeEntityMap & inRepresentativeEntityMap,
                                     const GGS_entityToImplementMap & inConstrainedEntityMap,
                                     const C_String & inBaseEntityName,
                                     const C_String & inCurrentVariableName,
                                     const C_String & inDestinationVar,
                                     const GGS_lstring & inConstraintComponentName,
                                     AC_OutputStream & ioGeneratedZone3) {
  // co << "inBaseEntityName: " << inBaseEntityName << "\n" ;
  bool first = true ;
  GGS_representativeEntityMap::element_type * currentRepresentantEntity = inRepresentativeEntityMap.firstObject () ;
  while (currentRepresentantEntity != NULL) {
    macroValidPointer (currentRepresentantEntity) ;
    if (currentRepresentantEntity->mInfo.mSuperEntitySet.hasKey (inBaseEntityName)
     && (currentRepresentantEntity->mInfo.mRepresentativeEntityName.length () > 0)
     && (inConstrainedEntityMap.indexOfKey (currentRepresentantEntity->mKey) >= 0)) {
      // co << "Key: " << currentRepresentantEntity->mKey << ", INFO: " << currentRepresentantEntity->mInfo.mRepresentativeEntityName << "\n" ;
      if (first) {
        first = false ;
        ioGeneratedZone3 << "    if" ;
      }else{
        ioGeneratedZone3 << "    }else if" ;
      }
      ioGeneratedZone3 << " (typeid (GGM_" << currentRepresentantEntity->mKey << ") == typeid (* "
                       << inCurrentVariableName << ")) {\n"
                          "      macroMyNew (" << inDestinationVar << ", GGM__"
                       << inConstraintComponentName << "_ConstraintOn_"  << currentRepresentantEntity->mInfo.mRepresentativeEntityName
                       << " ((GGM_" << currentRepresentantEntity->mKey << " *) " << inCurrentVariableName
                       << " COMMA_HERE)) ;\n" ;
    }
    currentRepresentantEntity = currentRepresentantEntity->nextObject () ;
  }
  if (! first) {
    ioGeneratedZone3 << "    }\n" ;
  }
}*/

//---------------------------------------------------------------------------*

static void
generate_constraint_cpp_file (C_Lexique & inLexique,
                              const GGS_entityToImplementMap & /* inEntityMap */,
                              const GGS_mapEntityMap & inMapEntityMap,
                              const GGS_lstring & /* inMetamodelComponentName */,
                              const GGS_lstring & inConstraintComponentName,
                              const GGS_entityToImplementMap & inConstrainedEntityMap,
                              const GGS_stringset & inMultipleReferencedEntities,
                              const GGS_lstring & inRootEntityName,
                              const GGS_representativeEntityMap & /*inRepresentativeEntityMap */,
                              const GGS_constraintInstructionListMap & /* inConstraintInstructionListMap */) {
  C_String generatedZone2 ; generatedZone2.setAllocationExtra (200000) ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
//--- Include declaration of header file
  generatedZone2 << "#include \"" << inConstraintComponentName << ".h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  static const char gGGSsourceFile [] = \"" << inLexique.sourceFileName ().lastPathComponent () << "\" ;\n"
                    "  #define SOURCE_FILE_AT_LINE(line) , gGGSsourceFile, line\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

  C_String generatedZone3 ; generatedZone3.setAllocationExtra (200000) ;

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Main Routine
#endif
  
  generatedZone3.writeCppTitleComment ("Adding Constraints To Metamodel") ;
  generatedZone3 << "void _addConstraintsTo_" << inConstraintComponentName
                 << " (C_Lexique & _inLexique,\n"
                    "                  GGM_" << inRootEntityName << " * inRootObject,\n"
                    "                  GGM__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << " * & ioRootObjectConstraint) {\n"
                    "  macroMyDelete (ioRootObjectConstraint, GGM__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << ") ;\n"
                    "  if (inRootObject != NULL) {\n"
                    "    macroValidPointer (inRootObject) ;\n"
                    "    // const GGS_string s = inRootObject->reader_description  (_inLexique COMMA_HERE, 0) ;\n"
                    "    // co << s << \"\\n\" ;\n"
                    "  //--- Build object tree\n"
                    "    macroMyNew (ioRootObjectConstraint, GGM__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << " (inRootObject COMMA_HERE)) ;\n"
                    "    const GGS_string s = ioRootObjectConstraint->reader_description (_inLexique COMMA_HERE, 0) ;\n"
                    "    co << s << \"\\n\" ;\n"
                    "  //--- Perform Tree Walking\n"
                    "    ioRootObjectConstraint->_performTreeWalking (_inLexique) ;\n"
                    "//    if (! ok) {\n"
                    "//      macroMyDelete (ioRootObjectConstraint, GGM__" << inConstraintComponentName << "_ConstraintOn_" << inRootEntityName << ") ;\n"
                    "//    }\n"
                    "  }\n"
                    "}\n\n" ;

//--- Generate map of entities declarations
  GGS_mapEntityMap::element_type * currentMap = inMapEntityMap.firstObject () ;
  while (currentMap != NULL) {
    macroValidPointer (currentMap) ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "#ifdef PRAGMA_MARK_ALLOWED\n"
                      "  #pragma mark GGM_" << currentMap->mKey << "\n"
                      "#endif\n\n" ;
    generatedZone3.writeCppTitleComment (C_String ("Implementation of GGM_") + currentMap->mKey + " Map") ;
    generatedZone3 << "GGM_" << currentMap->mKey << "::GGM_" << currentMap->mKey << " (LOCATION_ARGS)\n"
                      ":C_GGS_entityMap (THERE) {\n"
                   << "  setErrorMessages (" ;
    generatedZone3.writeCstringConstant (currentMap->mInfo.mInsertErrorMessage) ;
    generatedZone3 << ",\n"
                      "                    " ;
    generatedZone3.writeCstringConstant (currentMap->mInfo.mSearchErrorMessage) ;      
    generatedZone3 << ") ;\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGM_" << currentMap->mInfo.mElementEntityName << " * GGM_" << currentMap->mKey << "::firstObject (void) {\n"
                      "  return (GGM_" << currentMap->mInfo.mElementEntityName << " *) mFirstItem ;\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "void GGM_" << currentMap->mKey << "::\n"
                      "method_searchKey (C_Lexique & inLexique,\n"
                      "                  const GGS_lstring & inKey,\n"
                      "                  GGM_" << currentMap->mInfo.mElementEntityName << " * & outInfo\n"
                      "                  COMMA_LOCATION_ARGS) const {\n"
                      "  uint32 unusedIndex ;\n"
                      "  outInfo = (GGM_" << currentMap->mInfo.mElementEntityName << " *) internalSearch (inLexique, inKey, unusedIndex COMMA_THERE) ;\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "void GGM_" << currentMap->mKey << "::\n"
                      "method_searchKeyAndGetIndex (C_Lexique & inLexique,\n"
                      "                             const GGS_lstring & inKey,\n"
                      "                             GGM_" << currentMap->mInfo.mElementEntityName << " * & outInfo,\n"
                      "                             C_GGS_MapIndex & outIndex\n"
                      "                             COMMA_LOCATION_ARGS) const {\n"
                      "  uint32 index ;\n"
                      "  outInfo = (GGM_" << currentMap->mInfo.mElementEntityName << " *) internalSearch (inLexique, inKey, index COMMA_THERE) ;\n"
                      "  outIndex = C_GGS_MapIndex (index) ;\n"
                      "}\n\n" ;
    currentMap = currentMap->nextObject () ;
  }

//--- Generate Implementations of Lists
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "#ifdef PRAGMA_MARK_ALLOWED\n"
                      "  #pragma mark GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "\n"
                      "#endif\n\n" ;
    generatedZone3.writeCppTitleComment (C_String ("Implementation of GGM__listOfConstraint_") + currentMultipleReferencedEntity->mKey + " Class") ;
    generatedZone3 << "GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " (void)\n"
                      ":mFirstObject (NULL), mLastObject (NULL) {\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " ("
                      "GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " & ioSource)\n"
                      ":mFirstObject (ioSource.mFirstObject), mLastObject (ioSource.mLastObject) {\n"
                      "  ioSource.mFirstObject = NULL ;\n"
                      "  ioSource.mLastObject = NULL ;\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << "::\n"
                      "~GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey << " (void) {\n"
                      "  while (mFirstObject != NULL) {\n"
                      "    GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * _p = mFirstObject->_mNextObject ;\n"
                      "    delete mFirstObject ;\n"
                      "    mFirstObject = _p ;\n"
                      "  }\n"
                      "}\n\n" ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << " void GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey
                   << "::\n"
                      "add (GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * inObject) {\n"
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
    generatedZone3 << "GGS_string GGM__listOfConstraint_" << currentMultipleReferencedEntity->mKey
                   << "::\n"
                      "reader_description (C_Lexique & _inLexique\n"
                      "                    COMMA_LOCATION_ARGS,\n"
                      "                    const sint32 inIndentation) const {\n"
                      "  C_String s ;\n"
                      "  s << \"<list %" << currentMultipleReferencedEntity->mKey << " \" ;\n"
                      "  const GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentMultipleReferencedEntity->mKey << " * _p = mFirstObject ;\n"
                      "  while (_p != NULL) {\n"
                      "    s << \"\\n\" ;\n"
                      "    s.writeStringMultiple (\"| \", inIndentation) ;\n"
                      "    s << \"|-\" << _p->reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;\n"
                      "    _p = _p->_mNextObject ;\n"
                      "  }\n"
                      "  s << \"\\n\" ;\n"
                      "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
                      "  s << \">\" ;\n"
                      "  return GGS_string (true, s) ;\n"
                      "}\n\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructor
#endif

//--- Generate Implementation of classes
  GGS_entityToImplementMap::element_type * currentConstrainedEntity = inConstrainedEntityMap.firstObject () ;
  while (currentConstrainedEntity != NULL) {
    macroValidPointer (currentConstrainedEntity) ;
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "#ifdef PRAGMA_MARK_ALLOWED\n"
                      "  #pragma mark " << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << "\n"
                      "#endif\n\n" ;
    generatedZone3.writeCppTitleComment (C_String ("Implementation of GGM__") + inConstraintComponentName + "_ConstraintOn_" + currentConstrainedEntity->mKey + " Class") ;
    generatedZone3 << "GGM__" << inConstraintComponentName << "_ConstraintOn_"  << currentConstrainedEntity->mKey << "::\n"
                      "GGM__" << inConstraintComponentName << "_ConstraintOn_"  << currentConstrainedEntity->mKey << " (GGM_"
                   << currentConstrainedEntity->mKey << " * _inMetamodelObject COMMA_LOCATION_ARGS)\n"
                      ":" ;
    if (currentConstrainedEntity->mInfo.mSuperEntityName.length () == 0) {
      generatedZone3 << "C_GGS_Object (THERE), _mNextObject (NULL)" ;
    }else{
      generatedZone3 << "GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mInfo.mSuperEntityName
                     << "(_inMetamodelObject COMMA_HERE)" ;
    }
    GGS_entityPropertyMap::element_type * currentProperty = currentConstrainedEntity->mInfo.mCurrentConstraintPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      currentProperty->mInfo.mProperty (HERE)->generateInitInConstraintConstructor (generatedZone3, inConstraintComponentName, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
/*    GGS_constrainedPropertyList::element_type * currentSharedProperty = currentConstrainedEntity->mInfo.mConstrainedAttributePropertyToImplementList.firstObject () ;
    while (currentSharedProperty != NULL) {
      macroValidPointer (currentSharedProperty) ;
      generatedZone3 << ",\n"
                     << currentSharedProperty->mPropertyName << " (NULL)" ;
      currentSharedProperty = currentSharedProperty->nextObject () ;
    }*/
/*    if (! currentConstrainedEntity->mInfo.mIsImplicitlyDefined.boolValue ()) {
      GGS_constrainedPropertyList::element_type * currentParameterProperty = currentConstrainedEntity->mInfo.mConstrainedParameterPropertyToImplementList.firstObject () ;
      while (currentParameterProperty != NULL) {
        macroValidPointer (currentParameterProperty) ;
        generatedZone3 << ",\n"
                       << currentParameterProperty->mPropertyName
                       << " (NULL)" ;
        currentParameterProperty = currentParameterProperty->nextObject () ;
      }
    }*/
    generatedZone3 << " {\n" 
                      "  macroValidPointer (_inMetamodelObject) ;\n" ;
    currentProperty = currentConstrainedEntity->mInfo.mCurrentConstraintPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      currentProperty->mInfo.mProperty (HERE)->generateCreateInConstraintConstructor (generatedZone3, inConstraintComponentName, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        { C_String currentVarName = C_String ("_p_") ;
          currentVarName << currentProperty->mKey.currentLocation () ;
          const C_String destinationVar ("_p") ;
          generatedZone3 << "  GGM_" << currentProperty->mInfo.mTypeName << " * " << currentVarName
                         << " = _inMetamodelObject->" << currentProperty->mKey << ".mFirstObject ;\n"
                         << "  while (" << currentVarName << " != NULL) {\n"
                            "    GGM__" << inConstraintComponentName << "_ConstraintOn_"
                         << currentProperty->mInfo.mTypeName << " * " << destinationVar << " = NULL ;\n" ;
          generate_constraint_object_creation (inRepresentativeEntityMap,
                                               inConstrainedEntityMap,
                                               currentProperty->mInfo.mTypeName,
                                               currentVarName,
                                               destinationVar,
                                               inConstraintComponentName,
                                               generatedZone3) ;
          generatedZone3 << "    " << currentProperty->mKey << ".add (" << destinationVar << ") ;\n"
                            "    " << currentVarName << " = " << currentVarName << "->_mNextObject ;\n"
                            "  }\n" ;
         }break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  macroMyNew (" << currentProperty->mKey
                       << ", GGM__" << inConstraintComponentName << "_ConstraintOn_"
                       << currentProperty->mInfo.mTypeName << " (_inMetamodelObject->"
                       << currentProperty->mKey << " COMMA_HERE)) ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        generatedZone3 << "  " << currentProperty->mKey << " = _inMetamodelObject->" << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_entityMapProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }*/
    generatedZone3 << "}\n\n" ;

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Destructor
#endif

    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << "::\n"
                      "~GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mKey << " (void) {\n" ;
    currentProperty = currentConstrainedEntity->mInfo.mCurrentConstraintPropertyMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      currentProperty->mInfo.mProperty (HERE)->generateDeleteInConstraintDestructor (generatedZone3, inConstraintComponentName, currentProperty->mKey) ;
      currentProperty = currentProperty->nextObject () ;
    }
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  macroMyDelete (" << currentProperty->mKey
                       << ", GGM__" << inConstraintComponentName << "_ConstraintOn_"
                       << currentProperty->mInfo.mTypeName
                       << ") ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_entityMapProperty:
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
      case GGS_metamodelPropertyKind::enum_attributeProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }*/
/*    if (! currentConstrainedEntity->mInfo.mIsImplicitlyDefined.boolValue ()) {
      GGS_constrainedPropertyList::element_type * currentParameterProperty = currentConstrainedEntity->mInfo.mConstrainedParameterPropertyToImplementList.firstObject () ;
      while (currentParameterProperty != NULL) {
        macroValidPointer (currentParameterProperty) ;
        generatedZone3 << "  macroDetachPointer ("
                       << currentParameterProperty->mPropertyName
                       << ", GGM_"
                       << currentParameterProperty->mPropertyTypeName << ") ;\n" ;
        currentParameterProperty = currentParameterProperty->nextObject () ;
      }
    }*/
    generatedZone3 << "}\n\n" ;

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Reader 'description'
#endif
        
    generatedZone3.writeCppHyphenLineComment () ;
    generatedZone3 << "GGS_string GGM__" << inConstraintComponentName << "_ConstraintOn_"
                   << currentConstrainedEntity->mKey << "::\n"
                      "reader_description (C_Lexique & _inLexique\n"
                      "                    COMMA_LOCATION_ARGS,\n"
                      "                    const sint32 inIndentation) const {\n"
                      "  C_String s ;\n"
                      "  s << \"<" << inConstraintComponentName << " constraint for %" << currentConstrainedEntity->mKey << "\\n\" ;\n" ;
/*    currentProperty = currentConstrainedEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
                          "  s << \"|-" << currentProperty->mKey << ": \" << "
                       << currentProperty->mKey << ".reader_description (_inLexique COMMA_THERE, inIndentation + 1) << \"\\n\" ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
                          "  s << \"|-" << currentProperty->mKey << ": \" << ((" << currentProperty->mKey
                       << " == NULL) ? C_String (\"null\") : " << currentProperty->mKey
                       << "->reader_description (_inLexique COMMA_THERE, inIndentation + 1)) << \"\\n\" ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        generatedZone3 << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
                          "  s << \"|-" << currentProperty->mKey << ": \" << "
                       << currentProperty->mKey << ".reader_description (_inLexique COMMA_THERE, inIndentation + 1) << \"\\n\" ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_entityMapProperty:
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }*/
    generatedZone3 << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
                      "  s << \">\" ;\n"
                      "  return GGS_string (true, s) ;\n"
                      "}\n\n" ;

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Perform Tree Walking
#endif

//--- Build Transformed Tree
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "void GGM__" << inConstraintComponentName << "_ConstraintOn_"
                 << currentConstrainedEntity->mKey << "::\n"
                 << "_performTreeWalking (C_Lexique & _inLexique" ;
/*  GGS_constrainedPropertyList::element_type * currentParameterProperty = currentConstrainedEntity->mInfo.mConstrainedParameterPropertyToImplementList.firstObject () ;
  while (currentParameterProperty != NULL) {
    macroValidPointer (currentParameterProperty) ;
    generatedZone3 << ",\n"
                      "                  GGM_"
                   << currentParameterProperty->mPropertyTypeName << " * _inParameter_" << currentParameterProperty->mPropertyName ;
    currentParameterProperty = currentParameterProperty->nextObject () ;
  }*/
  generatedZone3 << ") {\n" ;
  //--- Calling super method
    if (currentConstrainedEntity->mInfo.mSuperEntityName.length () > 0) {
      generatedZone3 << "//--- Invoke super method\n"
                        "  GGM__" << inConstraintComponentName << "_ConstraintOn_" << currentConstrainedEntity->mInfo.mSuperEntityName
                     << "::_performTreeWalking (_inLexique" ;
/*      currentParameterProperty = currentConstrainedEntity->mInfo.mConstrainedParameterPropertyToImplementList.firstObject () ;
      while (currentParameterProperty != NULL) {
        macroValidPointer (currentParameterProperty) ;
        generatedZone3 << ", _inParameter_" << currentParameterProperty->mPropertyName ;
        currentParameterProperty = currentParameterProperty->nextObject () ;
      }*/
      generatedZone3 << ") ;\n" ;
    }
    generatedZone3 << "  #ifdef DEBUG_TREE_WALKING\n"
                      "    printf (\"GGM__" << inConstraintComponentName << "_ConstraintOn_"
                   << currentConstrainedEntity->mKey << "::_performTreeWalking\\n\") ;\n"
                      "  #endif\n" ;
    if (! currentConstrainedEntity->mInfo.mIsImplicitlyDefined.boolValue ()) {
      generatedZone3 << "//--- Attach Parameters\n" ;
/*      GGS_constrainedPropertyList::element_type * currentParameterProperty = currentConstrainedEntity->mInfo.mConstrainedParameterPropertyToImplementList.firstObject () ;
      while (currentParameterProperty != NULL) {
        macroValidPointer (currentParameterProperty) ;
        generatedZone3 << "  macroAttachPointer ("
                       << currentParameterProperty->mPropertyName
                       << ", _inParameter_" << currentParameterProperty->mPropertyName
                       << ") ;\n" ;
        currentParameterProperty = currentParameterProperty->nextObject () ;
      }*/
    }
/*    GGS_typeInstructionList instructionList ;
    GGS_callInstructionSharedPropertySignatureMap unused1 ;
    inConstraintInstructionListMap.method_searchKey (inLexique, currentConstrainedEntity->mKey, instructionList, unused1 COMMA_HERE) ;
    sint32 select_repeat_production_index = 0 ;
    generateInstructionListForList (instructionList,
                                    generatedZone3,
                                    "C_Lexique",
                                    inConstraintComponentName,
                                    select_repeat_production_index,
                                    false,
                                    true) ;*/
    generatedZone3 << "}\n\n" ;

    currentConstrainedEntity = currentConstrainedEntity->nextObject () ;
  }
  generatedZone3.writeCppHyphenLineComment () ;
  
//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
  inLexique.generateFile ("//",
                          inConstraintComponentName + ".cpp",
                          "\n\n//#define DEBUG_TREE_WALKING\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

void
routine_generate_constraints (C_Lexique & inLexique,
                              GGS_entityToImplementMap inEntityMap,
                              GGS_mapEntityMap inMapEntityMap,
                              GGS_lstring inMetamodelComponentName,
                              GGS_lstring inConstraintComponentName,
                              GGS_entityToImplementMap inConstrainedEntityMap,
                              GGS_stringset inMultipleReferencedEntities,
                              GGS_lstring inRootEntityName,
                              GGS_representativeEntityMap inRepresentativeEntityMap,
                              GGS_constraintInstructionListMap inConstraintInstructionListMap
                              COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.galgas_IO_Ptr ()->currentFileErrorCount () == 0) {
  //--- Generate header file
    generate_constraint_header_file (inLexique, inEntityMap, inMapEntityMap,
                                     inMetamodelComponentName, inConstraintComponentName,
                                     inConstrainedEntityMap,
                                     inMultipleReferencedEntities, inRootEntityName) ;
  //--- Generate implementation file
    generate_constraint_cpp_file (inLexique, inEntityMap, inMapEntityMap,
                                  inMetamodelComponentName, inConstraintComponentName,
                                  inConstrainedEntityMap,
                                  inMultipleReferencedEntities, inRootEntityName,
                                  inRepresentativeEntityMap,
                                  inConstraintInstructionListMap) ;
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
generateCodeForRelation (C_Lexique & /* inLexique */,
                         GGS_entityToImplementMap & /* inEntityMap */,
                         const GGS_lstring & /* inCurrentEntityName */,
                         C_String & /* ioBufferString */,
                         C_String & /* ioCPPFile */) const {
/*  ioBufferString << "_relation_" << mOperationIsAnd.currentLocation () ;
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
    ioCPPFile << spaces (i + i) ;
    propertyEntityName = entityForProperty (inLexique,
                                            inEntityMap,
                                            entityName,
                                            propertyEntityName) ;
    ioCPPFile << "GGM_" << propertyEntityName << " * _p_" << i << "_" << mOperationIsAnd.currentLocation ()
              << " = " << currentPathElement->mPathElement << ".mFirstObject ;\n"
              << spaces (i + i)
              << "while (_p_" << i << "_" << mOperationIsAnd.currentLocation () << " != NULL) {\n" ;
    C_String endCode ;
    endCode << spaces (i + i + 2)
            << "_p_" << i << "_" << mOperationIsAnd.currentLocation ()
            << " = _p_" << i << "_" << mOperationIsAnd.currentLocation () << "->_mNextObject ;\n"
            << spaces (i + i)
            << "}\n" ;
    epilogue = endCode + epilogue ;
    currentPathElement = currentPathElement->nextObject () ;
  }
  ioCPPFile << spaces (pathLength + pathLength)
            << "_relation_" << mOperationIsAnd.currentLocation () << " " ;
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
  }*/
}

//---------------------------------------------------------------------------*
