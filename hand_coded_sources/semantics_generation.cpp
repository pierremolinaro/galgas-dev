//---------------------------------------------------------------------------*
//                                                                           *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
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
#include "semantics_generation.h"
#include "semantics_parser.h"
#include "parser_generation.h"
#include "galgas_start.h"

//---------------------------------------------------------------------------*

void
buildFileNameWithPath (C_Lexique &,
                       GGS_lstring & outFileNameWithPath,
                       GGS_lstring inPath,
                       const GGS_lstring & inCppClassName,
                       const GGS_lstring & inExtension) {
  C_String s ;
  if (inPath.length () > 0) {
    s << inPath << '/' ;
  }
  s << inCppClassName << '.' << inExtension ;
  outFileNameWithPath = GGS_lstring (GGS_string (true, s), inCppClassName) ;
}

//---------------------------------------------------------------------------*

void appendJokersIfNeeded (C_Lexique &,
                           GGS_typeCplusPlusNameList & ioVariablesList,
                           GGS_uint inEffectiveArgumentsCount,
                           GGS_uint inFormalParametersCount,
                           GGS_typeCplusPlusName inNullName) {
  const uint32 effectiveArgumentsCount = inEffectiveArgumentsCount.uintValue () ;
  const uint32 formalParametersCount = inFormalParametersCount.uintValue () ;
  for (unsigned i=effectiveArgumentsCount ; i<formalParametersCount ; i++) {
    ioVariablesList.addAssign_operation (inNullName) ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
  inHfile.writeTitleComment (C_String ("Extern type '") + mName +"'") ;
  inHfile << "typedef " << mCppClassName << " GGS_" << mName << " ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeExternTypeToGenerate::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate
::generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate
::generateCppClassImplementation (AC_OutputStream & /* inCppFile */,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
  inHfile << "void routine_" << aNomRoutine << " (C_Lexique &" ;
  GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = aListeTypeEtNomsArguments.firstObject () ;
  while (currentArgument != NULL) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inHfile) ;
    currentArgument = currentArgument->nextObject () ;
  }
  inHfile << ") ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer
::generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inLexiqueClassName*/,
                               const C_String & /* inTargetFileName */,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & inLexiqueClassName,
                                  const C_String & inTargetFileName,
                                  sint32 & ioPrototypeIndex,
                                  const bool inGenerateDebug) {
  inCppFile.writeTitleComment (C_String ("Implementation of routine \"") + aNomRoutine + '"') ;
  inCppFile << "void routine_" << aNomRoutine << " (C_Lexique &" ;
  if (isLexiqueFormalArgumentUsedForList (mInstructionsList, true)) {
    inCppFile << " lexique_var_" ;
  }
  GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = aListeTypeEtNomsArguments.firstObject () ;
  while (currentArgument != NULL) {
    inCppFile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inCppFile) ;
    const bool variableUtilisee = formalArgumentIsUsedForList (mInstructionsList, currentArgument->mCppName, true) ;
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
  inCppFile << ") {\n" ;
//--- Engendrer la liste d'instructions
  generateInstructionListForList (mInstructionsList, inCppFile,
                                  inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, true) ;
//--- Fin de la fonction
  inCppFile << "}\n\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer::
generateHdeclarations (AC_OutputStream & inHfile,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
  inHfile << "void " << aNomAction << " (C_Lexique &" ;
  GGS_L_signature::element_type * currentArgument = aSignature.firstObject () ;
  while (currentArgument != NULL) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inHfile) ;
    currentArgument = currentArgument->nextObject () ;
  }
  inHfile << ") ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeActionExterneAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer
::generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inLexiqueClassName */,
                               const C_String & /* inTargetFileName */,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer
