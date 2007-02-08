//---------------------------------------------------------------------------*
//                                                                           *
//   Scanner Generation (hand-coded file)                                    *
//                                                                           *
//  Copyright (C) 2000, ..., 2007 Pierre Molinaro.                           *
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

#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "time/C_DateTime.h"
#include "generic_arraies/TC_UniqueArray.h"

//---------------------------------------------------------------------------*

#include "scannerDecoderGeneration.h"

//---------------------------------------------------------------------------*

static bool
instructions_list_uses_loop_variable (const GGS_tListeInstructionsLexicales & inList) {
  bool use = false ;
  GGS_tListeInstructionsLexicales::element_type * courant = inList.firstObject () ;
  while ((courant != NULL) && ! use) {
    macroValidPointer (courant) ;
    use = courant->attributInstruction(HERE)->instruction__uses_loop_variable () ;
    courant = courant->nextObject () ;
  }
  return use ;
}

//---------------------------------------------------------------------------*

static bool
instructions_list_uses_loop_variable (const GGS_typeListeTestsEtInstructions & inList) {
  bool use = false ;
  GGS_typeListeTestsEtInstructions::element_type * current = inList.firstObject () ;
  while ((current != NULL) && ! use) {
    macroValidPointer (current) ;
    use = instructions_list_uses_loop_variable (current->attributListeInstructions) ;
    current = current->nextObject () ;
  }
  return use ;
}

//---------------------------------------------------------------------------*

