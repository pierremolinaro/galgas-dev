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

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark CALL instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_callInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & /* inLexiqueClassName */,
                     const C_String & inTargetFileName,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mProperty (HERE)->generateCallInstruction (ioCppFile,
                                               mEntityName,
                                               mCalledPropertyName,
                                               inTargetFileName,
                                               mExpressionsList) ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateCallInstruction (AC_OutputStream & /* ioCppFile */,
                         const C_String & /* inEntityName */,
                         const GGS_lstring & /* inCalledPropertyName */,
                         const C_String & /* inTargetFileName */,
                         const GGS_typeExpressionList & /* inParameterList */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateCallInstruction (AC_OutputStream & ioCppFile,
                         const C_String & inEntityName,
                         const GGS_lstring & inCalledPropertyName,
                         const C_String & /* inTargetFileName */,
                         const GGS_typeExpressionList & inExpressionList) const {
  ioCppFile << "macroValidPointer (_currentObject->" << inCalledPropertyName << ") ;\n"
            << "_treewalking_routine_" << inEntityName << " (_inLexique, "
               "_currentObject->" << inCalledPropertyName ;
  GGS_typeExpressionList::element_type * argCourant = inExpressionList.firstObject () ;
  while (argCourant != NULL) {
    macroValidPointer (argCourant) ;
    ioCppFile << ", " ;
    argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
    argCourant = argCourant->nextObject () ;
  }
  /* ioCppFile << " SOURCE_FILE_AT_LINE ("
            << inCalledPropertyName.currentLineNumber ()
            << ")) ;\n" ; */
  ioCppFile << ") ;\n" ; 
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateCallInstruction (AC_OutputStream & ioCppFile,
                         const C_String & inEntityName,
                         const GGS_lstring & inCalledPropertyName,
                         const C_String & /* inTargetFileName */,
                         const GGS_typeExpressionList & inExpressionList) const {
  ioCppFile << "{ GGM_" << inEntityName << " * _ptr = _currentObject->"
            << inCalledPropertyName << "._mFirstObject ;\n"
            << "  while (_ptr != NULL) {\n"
               "    macroValidPointer (_ptr) ;\n"
               "    _treewalking_routine_" << inEntityName << " (_inLexique, _ptr" ;
  GGS_typeExpressionList::element_type * argCourant = inExpressionList.firstObject () ;
  while (argCourant != NULL) {
    macroValidPointer (argCourant) ;
    ioCppFile << ", " ;
    argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
    argCourant = argCourant->nextObject () ;
  }
  ioCppFile << // " SOURCE_FILE_AT_LINE ("
         //   << inCalledPropertyName.currentLineNumber ()
         //   << ")) ;\n"
               ") ;\n"
               "    _ptr = _ptr->_mNextObject ;\n"
               "  }\n"
               "}\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_callInstruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_callInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool /* inGenerateSemanticInstructions */) const {
  bool isUsed = false ;
  GGS_typeExpressionList::element_type * argCourant = mExpressionsList.firstObject () ;
  while ((! isUsed) && argCourant != NULL) {
    macroValidPointer (argCourant) ;
    isUsed = argCourant->mExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    argCourant = argCourant->nextObject () ;
  }
  return isUsed ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark treewalking COMPONENT
#endif

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
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  static const char gGGSsourceFile [] = \"" << inLexique.sourceFileName ().lastPathComponent () << "\" ;\n"
                    "  #define SOURCE_FILE_AT_LINE(line) , gGGSsourceFile, line\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

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

//--- Generate dispatcher
  generatedZone3.writeCppTitleComment ("Dispatcher tables") ;

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