::generateCppClassImplementation (AC_OutputStream & /* inCppFile */,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) {
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier ".h"                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_header_file (C_Lexique & inLexique,
                      GGS_lstring & nomComposant,
                      GGS_typeTableUtilisationsSemantiques & tableUtilisationsSemantiques,
                      const GGS_string & inLexiqueName,
                      GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                      GGS_stringset & tableFichiersEnTetePourFichierH,
                      GGS_stringset & tableDeclAnticipeesClassePourFichierH) {
  C_String generatedZone2 ;
  generatedZone2 << "#ifndef " << nomComposant << "_DEFINED\n"
                 << "#define " << nomComposant << "_DEFINED\n"
                 << "\n#include <string.h>\n\n" ;

//--- Inclure la declaration des types semantiques predefinis
  generatedZone2 << "#include \"galgas/C_GGS_Object.h\"\n"
                    "#include \"galgas/AC_galgas_io.h\"\n"
                    "#include \"galgas/GGS_location.h\"\n"
                    "#include \"galgas/GGS_lbool.h\"\n"
                    "#include \"galgas/GGS_lchar.h\"\n"
                    "#include \"galgas/GGS_lstring.h\"\n"
                    "#include \"galgas/GGS_ldouble.h\"\n"
                    "#include \"galgas/GGS_luint.h\"\n"
                    "#include \"galgas/GGS_lsint.h\"\n"
                    "#include \"galgas/GGS_stringset.h\"\n"
                   "#include \"galgas/AC_galgas_map.h\"\n" ;

//--- Generate lexique inclusion
  const C_String lexiqueName = inLexiqueName.string () ;
  generatedZone2 << "#include \""
        << ((lexiqueName.length () == 0) ? C_String ("galgas/C_Lexique") : lexiqueName)
        << ".h\"\n\n" ;
//--- Engendrer les inclusions des fichiers IC utilises
  GGS_typeTableUtilisationsSemantiques::element_type * fichierCourant = tableUtilisationsSemantiques.firstObject () ;
  if (fichierCourant != NULL) {
    generatedZone2.writeCcomment ("Include imported semantics") ;
    while (fichierCourant != NULL) {
      generatedZone2 << "#include \"" ;
      macroValidPointer (fichierCourant) ;
      generatedZone2 << fichierCourant->mKey ;
      generatedZone2 << ".h\"\n" ;
      fichierCourant = fichierCourant->nextObject () ;
    }
    generatedZone2 << '\n' ;
  }

//--- Write include directives generated by extern types, methods or attributes
//  const sint32 includeCount = tableFichiersEnTetePourFichierH.count () ;
  GGS_stringset::element_type * currentInclude = tableFichiersEnTetePourFichierH.firstObject () ;
  if (currentInclude != NULL) {
    generatedZone2.writeTitleComment ("Include directives generated by extern types, methods or attributes") ;
  }
  while (currentInclude != NULL) {
    macroValidPointer (currentInclude) ;
    generatedZone2 << "#include \"" << currentInclude->mKey.string () << "\"\n" ;
    currentInclude = currentInclude->nextObject () ;
  }
  generatedZone2 << '\n' ;

  C_String generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
//--- Write classes predeclaration
  currentInclude = tableDeclAnticipeesClassePourFichierH.firstObject () ;
  if (currentInclude != NULL) {
    generatedZone3.writeTitleComment ("Include directives generated by extern types, methods or attributes") ;
  }
  while (currentInclude != NULL) {
    macroValidPointer (currentInclude) ;
    generatedZone3 << "class GGS_" << currentInclude->mKey.string () << " ;\n" ;
    currentInclude = currentInclude->nextObject () ;
  }

//--- Entrer les declarations
  GGS_typeEntitiesToGenerateList::element_type * element = listeEntitesAengendrer.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateHdeclarations (generatedZone3, lexiqueName, inLexique) ;
    element = element->nextObject () ;
  }
  element = listeEntitesAengendrer.firstObject () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateHdeclarations_2 (generatedZone3, lexiqueName, inLexique) ;
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
    engendrerDeclarationPrototypesReglesDeProduction (nomComposant, lexiqueName, listeEntitesAengendrer, generatedZone3) ;
  }
  