static void
generate_scanner_instructions_list (const GGS_tListeInstructionsLexicales & inList,
                                    const C_String & inLexiqueName,
                                    const bool inGenerateEnterToken,
                                    AC_OutputStream & inCppFile) {
  GGS_tListeInstructionsLexicales::element_type * courant = inList.firstObject () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    courant->attributInstruction(HERE)->generate_scanner_instruction (inLexiqueName, inGenerateEnterToken, inCppFile) ;
    courant = courant->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateScannerCode (const GGS_typeListeTestsEtInstructions & inList,
                     const C_String & inLexiqueName,
                     AC_OutputStream & inCppFile,
                     const bool inGenerateEnterToken,
                     bool & outNonEmptyList) {
  bool premier = true ;
  GGS_typeListeTestsEtInstructions::element_type * courant = inList.firstObject () ;
  outNonEmptyList = courant != NULL ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    if (premier) {
      premier = false ;
    }else{
      inCppFile << "}else " ;
    }
    inCppFile << "if (" ;
    macroValidPointer (courant->attributListeConditions.firstObject ()) ;
    GGS_typeListeConditionsLexicales::element_type * cond = courant->attributListeConditions.firstObject () ;
    bool premiereCondition = true ;
    while (cond != NULL) {
      macroValidPointer (cond) ;
      if (premiereCondition) {
        premiereCondition = false ;
      }else{
        inCppFile << " ||\n    " ;
      }
      cond->attributCondition(HERE)->generateLexicalCondition (inCppFile) ;
      cond = cond->nextObject () ;
    }
    inCppFile << ") {\n" ;
    inCppFile.incIndentation (+2) ;
    generate_scanner_instructions_list (courant->attributListeInstructions, inLexiqueName, inGenerateEnterToken, inCppFile) ;
    inCppFile.incIndentation (-2) ;
    courant = courant->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

//--- Local class for storing table entries
class cTableEntry {
  public : C_String mEntryString ;
  public : sint32 mEntryStringLength ;
  public : C_String mTokenCode ;
} ;

//---------------------------------------------------------------------------*

static sint32 compareEntries (const cTableEntry & inEntry1,
                              const cTableEntry & inEntry2) {
  sint32 result = inEntry1.mEntryStringLength - inEntry2.mEntryStringLength ;
  if (result == 0) {
    result = ::strcmp (inEntry1.mEntryString.cString (),
                       inEntry2.mEntryString.cString ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

static void
generateKeyWordTableEntries (const GGS_typeTableMotsReserves & inMap,
                             AC_OutputStream & inCppFile,
                             const C_String & inLexiqueName) {
//--- Create entries array
  const sint32 entriesCount = inMap.count () ;
  TC_UniqueArray <cTableEntry> entriesArray (entriesCount COMMA_HERE) ;
  GGS_typeTableMotsReserves::element_type * p = inMap.firstObject () ;
  sint32 index = 0 ;
  while (p != NULL) {
    macroValidPointer (p) ;
    cTableEntry e ;
    e.mEntryString = p->mKey ;
    e.mEntryStringLength = p->mKey.length () ;
    e.mTokenCode = p->mInfo.attributNomTerminal ;
    entriesArray.addObject (e) ;
    p = p->nextObject () ;
    index ++ ;
  }
//--- Order the array :
//     * by length increasing order ;
//     * by ::strcmp order
  entriesArray.sortArrayUsingFunction (compareEntries) ;

//--- Write entries
  for (sint32 i=0 ; i<entriesCount ; i++) {
    inCppFile << "  C_lexique_table_entry (" ;
    inCppFile.writeCstringConstant (entriesArray (i COMMA_HERE).mEntryString) ;
    inCppFile << ", " << entriesArray (i COMMA_HERE).mEntryStringLength
             << ", " << inLexiqueName << "_1_" ;
    generateTerminalSymbolCppName (entriesArray (i COMMA_HERE).mTokenCode, inCppFile) ;
    inCppFile << ")" << ((i == (entriesCount - 1)) ? "" : ",") << '\n' ;
  }
}

//---------------------------------------------------------------------------*

static void 
generateKeyWordTableImplementation (const GGS_typeTableMotsReserves & inMap,
                                    const C_String & inLexiqueName,
                                    const C_String & nomTable,
                                    AC_OutputStream & inCppFile) {
  inCppFile.writeCppTitleComment (C_String ("Key words table '") + nomTable + "'") ;
// ---------------------------- Table size
  inCppFile << "const sint16 "
            << inLexiqueName
            << "::"
            << inLexiqueName
            << "_table_size_"
            << nomTable
            << " = " << inMap.count () << " ;\n\n" ; 
// ---------------------------- Generate table
  inCppFile << "const C_lexique_table_entry "
            << inLexiqueName
            << "::"
            << inLexiqueName
            << "_table_for_"
            << nomTable
            << " [" << inMap.count () << "] = {\n" ; 
  generateKeyWordTableEntries (inMap, inCppFile, inLexiqueName) ;
  inCppFile << "} ;\n\n" ;
// ---------------------------- Statique search method
  inCppFile << "sint16 " << inLexiqueName << "::search_into_" << nomTable
            << " (const C_String & inSearchedString) {\n"
               "  return searchInList (inSearchedString, "
            << inLexiqueName << "_table_for_" << nomTable << ", "
            << inLexiqueName << "_table_size_" << nomTable << ") ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*

static void
generateTerminalSymbolsTable (const GGS_typeTableTablesDeMotsReserves & inMap,
                              const C_String & inLexiqueName,
                              AC_OutputStream & inCppFile) {
  GGS_typeTableTablesDeMotsReserves::element_type * currentMap = inMap.firstObject () ;
  while (currentMap != NULL) {
    generateKeyWordTableImplementation (currentMap->mInfo.attributSimpleTable, inLexiqueName, currentMap->mKey, inCppFile) ;
    currentMap = currentMap->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateGetTokenStringMethod (const GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                              const C_String & inLexiqueName,
                              AC_OutputStream & inCppFile) {
  inCppFile.writeCppTitleComment ("getCurrentTokenString") ;
  inCppFile << "C_String "
            << inLexiqueName
            << "::\n"
               "getCurrentTokenString (const cToken * inTokenPtr) const {\n"
               "  cTokenFor_" << inLexiqueName << " * _p = (cTokenFor_" << inLexiqueName << " *) inTokenPtr ;\n"
               "  C_String s ;\n"
               "  switch (_p->_mTokenCode) {\n"
               "  case  " << inLexiqueName << "_1_:\n"
               "    s << \"$$\" ;\n"
               "    break ;\n" ;
  GGS_typeTableDefinitionTerminaux::element_type * currentTerminal = table_des_terminaux.firstObject () ;
  while (currentTerminal != NULL) {
    macroValidPointer (currentTerminal) ;    
    inCppFile << "  case  " << inLexiqueName << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, inCppFile) ;
    inCppFile << ":\n"
                 "    s << '$'\n"
                 "      << " ;
    inCppFile.writeCstringConstant (currentTerminal->mKey) ;
    inCppFile << "\n"   
                 "      << '$' ;\n" ;
    GGS_typeListeAttributsSemantiques::element_type * currentAttribute = currentTerminal->mInfo.attributListeDesAttributs.firstObject () ;
    while (currentAttribute != NULL) {
      macroValidPointer (currentAttribute) ;
      currentAttribute->mAttributType (HERE)->generateAttributeGetLexicalValue (currentAttribute->aNomAttribut, inCppFile) ;
      currentAttribute = currentAttribute->nextObject () ;
    }
    inCppFile << "    break;\n" ;
    currentTerminal = currentTerminal->nextObject () ;
  }
  inCppFile << "  default:\n"
               "    break ;\n"
               "  }\n"
               "  return s ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*

static void generateKeyWordTableDeclaration (const GGS_typeTableMotsReserves & inMap,
                                             const C_String & inLexiqueName,
                                             const C_String & nomTable,
                                             AC_OutputStream & inHfile) {
  inHfile << "//--- Key words table '" << nomTable << "'\n" ;
// ---------------------------- Table size constant
  inHfile << "  public : static const sint16 "
           << inLexiqueName
           << "_table_size_"
           << nomTable
           << " ;\n" ; 
// ---------------------------- Table static const definition
  inHfile << "  private : static const C_lexique_table_entry "
           << inLexiqueName
           << "_table_for_"
           << nomTable
           << " [" << inMap.count () << "] ;\n" ;

// ---------------------------- Statique search method
  inHfile << "  public : static sint16 search_into_" << nomTable
           << " (const C_String & inSearchedString) ;\n\n" ;
}

//---------------------------------------------------------------------------*

static void generateTerminalSymbolsTableDeclaration (const GGS_typeTableTablesDeMotsReserves & inMap,
                                                     const C_String & inLexiqueName,
                                                     AC_OutputStream & inHfile) {
  GGS_typeTableTablesDeMotsReserves::element_type * currentMap = inMap.firstObject () ;
  while (currentMap != NULL) {
    generateKeyWordTableDeclaration (currentMap->mInfo.attributSimpleTable, inLexiqueName, currentMap->mKey, inHfile) ;
    currentMap = currentMap->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateAttributeInitialization (const GGS_typeLexicalAttributesMap & inMap,
                                 AC_OutputStream & inCppFile) {
  GGS_typeLexicalAttributesMap::element_type * currentMap = inMap.firstObject () ;
  while (currentMap != NULL) {
    currentMap->mInfo.attributType(HERE)->generateAttributeInitialization (currentMap->mKey, inCppFile) ;
    currentMap = currentMap->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void
routine_buildLexicalRulesFromList (C_Lexique & ioLexique, 
                                   GGS_typeTableMotsReserves & keyWordsMap,
                                   GGS_typeListeTestsEtInstructions & ioLexicalRulesList
                                   COMMA_LOCATION_ARGS) {
//--- First, find the longest string
  sint32 longestString = 0 ;
  GGS_typeTableMotsReserves::element_type * currentEntry = keyWordsMap.firstObject () ;
  while (currentEntry != NULL) {
    macroValidPointer (currentEntry) ;
    const sint32 length = currentEntry->mKey.length () ;
    if (longestString < length) {
      longestString = length ;
    }
    currentEntry = currentEntry->nextObject () ;
  }
//--- Analyse strings from longest ones
  for (sint32 length=longestString ; length>0 ; length--) {
    currentEntry = keyWordsMap.firstObject () ;
    while (currentEntry != NULL) {
      macroValidPointer (currentEntry) ;
      const sint32 currentLength = currentEntry->mKey.length () ;
      if (length == currentLength) {
        ::routine_appendToLexicalInstructionList (ioLexique,
                                          ioLexicalRulesList,
                                          currentEntry->mKey,
                                          currentEntry->mInfo.attributNomTerminal COMMA_THERE) ;
      }
      currentEntry = currentEntry->nextObject () ;
    }
  }
}

//---------------------------------------------------------------------------*

static void
generate_scanning_method (AC_OutputStream & inCppFile,
                          const C_String & inLexiqueName,
                          const GGS_typeLexicalAttributesMap & table_attributs,
                          const GGS_typeListeTestsEtInstructions & programme_principal) {

  inCppFile.writeCppTitleComment ("parseLexicalToken") ;
  inCppFile << "bool " << inLexiqueName << "::\n"
               "parseLexicalToken (void) {\n"
               "  cTokenFor_" << inLexiqueName << " _token ;\n" ;
  inCppFile.incIndentation (+2) ;
   if (instructions_list_uses_loop_variable (programme_principal)) {
     inCppFile << "bool loop_ = true ;\n" ;
   }
  inCppFile << "_token._mTokenCode = -1 ;\n"
               "while (_token._mTokenCode < 0) {\n" ;
  generateAttributeInitialization (table_attributs, inCppFile) ;
  inCppFile.incIndentation (+2) ;
  inCppFile << "mCurrentTokenStartLocation = currentLocation () ;\n"
              "try{\n" ;
  inCppFile.incIndentation (+2) ;
  bool nonEmptyList ;
  generateScannerCode (programme_principal, inLexiqueName, inCppFile, true, nonEmptyList) ;
  if (nonEmptyList) {
    inCppFile << "}else " ;
  }
  inCppFile << "if (testForInputChar ('\\0')) { // End of source text ? \n"
               "  _token._mTokenCode = " << inLexiqueName << "_1_ ; // Empty string code\n"
               "}else{ // Unknown input character\n"
               "  unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
               "}\n" ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}catch (const C_lexicalErrorException &) {\n"
               "  _token._mTokenCode = -1 ; // No token\n"
               "  advance () ; // ... go throught unknown character\n"
               "}\n" ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}\n"
               "return _token._mTokenCode > 0 ;\n" ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}\n\n" ;  
}

//---------------------------------------------------------------------------*

static void
generateScanningMethodForLexicalColoring (AC_OutputStream & inCppFile,
                                          const C_String & inLexiqueName,
                                          const GGS_typeLexicalAttributesMap & table_attributs,
                                          const GGS_typeListeTestsEtInstructions & programme_principal) {

  inCppFile.writeCppTitleComment ("parseLexicalTokenForLexicalColoring") ;
  inCppFile << "sint16 "
           << inLexiqueName
           << "::\n"
              "parseLexicalTokenForLexicalColoring (void) {\n"
              "  cTokenFor_" << inLexiqueName << " _token ;\n" ;
   if (instructions_list_uses_loop_variable (programme_principal)) {
     inCppFile << "  bool loop_ = true ;\n" ;
   }
  inCppFile.incIndentation (+2) ;
/*  GGS_typeLexicalAttributesMap::element_type * currentAttribute = table_attributs.firstObject () ;
  while (currentAttribute != NULL) {
    currentAttribute->mInfo.attributType (HERE)->generateLexicalAttributeDeclaration (currentAttribute->mKey, inCppFile) ;
    currentAttribute = currentAttribute->nextObject () ;
  }*/
  inCppFile << "_token._mTokenCode = -1 ;\n"
               "while (_token._mTokenCode < 0) {\n" ;
  generateAttributeInitialization (table_attributs, inCppFile) ;
  inCppFile.incIndentation (+2) ;
  inCppFile << "mCurrentTokenStartLocation = currentLocation () ;\n"
              "try{\n" ;
  inCppFile.incIndentation (+2) ;
  bool nonEmptyList ;
  generateScannerCode (programme_principal, inLexiqueName, inCppFile, false, nonEmptyList) ;
  if (nonEmptyList) {
    inCppFile << "}else " ;
  }
  inCppFile << "if (testForInputChar ('\\0')) { // End of source text ? \n"
              "  _token._mTokenCode = " << inLexiqueName << "_1_ ; // Empty string code\n"
              "}else{ // Unknown input character\n"
              "  unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
              "}\n" ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}catch (const C_lexicalErrorException &) {\n"
             "  _token._mTokenCode = -1 ; // No token\n"
             "  advance () ; // ... go throught unknown character\n"
             "  throw ;\n"
             "}\n" ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}\n" ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "  return _token._mTokenCode ;\n"
               "}\n\n" ;  
}

//---------------------------------------------------------------------------*

static void
generateExternArgumentForList (const GGS_typeListeArgumentsRoutExterne & inList,
                               AC_OutputStream & inCppFile) {
  GGS_typeListeArgumentsRoutExterne::element_type * courant = inList.firstObject () ;
  bool premier = true ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    if (premier) {
      premier = false ;
    }else{
      inCppFile << ", " ;
    }
    courant->attributArgument(HERE)->generateExternArgument (inCppFile) ;
    courant = courant->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentAttribut::
generateExternArgument (AC_OutputStream & inCppFile) const {
  inCppFile << "_token." << attributNom ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentCaractere::
generateExternArgument (AC_OutputStream & inCppFile) const {
  inCppFile.writeCcharConstant (attributCaractere.charValue ()) ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentCaractereCourant::
generateExternArgument (AC_OutputStream & inCppFile) const {
  inCppFile << "previousChar ()" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentEntier::
generateExternArgument (AC_OutputStream & inCppFile) const {
  inCppFile << attributValeur.uintValue () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentRoutine::
generateExternArgument (AC_OutputStream & inCppFile) const {
  inCppFile << "scanner_action_" << attributNomRoutine << " (" ;
  generateExternArgumentForList (attributListeArguments, inCppFile) ;
  inCppFile << ")" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeInstructionActionExterne::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionActionExterne::
generate_scanner_instruction (const C_String &, //inLexiqueName
                              const bool /*inGenerateEnterToken */,
                              AC_OutputStream & inCppFile) const {
  inCppFile << "scanner_action_" << attributNomRoutineExterne << " (" ;
//--- Engendrer la liste des arguments (au moins 1)
  generateExternArgumentForList (attributListeArguments, inCppFile) ;
//--- Engendrer la liste des messages d'erreurs (zero, un ou plusieurs)
  GGS_typeListeMessagesErreur::element_type * courant = attributListeMessageErreur.firstObject () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    inCppFile << ", gErrorMessage_" << courant->mErrorMessageIndex.uintValue () ;
    courant = courant->nextObject () ;
  }
//--- End of instruction
  inCppFile << ") ;\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeInstructionRepetitionLexicale::
instruction__uses_loop_variable (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionRepetitionLexicale::
generate_scanner_instruction (const C_String & inLexiqueName,
                              const bool inGenerateEnterToken,
                              AC_OutputStream & inCppFile) const {
  inCppFile << "do {\n" ;
  inCppFile.incIndentation (+2) ;
  generate_scanner_instructions_list (attributListeInstructionsDebut, inLexiqueName, inGenerateEnterToken, inCppFile) ;
  bool nonEmptyList = true ;
  generateScannerCode (attributListeBranches, inLexiqueName, inCppFile, inGenerateEnterToken, nonEmptyList) ;
  if (nonEmptyList) {
    inCppFile << "}else{\n"
                 "  loop_ = false ;\n"
                 "}\n" ;
  }else{
    inCppFile << "  loop_ = false ;\n" ;
  }
  inCppFile.incIndentation (-2) ;
  inCppFile << "}while (loop_) ;\n"
               "loop_ = true ;\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeInstructionSiLexical::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionSiLexical::
generate_scanner_instruction (const C_String & inLexiqueName,
                              const bool inGenerateEnterToken,
                              AC_OutputStream & inCppFile) const {
  bool nonEmptyList = true ;
  generateScannerCode (attributListeBranches, inLexiqueName, inCppFile, inGenerateEnterToken, nonEmptyList) ;
  if (nonEmptyList) {
    if (attributBrancheSinon.firstObject () != NULL) {
      inCppFile << "}else{\n" ;
      inCppFile.incIndentation (+2) ;
      generate_scanner_instructions_list (attributBrancheSinon, inLexiqueName, inGenerateEnterToken, inCppFile) ;
      inCppFile.incIndentation (-2) ;
    }
    inCppFile << "}\n" ;
  }else if (attributBrancheSinon.firstObject () != NULL) {
      inCppFile.incIndentation (+2) ;
      generate_scanner_instructions_list (attributBrancheSinon, inLexiqueName, inGenerateEnterToken, inCppFile) ;
      inCppFile.incIndentation (-2) ;
    }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeLexicalTagInstruction::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLexicalTagInstruction::
generate_scanner_instruction (const C_String & /* inLexiqueName */,
                              const bool /* inGenerateEnterToken */,
                              AC_OutputStream & inCppFile) const {
  inCppFile << "const C_LocationInSource _locationForTag_" << mLexicalTagName << " = _mCurrentLocation ;\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeLexicalRewindAndSendInstruction::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLexicalRewindAndSendInstruction::
generate_scanner_instruction (const C_String & inLexiqueName,
                              const bool inGenerateEnterToken,
                              AC_OutputStream & inCppFile) const {
  inCppFile << "_mCurrentLocation = _locationForTag_" << mLexicalTagName << " ;\n"
               "_token._mTokenCode = " << inLexiqueName << "_1_" ;
  generateTerminalSymbolCppName (mTerminal, inCppFile) ;
  inCppFile << " ;\n" ;
  if (inGenerateEnterToken) {
    inCppFile << "_enterToken (_token) ;\n" ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeInstructionEmettreSimple::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionEmettreSimple::
generate_scanner_instruction (const C_String & inLexiqueName,
                              const bool inGenerateEnterToken,
                              AC_OutputStream & inCppFile) const {
  inCppFile << "_token._mTokenCode = " << inLexiqueName << "_1_" ;
  generateTerminalSymbolCppName (mTerminal, inCppFile) ;
  inCppFile << " ;\n" ;
  if (inGenerateEnterToken) {
    inCppFile << "_enterToken (_token) ;\n" ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeLexicalDropInstruction::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLexicalDropInstruction::
generate_scanner_instruction (const C_String & inLexiqueName,
                              const bool inGenerateEnterToken,
                              AC_OutputStream & inCppFile) const {
  if (! inGenerateEnterToken) {
    inCppFile << "_token._mTokenCode = " << inLexiqueName << "_1_" ;
    generateTerminalSymbolCppName (mTerminal, inCppFile) ;
    inCppFile << " ;\n" ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeInstructionEmettre::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionEmettre::
generate_scanner_instruction (const C_String & inLexiqueName,
                              const bool inGenerateEnterToken,
                              AC_OutputStream & inCppFile) const {
  bool premier = true ;
  GGS_typeListeRecherche::element_type * courant = attributListeRecherches.firstObject () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    if (! premier) {
      inCppFile << "if (_token._mTokenCode == -1) {\n" ;
      inCppFile.incIndentation (+2) ;
    }
    inCppFile << "_token._mTokenCode = search_into_" << courant->attributNomTable << " (_token."
              << courant->attributNomAttribut << ") ;\n" ;
    if (premier) {
      premier = false ;
    }else{
      inCppFile.incIndentation (-2) ;
      inCppFile << "}\n" ;
    }
    courant = courant->nextObject () ;
  }
  inCppFile << "if (_token._mTokenCode == -1) {\n" ;
  inCppFile.incIndentation (+2) ;
  attributEmissionParDefaut(HERE)->generateDefaultToken (inLexiqueName, inCppFile) ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}\n" ;
  if (inGenerateEnterToken) {
    inCppFile << "_enterToken (_token) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeEmissionTerminalParDefaut::
generateDefaultToken (const C_String & inLexiqueName,
                      AC_OutputStream & inCppFile) const {
  inCppFile << "_token._mTokenCode = " << inLexiqueName << "_1_" ;
  generateTerminalSymbolCppName (attributNomTerminal, inCppFile) ;
  inCppFile << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeEmissionErreurParDefaut::
generateDefaultToken (const C_String &,
                      AC_OutputStream & inCppFile) const {
  inCppFile << "lexicalError (gErrorMessage_" << mErrorMessageIndex.uintValue () << " COMMA_LINE_AND_SOURCE_FILE) ;\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeInstructionErreurLexicale::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionErreurLexicale::
generate_scanner_instruction (const C_String &, // inLexiqueName
                              const bool /*inGenerateEnterToken */,
                              AC_OutputStream & inCppFile) const {
  inCppFile << "lexicalError (gErrorMessage_" << mErrorMessageIndex.uintValue () << " COMMA_LINE_AND_SOURCE_FILE) ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionCaractere::
generateLexicalCondition (AC_OutputStream & inCppFile) {
  inCppFile << "testForInputChar (" ;
  inCppFile.writeCcharConstant (attributCaractere.charValue ()) ;
  inCppFile << ")" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionChaine::
generateLexicalCondition (AC_OutputStream & inCppFile) {
  inCppFile << "testForInputString (" ;
  inCppFile.writeCstringConstant (attributChaine) ;
  inCppFile << ", " << attributChaine.length () ;
  inCppFile << ")" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionIntervalle::
generateLexicalCondition (AC_OutputStream & inCppFile) {
  inCppFile << "testForInputChar (" ;
  inCppFile.writeCcharConstant (attributBorneInf.charValue ()) ;
  inCppFile << ", " ;
  inCppFile.writeCcharConstant (attributBorneSup.charValue ()) ;
  inCppFile << ")" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= generateAttributeInitialization
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) const {
  inCppFile << "  _token." << nom << ".clear () ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) const {
  inCppFile << "  _token." << nom << " = '\\0' ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) const {
  inCppFile << "  _token." << nom << " = false ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) const {
  inCppFile << "  _token." << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint64::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) const {
  inCppFile << "  _token." << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) const {
  inCppFile << "  _token." << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint64::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) const {
  inCppFile << "  _token." << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) const {
  inCppFile << "  _token." << nom << " = 0.0 ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= generateLexicalAttributeDeclaration
#endif

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generateLexicalAttributeDeclaration (const GGS_lstring & /* nom */,
                                     AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateLexicalAttributeDeclaration (const GGS_lstring & nom,
                                     AC_OutputStream & inCppFile) const {
  inCppFile << "  C_String " << nom << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateLexicalAttributeDeclaration (const GGS_lstring & nom,
                                     AC_OutputStream & inCppFile) const {
  inCppFile << "  char " << nom << " = '\\0' ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateLexicalAttributeDeclaration (const GGS_lstring & nom,
                                     AC_OutputStream & inCppFile) const {
  inCppFile << "  bool " << nom << " = false ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateLexicalAttributeDeclaration (const GGS_lstring & nom,
                                     AC_OutputStream & inCppFile) const {
  inCppFile << "  uint32 " << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint64::
generateLexicalAttributeDeclaration (const GGS_lstring & nom,
                                     AC_OutputStream & inCppFile) const {
  inCppFile << "  uint64 " << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateLexicalAttributeDeclaration (const GGS_lstring & nom,
                                     AC_OutputStream & inCppFile) const {
  inCppFile << "  sint32 " << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint64::
generateLexicalAttributeDeclaration (const GGS_lstring & nom,
                                     AC_OutputStream & inCppFile) const {
  inCppFile << "  sint64 " << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateLexicalAttributeDeclaration (const GGS_lstring & nom,
                                     AC_OutputStream & inCppFile) const {
  inCppFile << "  double " << nom << " = 0.0 ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= generateAttributeDeclaration
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : C_String " << nom
          << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : char " << nom
          << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : bool " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : uint32 " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint64::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : uint64 " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : sint32 " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint64::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : sint64 " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & inHfile) const {
  inHfile << "  public : double " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= generateAttributeGetLexicalValue
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << ' ' ;\n" ;
  inCppFile << "    s.writeCstringConstant (_p->" << inAttributeName << ") ;\n" ; 
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << ' ' ;\n" ;
  inCppFile << "    s.writeCcharConstant (_p->" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << ' ' << (_p->" << inAttributeName << " ? \"true\" : \"false\") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << ' ' << _p->" << inAttributeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint64::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << ' ' << _p->" << inAttributeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << ' ' << _p->" << inAttributeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint64::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << ' ' << _p->" << inAttributeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << ' ' << _p->" << inAttributeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Files Generation
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier ".h"                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_scanner_header_file (C_Lexique & inLexique,
                              const GGS_lstring & inLexiqueName,
                              const GGS_typeLexicalAttributesMap & table_attributs,
                              const GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                              const GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves) {
//--- Write #ifndef, ..., #include, ...
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#ifndef " << inLexiqueName << "_0_DEFINED\n"
                    "#define " << inLexiqueName << "_0_DEFINED\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"galgas/GGS_lstring.h\"\n"
                    "#include \"galgas/GGS_luint.h\"\n"
                    "#include \"galgas/GGS_lsint.h\"\n"
                    "#include \"galgas/GGS_luint64.h\"\n"
                    "#include \"galgas/GGS_lsint64.h\"\n"
                    "#include \"galgas/GGS_lchar.h\"\n"
                    "#include \"galgas/GGS_ldouble.h\"\n"
                    "#include \"galgas/GGS_lbool.h\"\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"galgas/C_Lexique.h\"\n\n" ;

//--------------- Token Class declaration  
  generatedZone2.writeCppTitleComment ("Lexical scanner class") ;
  generatedZone2 << "class cTokenFor_" << inLexiqueName << " : public cToken {\n" ;
//  generateAttributeDeclaration (table_attributs, generatedZone2) ;
  GGS_typeLexicalAttributesMap::element_type * currentAttribute = table_attributs.firstObject () ;
  while (currentAttribute != NULL) {
    currentAttribute->mInfo.attributType(HERE)->generateAttributeDeclaration (currentAttribute->mKey, generatedZone2) ;
    currentAttribute = currentAttribute->nextObject () ;
  }
  generatedZone2 << "} ;\n\n" ;

// --------------- Declaration de la classe de l'analyseur lexical  
  generatedZone2.writeCppTitleComment ("Lexical scanner class") ;
  generatedZone2 << "class " << inLexiqueName << " : public C_Lexique {\n"
                    "//--- Constructor\n"
                    "  public : "
                 << inLexiqueName
                 << " (C_galgas_io * inParametersPtr\n"
                    "                       COMMA_LOCATION_ARGS) ;\n"
                    "\n"
                    "//--- Declaring a protected virtual destructor enables the compiler to raise\n"
                    "//    an error if a direct delete is performed; only the static method\n"
                    "//    C_GGS_Object::detachPointer may invoke delete.\n"
                    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "    protected : virtual ~" << inLexiqueName << " (void) {}\n"
                    "  #endif\n\n" ;
  
  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;
  generatedZone3 << "//--- Terminal symbols enumeration\n"
                    "  public : enum {" ;
  generatedZone3 <<  inLexiqueName << "_1_" ;
  GGS_typeTableDefinitionTerminaux::element_type * currentTerminal = table_des_terminaux.firstObject () ;
  while (currentTerminal != NULL) {
    macroValidPointer (currentTerminal) ;    
    generatedZone3 << ",\n  " ;
    generatedZone3 << inLexiqueName ;
    generatedZone3 << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, generatedZone3) ;
    currentTerminal = currentTerminal->nextObject () ;
  }
  generatedZone3 << "} ;\n\n" ;
  generateTerminalSymbolsTableDeclaration (table_tables_mots_reserves, inLexiqueName, generatedZone3) ;
  generatedZone3 << "  protected : virtual bool parseLexicalToken (void) ;\n"
                    "  protected : virtual sint16 parseLexicalTokenForLexicalColoring (void) ;\n"
                    "  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const sint16 numeroTerminal,\n"
                    "                                                              C_String & messageErreur) ;\n"
                    "\n" ;

//--- Get lexical attribute value
  generatedZone3 << "//--- Get attribute values\n" ;
  currentAttribute = table_attributs.firstObject () ;
  while (currentAttribute != NULL) {
    generatedZone3 << "  public : void _assignFromAttribute_" << currentAttribute->mKey << " (" ;
    currentAttribute->mInfo.attributType (HERE)->generateCppClassName (generatedZone3) ;
    generatedZone3 << "& outValue) const ;\n" ;
    currentAttribute = currentAttribute->nextObject () ;
  }

  generatedZone3 << "//--- Get terminal count\n"
                    "  public : virtual sint16 terminalVocabularyCount (void) const { return "
                 << table_des_terminaux.count ()
                 << " ; }\n"
//--- Get token string (for debugging) 
                    "//--- Get Token String\n"
                    "  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;\n"
                    "//--- Enter Token\n"
                    "  protected : void _enterToken (const cTokenFor_" << inLexiqueName << " & inToken) ;\n"
//--- Styles definition 
                    "//--- Style Definition\n"
                    "  public : static sint32 getStylesCount (void) ;\n"
                    "  public : static const char * getStyleName (const sint32 inIndex) ;\n"
                    "  public : static const char * getStyleIdentifier (const sint32 inIndex) ;\n"
                    "//--- Virtual method called getting terminal style index\n"
                    "  public : virtual uint8 terminalStyleIndex (const sint32 inTerminal) ;\n"
        "} ;\n\n" ;
//--- End of ".h" file
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output"
                                                                   COMMA_HERE) ;
  inLexique.generateFile ("//",
                          inLexiqueName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Generate C++ Scanner file                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_scanner_cpp_file (C_Lexique & inLexique,
                           const C_String & inLexiqueName,
                           const GGS_typeLexicalAttributesMap & table_attributs,
                           const GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                           const GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves,
                           const GGS_typeListeTestsEtInstructions & programme_principal,
                           const GGS_typeTableMessagesErreurs & inLexicalErrorsMessageMap,
                           const GGS_stringset & inUsedErrorMessageSet,
                           const GGS_M_styles & inStylesMap,
                           const GGS_tokensInListMap & /* inTokensInListMap */) {
// --------------------------------------- Engendrer les inclusions
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include <ctype.h>\n"
                    "#include <string.h>\n\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
                    "#include \"" << inLexiqueName << ".h\"\n\n"
                    "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define LINE_AND_SOURCE_FILE sourceText ()->sourceFileName ().cString (), currentLineNumber ()\n"
                    "  #define COMMA_LINE_AND_SOURCE_FILE , LINE_AND_SOURCE_FILE\n"
                    "#else\n"
                    "  #define LINE_AND_SOURCE_FILE\n"
                    "  #define COMMA_LINE_AND_SOURCE_FILE\n"
                    "#endif\n\n" ;

// --------------------------------------- Constructor
  generatedZone2.writeCppTitleComment ("Constructor") ;
  generatedZone2 << inLexiqueName << "::\n" << inLexiqueName
                 << " (C_galgas_io * inParametersPtr\n"
                    "                COMMA_LOCATION_ARGS)\n"
                    ": C_Lexique (inParametersPtr COMMA_THERE) {\n"
                    "}\n\n" ;

//---------------------------------------- Generate error message list
  GGS_typeTableMessagesErreurs::element_type * currentMessage = inLexicalErrorsMessageMap.firstObject () ;
  if (currentMessage != NULL) {
    generatedZone2.writeCppTitleComment ("Lexical error message list") ;
    sint32 messageNumber = 0 ;
    while (currentMessage != NULL) {
      macroValidPointer (currentMessage) ;
      const bool used = inUsedErrorMessageSet.hasKey (currentMessage->mKey) ;
      if (used) {
        generatedZone2 << "//--- Message " << messageNumber << "\n" ;
      }else{
        generatedZone2 << "//--- Message " << messageNumber << " (not used)\n"
                          "// " ;      
      }
      generatedZone2 << "static const char * gErrorMessage_" << messageNumber << " = " ;
      generatedZone2.writeCstringConstant (currentMessage->mInfo.mErrorMessage) ;
      generatedZone2 << " ;\n" ;
      currentMessage = currentMessage->nextObject () ;
      messageNumber ++ ;
    }
    generatedZone2 << "\n" ;
  }

// --------------------------------------- Generate syntax error messages
  C_String errorMessageList ;

  GGS_typeTableDefinitionTerminaux::element_type * currentTerminal = table_des_terminaux.firstObject () ;
  if (currentTerminal != NULL) {
    generatedZone2.writeCppTitleComment ("Syntax error messages") ;
  }
  while (currentTerminal != NULL) {
    C_String constanteCname ;
    constanteCname << "gSyntaxErrorMessage_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, constanteCname) ;
    generatedZone2 << "//--- Syntax error message for terminal '$" << currentTerminal->mKey << "$' :\n"
               "static const char * " << constanteCname << " = " ;
    generatedZone2.writeCstringConstant (currentTerminal->mInfo.mErrorMessage) ;
    generatedZone2 << " ;\n\n" ;
    errorMessageList << ",\n       gSyntaxErrorMessage_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, errorMessageList) ;
    currentTerminal = currentTerminal->nextObject () ;
  }

  generatedZone2.writeCppTitleComment ("appendTerminalMessageToSyntaxErrorMessage") ;
  generatedZone2 << "void "
           << inLexiqueName
           << "::\n"
           << "appendTerminalMessageToSyntaxErrorMessage (const sint16 inTerminalIndex,\n"
           << "                                           C_String & outSyntaxErrorMessage) {\n" ;
  const sint32 n = table_des_terminaux.count () + 1 ;
  generatedZone2 << "  static const char * syntaxErrorMessageArray [" << n << "] = {"
             "\"end of source\"" << errorMessageList << "} ;\n"
             "  outSyntaxErrorMessage << syntaxErrorMessageArray [inTerminalIndex] ;\n"
             "}\n\n" ;

//---------------------------------------- Terminal symbol table
  generateTerminalSymbolsTable (table_tables_mots_reserves, inLexiqueName, generatedZone2) ;

//---------------------------------------- Terminal symbol table
  generateGetTokenStringMethod (table_des_terminaux, inLexiqueName, generatedZone2) ;

//---------------------------------------- Generate parsing method
  generate_scanning_method (generatedZone2,
                            inLexiqueName,
                            table_attributs,
                            programme_principal) ;
  generateScanningMethodForLexicalColoring (generatedZone2,
                                            inLexiqueName,
                                            table_attributs,
                                            programme_principal) ;
//---------------------------------------- Generate styles definition 
  generatedZone2.writeCppTitleComment ("Styles definition") ;
  generatedZone2 <<  "sint32 " << inLexiqueName << "::getStylesCount (void) {\n"
                     "  return " <<  inStylesMap.count () << " ;\n"
                     "}\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 <<  "const char * " << inLexiqueName << "::getStyleName (const sint32 inIndex) {\n"
              "  const char * kStylesArray [" << (inStylesMap.count () + 1) << "] = {" ;
  GGS_M_styles::element_type * style = inStylesMap.firstObject () ;
  while (style != NULL) {
    macroValidPointer (style) ;
    generatedZone2.writeCstringConstant (style->mInfo.mTitle) ;
    generatedZone2 << ", " ;
    style = style->nextObject () ;
  }
  generatedZone2 << "NULL} ;\n"
                    "  return (inIndex < " <<  inStylesMap.count () << ") ? kStylesArray [inIndex] : NULL ;\n"
                    "} ;\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 <<  "const char * " << inLexiqueName << "::getStyleIdentifier (const sint32 inIndex) {\n"
                     "  const char * kStylesArray [" << (inStylesMap.count () + 1) << "] = {" ;
  style = inStylesMap.firstObject () ;
  while (style != NULL) {
    macroValidPointer (style) ;
    generatedZone2.writeCstringConstant (style->mKey) ;
    generatedZone2 << ", " ;
    style = style->nextObject () ;
  }
  generatedZone2 << "NULL} ;\n"
                    "  return (inIndex < " <<  inStylesMap.count () << ") ? kStylesArray [inIndex] : NULL ;\n"
                    "} ;\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "uint8 " << inLexiqueName << "::\n"
                    "terminalStyleIndex (const sint32 inTerminal) {\n"
                    "  static const uint8 kTerminalSymbolStyles [" << (table_des_terminaux.count () + 1) << "] = {0" ;

  currentTerminal = table_des_terminaux.firstObject () ;
  while (currentTerminal != NULL) {
    generatedZone2 << ",\n    "
                   << currentTerminal->mInfo.mStyleIndex.uintValue ()
                   << " /* "
                   << inLexiqueName
                   << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, generatedZone2) ;
    generatedZone2 << " */" ;
    currentTerminal = currentTerminal->nextObject () ;
  }
  generatedZone2 << "\n  } ;\n"
                    "  return kTerminalSymbolStyles [inTerminal] ;\n"
                    "}\n\n" ;

  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "void " << inLexiqueName << "::_enterToken (const cTokenFor_" << inLexiqueName << " & inToken) {\n"
                    "  cTokenFor_" << inLexiqueName << " * _p = NULL ;\n"
                    "  macroMyNew (_p, cTokenFor_" << inLexiqueName << " ()) ;\n"
                    "  _p->_mTokenCode = inToken._mTokenCode ;\n"
                    "  _p->_mCurrentLocation = _mCurrentLocation ;\n" ;
  GGS_typeLexicalAttributesMap::element_type * currentAttribute = table_attributs.firstObject () ;
  while (currentAttribute != NULL) {
    generatedZone2 << "  _p->" << currentAttribute->mKey << " = inToken." << currentAttribute->mKey << " ;\n" ;
    currentAttribute = currentAttribute->nextObject () ;
  }
  generatedZone2 << "  _enterTokenFromPointer (_p) ;\n"
                    "}\n\n" ;

//--- Get lexical attribute value
  currentAttribute = table_attributs.firstObject () ;
  while (currentAttribute != NULL) {
    generatedZone2.writeCppHyphenLineComment () ;
    generatedZone2 << "void " << inLexiqueName << "::\n"
                      "_assignFromAttribute_" << currentAttribute->mKey << " (" ;
    currentAttribute->mInfo.attributType (HERE)->generateCppClassName (generatedZone2) ;
    generatedZone2 << "& outValue) const {\n"
                      "  cTokenFor_" << inLexiqueName << " * _p = (cTokenFor_" << inLexiqueName << " *) mCurrentTokenPtr ;\n"
                      "  outValue = " ;
    currentAttribute->mInfo.attributType (HERE)->generateCppClassName (generatedZone2) ;
    generatedZone2 << "(* this, _p->" << currentAttribute->mKey << ") ;\n"
                      "}\n\n" ;
    currentAttribute = currentAttribute->nextObject () ;
  }

//--- Generate decoder
/*  scannerDecoderGeneration (inLexique, inLexiqueName,
                            inTokensInListMap, programme_principal,
                            generatedZone2) ;*/

//--- Generate file
  C_String generatedZone3 ;
  generatedZone3.writeCppHyphenLineComment () ;

  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output"
                                                                   COMMA_HERE) ;
  inLexique.generateFile ("//",
                          inLexiqueName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}


//---------------------------------------------------------------------------*

void 
routine_generate_scanner (C_Lexique & inLexique,
                          const GGS_lstring & inLexiqueName,
                          const GGS_typeLexicalAttributesMap & table_attributs,
                          const GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                          const GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves,
                          const GGS_typeListeTestsEtInstructions & programme_principal,
                          const GGS_typeTableMessagesErreurs & inLexicalErrorsMessageMap,
                          const GGS_M_styles & inStylesMap,
                          const GGS_stringset & inUsedErrorMessageSet,
                          const GGS_tokensInListMap & inTokensInListMap
                          COMMA_LOCATION_ARGS) {
  if (inLexique.currentFileErrorCount() == 0) {
  //--- Get version string
    const C_String GALGASversionString = inLexique.getCompilerVersion () ;
  //--- Create GALGAS_OUTPUT directory
    const C_String GALGAS_OUTPUT_directory = inLexique.sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent ("GALGAS_OUTPUT") ;
    const bool ok = GALGAS_OUTPUT_directory.makeDirectoryIfDoesNotExists () ;
    if (ok) {
    //--- Generate header file
      generate_scanner_header_file (inLexique,
                                    inLexiqueName,
                                    table_attributs, table_des_terminaux,
                                    table_tables_mots_reserves) ;
    //--- Generate implementation file
      generate_scanner_cpp_file (inLexique,
                                 inLexiqueName,
                                 table_attributs, table_des_terminaux,
                                 table_tables_mots_reserves, programme_principal,
                                 inLexicalErrorsMessageMap,
                                 inUsedErrorMessageSet,
                                 inStylesMap,
                                 inTokensInListMap) ;
    }else{
      C_String errorMessage ;
      errorMessage << "cannot create directory " << GALGAS_OUTPUT_directory ;
      inLexique.printFileErrorMessage (inLexique.sourceFileName (), errorMessage.cString () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------*
