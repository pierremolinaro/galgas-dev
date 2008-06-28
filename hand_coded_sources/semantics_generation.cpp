//---------------------------------------------------------------------------*
//                                                                           *
//  Copyright (C) 1999, ..., 2007 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "files/C_TextFileWrite.h"
#include "time/C_DateTime.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#include "semantics_instructions.h"
#include "semantics_parser.h"
#include "parser_generation.h"
#include "galgas_start.h"

//---------------------------------------------------------------------------*

void
routine_check_KL_escapeCharacters (C_Compiler & inLexique,
                                   GGS_lstring inString
                                   COMMA_LOCATION_ARGS) {
  if (inString._isBuilt ()) {
    bool gotPercent = false ;
    const char * cString = inString.cString () ;
    while ((*cString) != '\0') {
      if (gotPercent) {
        if (((*cString) != 'K') && ((*cString) != 'L') && ((*cString) != '%')) {
          C_String errorMessage ;
          errorMessage << "unknown escape sequence: only %K, %L and %% sequences are defined" ;
          inString.semanticError (inLexique, errorMessage.cString () COMMA_THERE) ;
        }
        gotPercent = false ;
      }else if ((*cString) == '%') {
        gotPercent = true ;
      }
      cString ++ ; 
    }
    if (gotPercent) {
      C_String errorMessage ;
      errorMessage << "string ends with a single %: only %K, %L and %% sequences are defined" ;
      inString.semanticError (inLexique, errorMessage.cString () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------*

void
routine_check_K_escapeCharacters (C_Compiler & inLexique,
                                  GGS_lstring inString
                                  COMMA_LOCATION_ARGS) {
  if (inString._isBuilt ()) {
    bool gotPercent = false ;
    const char * cString = inString.cString () ;
    while ((*cString) != '\0') {
      if (gotPercent) {
        if (((*cString) != 'K') && ((*cString) != '%')) {
          C_String errorMessage ;
          errorMessage << "unknown escape sequence: only %K and %% sequences are defined" ;
          inString.semanticError (inLexique, errorMessage.cString () COMMA_THERE) ;
        }
        gotPercent = false ;
      }else if ((*cString) == '%') {
        gotPercent = true ;
      }
      cString ++ ; 
    }
    if (gotPercent) {
      C_String errorMessage ;
      errorMessage << "string ends with a single %: only %K and %% sequences are defined" ;
      inString.semanticError (inLexique, errorMessage.cString () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------*

void
routine_buildFileNameWithPath (C_Compiler &,
                               GGS_lstring & outFileNameWithPath,
                               GGS_lstring inPath,
                               const GGS_lstring inCppClassName,
                               const GGS_lstring inExtension
                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String s ;
  if (inPath.length () > 0) {
    s << inPath << '/' ;
  }
  s << inCppClassName << '.' << inExtension ;
  outFileNameWithPath = GGS_lstring (GGS_string (true, s), inCppClassName) ;
}

//---------------------------------------------------------------------------*

void
routine_appendJokersIfNeeded (C_Compiler &,
                              GGS_typeCplusPlusNameList & ioVariablesList,
                              GGS_uint inEffectiveArgumentsCount,
                              GGS_uint inFormalParametersCount,
                              GGS_typeCplusPlusName inNullName
                              COMMA_UNUSED_LOCATION_ARGS) {
  const uint32 effectiveArgumentsCount = inEffectiveArgumentsCount.uintValue () ;
  const uint32 formalParametersCount = inFormalParametersCount.uintValue () ;
  for (unsigned i=effectiveArgumentsCount ; i<formalParametersCount ; i++) {
    ioVariablesList._addAssign_operation (inNullName) ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.writeCppTitleComment (C_String ("Routine '") + aNomRoutine + "'") ;
  inHfile << "void routine_" << aNomRoutine << " (C_Compiler &" ;
  GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = aListeTypeEtNomsArguments.firstObject () ;
  while (currentArgument != NULL) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inHfile) ;
    currentArgument = currentArgument->nextObject () ;
  }
  inHfile << " COMMA_LOCATION_ARGS) ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inTargetFileName */,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                sint32 & ioPrototypeIndex,
                                const bool inGenerateDebug) const {
  inCppFile.writeCppTitleComment (C_String ("Implementation of routine \"") + aNomRoutine + '"') ;
  inCppFile << "void routine_" << aNomRoutine << " (C_Compiler &" ;
  if (isLexiqueFormalArgumentUsedForList (mInstructionList, true)) {
    inCppFile << " _inLexique" ;
  }
  GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = aListeTypeEtNomsArguments.firstObject () ;
  while (currentArgument != NULL) {
    inCppFile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inCppFile) ;
    const bool variableUtilisee = formalArgumentIsUsedForList (mInstructionList, currentArgument->mCppName, true) ;
    inCppFile << ' ' ;
    if (! variableUtilisee) {
      inCppFile << "/* " ;
    }
    currentArgument->mCppName (HERE)->generateCplusPlusName (inCppFile) ;
    if (! variableUtilisee) {
      inCppFile << " */" ;
    }
    currentArgument = currentArgument->nextObject () ;
  }
  inCppFile << " COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  #ifdef DEBUG_TRACE_ENABLED\n"
               "    printf (\"ENTER routine_" << aNomRoutine << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
               "  #endif\n" ;
//--- Engendrer la liste d'instructions
  generateInstructionListForList (mInstructionList, inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, true) ;
//--- Fin de la fonction
  inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
               "    printf (\"LEAVE routine_" << aNomRoutine << "\\n\") ;\n"
               "  #endif\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile << "void routine_" << aNomAction << " (C_Compiler &" ;
  GGS_L_EXsignature::cElement * currentArgument = aSignature.firstObject () ;
  while (currentArgument != NULL) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inHfile) ;
    currentArgument = currentArgument->nextObject () ;
  }
  inHfile << " COMMA_LOCATION_ARGS) ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeActionExterneAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inTargetFileName */,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & /* inCppFile */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier ".h"                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_header_file (C_Compiler & inLexique,
                      const GGS_lstring & nomComposant,
                      const GGS_stringset & inIncludesForHeaderFile,
                      const GGS_string & inLexiqueName,
                      const GGS_typeEntitiesToGenerateList & listeEntitesAengendrer) {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#ifndef " << nomComposant << "_DEFINED\n"
                 << "#define " << nomComposant << "_DEFINED\n"
                 << "\n#include <string.h>\n\n" ;

//--- Include declaration of predefined types
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"galgas/C_GGS_Object.h\"\n"
                    "#include \"galgas/GGS_location.h\"\n"
                    "#include \"galgas/GGS_lbool.h\"\n"
                    "#include \"galgas/GGS_lchar.h\"\n"
                    "#include \"galgas/GGS_lstring.h\"\n"
                    "#include \"galgas/GGS_ldouble.h\"\n"
                    "#include \"galgas/GGS_luint.h\"\n"
                    "#include \"galgas/GGS_lsint.h\"\n"
                    "#include \"galgas/GGS_luint64.h\"\n"
                    "#include \"galgas/GGS_lsint64.h\"\n"
                    "#include \"galgas/GGS_stringset.h\"\n"
                    "#include \"galgas/GGS_binaryset.h\"\n"
                    "#include \"galgas/GGS_filewrapper.h\"\n"
                    "#include \"galgas/predefined_types.h\"\n"
                    "#include \"galgas/AC_galgas_class.h\"\n"
                    "#include \"galgas/AC_galgas_domain.h\"\n"
                    "#include \"galgas/AC_galgas_mapindex.h\"\n"
                    "#include \"galgas/AC_galgas_map.h\"\n"
                    "#include \"galgas/AC_galgas_listmap.h\"\n"
                    "#include \"galgas/AC_galgas_list.h\"\n"
                    "#include \"galgas/AC_galgas_sortedlist.h\"\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;

//--- Generate lexique inclusion
  const C_String lexiqueName = inLexiqueName ;
  generatedZone2 << "#include \""
        << ((lexiqueName.length () == 0) ? C_String ("galgas/C_Lexique") : lexiqueName)
        << ".h\"\n\n" ;
//--- Generate include imported semantics components
  GGS_stringset::cElement * fichierCourant = inIncludesForHeaderFile.firstObject () ;
  if (fichierCourant != NULL) {
    generatedZone2.writeCppComment ("Include imported semantics") ;
    while (fichierCourant != NULL) {
      generatedZone2 << "#include \"" ;
      macroValidPointer (fichierCourant) ;
      generatedZone2 << fichierCourant->mKey ;
      generatedZone2 << ".h\"\n" ;
      fichierCourant = fichierCourant->nextObject () ;
    }
    generatedZone2 << '\n' ;
  }

  C_String generatedZone3 ; generatedZone3.setCapacity (200000) ;
//--- Generate classes declarations
  GGS_typeEntitiesToGenerateList::cElement * element = listeEntitesAengendrer.firstObject () ;
  generatedZone3.writeCppTitleComment ("Class Predeclarations") ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generatePredeclarations (generatedZone3) ;
    element = element->nextObject () ;
  }
  generatedZone3 << '\n' ;
  element = listeEntitesAengendrer.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateHdeclarations (generatedZone3) ;
    element = element->nextObject () ;
  }
  element = listeEntitesAengendrer.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateHdeclarations_2 (generatedZone3, inLexique) ;
    element = element->nextObject () ;
  }

//--- Engendrer la declaration de la classe de l'analyseur
  bool engendrerClasseCpp = false ;
  element = listeEntitesAengendrer.firstObject () ;
  while ((element != NULL) && ! engendrerClasseCpp) {
    macroValidPointer (element) ;
    engendrerClasseCpp = element->mEntityToGenerate (HERE)->isCppClassNeeded () ;
    element = element->nextObject () ;
  }
  if (engendrerClasseCpp) {
    engendrerDeclarationPrototypesReglesDeProduction (nomComposant, listeEntitesAengendrer, generatedZone3) ;
  }
  
//--- Engendrer la fin du fichier
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile ("//",
                          nomComposant + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

bool cPtr_typeCplusPlusName::isCurrentObject (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCurrentObjectName::isCurrentObject (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCurrentObjectName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "_currentObject->" << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDirectName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeAutomaticName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "var_cas_" << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLocationAutomaticName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "automatic_var_" << mSequenceNumber.uintValue () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppThisName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "(*this)" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppInheritedName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "(*this)" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeOperandName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  if (mIteratorNewStyle.boolValue ()) {
    inFile << "(* (enumerator_" << mVariableLocation.location ()
           << "._" << mName << " ()))" ;
  }else{
    inFile << "operand_" << mVariableLocation.location () << "->"
           << (mFieldKind.boolValue () ? "mInfo." : "")
           << mName ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeKeyName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  if (mIteratorNewStyle.boolValue ()) {
    inFile << "(* (enumerator_" << mVariableLocation.location () << "._key ()))" ;
  }else{
    inFile << "operand_" << mVariableLocation.location () << "->mKey" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeNullName::
generateCplusPlusName (AC_OutputStream & /* inFile */) const {
  throw C_Exception ("Internal error", 0, 0 COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeCurrentObjectName::
generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "& (_currentObject->" << mName << ")" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDirectName::
generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "& " << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeAutomaticName::
generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "& var_cas_" << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLocationAutomaticName::
generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "& automatic_var_" << mSequenceNumber.uintValue () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppThisName::
generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "this" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppInheritedName::
generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "this" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeOperandName::
generateVariableAddress (AC_OutputStream & inFile) const {
  if (mIteratorNewStyle.boolValue ()) {
    inFile << "enumerator_" << mVariableLocation.location () << "._"
           << mName << " ()" ;
  }else{
    inFile << "& operand_" << mVariableLocation.location () << "->"
           << (mFieldKind.boolValue () ? "mInfo." : "")
           << mName ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeKeyName::
generateVariableAddress (AC_OutputStream & inFile) const {
  if (mIteratorNewStyle.boolValue ()) {
    inFile << "enumerator_" << mVariableLocation.location () << "._key ()" ;
  }else{
    inFile << "& operand_" << mVariableLocation.location () << "->mKey" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeNullName::
generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "NULL";
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void
generateFormalArgumentFromTypeName (const C_String & inTypeName,
                                    const GGS_EXformalArgumentPassingMode & inFormalArgumentPassingMode,
                                    AC_OutputStream & inFile) {
  switch (inFormalArgumentPassingMode.enumValue ()) {
  case GGS_EXformalArgumentPassingMode::enum_argumentIn :
    inFile << "GGS_" << inTypeName ;
    break ;
  case GGS_EXformalArgumentPassingMode::enum_argumentOut :
    inFile << "GGS_" << inTypeName << " &" ;
    break ;
  case GGS_EXformalArgumentPassingMode::enum_argumentInOut :
    inFile << "GGS_" << inTypeName << " &" ;
    break ;
  case GGS_EXformalArgumentPassingMode::enum_argumentConstantIn :
    inFile << "const GGS_" << inTypeName ;
    break ;
  case GGS_EXformalArgumentPassingMode::kNotBuilt :
    break ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void
generateFormalArgumentFromType (const cPtr_AC_galgasType * inTypePtr,
                                const GGS_EXformalArgumentPassingMode & inFormalArgumentPassingMode,
                                AC_OutputStream & inFile) {
  macroValidPointer (inTypePtr) ;
  switch (inFormalArgumentPassingMode.enumValue ()) {
  case GGS_EXformalArgumentPassingMode::enum_argumentIn :
    inTypePtr->generateCppClassName (inFile) ;
    inFile << ' ' ;
    break ;
  case GGS_EXformalArgumentPassingMode::enum_argumentOut :
    inTypePtr->generateCppClassName (inFile) ;
    inFile << " &" ;
    break ;
  case GGS_EXformalArgumentPassingMode::enum_argumentInOut :
    inTypePtr->generateCppClassName (inFile) ;
    inFile << " &" ;
    break ;
  case GGS_EXformalArgumentPassingMode::enum_argumentConstantIn :
    inFile << "const " ;
    inTypePtr->generateCppClassName (inFile) ;
    inFile << ' ' ;
    break ;
  case GGS_EXformalArgumentPassingMode::kNotBuilt :
    break ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generateFormalParameter (AC_OutputStream & inFile,
                           const bool engendrerReference) {
  generateCppClassName (inFile) ;
  if (engendrerReference) {
    inFile << '&' ;
  }
  inFile << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generatePublicDeclaration (AC_OutputStream & inHfile,
                           const GGS_lstring & nomAttribut) {
  inHfile << "  public : " ;
  generateCppClassName (inHfile) ;
  inHfile << ' ' << nomAttribut << " ;\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasDomainType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mDomainTypeName ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_enum::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mEnumTypeName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_enum::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_enum::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListmapTypeName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_jokerInParameterList::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "??" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_jokerInParameterList::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_jokerInParameterList::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasExternType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mGalgasClassName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasExternType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasExternType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_bool::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_bool" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_bool::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_binaryset::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_binaryset" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_string::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_string" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_string::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_string::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_double::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_double" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_double::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_double::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_uint " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint64::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_uint64 " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint64::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint64::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_sint " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint64::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_sint64 " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint64::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint64::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_char::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_char" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_char::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_char::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedExternType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mGalgasClassName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedExternType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedExternType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lbool " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lchar " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_luint " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint64::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_luint64 " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lsint " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint64::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lsint64 " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_ldouble " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lstring " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_stringset::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_stringset " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_stringset::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_stringset::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_location::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_location " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_location::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_location::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark List Type
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Solrted List Type
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasSortedListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasSortedListType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasSortedListType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Undefined List Type
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Undefined Sorted List Type
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedSortedListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedSortedListType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedSortedListType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mMapTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mMapTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasClassType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_"  << mClassTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasClassType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasClassType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedClassType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mClassTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedClassType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedClassType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapindexType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mMapindexTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapindexType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapindexType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapindexType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_"  << mMapindexTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapindexType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapindexType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_filewrapper::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_filewrapper " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier C++                              *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_cpp_file (C_Compiler & inLexique,
                   GGS_lstring & nomComposant,
                   GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                   GGS_stringset & tableFichiersEnTetePourFichierCPP) {
//--- Write file header
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include <typeinfo>\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
                    "#include \"files/C_TextFileWrite.h\"\n"
                    "#include \"" << nomComposant << ".h\"\n\n";

  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inLexique.sourceFileName ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

//--- Engendrer les fichiers d'inclusion correspondant aux methodes externes
  GGS_stringset::cElement * currentInclude = tableFichiersEnTetePourFichierCPP.firstObject () ;
  if (currentInclude != NULL) {
    generatedZone2.writeCppTitleComment ("Include directives generated by grammar includes") ;
  }
  while (currentInclude != NULL) {
    macroValidPointer (currentInclude) ;
    generatedZone2 << "#include \"" << currentInclude->mKey << "\"\n" ;
    currentInclude = currentInclude->nextObject () ;
  }
  generatedZone2 << '\n' ;

//--- Generate debug ?
  const bool generateDebug = inLexique.boolOptionValueFromKeys ("galgas_cli_options", "generate_debug" COMMA_HERE) ;
  if (generateDebug) {
    generatedZone2 << "//#define DEBUG_TRACE_ENABLED\n\n" ;
  }
                 
//--- Engendrer les implementations
  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;
  GGS_typeEntitiesToGenerateList::cElement * element = listeEntitesAengendrer.firstObject () ;
  sint32 select_repeat_production_index = 0 ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateCppClassImplementation (inLexique,
                                         generatedZone3,
                                         nomComposant,
                                         select_repeat_production_index,
                                         generateDebug) ;
    element = element->nextObject () ;
  }
  
//--- Generate prologue et epilogue action
  C_String prologueActions ;
  C_String epilogueActions ;
  element = listeEntitesAengendrer.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->enterPrologueEpilogueAction (prologueActions,
                                                                    epilogueActions) ;
    element = element->nextObject () ;
  }
  if ((prologueActions.length () > 0) || (epilogueActions.length () > 0)) {
    generatedZone3.writeCppTitleComment ("Prologue and epilogue actions") ;
    if (prologueActions.length () > 0) {
      generatedZone3 << "static void prologueRoutineFor_" << nomComposant << " (void) {\n"
                     << prologueActions
                     << "}\n\n" ;
      generatedZone3.writeCppHyphenLineComment () ;
    }
    if (epilogueActions.length () > 0) {
      generatedZone3 << "static void epilogueRoutineFor_" << nomComposant << " (void) {\n"
                     << epilogueActions
                     << "}\n\n" ;
      generatedZone3.writeCppHyphenLineComment () ;
    }
    generatedZone3 << "C_PrologueEpilogueAction prologueEpilogueObjectFor_" << nomComposant << " (" ;
    if (prologueActions.length () > 0) {
      generatedZone3 << "prologueRoutineFor_" << nomComposant ;
    }else{
      generatedZone3 << "NULL" ;
    }
    generatedZone3 << ",\n"
                      "                                   " ;
    if (epilogueActions.length () > 0) {
      generatedZone3 << "epilogueRoutineFor_" << nomComposant ;
    }else{
      generatedZone3 << "NULL" ;
    }
    generatedZone3 << ") ;\n\n" ;
  }

//--- Engendrer la fin du fichier
  generatedZone3.writeCppHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile ("//",
                          nomComposant + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                          Routine principale                               *
//                                                                           *
//---------------------------------------------------------------------------*

void
routine_generateSemanticsComponent (C_Compiler & inLexique,
                                    GGS_lstring & nomComposant,
                                    GGS_stringset & includesForHeaderFile,
                                    GGS_string & defLexique,
                                    GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                                    GGS_stringset & tableFichiersEnTetePourFichierCPP
                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.currentFileErrorCount () == 0) {
    generate_header_file (inLexique,
                          nomComposant,
                          includesForHeaderFile,
                          defLexique,
                          listeEntitesAengendrer) ;
    generate_cpp_file (inLexique,
                       nomComposant,
                       listeEntitesAengendrer,
                       tableFichiersEnTetePourFichierCPP) ;
  }
}

//---------------------------------------------------------------------------*
