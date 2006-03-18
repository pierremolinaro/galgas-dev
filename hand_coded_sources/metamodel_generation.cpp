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
                                const GGS_stringset & inMultipleReferencedEntities) {
  C_String generatedZone2 ;
  generatedZone2 << "#ifndef " << inMetamodelComponentName << "_METAMODEL_DEFINED\n"
                 << "#define " << inMetamodelComponentName << "_METAMODEL_DEFINED\n"
                 << "\n#include <string.h>\n\n" ;

//--- Include declaration of predefined types
  generatedZone2 << "#include \"galgas/C_GGS_Object.h\"\n"
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
    generatedZone3 << "class GGS__listOf_" << currentMultipleReferencedEntity->mKey.string () << " ;\n" ;
    currentMultipleReferencedEntity = currentMultipleReferencedEntity->nextObject () ;
  }
  generatedZone3 << '\n' ;
  
//--- Generate list of entities declarations
  currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Declaration of GGS__listOf_") + currentMultipleReferencedEntity->mKey.string () + " Class") ;
    generatedZone3 << "class GGS__listOf_" << currentMultipleReferencedEntity->mKey.string () << " {\n"
                      "//--- Default Constructor\n"
                      "  public : GGS__listOf_" << currentMultipleReferencedEntity->mKey.string () << " (void) ;\n"
                      "//--- No Copy\n"
                      "  private : GGS__listOf_" << currentMultipleReferencedEntity->mKey.string ()
                   << " (const GGS__listOf_" << currentMultipleReferencedEntity->mKey.string () << "&) ;\n"
                      "  private : void operator = "
                      " (const GGS__listOf_" << currentMultipleReferencedEntity->mKey.string () << "&) ;\n"
                      "//--- Attributes\n"
                      "  public : GGS_" << currentMultipleReferencedEntity->mKey.string () << " * mFirstObject ;\n"
                      "  public : GGS_" << currentMultipleReferencedEntity->mKey.string () << " * mLastObject ;\n"
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
                      "  private : GGS_" << currentEntity->mKey << " * _mNextObject ;\n"
                      "//--- Constructor\n"
                      "  public : GGS_" << currentEntity->mKey << " (" ;
    GGS_entityPropertyMap::element_type * currentProperty = currentEntity->mInfo.mAllPropertiesMap.firstObject () ;
    bool first = true ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      if (first) {
        first = false ;
      }else{
        generatedZone3 << ",\n                             " ;
      }
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        generatedZone3 << "const GGS_" << currentProperty->mInfo.mTypeName
                       << " & _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "const GGS_" << currentProperty->mInfo.mTypeName
                       << " * _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << "const GGS_" << currentProperty->mInfo.mTypeName
                       << " * _in_" << currentProperty->mKey ;
        break ;
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
    generatedZone3 << ") ;\n" ;
  //--- Attributes                 
    generatedZone3 << "//--- Properties\n" ;
    currentProperty = currentEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        generatedZone3 << "  protected : const GGS_" << currentProperty->mInfo.mTypeName
                       << " " << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "  protected : const GGS_" << currentProperty->mInfo.mTypeName
                       << " * " << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << "  protected : const GGS_" << currentProperty->mInfo.mTypeName
                       << " * " << currentProperty->mKey << " ;\n" ;
        break ;
      case GGS_metamodelPropertyKind::kNotBuilt:
        break ;
      }
      currentProperty = currentProperty->nextObject () ;
    }
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
                             const GGS_entityToImplementMap & ioEntityMap,
                             const GGS_lstring & inMetamodelComponentName,
                             const GGS_stringset & inMultipleReferencedEntities) {
  C_String generatedZone2 ;
//--- Include declaration of header file
  generatedZone2 << "#include \"" << inMetamodelComponentName << ".h\"\n" ;
  
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (200000) ;
//--- Generate Implementations of Lists
  GGS_stringset::element_type * currentMultipleReferencedEntity = inMultipleReferencedEntities.firstObject () ;
  while (currentMultipleReferencedEntity != NULL) {
    macroValidPointer (currentMultipleReferencedEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Implementation of GGS__listOf_") + currentMultipleReferencedEntity->mKey.string () + " Class") ;
    generatedZone3 << "GGS__listOf_" << currentMultipleReferencedEntity->mKey.string () << "::\n"
                      "GGS__listOf_" << currentMultipleReferencedEntity->mKey.string () << " (void)\n"
                      ":mFirstObject (NULL), mLastObject (NULL) {\n"
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
      if (first) {
        first = false ;
      }else{
        generatedZone3 << ",\n                             " ;
      }
      switch (currentProperty->mInfo.mKind.enumValue ()) {
      case GGS_metamodelPropertyKind::enum_attributeProperty:
        generatedZone3 << "const GGS_" << currentProperty->mInfo.mTypeName
                       << " & _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_singleReferenceProperty:
        generatedZone3 << "const GGS_" << currentProperty->mInfo.mTypeName
                       << " * _in_" << currentProperty->mKey ;
        break ;
      case GGS_metamodelPropertyKind::enum_multipleReferenceProperty:
        generatedZone3 << "const GGS_" << currentProperty->mInfo.mTypeName
                       << " * _in_" << currentProperty->mKey ;
        break ;
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
    for (sint32 i=0 ; i<inheritedPropertyCount ; i++) {
      macroValidPointer (currentProperty) ;
      if (i > 0) {
        generatedZone3 << ",\n                             " ;
      }
      generatedZone3 << "_in_" << currentProperty->mKey ;
      currentProperty = currentProperty->nextObject () ;
    }
    if (inheritedPropertyCount == 0) {
      generatedZone3 << "THERE" ;
    }else{
      generatedZone3 << "\n                             "
                        "COMMA_THERE" ;
    }
    generatedZone3 << "),\n_mNextObject (NULL)" ;
    currentProperty = currentEntity->mInfo.mEntityPropertiesMap.firstObject () ;
    while (currentProperty != NULL) {
      macroValidPointer (currentProperty) ;
      generatedZone3 << ",\n" << currentProperty->mKey << " (_in_" << currentProperty->mKey << ")" ;
      currentProperty = currentProperty->nextObject () ;
    }
    generatedZone3 << " {\n"
                      "}\n\n" ;
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
                            GGS_stringset inMultipleReferencedEntities) {
  if (inLexique.galgas_IO_Ptr ()->currentFileErrorsCount () == 0) {
  //--- Generate header file
    generate_metamodel_header_file (inLexique, ioEntityMap, inMetamodelComponentName, inMultipleReferencedEntities) ;
  //--- Generate implementation file
    generate_metamodel_cpp_file (inLexique, ioEntityMap, inMetamodelComponentName, inMultipleReferencedEntities) ;
  }
}

//---------------------------------------------------------------------------*
