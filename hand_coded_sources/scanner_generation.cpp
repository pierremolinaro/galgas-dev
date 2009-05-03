//---------------------------------------------------------------------------*
//                                                                           *
//   Scanner Generation (hand-coded file)                                    *
//                                                                           *
//  Copyright (C) 2000, ..., 2008 Pierre Molinaro.                           *
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
#include "collections/TC_UniqueArray.h"

//---------------------------------------------------------------------------*

#include "scannerDecoderGeneration.h"

//---------------------------------------------------------------------------*

static bool
instructions_list_uses_loop_variable (const GGS_tListeInstructionsLexicales & inList) {
  bool use = false ;
  GGS_tListeInstructionsLexicales::cEnumerator courant (inList, true) ;
  while (courant.hc () && ! use) {
    use = courant._attributInstruction (HERE) (HERE)->instruction__uses_loop_variable () ;
    courant.next () ;
  }
  return use ;
}

//---------------------------------------------------------------------------*

static bool
instructions_list_uses_loop_variable (const GGS_typeListeTestsEtInstructions & inList) {
  bool use = false ;
  GGS_typeListeTestsEtInstructions::cEnumerator courant (inList, true) ;
  while (courant.hc () && ! use) {
    use = instructions_list_uses_loop_variable (courant._attributListeInstructions (HERE)) ;
    courant.next () ;
  }
  return use ;
}

//---------------------------------------------------------------------------*