//--- Engendrer la fin du fichier
  generatedZone3.writeHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile (nomComposant + ".h",
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

void
generateExternAttributesDeclaration (const GGS_L_nameWithType & inList,
                                     AC_OutputStream & inHfile) {
  GGS_L_nameWithType::element_type * current = inList.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "  public : " << current->mType << " "
             << current->mName << " ; // extern attribute\n" ;
    current = current->nextObject () ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDirectName
::generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeAutomaticName
::generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "var_cas_" << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLocationAutomaticName
::generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "var_cas_" << mLocation.currentLocation () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppThisName
::generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "(*this)" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppInheritedName
::generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "(*this)" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeOperandName
::generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "operand_" << mLocationOffset.currentLocation () << "->"
         << (mFieldKind.boolValue () ? "mInfo." : "")
         << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeKeyName
::generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "operand_" << mLocationOffset.currentLocation () << "->mKey" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeNullName
::generateCplusPlusName (AC_OutputStream & /* inFile */) const {
  throw C_Exception ("Internal error", 0, 0 COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDirectName
::generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "& " << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeAutomaticName
::generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "& var_cas_" << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLocationAutomaticName
::generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "& var_cas_" << mLocation.currentLocation () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppThisName
::generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "this" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppInheritedName
::generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "this" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeOperandName
::generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "& operand_" << mLocationOffset.currentLocation () << "->"
         << (mFieldKind.boolValue () ? "mInfo." : "")
         << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeKeyName
::generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "& operand_" << mLocationOffset.currentLocation () << "->mKey" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeNullName
::generateVariableAddress (AC_OutputStream & inFile) const {
  inFile << "NULL";
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

enumVariableKind cPtr_typeDirectName::getVariableKind (void) const {
  return k_other_variable ;
}

//---------------------------------------------------------------------------*

enumVariableKind cPtr_typeAutomaticName::getVariableKind (void) const {
  return k_other_variable ;
}

//---------------------------------------------------------------------------*

enumVariableKind cPtr_typeLocationAutomaticName::getVariableKind (void) const {
  return k_other_variable ;
}

//---------------------------------------------------------------------------*

enumVariableKind cPtr_typeCppThisName::getVariableKind (void) const {
  return k_me_constant ;
}

//---------------------------------------------------------------------------*

enumVariableKind cPtr_typeCppInheritedName::getVariableKind (void) const {
  return k_super_constant ;
}

//---------------------------------------------------------------------------*

enumVariableKind cPtr_typeOperandName::getVariableKind (void) const {
  return k_other_variable ;
}

//---------------------------------------------------------------------------*

enumVariableKind cPtr_typeKeyName::getVariableKind (void) const {
  return k_other_variable ;
}

//---------------------------------------------------------------------------*

enumVariableKind cPtr_typeNullName::getVariableKind (void) const {
  return k_other_variable ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void
generateFormalArgumentFromTypeName (const C_String & inTypeName,
                                    const GGS_formalArgumentPassingMode & inFormalArgumentPassingMode,
                                    AC_OutputStream & inFile) {
  switch (inFormalArgumentPassingMode.enumValue ()) {
  case GGS_formalArgumentPassingMode::enum_argumentIn :
    inFile << "GGS_" << inTypeName ;
    break ;
  case GGS_formalArgumentPassingMode::enum_argumentOut :
    inFile << "GGS_" << inTypeName << " &" ;
    break ;
  case GGS_formalArgumentPassingMode::enum_argumentInOut :
    inFile << "GGS_" << inTypeName << " &" ;
    break ;
  case GGS_formalArgumentPassingMode::enum_argumentConstantIn :
    inFile << "const GGS_" << inTypeName << " &" ;
    break ;
  case GGS_formalArgumentPassingMode::kNotBuilt :
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
                                const GGS_formalArgumentPassingMode & inFormalArgumentPassingMode,
                                AC_OutputStream & inFile) {
  macroValidPointer (inTypePtr) ;
  switch (inFormalArgumentPassingMode.enumValue ()) {
  case GGS_formalArgumentPassingMode::enum_argumentIn :
    inTypePtr->generateCppClassName (inFile) ;
    inFile << ' ' ;
    break ;
  case GGS_formalArgumentPassingMode::enum_argumentOut :
    inTypePtr->generateCppClassName (inFile) ;
    inFile << " &" ;
    break ;
  case GGS_formalArgumentPassingMode::enum_argumentInOut :
    inTypePtr->generateCppClassName (inFile) ;
    inFile << " &" ;
    break ;
  case GGS_formalArgumentPassingMode::enum_argumentConstantIn :
    inFile << "const " ;
    inTypePtr->generateCppClassName (inFile) ;
    inFile << " &" ;
    break ;
  case GGS_formalArgumentPassingMode::kNotBuilt :
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

void cPtr_typeGalgas_enum::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mEnumTypeName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_enum::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_enum::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_jokerInParameterList::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif


void cPtr_typeGalgasExternType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mGalgasClassName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasExternType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasExternType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_bool::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_string::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_double::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_char::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedExternType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_stringset::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_location::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasClassType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
                              AC_OutputStream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedClassType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_OutputStream & /* inCppFile */) {
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
generate_cpp_file (C_Lexique & inLexique,
                   GGS_lstring & nomComposant,
                   const C_String & inLexiqueName,
                   GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                   GGS_stringset & tableFichiersEnTetePourFichierCPP) {
//--- Write file header
  C_String generatedZone2 ;
  generatedZone2 << "#include \"utilities/MF_MemoryControl.h\"\n"
                    "#include \"files/C_TextFileWrite.h\"\n"
                    "#include \"" << nomComposant << ".h\"\n\n";

//--- Engendrer les fichiers d'inclusion correspondant aux methodes externes
  GGS_stringset::element_type * currentInclude = tableFichiersEnTetePourFichierCPP.firstObject () ;
  if (currentInclude != NULL) {
    generatedZone2.writeTitleComment ("Include directives generated by extern types") ;
  }
  while (currentInclude != NULL) {
    macroValidPointer (currentInclude) ;
    generatedZone2 << "#include \"" << currentInclude->mKey.string () << "\"\n" ;
    currentInclude = currentInclude->nextObject () ;
  }
  generatedZone2 << '\n' ;

//--- Generate debug ?
  const bool generateDebug = inLexique.boolOptionValueFromKeys ("galgas_cli_options", "generate_debug", true) ;
  if (generateDebug) {
    generatedZone2 << "#define DEBUG_TRACE_ENABLED\n\n" ;
  }
                 
//--- Engendrer les implementations
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  GGS_typeEntitiesToGenerateList::element_type * element = listeEntitesAengendrer.firstObject () ;
  sint32 select_repeat_production_index = 0 ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateCppClassImplementation (generatedZone3,
                                         inLexiqueName,
                                         nomComposant,
                                         select_repeat_production_index,
                                         generateDebug) ;
    element = element->nextObject () ;
  }
  
//--- Engendrer la fin du fichier
  generatedZone3.writeHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile (nomComposant + ".cpp",
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
engendrerComposant (C_Lexique & inLexique,
                    GGS_lstring & nomComposant,
                    GGS_typeTableUtilisationsSemantiques & tableUtilisationsSemantiques,
                    GGS_string & defLexique,
                    GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                    GGS_bool & /* composantSyntaxique */,
                    GGS_stringset & tableFichiersEnTetePourFichierH,
                    GGS_stringset & tableFichiersEnTetePourFichierCPP,
                    GGS_stringset & tableDeclAnticipeesClassePourFichierH) {
  if (inLexique.galgas_IO_Ptr ()->currentFileErrorsCount () == 0) {
    generate_header_file (inLexique,
                          nomComposant,
                          tableUtilisationsSemantiques,
                          defLexique,
                          listeEntitesAengendrer,
                          tableFichiersEnTetePourFichierH,
                          tableDeclAnticipeesClassePourFichierH) ;
    generate_cpp_file (inLexique,
                       nomComposant,
                       defLexique.string (),
                       listeEntitesAengendrer,
                       tableFichiersEnTetePourFichierCPP) ;
  }
}

//---------------------------------------------------------------------------*
