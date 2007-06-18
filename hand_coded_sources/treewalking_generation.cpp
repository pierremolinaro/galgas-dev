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
                     const C_String & inTargetFileName,
                     sint32 & /* ioPrototypeIndex */,
                     const bool /* inGenerateDebug */,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    mPropertyType (HERE)->generateCallInstruction (ioCppFile,
                                               mEntityName,
                                               mCalledPropertyName,
                                               inTargetFileName,
                                               mExpressionsList) ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generateCallInstruction (AC_OutputStream & /* ioCppFile */,
                         const C_String & /* inEntityName */,
                         const GGS_lstring & /* inCalledPropertyName */,
                         const C_String & /* inTargetFileName */,
                         const GGS_typeExpressionList & /* inParameterList */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
generateCallInstruction (AC_OutputStream & ioCppFile,
                         const C_String & inEntityName,
                         const GGS_lstring & inCalledPropertyName,
                         const C_String & /* inTargetFileName */,
                         const GGS_typeExpressionList & inExpressionList) const {
  ioCppFile << "{ _treewalking_routine_" << inEntityName
            << "_type * _f = (_treewalking_routine_" << inEntityName
            << "_type *) _gDispatcherTree.entry (_currentObject->" << inCalledPropertyName << ".getPtr () COMMA_HERE) ;\n"
               "  (* _f) (_inLexique, _currentObject->" << inCalledPropertyName
            << ".getPtr ()" ;
  GGS_typeExpressionList::element_type * argCourant = inExpressionList.firstObject () ;
  while (argCourant != NULL) {
    macroValidPointer (argCourant) ;
    ioCppFile << ", " ;
    argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
    argCourant = argCourant->nextObject () ;
  }
  ioCppFile << ") ;\n"
               "}\n" ; 
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateCallInstruction (AC_OutputStream & ioCppFile,
                         const C_String & inEntityName,
                         const GGS_lstring & inCalledPropertyName,
                         const C_String & /* inTargetFileName */,
                         const GGS_typeExpressionList & inExpressionList) const {
  ioCppFile << "macroValidPointer (_currentObject) ;\n"
               "{ GGS_" << inEntityName << "List::element_type * _ptr = _currentObject->"
            << inCalledPropertyName << ".firstObject () ;\n"
            << "  while (_ptr != NULL) {\n"
               "    _treewalking_routine_" << inEntityName
            << "_type * _f = (_treewalking_routine_" << inEntityName
            << "_type *) _gDispatcherTree.entry (_ptr COMMA_HERE) ;\n"
               "    (* _f) (_inLexique, _ptr" ;
  GGS_typeExpressionList::element_type * argCourant = inExpressionList.firstObject () ;
  while (argCourant != NULL) {
    macroValidPointer (argCourant) ;
    ioCppFile << ", " ;
    argCourant->mExpression (HERE)->generateExpression (ioCppFile) ;
    argCourant = argCourant->nextObject () ;
  }
  ioCppFile << ") ;\n"
               "    _ptr = _ptr->nextObject () ;\n"
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

bool cPtr_callInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark treewalking COMPONENT
#endif

//---------------------------------------------------------------------------*

static void
generate_treewalking_header (C_Compiler & inLexique,
        const GGS_lstring & inTreewalkingComponentName,
        const GGS_stringset & inFilesToImportInHeaderSet,
        const GGS_typeListeTypesEtNomsArgMethode & inRootRoutineSignature,
        const GGS_lstring & inRootEntity) {
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
  generatedZone3 << "void\n"
                    "_walk_throught_" << inTreewalkingComponentName
                   << " (C_Compiler & _inLexique,\n"
                      "                                const GGS_" << inRootEntity << " & _rootObject" ;
  GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = inRootRoutineSignature.firstObject () ;
  while (currentArgument != NULL) {
    generatedZone3 << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, generatedZone3) ;
    generatedZone3 << " " ;
    currentArgument->mCppName (HERE)->generateCplusPlusName (generatedZone3) ;
    currentArgument = currentArgument->nextObject () ;
  }
  generatedZone3 << ") ;\n\n" ;
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile ("//",
                          inTreewalkingComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

static void
generate_treewalking_implementation (C_Compiler & inLexique,
        const GGS_stringset & inFilesToImportInImplementationSet,
        const GGS_lstring & inTreewalkingComponentName,
        const GGS_treewalkingRoutineToGenerateList & inTreewalkingRoutineToGenerateList,
        const GGS_routineDispatcherSortedList & inRoutineDispatcherSortedList,
        const GGS_typeListeTypesEtNomsArgMethode & inRootRoutineSignature,
        const GGS_lstring & inRootEntity) {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
//--- Include declaration of header file
  generatedZone2 << "#include \"" << inTreewalkingComponentName << ".h\"\n" ;
  GGS_stringset::element_type * currentInclude = inFilesToImportInImplementationSet.firstObject () ;
  while (currentInclude != NULL) {
    macroValidPointer (currentInclude) ;
    generatedZone2 << "#include \"" << currentInclude->mKey << "\"\n" ;
    currentInclude = currentInclude->nextObject () ;
  }
  generatedZone2 << "#include \"utilities/MF_MemoryControl.h\"\n\n" ;

  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inLexique.sourceFileName ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

  C_String generatedZone3 ; generatedZone3.setCapacity (200000) ;

//--- Generate routine declarations
  generatedZone3.writeCppTitleComment ("Treewalking routine prototype declaration") ;
  GGS_treewalkingRoutineToGenerateList::element_type * currentRoutine = inTreewalkingRoutineToGenerateList.firstObject () ;
  while (currentRoutine != NULL) {
    macroValidPointer (currentRoutine) ;
    generatedZone3 << "static void\n"
                      "_treewalking_routine_" << currentRoutine->mMetamodelClass
                   << " (C_Compiler & _inLexique"
                      ",\n                                "
                      "const cPtr_" << currentRoutine->mMetamodelClass << " * _currentObject" ;
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

//--- Generate routine type declarations
  generatedZone3.writeCppTitleComment ("Treewalking routine type declaration") ;
  currentRoutine = inTreewalkingRoutineToGenerateList.firstObject () ;
  while (currentRoutine != NULL) {
    macroValidPointer (currentRoutine) ;
    generatedZone3 << "typedef void\n"
                      "_treewalking_routine_" << currentRoutine->mMetamodelClass
                   << "_type (C_Compiler & _inLexique"
                      ",\n                                "
                      "const cPtr_" << currentRoutine->mMetamodelClass << " * _currentObject" ;
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
  generatedZone3 << "\n" ;
  uint32 currentIndex = 0 ;
  C_String currentMetamodelName ;
  C_String codeForDispacher ;
  TC_UniqueArray <C_String> metamodelsWithDispatcher ;
  GGS_routineDispatcherSortedList::element_type * currentEntry = inRoutineDispatcherSortedList.firstObject () ;
  while (currentEntry != NULL) {
    if (currentEntry->mMetamodelName.string () != currentMetamodelName) {
      if (currentMetamodelName.length () > 0) {
        generatedZone3 << "static const uint32 _kSize_" << currentMetamodelName << " = " << currentIndex << " ;\n\n" ;
        codeForDispacher << "} ;\n\n" ;
        codeForDispacher.writeCppHyphenLineComment () ;
        generatedZone3 << codeForDispacher ;
        codeForDispacher.clear () ;
      }
      currentMetamodelName = currentEntry->mMetamodelName ;
      metamodelsWithDispatcher.addObject (currentMetamodelName) ;
      currentIndex = 0 ;
      codeForDispacher << "static const CTreewalkingVirtualMethod _kDispatcherFor_" << currentMetamodelName << " [_kSize_" << currentMetamodelName << "] = {\n" ;
    }
    codeForDispacher << "  {" << currentEntry->mMetamodelClassID.uintValue ()
                     << ", (void *) _treewalking_routine_" << currentEntry->mRoutineName
                     << "}, // @"
                     << currentEntry->mEntityName << ", defined in '"
                     << currentEntry->mMetamodelName << "' metamodel\n" ;
    currentIndex ++ ;
    currentEntry = currentEntry->nextObject () ;
  }
  codeForDispacher << "} ;\n\n" ;
  generatedZone3 << "static const uint32 _kSize_" << currentMetamodelName << " = " << currentIndex << " ;\n\n" ;
  generatedZone3 << codeForDispacher ;
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "static C_TreewalkingDispacher _gDispatcherTree ;\n"
                    "\n" ;

//--- Generate routine implementation
  currentRoutine = inTreewalkingRoutineToGenerateList.firstObject () ;
  while (currentRoutine != NULL) {
    macroValidPointer (currentRoutine) ;
    generatedZone3.writeCppTitleComment (C_String ("'") + currentRoutine->mMetamodelClass + "' treewalking routine implementation") ;
    generatedZone3 << "static void\n"
                      "_treewalking_routine_" << currentRoutine->mMetamodelClass
                   << " (C_Compiler &" ;
    if (isLexiqueFormalArgumentUsedForList (currentRoutine->mInstructionList, true)) {
      generatedZone3 << " _inLexique" ;
    }
    const bool currentObjectArgumentIsUsed = formalCurrentObjectArgumentIsUsedForList (currentRoutine->mInstructionList) ;
    generatedZone3 << ",\n                                "
                      "const cPtr_" << currentRoutine->mMetamodelClass << " * " ;
    if (currentObjectArgumentIsUsed) {
      generatedZone3 << "_currentObject" ;
    }else{
      generatedZone3 << "/* _currentObject */" ;
    }
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
    generatedZone3 << ") {\n"
                      "  #ifdef TRACE_TREE_WALKING\n"
                      "    printf (\"TREE WALKING @" << currentRoutine->mMetamodelClass << "\\n\") ; fflush (stdout) ;\n"
                      "  #endif\n" ;
    sint32 prototypeIndex = 0 ; // Unused here
    generateInstructionListForList (currentRoutine->mInstructionList,
                                    generatedZone3,
                                    inTreewalkingComponentName,
                                    prototypeIndex,
                                    true,
                                    true) ;
    generatedZone3 << "}\n\n" ;
    currentRoutine = currentRoutine->nextObject () ;
  }

//--- Generate dispatcher tree
  generatedZone3.writeCppTitleComment ("Build Dispatcher Tree") ;
  generatedZone3 << "static void _build_dispacher_tree (void) {\n" ;
  for (sint32 i=0 ; i<metamodelsWithDispatcher.count () ; i++) {
    const C_String metamodelName = metamodelsWithDispatcher (i COMMA_HERE) ;
    generatedZone3 << "  _gDispatcherTree.enterTable (_metamodel_index_for_" << metamodelName << " (),\n"
                   << "                                _kSize_" << metamodelName << ",\n"
                      "                                _kDispatcherFor_" << metamodelName << "\n"
                      "                                COMMA_HERE) ;\n" ;
  }
  generatedZone3 << "}\n"
                    "\n" ;

//--- Generate root routine implementation
  generatedZone3.writeCppTitleComment ("Root routine") ;
  generatedZone3 << "void\n"
                    "_walk_throught_" << inTreewalkingComponentName
                   << " (C_Compiler & _inLexique,\n"
                      "                                const GGS_" << inRootEntity << " & _rootObject" ;
  GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = inRootRoutineSignature.firstObject () ;
  while (currentArgument != NULL) {
    generatedZone3 << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, generatedZone3) ;
    generatedZone3 << " " ;
    currentArgument->mCppName (HERE)->generateCplusPlusName (generatedZone3) ;
    currentArgument = currentArgument->nextObject () ;
  }
  generatedZone3 << ") {\n"
                    "  if (_rootObject._isBuilt ()) {\n"
                    "    if (! _gDispatcherTree.isInited ()) {\n"
                    "      _build_dispacher_tree () ;\n"
                    "    }\n"
                 << "    _treewalking_routine_" << inRootEntity << "_type * _f = (_treewalking_routine_" << inRootEntity
                 << "_type *) _gDispatcherTree.entry (_rootObject.getPtr () COMMA_HERE) ;\n"
                    "    (* _f) (_inLexique, _rootObject.getPtr ()" ;
  currentArgument = inRootRoutineSignature.firstObject () ;
  while (currentArgument != NULL) {
    generatedZone3 << ", " ;
    currentArgument->mCppName (HERE)->generateCplusPlusName (generatedZone3) ;
    currentArgument = currentArgument->nextObject () ;
  }
  generatedZone3 << ") ;\n"
                    "  }else{\n" ;
  currentArgument = inRootRoutineSignature.firstObject () ;
  while (currentArgument != NULL) {
    if (currentArgument->mFormalArgumentPassingMode.enumValue () == GGS_formalArgumentPassingMode::enum_argumentOut) {
      generatedZone3 << "    " ;
      currentArgument->mCppName (HERE)->generateCplusPlusName (generatedZone3) ;
      generatedZone3 << "._drop_operation () ;\n" ;
    }
    currentArgument = currentArgument->nextObject () ;
  }
  generatedZone3 << "  }\n"
                    "}\n\n" ;

//--- Generate file
  generatedZone3.writeCppHyphenLineComment () ;
  inLexique.generateFile ("//",
                          inTreewalkingComponentName + ".cpp",
                          "\n\n//#define TRACE_TREE_WALKING\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void
routine_generate_treewalking (C_Compiler & inLexique,
                              const GGS_lstring inTreewalkingComponentName,
                              const GGS_stringset inFilesToImportInHeaderSet,
                              const GGS_stringset inFilesToImportInImplementationSet,
                              const GGS_treewalkingRoutineToGenerateList inTreewalkingRoutineToGenerateList,
                              const GGS_routineDispatcherSortedList inRoutineDispatcherSortedList,
                              const GGS_typeListeTypesEtNomsArgMethode inRootRoutineSignature,
                              const GGS_lstring inRootEntity
                              COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.currentFileErrorCount () == 0) {
    generate_treewalking_header (inLexique,
                                 inTreewalkingComponentName,
                                 inFilesToImportInHeaderSet,
                                 inRootRoutineSignature,
                                 inRootEntity) ;
    generate_treewalking_implementation (inLexique,
                                 inFilesToImportInImplementationSet,
                                 inTreewalkingComponentName,
                                 inTreewalkingRoutineToGenerateList,
                                 inRoutineDispatcherSortedList,
                                 inRootRoutineSignature,
                                 inRootEntity) ;
  }
}

//---------------------------------------------------------------------------*