static void
generate_scanner_instructions_list (const GGS_tListeInstructionsLexicales & inList,
                                    const C_String & inLexiqueName,
                                    const bool inGenerateEnterToken,
                                    AC_OutputStream & inCppFile) {
  GGS_tListeInstructionsLexicales::cEnumerator courant (inList, true) ;
  while (courant.hc ()) {
    courant._attributInstruction (HERE)(HERE)->generate_scanner_instruction (inLexiqueName, inGenerateEnterToken, inCppFile) ;
    courant.next () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateScannerCode (const GGS_typeListeTestsEtInstructions & inList,
                     const C_String & inLexiqueName,
                     AC_OutputStream & inCppFile,
                     const bool inGenerateEnterToken,
                     bool & outNonEmptyList) {
  outNonEmptyList = inList.count () > 0 ;
  GGS_typeListeTestsEtInstructions::cEnumerator courant (inList, true) ;
  bool first = true ;
  while (courant.hc ()) {
    if (first) {
      first = false ;
    }else{
      inCppFile << "}else " ;
    }
    inCppFile << "if (" ;
    GGS_typeListeConditionsLexicales::cEnumerator cond (courant._attributListeConditions (HERE), true) ;
    bool firstCond = true ;
    while (cond.hc ()) {
      if (firstCond) {
        firstCond = false ;
      }else{
        inCppFile << " ||\n    " ;
      }
      cond._attributCondition(HERE) (HERE)->generateLexicalCondition (inCppFile) ;
      cond.next () ;
    }
    inCppFile << ") {\n" ;
    inCppFile.incIndentation (+2) ;
    generate_scanner_instructions_list (courant._attributListeInstructions (HERE), inLexiqueName, inGenerateEnterToken, inCppFile) ;
    inCppFile.incIndentation (-2) ;
    courant.next () ;
  }
}

//---------------------------------------------------------------------------*

//--- Local class for storing table entries
class cTableEntry {
  public : C_String mEntryString ;
  public : sint32 mEntryStringLength ;
  public : C_String mTokenCode ;
  
  public : cTableEntry (void) ;
} ;

//---------------------------------------------------------------------------*

cTableEntry::cTableEntry (void) :
mEntryString (),
mEntryStringLength (0),
mTokenCode () {
}

//---------------------------------------------------------------------------*

static sint32 compareEntries (const cTableEntry & inEntry1,
                              const cTableEntry & inEntry2) {
  sint32 result = inEntry1.mEntryStringLength - inEntry2.mEntryStringLength ;
  if (result == 0) {
    result = inEntry1.mEntryString.compare (inEntry2.mEntryString) ;
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
  GGS_typeTableMotsReserves::cEnumerator p (inMap) ;
  sint32 index = 0 ;
  while (p.hc ()) {
    cTableEntry e ;
    e.mEntryString = p._key (HERE) ;
    e.mEntryStringLength = p._key (HERE).length () ;
    e.mTokenCode = p._attributNomTerminal (HERE) ;
    entriesArray.addObject (e) ;
    p.next () ;
    index ++ ;
  }
//--- Order the array :
//     * by length increasing order ;
//     * by ::strcmp order
  entriesArray.sortArrayUsingFunction (compareEntries) ;

//--- Write entries
  for (sint32 i=0 ; i<entriesCount ; i++) {
    inCppFile << "  C_lexique_table_entry (" ;
    inCppFile.appendCLiteralStringConstant (entriesArray (i COMMA_HERE).mEntryString) ;
    inCppFile << ", " << entriesArray (i COMMA_HERE).mEntryStringLength
             << ", " << inLexiqueName << "_1_" ;
    generateTerminalSymbolCppName (entriesArray (i COMMA_HERE).mTokenCode, inCppFile) ;
    inCppFile << ")" << ((i == (entriesCount - 1)) ? "" : ",") << "\n" ;
  }
}

//---------------------------------------------------------------------------*

static void 
generateKeyWordTableImplementation (const GGS_typeTableMotsReserves & inMap,
                                    const C_String & inLexiqueName,
                                    const C_String & nomTable,
                                    AC_OutputStream & inCppFile) {
  inCppFile.appendCppTitleComment (C_String ("Key words table '") + nomTable + "'") ;
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
  GGS_typeTableTablesDeMotsReserves::cEnumerator currentMap (inMap) ;
  while (currentMap.hc ()) {
    generateKeyWordTableImplementation (currentMap._attributSimpleTable (HERE), inLexiqueName, currentMap._key (HERE), inCppFile) ;
    currentMap.next () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateGetTokenStringMethod (const GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                              const C_String & inLexiqueName,
                              AC_OutputStream & inCppFile) {
  inCppFile.appendCppTitleComment ("getCurrentTokenString") ;
  inCppFile << "C_String "
            << inLexiqueName
            << "::\n"
               "getCurrentTokenString (const cToken * inTokenPtr) const {\n"
               "  cTokenFor_" << inLexiqueName << " * _p = (cTokenFor_" << inLexiqueName << " *) inTokenPtr ;\n"
               "  C_String s ;\n"
               "  if (_p == NULL) {\n"
               "    s << \"$$\" ;\n"
               "  }else{\n"
               "    switch (_p->_mTokenCode) {\n"
               "    case  " << inLexiqueName << "_1_:\n"
               "      s << \"$$\" ;\n"
               "      break ;\n" ;
  GGS_typeTableDefinitionTerminaux::cEnumerator currentTerminal (table_des_terminaux) ;
  while (currentTerminal.hc ()) {
    inCppFile << "    case  " << inLexiqueName << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal._key (HERE), inCppFile) ;
    inCppFile << ":\n"
                 "      s << \"$\"\n"
                 "        << " ;
    inCppFile.appendCLiteralStringConstant (currentTerminal._key (HERE)) ;
    inCppFile << "\n"   
                 "        << \"$\" ;\n" ;
    GGS_typeListeAttributsSemantiques::cEnumerator currentAttribute (currentTerminal._attributListeDesAttributs (HERE), true) ;
    while (currentAttribute.hc ()) {
      currentAttribute._mAttributType (HERE) (HERE)->generateAttributeGetLexicalValue (currentAttribute._mAttributeName (HERE), inCppFile) ;
      currentAttribute.next () ;
    }
    inCppFile << "      break;\n" ;
    currentTerminal.next () ;
  }
  inCppFile << "    default:\n"
               "      break ;\n"
               "    }\n"
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
  GGS_typeTableTablesDeMotsReserves::cEnumerator currentMap (inMap) ;
  while (currentMap.hc ()) {
    generateKeyWordTableDeclaration (currentMap._attributSimpleTable (HERE), inLexiqueName, currentMap._key (HERE), inHfile) ;
    currentMap.next () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateAttributeInitialization (const GGS_typeLexicalAttributesMap & inMap,
                                 AC_OutputStream & inCppFile) {
  GGS_typeLexicalAttributesMap::cEnumerator currentMap (inMap) ;
  while (currentMap.hc ()) {
    currentMap._attributType(HERE)(HERE)->generateAttributeInitialization (currentMap._key (HERE), inCppFile) ;
    currentMap.next () ;
  }
}

//---------------------------------------------------------------------------*

void
routine_buildLexicalRulesFromList (C_Compiler & ioLexique, 
                                   GGS_typeTableMotsReserves & keyWordsMap,
                                   GGS_typeListeTestsEtInstructions & ioLexicalRulesList
                                   COMMA_LOCATION_ARGS) {
//--- First, find the longest string
  sint32 longestString = 0 ;
  GGS_typeTableMotsReserves::cEnumerator currentEntry (keyWordsMap) ;
  while (currentEntry.hc ()) {
    const sint32 length = currentEntry._key (HERE).length () ;
    if (longestString < length) {
      longestString = length ;
    }
    currentEntry.next () ;
  }
//--- Analyse strings from longest ones
  for (sint32 length=longestString ; length>0 ; length--) {
    currentEntry.rewind () ;
    while (currentEntry.hc ()) {
      const sint32 currentLength = currentEntry._key (HERE).length () ;
      if (length == currentLength) {
        ::routine_appendToLexicalInstructionList (ioLexique,
                                          ioLexicalRulesList,
                                          currentEntry._key (HERE),
                                          currentEntry._attributNomTerminal (HERE) COMMA_THERE) ;
      }
      currentEntry.next () ;
    }
  }
}

//---------------------------------------------------------------------------*

static void
generate_scanning_method (AC_OutputStream & inCppFile,
                          const bool inIsTemplate,
                          const GGS_templateDelimiterMap & inTemplateDelimiterMap,
                          const GGS_templateReplacementMap & inTemplateReplacementMap,
                          const C_String & inLexiqueName,
                          const GGS_typeLexicalAttributesMap & table_attributs,
                          const GGS_typeListeTestsEtInstructions & programme_principal) {

  inCppFile.appendCppTitleComment ("parseLexicalToken") ;
  inCppFile << "bool " << inLexiqueName << "::\n"
               "parseLexicalToken (void) {\n"
               "  cTokenFor_" << inLexiqueName << " _token ;\n" ;
  inCppFile.incIndentation (+2) ;
  if (instructions_list_uses_loop_variable (programme_principal)) {
    inCppFile << "bool loop_ = true ;\n" ;
  }
  inCppFile << "_token._mTokenCode = -1 ;\n"
               "while ((_token._mTokenCode < 0) && (UNICODE_ACCESS (mCurrentChar) != '\\0')) {\n" ;
  if (inIsTemplate) {
    inCppFile << "  if ((_mMatchedTemplateDelimiterIndex >= 0)\n"
                 "   && (kTemplateDefinitionArray [_mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n"
                 "   && (UNICODE_ACCESS (mCurrentChar) != '\\0')) {\n"
                 "    const bool foundEndDelimitor = testForInputString (kTemplateDefinitionArray [_mMatchedTemplateDelimiterIndex].mEndString,\n"
                 "                                                       kTemplateDefinitionArray [_mMatchedTemplateDelimiterIndex].mEndStringLength,\n"
                 "                                                       true) ;\n"
                 "    if (foundEndDelimitor) {\n"
                 "      _mMatchedTemplateDelimiterIndex = -1 ;\n"
                 "    }\n"
                 "  }\n"
                 "  while ((_mMatchedTemplateDelimiterIndex < 0) && (UNICODE_ACCESS (mCurrentChar) != '\\0')) {\n"
                 "    sint32 _replacementIndex = 0 ;\n"
                 "    while (_replacementIndex >= 0) {\n"
                 "     _replacementIndex = findTemplateDelimiterIndex (kTemplateReplacementArray, " << inTemplateReplacementMap.count () << ") ;\n"
                 "       if (_replacementIndex >= 0) {\n"
                 "         _token._mTemplateStringBeforeToken << kTemplateReplacementArray [_replacementIndex].mEndString ;\n"
                 "      }\n"
                 "    }\n"
                 "    _mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (kTemplateDefinitionArray, " << inTemplateDelimiterMap.count () << ") ;\n"
                 "    if (_mMatchedTemplateDelimiterIndex < 0) {\n"
                 "      _token._mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar) ;\n"
                 "      advance () ;\n"
                 "    }\n"
                 "  }\n"
                 "  if ((_mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_ACCESS (mCurrentChar) != '\\0')) {\n" ;
    inCppFile.incIndentation (+2) ;
  }
  generateAttributeInitialization (table_attributs, inCppFile) ;
  inCppFile.incIndentation (+2) ;
  inCppFile << "_mTokenFirstLocation = _mCurrentLocation ;\n"
               "try{\n" ;
  inCppFile.incIndentation (+2) ;
  bool nonEmptyList ;
  generateScannerCode (programme_principal, inLexiqueName, inCppFile, true, nonEmptyList) ;
  if (nonEmptyList) {
    inCppFile << "}else " ;
  }
  inCppFile << "if (testForInputChar (UNICODE_NEW ('\\0'))) { // End of source text ? \n"
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
  if (inIsTemplate) {
    inCppFile << "}\n"
                 "if (kEndOfScriptInTemplateArray [_token._mTokenCode]) {\n"
                 "  _mMatchedTemplateDelimiterIndex = -1 ;\n"
                 "}\n" ;
    inCppFile.incIndentation (-2) ;
  }
  inCppFile << "}\n"
               "if ((UNICODE_ACCESS (mCurrentChar) == '\\0') && (_token._mTemplateStringBeforeToken.length () > 0)) {\n"
               "  _token._mTokenCode = 0 ;\n"
               "  _enterToken (_token) ;\n"
               "}\n"
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

  inCppFile.appendCppTitleComment ("parseLexicalTokenForLexicalColoring") ;
  inCppFile << "sint16 "
           << inLexiqueName
           << "::\n"
              "parseLexicalTokenForLexicalColoring (void) {\n"
              "  cTokenFor_" << inLexiqueName << " _token ;\n" ;
   if (instructions_list_uses_loop_variable (programme_principal)) {
     inCppFile << "  bool loop_ = true ;\n" ;
   }
  inCppFile.incIndentation (+2) ;
  inCppFile << "_token._mTokenCode = -1 ;\n"
               "while (_token._mTokenCode < 0) {\n" ;
  generateAttributeInitialization (table_attributs, inCppFile) ;
  inCppFile.incIndentation (+2) ;
  inCppFile << "_mTokenFirstLocation = _mCurrentLocation ;\n"
               "try{\n" ;
  inCppFile.incIndentation (+2) ;
  bool nonEmptyList ;
  generateScannerCode (programme_principal, inLexiqueName, inCppFile, false, nonEmptyList) ;
  if (nonEmptyList) {
    inCppFile << "}else " ;
  }
  inCppFile << "if (testForInputChar (UNICODE_NEW ('\\0'))) { // End of source text ? \n"
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
  GGS_typeListeArgumentsRoutExterne::cEnumerator courant (inList, true) ;
  bool first = true ;
  while (courant.hc ()) {
    if (first) {
      first = false ;
    }else{
      inCppFile << ", " ;
    }
    courant._attributArgument(HERE) (HERE)->generateExternArgument (inCppFile) ;
    courant.next () ;
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
  inCppFile << "UNICODE_NEW (" ;
  inCppFile.appendCLiteralCharConstant (attributCaractere.charValue ()) ;
  inCppFile << ")" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentCaractereCourant::
generateExternArgument (AC_OutputStream & inCppFile) const {
  inCppFile << "previousChar ()" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentEntier::
generateExternArgument (AC_OutputStream & inCppFile) const {
  inCppFile.appendUnsigned (attributValeur.uintValue ()) ;
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
  GGS_typeListeMessagesErreur::cEnumerator courant (attributListeMessageErreur, true) ;
  while (courant.hc ()) {
    inCppFile << ", gErrorMessage_" ;
    inCppFile.appendUnsigned (courant._mErrorMessageIndex (HERE).uintValue ()) ;
    courant.next () ;
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

bool cPtr_typeInstructionExitLoop::
instruction__uses_loop_variable (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionExitLoop::
generate_scanner_instruction (const C_String & /* inLexiqueName */,
                              const bool /* inGenerateEnterToken */,
                              AC_OutputStream & inCppFile) const {
  inCppFile << "loop_ = false ;\n" ;
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
    if (attributBrancheSinon.count () > 0) {
      inCppFile << "}else{\n" ;
      inCppFile.incIndentation (+2) ;
      generate_scanner_instructions_list (attributBrancheSinon, inLexiqueName, inGenerateEnterToken, inCppFile) ;
      inCppFile.incIndentation (-2) ;
    }
    inCppFile << "}\n" ;
  }else if (attributBrancheSinon.count () > 0) {
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

bool cPtr_typeLexicalLogInstruction::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLexicalLogInstruction::
generate_scanner_instruction (const C_String & /* inLexiqueName */,
                              const bool /* inGenerateEnterToken */,
                              AC_OutputStream & inCppFile) const {
  inCppFile << "lexicalLog (LINE_AND_SOURCE_FILE) ;\n" ;
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
  GGS_typeListeRecherche::cEnumerator courant (attributListeRecherches, true) ;
  bool first = true ;
  while (courant. hc ()) {
    if (! first) {
      inCppFile << "if (_token._mTokenCode == -1) {\n" ;
      inCppFile.incIndentation (+2) ;
    }
    inCppFile << "_token._mTokenCode = search_into_" << courant._attributNomTable (HERE) << " (_token."
              << courant._attributNomAttribut (HERE) << ") ;\n" ;
    if (! first) {
      inCppFile.incIndentation (-2) ;
      inCppFile << "}\n" ;
    }
    first = false ;
    courant.next () ;
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
  inCppFile << "lexicalError (gErrorMessage_" ;
  inCppFile.appendUnsigned (mErrorMessageIndex.uintValue ()) ;
  inCppFile << " COMMA_LINE_AND_SOURCE_FILE) ;\n" ;
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
  inCppFile << "lexicalError (gErrorMessage_" ;
  inCppFile.appendUnsigned (mErrorMessageIndex.uintValue ()) ;
  inCppFile << " COMMA_LINE_AND_SOURCE_FILE) ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionCaractere::
generateLexicalCondition (AC_OutputStream & inCppFile) {
  inCppFile << "testForInputChar (UNICODE_NEW (" ;
  inCppFile.appendCLiteralCharConstant (attributCaractere.charValue ()) ;
  inCppFile << "))" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionChaine::
generateLexicalCondition (AC_OutputStream & inCppFile) {
  inCppFile << "testForInputString (" ;
  inCppFile.appendCLiteralStringConstant (attributChaine) ;
  inCppFile << ", " << attributChaine.length ()
            << ", true)" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionNonChaine::
generateLexicalCondition (AC_OutputStream & inCppFile) {
  if (mStrings.count () == 1) {
    inCppFile << "notTestForInputString (" ;
    GGS_lstringlist::cEnumerator chaine (mStrings, true) ;
    inCppFile.appendCLiteralStringConstant (chaine._mValue (HERE)) ;
    inCppFile << ", " ;
    inCppFile.appendUnsigned (chaine._mValue (HERE).length ()) ;
    inCppFile << ", gErrorMessage_" ;
    inCppFile.appendUnsigned (mEndOfFileErrorMessageIndex.uintValue ()) ;
    inCppFile << " COMMA_LINE_AND_SOURCE_FILE)" ;
  }else{
    inCppFile << "(" ;
    GGS_lstringlist::cEnumerator chaine (mStrings, true) ;
    bool first = true ;
    while (chaine.hc ()) {
      if (first) {
        first = false ;
      }else{
        inCppFile << " && " ;
      }
      inCppFile << "notTestForInputString (" ;
      inCppFile.appendCLiteralStringConstant (chaine._mValue (HERE)) ;
      inCppFile << ", " ;
      inCppFile.appendUnsigned (chaine._mValue (HERE).length ()) ;
      inCppFile << ", gErrorMessage_" ;
      inCppFile.appendUnsigned (mEndOfFileErrorMessageIndex.uintValue ()) ;
      inCppFile << " COMMA_LINE_AND_SOURCE_FILE)" ;
      chaine.next () ;
    }
    inCppFile << ")" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionIntervalle::
generateLexicalCondition (AC_OutputStream & inCppFile) {
  inCppFile << "testForInputChar (UNICODE_NEW (" ;
  inCppFile.appendCLiteralCharConstant (attributBorneInf.charValue ()) ;
  inCppFile << "), UNICODE_NEW (" ;
  inCppFile.appendCLiteralCharConstant (attributBorneSup.charValue ()) ;
  inCppFile << "))" ;
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
  inCppFile << "  _token." << nom << " = UNICODE_NEW ('\\0') ;\n" ;
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
  #pragma mark ========= lexicalAttributeCppType
#endif

//---------------------------------------------------------------------------*

C_String cPtr_AC_galgasType::
lexicalAttributeCppType (void) const {
  return "" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lstring::
lexicalAttributeCppType (void) const {
  return "C_String" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lchar::
lexicalAttributeCppType (void) const {
  return "utf32" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lbool::
lexicalAttributeCppType (void) const {
  return "bool" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_luint::
lexicalAttributeCppType (void) const {
  return "uint32" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_luint64::
lexicalAttributeCppType (void) const {
  return "uint64" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lsint::
lexicalAttributeCppType (void) const {
  return "sint32" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_lsint64::
lexicalAttributeCppType (void) const {
  return "sint64" ;
}

//---------------------------------------------------------------------------*

C_String cPtr_typeGalgas_ldouble::
lexicalAttributeCppType (void) const {
  return "double" ;
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
  inHfile << "  public : utf32 " << nom
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
  inCppFile << "    s << \" \" ;\n" ;
  inCppFile << "    s.appendCLiteralStringConstant (_p->" << inAttributeName << ") ;\n" ; 
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "    s << \" \" ;\n" ;
  inCppFile << "    s.appendCLiteralCharConstant (_p->" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" << (_p->" << inAttributeName << " ? \"true\" : \"false\") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendUnsigned (_p->" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint64::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendUnsigned64 (_p->" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendSigned (_p->" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint64::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendSigned64 (_p->" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateAttributeGetLexicalValue (const C_String & inAttributeName,
                                  AC_OutputStream & inCppFile) const {
  inCppFile << "      s << \" \" ;\n" ;
  inCppFile << "      s.appendDouble (_p->" << inAttributeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapType::
generateAttributeGetLexicalValue (const C_String & /* inAttributeName */,
                                  AC_OutputStream & /* inCppFile */) const {
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
generate_scanner_header_file (C_Compiler & inLexique,
                              const bool inIsTemplate,
                              const GGS_lstring & inLexiqueName,
                              const GGS_typeLexicalAttributesMap & table_attributs,
                              const GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                              const GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves) {
//--- Write #ifndef, ..., #include, ...
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#ifndef " << inLexiqueName << "_0_DEFINED\n"
                    "#define " << inLexiqueName << "_0_DEFINED\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"galgas/GGS_lstring.h\"\n"
                    "#include \"galgas/GGS_luint.h\"\n"
                    "#include \"galgas/GGS_lsint.h\"\n"
                    "#include \"galgas/GGS_luint64.h\"\n"
                    "#include \"galgas/GGS_lsint64.h\"\n"
                    "#include \"galgas/GGS_lchar.h\"\n"
                    "#include \"galgas/GGS_ldouble.h\"\n"
                    "#include \"galgas/GGS_lbool.h\"\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"galgas/C_Lexique.h\"\n\n" ;

//--------------- Token Class declaration  
  generatedZone2.appendCppTitleComment ("Lexical scanner class") ;
  generatedZone2 << "class cTokenFor_" << inLexiqueName << " : public cToken {\n" ;
//  generateAttributeDeclaration (table_attributs, generatedZone2) ;
  GGS_typeLexicalAttributesMap::cEnumerator currentAttribute (table_attributs) ;
  while (currentAttribute.hc ()) {
    currentAttribute._attributType(HERE)(HERE)->generateAttributeDeclaration (currentAttribute._key (HERE), generatedZone2) ;
    currentAttribute.next () ;
  }
  generatedZone2 << "\n"
                    "  public : cTokenFor_" << inLexiqueName << " (void) ;\n"
                    "} ;\n\n" ;

// --------------- Declaration de la classe de l'analyseur lexical  
  generatedZone2.appendCppTitleComment ("Lexical scanner class") ;
  generatedZone2 << "class " << inLexiqueName << " : public C_Lexique {\n"
                    "//--- Constructors\n"
                    "  public : " << inLexiqueName << " (C_Compiler * inCallerCompiler,\n"
                    "                       const C_String & inDependencyFileExtension,\n"
                    "                       const C_String & inDependencyFilePath,\n"
                    "                       C_galgas_io * inParametersPtr,\n"
                    "                       const C_String & inSourceFileName\n"
                    "                       COMMA_LOCATION_ARGS) ;\n\n"
                    "  public : " << inLexiqueName << " (C_Compiler * inCallerCompiler,\n"
                    "                       C_galgas_io * inParametersPtr,\n"
                    "                       const C_String & inSourceString,\n"
                    "                       const C_String & inStringForError\n"
                    "                       COMMA_LOCATION_ARGS) ;\n\n"
                    "//--- Declaring a protected virtual destructor enables the compiler to raise\n"
                    "//    an error if a direct delete is performed; only the static method\n"
                    "//    C_GGS_Object::detachPointer may invoke delete.\n"
                    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "    protected : virtual ~" << inLexiqueName << " (void) {}\n"
                    "  #endif\n\n" ;
  if (inIsTemplate) {
    generatedZone2 << "//--- Scanner mode\n"
                      "  private : sint32 _mMatchedTemplateDelimiterIndex ;\n\n" ;  
  }
  
  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;
  generatedZone3 << "//--- Terminal symbols enumeration\n"
                    "  public : enum {" ;
  generatedZone3 <<  inLexiqueName << "_1_" ;
  GGS_typeTableDefinitionTerminaux::cEnumerator currentTerminal (table_des_terminaux) ;
  while (currentTerminal.hc ()) {
    generatedZone3 << ",\n  " ;
    generatedZone3 << inLexiqueName ;
    generatedZone3 << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal._key (HERE), generatedZone3) ;
    currentTerminal.next () ;
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
  currentAttribute.rewind () ;
  while (currentAttribute.hc ()) {
    generatedZone3 << "  public : void _assignFromAttribute_" << currentAttribute._key (HERE) << " (" ;
    currentAttribute._attributType (HERE) (HERE)->generateCppClassName (generatedZone3) ;
    generatedZone3 << "& outValue) const ;\n" ;
    generatedZone3 << "  public : "
                   << currentAttribute._attributType (HERE) (HERE)->lexicalAttributeCppType ()
                   << " _attributeValue_" << currentAttribute._key (HERE) << " (void) const ;\n" ;
    currentAttribute.next () ;
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
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile ("//",
                          inLexiqueName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Generate C++ Scanner file                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_scanner_cpp_file (C_Compiler & inLexique,
                           const bool inIsTemplate,
                           const GGS_templateDelimiterMap & inTemplateDelimiterMap,
                           const GGS_templateReplacementMap & inTemplateReplacementMap,
                           const C_String & inLexiqueName,
                           const GGS_typeLexicalAttributesMap & table_attributs,
                           const GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                           const GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves,
                           const GGS_typeListeTestsEtInstructions & programme_principal,
                           const GGS_typeTableMessagesErreurs & inLexicalErrorsMessageMap,
                           const GGS_stringset & inUsedErrorMessageSet,
                           const GGS_styleList & inStylesList,
                           const GGS_tokensInListMap & /* inTokensInListMap */) {
// --------------------------------------- Engendrer les inclusions
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include <ctype.h>\n"
                    "#include <string.h>\n\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
                    "#include \"" << inLexiqueName << ".h\"\n\n"
                    "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define LINE_AND_SOURCE_FILE sourceText ()->sourceFileName ().cString (HERE), lineNumber ()\n"
                    "  #define COMMA_LINE_AND_SOURCE_FILE , LINE_AND_SOURCE_FILE\n"
                    "#else\n"
                    "  #define LINE_AND_SOURCE_FILE\n"
                    "  #define COMMA_LINE_AND_SOURCE_FILE\n"
                    "#endif\n\n" ;

//--------------------------------------- Template delimiters
  if (inIsTemplate) {
    generatedZone2.appendCppTitleComment ("Template Delimiters") ;
    generatedZone2 << "static const templateStruct kTemplateDefinitionArray [" << inTemplateDelimiterMap.count () << "] = {\n" ;
    GGS_templateDelimiterMap::cEnumerator currentDelimiter (inTemplateDelimiterMap) ;
    while (currentDelimiter.hc ()) {
      generatedZone2 << "  {" ;
      generatedZone2.appendCLiteralStringConstant (currentDelimiter._key (HERE)) ;
      generatedZone2 << ", " << currentDelimiter._key (HERE).length () << ", " ;
      generatedZone2.appendCLiteralStringConstant (currentDelimiter._mEndString (HERE)) ;
      generatedZone2 << ", " << currentDelimiter._mEndString (HERE).length () << ", "
                     << (currentDelimiter._mPreservesStartDelimiter (HERE).boolValue () ? "false" : "true")
                     << "},\n" ;
      currentDelimiter.next() ;
    }
    generatedZone2 << "} ;\n\n" ;
  }

//--------------------------------------- Template replacement
  if (inIsTemplate) {
    generatedZone2.appendCppTitleComment ("Template Replacements") ;
    generatedZone2 << "static const templateStruct kTemplateReplacementArray [" << inTemplateReplacementMap.count () << "] = {\n" ;
    GGS_templateReplacementMap::cEnumerator currentReplacement (inTemplateReplacementMap) ;
    while (currentReplacement.hc ()) {
      generatedZone2 << "  {" ;
      generatedZone2.appendCLiteralStringConstant (currentReplacement._key (HERE)) ;
      generatedZone2 << ", " << currentReplacement._key (HERE).length () << ", " ;
      generatedZone2.appendCLiteralStringConstant (currentReplacement._mReplacedString (HERE)) ;
      generatedZone2 << ", " << currentReplacement._mReplacedString (HERE).length () << ", true},\n" ;
      currentReplacement.next () ;
    }
    generatedZone2 << "} ;\n\n" ;
  }

//--------------------------------------- End of template mark
  if (inIsTemplate) {
    generatedZone2.appendCppTitleComment ("Terminal Symbols as end of script in template mark") ;
    generatedZone2 << "static const bool kEndOfScriptInTemplateArray [" << (table_des_terminaux.count () + 1)
                   << "] = {\n"
                   << "  false, // End of source\n" ;
    GGS_typeTableDefinitionTerminaux::cEnumerator currentTerminal (table_des_terminaux) ;
    while (currentTerminal.hc ()) {
      generatedZone2 << "  " << (currentTerminal._mIsEndOfTemplateMark (HERE).boolValue () ? "true" : "false")
                     << ", // $" << currentTerminal._key (HERE) << "$\n" ;
      currentTerminal.next () ;
    }
    generatedZone2 << "} ;\n\n" ;
  }

//--------------------------------------- Constructors
  generatedZone2.appendCppTitleComment ("Constructors") ;

//--------------- Token Class declaration  
  generatedZone2 << "cTokenFor_" << inLexiqueName << "::cTokenFor_" << inLexiqueName << " (void)" ;
  bool first = true ;
  GGS_typeLexicalAttributesMap::cEnumerator currentAttribute (table_attributs) ;
  while (currentAttribute.hc ()) {
    if (first) {
      first = false ;
      generatedZone2 << " :\n" ;
    }else{
      generatedZone2 << ",\n" ;
    }
    generatedZone2 << currentAttribute._key (HERE) << " ()" ;
    currentAttribute.next () ;
  }
  generatedZone2 << " {\n"
                    "}\n\n" ;

  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << inLexiqueName << "::\n" << inLexiqueName
                 << " (C_Compiler * inCallerCompiler,\n"
                    "                const C_String & inDependencyFileExtension,\n"
                    "                const C_String & inDependencyFilePath,\n"
                    "                C_galgas_io * inParametersPtr,\n"
                    "                const C_String & inSourceFileName\n"
                    "                COMMA_LOCATION_ARGS) :\n"
                    "C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inParametersPtr, inSourceFileName COMMA_THERE)" ;
  if (inIsTemplate) {
    generatedZone2 << ",\n"
                      "_mMatchedTemplateDelimiterIndex (-1)" ;
  }
  generatedZone2 << " {\n"
                    "}\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << inLexiqueName << "::\n" << inLexiqueName
                 << " (C_Compiler * inCallerCompiler,\n"
                    "                C_galgas_io * inParametersPtr,\n"
                    "                const C_String & inSourceString,\n"
                    "                const C_String & inStringForError\n"
                    "                COMMA_LOCATION_ARGS) :\n"
                    "C_Lexique (inCallerCompiler, inParametersPtr, inSourceString, inStringForError COMMA_THERE)" ;
  if (inIsTemplate) {
    generatedZone2 << ",\n"
                      "_mMatchedTemplateDelimiterIndex (-1)" ;
  }
  generatedZone2 << " {\n"
                    "}\n\n" ;

//---------------------------------------- Generate error message list
  GGS_typeTableMessagesErreurs::cEnumerator currentMessage (inLexicalErrorsMessageMap) ;
  if (currentMessage.hc ()) {
    generatedZone2.appendCppTitleComment ("Lexical error message list") ;
    sint32 messageNumber = 0 ;
    while (currentMessage.hc ()) {
      const bool used = inUsedErrorMessageSet._hasKey (currentMessage._key (HERE)) ;
      if (used) {
        generatedZone2 << "//--- Message " << messageNumber << "\n" ;
      }else{
        generatedZone2 << "//--- Message " << messageNumber << " (not used)\n"
                          "// " ;      
      }
      generatedZone2 << "static const char * gErrorMessage_" << messageNumber << " = " ;
      generatedZone2.appendCLiteralStringConstant (currentMessage._mErrorMessage (HERE)) ;
      generatedZone2 << " ;\n" ;
      currentMessage.next() ;
      messageNumber ++ ;
    }
    generatedZone2 << "\n" ;
  }

// --------------------------------------- Generate syntax error messages
  C_String errorMessageList ;

  GGS_typeTableDefinitionTerminaux::cEnumerator currentTerminal (table_des_terminaux) ;
  if (currentTerminal.hc ()) {
    generatedZone2.appendCppTitleComment ("Syntax error messages") ;
  }
  while (currentTerminal.hc ()) {
    C_String constanteCname ;
    constanteCname << "gSyntaxErrorMessage_" ;
    generateTerminalSymbolCppName (currentTerminal._key (HERE), constanteCname) ;
    generatedZone2 << "//--- Syntax error message for terminal '$" << currentTerminal._key (HERE) << "$' :\n"
                      "static const char * " << constanteCname << " = " ;
    generatedZone2.appendCLiteralStringConstant (currentTerminal._mErrorMessage (HERE).string ()) ;
    generatedZone2 << " ;\n\n" ;
    errorMessageList << ",\n       gSyntaxErrorMessage_" ;
    generateTerminalSymbolCppName (currentTerminal._key (HERE), errorMessageList) ;
    currentTerminal.next () ;
  }

  generatedZone2.appendCppTitleComment ("appendTerminalMessageToSyntaxErrorMessage") ;
  generatedZone2 << "void " << inLexiqueName << "::\n"
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
                            inIsTemplate,
                            inTemplateDelimiterMap,
                            inTemplateReplacementMap,
                            inLexiqueName,
                            table_attributs,
                            programme_principal) ;
  generateScanningMethodForLexicalColoring (generatedZone2,
                                            inLexiqueName,
                                            table_attributs,
                                            programme_principal) ;
//---------------------------------------- Generate styles definition 
  generatedZone2.appendCppTitleComment ("Styles definition") ;
  generatedZone2 <<  "sint32 " << inLexiqueName << "::getStylesCount (void) {\n"
                     "  return " <<  inStylesList.count () << " ;\n"
                     "}\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 <<  "const char * " << inLexiqueName << "::getStyleName (const sint32 inIndex) {\n"
                     "  const char * kStylesArray [" << (inStylesList.count () + 1) << "] = {" ;
  GGS_styleList::cEnumerator style (inStylesList, true) ;
  while (style.hc ()) {
    generatedZone2.appendCLiteralStringConstant (style._mTitle (HERE).string ()) ;
    generatedZone2 << ", " ;
    style.next () ;
  }
  generatedZone2 << "NULL} ;\n"
                    "  return (inIndex < " <<  inStylesList.count () << ") ? kStylesArray [inIndex] : NULL ;\n"
                    "} ;\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 <<  "const char * " << inLexiqueName << "::getStyleIdentifier (const sint32 inIndex) {\n"
                     "  const char * kStylesArray [" << (inStylesList.count () + 1) << "] = {" ;
  style.rewind () ;
  while (style.hc ()) {
    generatedZone2.appendCLiteralStringConstant (style._mStyleName (HERE).string ()) ;
    generatedZone2 << ", " ;
    style.next () ;
  }
  generatedZone2 << "NULL} ;\n"
                    "  return (inIndex < " <<  inStylesList.count () << ") ? kStylesArray [inIndex] : NULL ;\n"
                    "} ;\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "uint8 " << inLexiqueName << "::\n"
                    "terminalStyleIndex (const sint32 inTerminal) {\n"
                    "  static const uint8 kTerminalSymbolStyles [" << (table_des_terminaux.count () + 1) << "] = {0" ;

  currentTerminal.rewind () ;
  while (currentTerminal.hc ()) {
    generatedZone2 << ",\n    " ;
    generatedZone2.appendUnsigned (currentTerminal._mStyleIndex (HERE).uintValue ()) ;
    generatedZone2 << " /* "
                   << inLexiqueName
                   << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal._key (HERE), generatedZone2) ;
    generatedZone2 << " */" ;
    currentTerminal.next () ;
  }
  generatedZone2 << "\n  } ;\n"
                    "  return kTerminalSymbolStyles [inTerminal] ;\n"
                    "}\n\n" ;

  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "void " << inLexiqueName << "::_enterToken (const cTokenFor_" << inLexiqueName << " & inToken) {\n"
                    "  cTokenFor_" << inLexiqueName << " * _p = NULL ;\n"
                    "  macroMyNew (_p, cTokenFor_" << inLexiqueName << " ()) ;\n"
                    "  _p->_mTokenCode = inToken._mTokenCode ;\n"
                    "  _p->_mFirstLocation = _mTokenFirstLocation ;\n"
                    "  _p->_mLastLocation  = _mTokenLastLocation ;\n"
                    "  _p->_mTemplateStringBeforeToken  = inToken._mTemplateStringBeforeToken ;\n" ;
  currentAttribute.rewind () ;
  while (currentAttribute.hc ()) {
    generatedZone2 << "  _p->" << currentAttribute._key (HERE) << " = inToken." << currentAttribute._key (HERE) << " ;\n" ;
    currentAttribute.next () ;
  }
  generatedZone2 << "  _enterTokenFromPointer (_p) ;\n"
                    "}\n\n" ;

//--- Get lexical attribute value
  currentAttribute.rewind () ;
  while (currentAttribute.hc ()) {
    generatedZone2.appendCppHyphenLineComment () ;
    generatedZone2 << "void " << inLexiqueName << "::\n"
                      "_assignFromAttribute_" << currentAttribute._key (HERE) << " (" ;
    currentAttribute._attributType (HERE) (HERE)->generateCppClassName (generatedZone2) ;
    generatedZone2 << "& outValue) const {\n"
                      "  cTokenFor_" << inLexiqueName << " * _p = (cTokenFor_" << inLexiqueName << " *) mCurrentTokenPtr ;\n"
                      "  outValue = " ;
    currentAttribute._attributType (HERE) (HERE)->generateCppClassName (generatedZone2) ;
    generatedZone2 << "(* this, _p->" << currentAttribute._key (HERE) << ") ;\n"
                      "}\n\n" ;
    generatedZone2.appendCppHyphenLineComment () ;
    generatedZone2 << currentAttribute._attributType (HERE) (HERE)->lexicalAttributeCppType ()
                   << " " << inLexiqueName << "::\n"
                      "_attributeValue_" << currentAttribute._key (HERE) << " (void) const {\n"
                      "  cTokenFor_" << inLexiqueName << " * _p = (cTokenFor_" << inLexiqueName << " *) mCurrentTokenPtr ;\n"
                      "  return _p->" << currentAttribute._key (HERE) << " ;\n"
                      "}\n\n" ;
    currentAttribute.next () ;
  }
  generatedZone2.appendCppHyphenLineComment () ;

//--- Generate decoder
/*  scannerDecoderGeneration (inLexique, inLexiqueName,
                            inTokensInListMap, programme_principal,
                            generatedZone2) ;*/

//--- Generate file
  C_String generatedZone3 ;
  generatedZone3.appendCppHyphenLineComment () ;

  inLexique.generateFile ("//",
                          inLexiqueName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}


//---------------------------------------------------------------------------*

void 
routine_generate_scanner (C_Compiler & inLexique,
                          const GGS_bool inIsTemplate,
                          const GGS_templateDelimiterMap inTemplateDelimiterMap,
                          const GGS_templateReplacementMap inTemplateReplacementMap,
                          const GGS_lstring inLexiqueName,
                          const GGS_typeLexicalAttributesMap table_attributs,
                          const GGS_typeTableDefinitionTerminaux table_des_terminaux,
                          const GGS_typeTableTablesDeMotsReserves table_tables_mots_reserves,
                          const GGS_typeListeTestsEtInstructions programme_principal,
                          const GGS_typeTableMessagesErreurs inLexicalErrorsMessageMap,
                          const GGS_styleList inStylesList,
                          const GGS_stringset inUsedErrorMessageSet,
                          const GGS_tokensInListMap inTokensInListMap
                          COMMA_LOCATION_ARGS) {
  if (inLexique.currentFileErrorCount() == 0) {
  //--- Get version string
    const C_String GALGASversionString = inLexique.compilerVersionString () ;
  //--- Create GALGAS_OUTPUT directory
    const C_String GALGAS_OUTPUT_directory = inLexique.sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent ("GALGAS_OUTPUT") ;
    const bool ok = GALGAS_OUTPUT_directory.makeDirectoryIfDoesNotExists () ;
    if (ok) {
    //--- Generate header file
      generate_scanner_header_file (inLexique,
                                    inIsTemplate.boolValue (),
                                    inLexiqueName,
                                    table_attributs, table_des_terminaux,
                                    table_tables_mots_reserves) ;
    //--- Generate implementation file
      generate_scanner_cpp_file (inLexique,
                                 inIsTemplate.boolValue (),
                                 inTemplateDelimiterMap,
                                 inTemplateReplacementMap,
                                 inLexiqueName,
                                 table_attributs, table_des_terminaux,
                                 table_tables_mots_reserves, programme_principal,
                                 inLexicalErrorsMessageMap,
                                 inUsedErrorMessageSet,
                                 inStylesList,
                                 inTokensInListMap) ;
    }else{
      C_String errorMessage ;
      errorMessage << "cannot create directory " << GALGAS_OUTPUT_directory ;
      inLexique.printFileErrorMessage (inLexique.sourceFileName (), errorMessage COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------*
