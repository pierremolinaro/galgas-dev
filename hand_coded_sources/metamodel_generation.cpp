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
                                const GGS_entityMap & ioEntityMap,
                                const GGS_lstring & inMetamodelComponentName) {
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
  GGS_entityMap::element_type * currentEntity = ioEntityMap.firstObject () ;
  generatedZone3.writeCTitleComment ("Class Predeclarations") ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    generatedZone3 << "class GGS_" << currentEntity->mKey << " ;\n" ;
    currentEntity = currentEntity->nextObject () ;
  }
  generatedZone3 << '\n' ;
  
//--- Generate entities declarations
  currentEntity = ioEntityMap.firstObject () ;
  while (currentEntity != NULL) {
    macroValidPointer (currentEntity) ;
    generatedZone3.writeCTitleComment (C_String ("Declaration of GGS_") + currentEntity->mKey + " Class") ;
    const C_String superClass = currentEntity->mInfo.mSuperEntityName ;
    generatedZone3 << "class GGS_" << currentEntity->mKey << " : public GGS_"
                   << ((superClass.length () == 0) ? C_String ("Object") : superClass)
                   << " {\n" ;
  //--- Attributes                 
    generatedZone3 << "//--- Attributes\n" ;
    GGS_entityAttributeMap::element_type * currentAttribute = currentEntity->mInfo.mEntityAttributeMap.firstObject () ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      generatedZone3 << "  protected : GGS_" << currentAttribute->mInfo.mAttributeType
                     << " " << currentAttribute->mKey << " ;\n" ;
      currentAttribute = currentAttribute->nextObject () ;
    }
  //--- Single References                 
    generatedZone3 << "//--- Single References\n" ;
    GGS_entitySingleReferenceMap::element_type * currentSingleRef = currentEntity->mInfo.mSingleReferenceMap.firstObject () ;
    while (currentSingleRef != NULL) {
      macroValidPointer (currentSingleRef) ;
      generatedZone3 << "  protected : GGS_" << currentSingleRef->mInfo.mSingleReferenceType
                     << " * " << currentSingleRef->mKey << " ;\n" ;
      currentSingleRef = currentSingleRef->nextObject () ;
    }
  //--- End of Class Declaration                 
    generatedZone3 << "}\n\n" ;
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
                             const GGS_entityMap & ioEntityMap,
                             const GGS_lstring & inMetamodelComponentName) {
  C_String generatedZone2 ;
  
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (20000) ;
  
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
                            GGS_entityMap & ioEntityMap,
                            GGS_lstring inMetamodelComponentName) {
  if (inLexique.galgas_IO_Ptr ()->currentFileErrorsCount () == 0) {
  //--- Generate header file
    generate_metamodel_header_file (inLexique, ioEntityMap, inMetamodelComponentName) ;
  //--- Generate implementation file
    generate_metamodel_cpp_file (inLexique, ioEntityMap, inMetamodelComponentName) ;
  }
}

//---------------------------------------------------------------------------*
