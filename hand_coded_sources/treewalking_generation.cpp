//---------------------------------------------------------------------------*
//                                                                           *
//  GALGAS Treewalking generation; started february 19th, 2007.              *
//                                                                           *
//  Copyright (C) 2007 Pierre Molinaro.                                      *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
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

static void
generate_treewalking_header (C_Lexique & inLexique,
        const GGS_lstring & inTreewalkingComponentName,
        const GGS_stringset & inFilesToImportInHeaderSet) {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#ifndef " << inTreewalkingComponentName << "_CONSTRAINTS_DEFINED\n"
                 << "#define " << inTreewalkingComponentName << "_CONSTRAINTS_DEFINED\n"
                    "\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  GGS_stringset::element_type * currentIncludedFile = inFilesToImportInHeaderSet.firstObject () ;
  while (currentIncludedFile != NULL) {
    generatedZone2 << "#include \"" << currentIncludedFile->mKey << ".h\"\n" ;
    currentIncludedFile = currentIncludedFile->nextObject () ;
  }
  generatedZone2 << "\n" ;
  C_String generatedZone3 ; generatedZone3.setCapacity (20000) ;

//--- End of ".h" file
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output"
                                                                   COMMA_HERE) ;
  inLexique.generateFile ("//",
                          inTreewalkingComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

static void
generate_treewalking_implementation (C_Lexique & inLexique,
        const GGS_lstring & inTreewalkingComponentName,
        const GGS_treewalkingRoutineToGenerateList & inTreewalkingRoutineToGenerateList) {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
//--- Include declaration of header file
  generatedZone2 << "#include \"" << inTreewalkingComponentName << ".h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n\n" ;

  C_String generatedZone3 ; generatedZone3.setCapacity (200000) ;

//--- Generate routine declarations
  generatedZone3.writeCppTitleComment ("Treewalking routine prototype declaration") ;
  GGS_treewalkingRoutineToGenerateList::element_type * currentRoutine = inTreewalkingRoutineToGenerateList.firstObject () ;
  while (currentRoutine != NULL) {
    macroValidPointer (currentRoutine) ;
    generatedZone3 << "static void\n"
                      "_treewalking_routine_" << currentRoutine->mMetamodelClass
                   << " (C_Lexique & _inLexique"
                      ",\n                                "
                      "const GGM_" << currentRoutine->mMetamodelClass << " * _currentObject" ;
    GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = currentRoutine->mFormalArgumentList.firstObject () ;
    while (currentArgument != NULL) {
      generatedZone3 << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, generatedZone3) ;
      generatedZone3 << " " ;
      currentArgument->mCppName (HERE)->generateCplusPlusName (generatedZone3) ;
      currentArgument = currentArgument->nextObject () ;
    }
    generatedZone3 << ") ;\n\n" ;
    currentRoutine = currentRoutine->nextObject () ;
  }

//--- Generate routine implementation
  currentRoutine = inTreewalkingRoutineToGenerateList.firstObject () ;
  while (currentRoutine != NULL) {
    macroValidPointer (currentRoutine) ;
    generatedZone3.writeCppTitleComment (C_String ("'") + currentRoutine->mMetamodelClass + "' treewalking routine implementation") ;
    generatedZone3 << "static void\n"
                      "_treewalking_routine_" << currentRoutine->mMetamodelClass
                   << " (C_Lexique &" ;
    if (isLexiqueFormalArgumentUsedForList (currentRoutine->mInstructionList, true)) {
      generatedZone3 << " _inLexique" ;
    }
    generatedZone3 << ",\n                                "
                      "const GGM_" << currentRoutine->mMetamodelClass << " * _currentObject" ;
    GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = currentRoutine->mFormalArgumentList.firstObject () ;
    while (currentArgument != NULL) {
      generatedZone3 << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, generatedZone3) ;
      generatedZone3 << " " ;
      const bool argumentIsUsed = formalArgumentIsUsedForList (currentRoutine->mInstructionList, currentArgument->mCppName, true) ;
      if (! argumentIsUsed) {
        generatedZone3 << "/* " ;
      }
      currentArgument->mCppName (HERE)->generateCplusPlusName (generatedZone3) ;
      if (! argumentIsUsed) {
        generatedZone3 << " */" ;
      }
      currentArgument = currentArgument->nextObject () ;
    }
    generatedZone3 << ") {\n" ;
    sint32 prototypeIndex = 0 ; // Unused here
    generateInstructionListForList (currentRoutine->mInstructionList,
                                    generatedZone3,
                                    "", // Unused lexique actual name
                                    inTreewalkingComponentName,
                                    prototypeIndex,
                                    true,
                                    true) ;
    generatedZone3 << "}\n\n" ;
    currentRoutine = currentRoutine->nextObject () ;
  }

//--- Generate file
  generatedZone3.writeCppHyphenLineComment () ;
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output"
                                                                   COMMA_HERE) ;
  inLexique.generateFile ("//",
                          inTreewalkingComponentName + ".cpp",
                          "\n\n//#define DEBUG_TREE_WALKING\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

void
routine_generate_treewalking (C_Lexique & inLexique,
                              const GGS_lstring & inTreewalkingComponentName,
                              const GGS_stringset & inFilesToImportInHeaderSet,
                              const GGS_treewalkingRoutineToGenerateList & inTreewalkingRoutineToGenerateList
                              COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.currentFileErrorCount () == 0) {
    generate_treewalking_header (inLexique,
                                 inTreewalkingComponentName,
                                 inFilesToImportInHeaderSet) ;
    generate_treewalking_implementation (inLexique,
                                 inTreewalkingComponentName,
                                 inTreewalkingRoutineToGenerateList) ;
  }
}

//---------------------------------------------------------------------------*
