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

#include "files/C_text_file_write.h"
#include "time/C_datetime.h"

//---------------------------------------------------------------------------*

#include "semantics_instructions.h"
#include "semantics_generation.h"
#include "semantics_parser.h"
#include "parser_generation.h"
#include "galgas_start.h"

//---------------------------------------------------------------------------*

void
buildFileNameWithPath (C_lexique &,
                       GGS_lstring & outFileNameWithPath,
                       GGS_lstring inPath,
                       const GGS_lstring & inCppClassName,
                       const GGS_lstring & inExtension) {
  C_string s ;
  if (inPath.getLength () > 0) {
    s << inPath << '/' ;
  }
  s << inCppClassName << '.' << inExtension ;
  outFileNameWithPath = GGS_lstring (GGS_string (true, s), inCppClassName) ;
}

//---------------------------------------------------------------------------*

void appendJokersIfNeeded (C_lexique &,
                           GGS_typeCplusPlusNameList & ioVariablesList,
                           GGS_uint inEffectiveArgumentsCount,
                           GGS_uint inFormalParametersCount,
                           GGS_typeCplusPlusName inNullName) {
  const uint32 effectiveArgumentsCount = inEffectiveArgumentsCount.getValue () ;
  const uint32 formalParametersCount = inFormalParametersCount.getValue () ;
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
generateHdeclarations_2 (AC_output_stream & /* inHfile */,
                         const C_string & /* inLexiqueClassName */,
                         C_lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate::
generateHdeclarations (AC_output_stream & inHfile,
                       const C_string & /* inLexiqueClassName */,
                       C_lexique & /* inLexique */) {
  inHfile.writeTitleComment (C_string ("Extern type '") + mName +"'") ;
  inHfile << "typedef " << mCppClassName << " GGS_" << mName << " ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeExternTypeToGenerate::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate
::generateCppClassDeclaration (AC_output_stream & /* inHfile */,
                               const C_string & /* inLexiqueClassName */,
                               const C_string & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeExternTypeToGenerate
::generateCppClassImplementation (AC_output_stream & /* inCppFile */,
                                  const C_string & /* inLexiqueClassName */,
                                  const C_string & /* inTargetFileName */,
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
generateHdeclarations_2 (AC_output_stream & /* inHfile */,
                         const C_string & /* inLexiqueClassName */,
                         C_lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateHdeclarations (AC_output_stream & inHfile,
                       const C_string & /* inLexiqueClassName */,
                       C_lexique & /* inLexique */) {
  inHfile << "void routine_" << aNomRoutine << " (C_lexique &" ;
  GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = aListeTypeEtNomsArguments.getFirstItem () ;
  while (currentArgument != NULL) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (), currentArgument->mFormalArgumentPassingMode, inHfile) ;
    currentArgument = currentArgument->getNextItem () ;
  }
  inHfile << ") ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer
::generateCppClassDeclaration (AC_output_stream & /* inHfile */,
                               const C_string & /* inLexiqueClassName*/,
                               const C_string & /* inTargetFileName */,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer
::generateCppClassImplementation (AC_output_stream & inCppFile,
                                  const C_string & inLexiqueClassName,
                                  const C_string & inTargetFileName,
                                  sint32 & ioPrototypeIndex,
                                  const bool inGenerateDebug) {
  inCppFile.writeTitleComment (C_string ("Implementation of routine \"") + aNomRoutine + '"') ;
  inCppFile << "void routine_" << aNomRoutine << " (C_lexique &" ;
  if (isLexiqueFormalArgumentUsedForList (mInstructionsList, true)) {
    inCppFile << " lexique_var_" ;
  }
  GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = aListeTypeEtNomsArguments.getFirstItem () ;
  while (currentArgument != NULL) {
    inCppFile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (), currentArgument->mFormalArgumentPassingMode, inCppFile) ;
    const bool variableUtilisee = formalArgumentIsUsedForList (mInstructionsList, currentArgument->mCppName, true) ;
    inCppFile << ' ' ;
    if (! variableUtilisee) {
      inCppFile << "/* " ;
    }
    currentArgument->mCppName ()->generateCplusPlusName (inCppFile) ;
    if (! variableUtilisee) {
      inCppFile << " */" ;
    }
    currentArgument = currentArgument->getNextItem () ;
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
generateHdeclarations_2 (AC_output_stream & /* inHfile */,
                         const C_string & /* inLexiqueClassName */,
                         C_lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer::
generateHdeclarations (AC_output_stream & inHfile,
                       const C_string & /* inLexiqueClassName */,
                       C_lexique & /* inLexique */) {
  inHfile << "void " << aNomAction << " (C_lexique &" ;
  GGS_L_signature::element_type * currentArgument = aSignature.getFirstItem () ;
  while (currentArgument != NULL) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument->mType (), currentArgument->mFormalArgumentPassingMode, inHfile) ;
    currentArgument = currentArgument->getNextItem () ;
  }
  inHfile << ") ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeActionExterneAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer
::generateCppClassDeclaration (AC_output_stream & /* inHfile */,
                               const C_string & /* inLexiqueClassName */,
                               const C_string & /* inTargetFileName */,
                               sint32 & /* ioPrototypeIndex */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeActionExterneAengendrer
::generateCppClassImplementation (AC_output_stream & /* inCppFile */,
                                  const C_string & /* inLexiqueClassName */,
                                  const C_string & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) {
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier ".h"                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_header_file (C_lexique & inLexique,
                      GGS_lstring & nomComposant,
                      GGS_typeTableUtilisationsSemantiques & tableUtilisationsSemantiques,
                      const GGS_string & inLexiqueName,
                      GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                      C_galgas_stringset & tableFichiersEnTetePourFichierH,
                      C_galgas_stringset & tableDeclAnticipeesClassePourFichierH) {
  C_string generatedZone2 ;
  generatedZone2 << "#ifndef " << nomComposant << "_DEFINED\n"
                 << "#define " << nomComposant << "_DEFINED\n"
                 << "\n#include <string.h>\n\n" ;

//--- Inclure la déclaration des types sémantiques prédéfinis
  generatedZone2.writeCcomment ("Include predefined semantics types definition") ;
  generatedZone2 << "#include \"memory/C_reference_count.h\"\n"
           "#include \"galgas/AC_galgas_io.h\"\n"
           "#include \"galgas/GGS_location.h\"\n"
           "#include \"galgas/GGS_lbool.h\"\n"
           "#include \"galgas/GGS_lchar.h\"\n"
           "#include \"galgas/GGS_lstring.h\"\n"
           "#include \"galgas/GGS_ldfloat.h\"\n"
           "#include \"galgas/GGS_luint.h\"\n"
           "#include \"galgas/GGS_lsint.h\"\n"
           "#include \"galgas/AC_galgas_map.h\"\n" ;

//--- Include scanner definition
  generatedZone2.writeCcomment ("Include scanner definition") ;

//--- Generate lexique inclusion
  const C_string lexiqueName = inLexiqueName.getString () ;
  generatedZone2 << "#include \""
        << ((lexiqueName.getLength () == 0) ? C_string ("galgas/C_lexique") : lexiqueName)
        << ".h\"\n" ;
//--- Engendrer les inclusions des fichiers IC utilisés
  GGS_typeTableUtilisationsSemantiques::element_type * fichierCourant = tableUtilisationsSemantiques.getFirstItem () ;
  if (fichierCourant != NULL) {
    generatedZone2.writeCcomment ("Include imported semantics") ;
    while (fichierCourant != NULL) {
      generatedZone2 << "#include \"" ;
      macroValidPointer (fichierCourant) ;
      generatedZone2 << fichierCourant->mKey ;
      generatedZone2 << ".h\"\n" ;
      fichierCourant = fichierCourant->getNextItem () ;
    }
    generatedZone2 << '\n' ;
  }

//--- Write include directives generated by extern types, methods or attributes
  const sint32 includeCount = tableFichiersEnTetePourFichierH.getCount () ;
  if (includeCount != 0) {
    generatedZone2.writeTitleComment ("Include directives generated by extern types, methods or attributes") ;
  }
  for (sint32 i=0 ; i<includeCount ; i++) {
    if (tableFichiersEnTetePourFichierH (i COMMA_HERE) (0 COMMA_HERE) != '-') {
      generatedZone2 << "#include \"" << tableFichiersEnTetePourFichierH (i COMMA_HERE) << "\"\n" ;
    }
  }
  generatedZone2 << '\n' ;

  C_string generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
//--- Write classes predeclaration
  const sint32 predeclarationCount = tableDeclAnticipeesClassePourFichierH.getCount () ;
  if (predeclarationCount != 0) {
    generatedZone3.writeTitleComment ("Classes predeclarations") ;
    for (sint32 i=0 ; i<predeclarationCount ; i++) {
      generatedZone3 << "class GGS_" << tableDeclAnticipeesClassePourFichierH (i COMMA_HERE) << " ;\n" ;
    }
    generatedZone3 << "\n" ;
  }

//--- Entrer les déclarations
  GGS_typeEntitiesToGenerateList::element_type * element = listeEntitesAengendrer.getFirstItem () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate ()->generateHdeclarations (generatedZone3, lexiqueName, inLexique) ;
    element = element->getNextItem () ;
  }
  element = listeEntitesAengendrer.getFirstItem () ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate ()->generateHdeclarations_2 (generatedZone3, lexiqueName, inLexique) ;
    element = element->getNextItem () ;
  }

//--- Engendrer la déclaration de la classe de l'analyseur
  bool engendrerClasseCpp = false ;
  element = listeEntitesAengendrer.getFirstItem () ;
  while ((element != NULL) && ! engendrerClasseCpp) {
    macroValidPointer (element) ;
    engendrerClasseCpp = element->mEntityToGenerate ()->isCppClassNeeded () ;
    element = element->getNextItem () ;
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
                                     AC_output_stream & inHfile) {
  GGS_L_nameWithType::element_type * current = inList.getFirstItem () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    inHfile << "  public : " << current->mType << " "
             << current->mName << " ; // extern attribute\n" ;
    current = current->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDirectName
::generateCplusPlusName (AC_output_stream & inFile) const {
  inFile << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeAutomaticName
::generateCplusPlusName (AC_output_stream & inFile) const {
  inFile << "var_cas_" << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLocationAutomaticName
::generateCplusPlusName (AC_output_stream & inFile) const {
  inFile << "var_cas_" << mLocation.getCurrentLocation () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppThisName
::generateCplusPlusName (AC_output_stream & inFile) const {
  inFile << "(*this)" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppInheritedName
::generateCplusPlusName (AC_output_stream & inFile) const {
  inFile << "(*this)" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeOperandName
::generateCplusPlusName (AC_output_stream & inFile) const {
  inFile << "operand_" << mLocationOffset.getCurrentLocation () << "->"
         << (mFieldKind.getValue () ? "mInfo." : "")
         << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeKeyName
::generateCplusPlusName (AC_output_stream & inFile) const {
  inFile << "operand_" << mLocationOffset.getCurrentLocation () << "->mKey" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeNullName
::generateCplusPlusName (AC_output_stream & /* inFile */) const {
  throw C_exception ("Internal error", 0, 0 COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeDirectName
::generateVariableAddress (AC_output_stream & inFile) const {
  inFile << "& " << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeAutomaticName
::generateVariableAddress (AC_output_stream & inFile) const {
  inFile << "& var_cas_" << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLocationAutomaticName
::generateVariableAddress (AC_output_stream & inFile) const {
  inFile << "& var_cas_" << mLocation.getCurrentLocation () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppThisName
::generateVariableAddress (AC_output_stream & inFile) const {
  inFile << "this" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppInheritedName
::generateVariableAddress (AC_output_stream & inFile) const {
  inFile << "this" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeOperandName
::generateVariableAddress (AC_output_stream & inFile) const {
  inFile << "& operand_" << mLocationOffset.getCurrentLocation () << "->"
         << (mFieldKind.getValue () ? "mInfo." : "")
         << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeKeyName
::generateVariableAddress (AC_output_stream & inFile) const {
  inFile << "& operand_" << mLocationOffset.getCurrentLocation () << "->mKey" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeNullName
::generateVariableAddress (AC_output_stream & inFile) const {
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
generateFormalArgumentFromTypeName (const C_string & inTypeName,
                                    const GGS_formalArgumentPassingMode & inFormalArgumentPassingMode,
                                    AC_output_stream & inFile) {
  switch (inFormalArgumentPassingMode.getValue ()) {
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
                                AC_output_stream & inFile) {
  macroValidPointer (inTypePtr) ;
  switch (inFormalArgumentPassingMode.getValue ()) {
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
generateFormalParameter (AC_output_stream & inFile,
                         const bool engendrerReference) {
  generateCppClassName (inFile) ;
  if (engendrerReference) {
    inFile << '&' ;
  }
  inFile << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generatePublicDeclaration (AC_output_stream & inHfile,
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
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_" << mEnumTypeName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_enum::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_enum::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_jokerInParameterList::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "??" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_jokerInParameterList::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_jokerInParameterList::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif


void cPtr_typeGalgasExternType::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_" << mGalgasClassName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasExternType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasExternType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_bool::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_bool" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_bool::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_bool::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_string::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_string" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_string::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_string::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_dfloat::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_dfloat" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_dfloat::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_dfloat::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_uint " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_sint " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_char::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_char" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_char::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_char::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedExternType::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_" << mGalgasClassName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedExternType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedExternType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_lbool " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_lchar " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_luint " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_lsint " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldfloat::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_ldfloat " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_lstring " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_location::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_location " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_location::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_location::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_" << mListTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_" << mListTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasSetType::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_" << mSetTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasSetType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasSetType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapType::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_" << mMapTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapType::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_" << mMapTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasClassType::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_"  << mClassTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasClassType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasClassType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedClassType::
generateCppClassName (AC_output_stream & inFile) const {
  inFile << "GGS_" << mClassTypeName << ' ' ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedClassType::
generateAttributeDeclaration (const GGS_lstring & /* inName */,
                              AC_output_stream & /* inCppFile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedClassType::
generateAttributeInitialization (const GGS_lstring & /* inName */,
                                 AC_output_stream & /* inCppFile */) {
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
generate_cpp_file (C_lexique & inLexique,
                   GGS_lstring & nomComposant,
                   const C_string & inLexiqueName,
                   GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                   C_galgas_stringset & tableFichiersEnTetePourFichierCPP) {
//--- Write file header
  C_string generatedZone2 ;
  generatedZone2 << "#include \"files/C_text_file_write.h\"\n"
            << "#include \"" << nomComposant << ".h\"\n\n";

//--- Engendrer les fichiers d'inclusion correspondant aux methodes externes
  const sint32 headersForCppFileCount = tableFichiersEnTetePourFichierCPP.getCount () ;
  if (headersForCppFileCount != 0) {
    generatedZone2.writeTitleComment ("Include directives generated by extern types") ;
  }
  for (sint32 i=0 ; i<headersForCppFileCount ; i++) {
    generatedZone2 << "#include \"" << tableFichiersEnTetePourFichierCPP (i COMMA_HERE) << "\"\n" ;
  }
  generatedZone2 << '\n' ;

//--- Generate debug ?
  const bool generateDebug = inLexique.getBoolOptionValueFromKeys ("galgas_cli_options", "generate_debug", true) ;
  if (generateDebug) {
    generatedZone2 << "#define DEBUG_TRACE_ENABLED\n\n" ;
  }
                 
//--- Engendrer les implementations
  C_string generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  GGS_typeEntitiesToGenerateList::element_type * element = listeEntitesAengendrer.getFirstItem () ;
  sint32 select_repeat_production_index = 0 ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate ()->generateCppClassImplementation (generatedZone3,
                                         inLexiqueName,
                                         nomComposant,
                                         select_repeat_production_index,
                                         generateDebug) ;
    element = element->getNextItem () ;
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
engendrerComposant (C_lexique & inLexique,
                    GGS_lstring & nomComposant,
                    GGS_typeTableUtilisationsSemantiques & tableUtilisationsSemantiques,
                    GGS_string & defLexique,
                    GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                    GGS_bool & /* composantSyntaxique */,
                    C_galgas_stringset & tableFichiersEnTetePourFichierH,
                    C_galgas_stringset & tableFichiersEnTetePourFichierCPP,
                    C_galgas_stringset & tableDeclAnticipeesClassePourFichierH) {
  if (inLexique.getGalgasIOptr ()->getCurrentFileErrorsCount () == 0) {
    generate_header_file (inLexique,
                          nomComposant,
                          tableUtilisationsSemantiques,
                          defLexique,
                          listeEntitesAengendrer,
                          tableFichiersEnTetePourFichierH,
                          tableDeclAnticipeesClassePourFichierH) ;
    generate_cpp_file (inLexique,
                       nomComposant,
                       defLexique.getString (),
                       listeEntitesAengendrer,
                       tableFichiersEnTetePourFichierCPP) ;
  }
}

//---------------------------------------------------------------------------*
