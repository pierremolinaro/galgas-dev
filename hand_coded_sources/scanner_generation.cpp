//---------------------------------------------------------------------------*
//                                                                           *
//   Scanner Generation (hand-coded file)                                    *
//                                                                           *
//  Copyright (C) 2000-2004 Pierre Molinaro.                                 *
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

#include "scanner_parser.h"
#include "scanner_generation.h"

//---------------------------------------------------------------------------*

#include <ctype.h>

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
                                    AC_OutputStream & inCppFile) {
  GGS_tListeInstructionsLexicales::element_type * courant = inList.firstObject () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    courant->attributInstruction(HERE)->generate_scanner_instruction (inLexiqueName, inCppFile) ;
    courant = courant->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateScannerCode (const GGS_typeListeTestsEtInstructions & inList,
                     const C_String & inLexiqueName,
                     AC_OutputStream & inCppFile) {
  bool premier = true ;
  GGS_typeListeTestsEtInstructions::element_type * courant = inList.firstObject () ;
  if (courant == NULL) {
    inCppFile << "if (true) {\n" ;
  }else{
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
      generate_scanner_instructions_list (courant->attributListeInstructions, inLexiqueName, inCppFile) ;
      inCppFile.incIndentation (-2) ;
      courant = courant->nextObject () ;
    }
  }
}

//---------------------------------------------------------------------------*

static void
engendrerDeclarationAttributInterne (GGS_typeLexicalAttributesMap::element_type * p,
                                     AC_OutputStream & H_file) {
  if (p != NULL) {
    macroValidPointer (p) ;
    engendrerDeclarationAttributInterne (p->infObject (), H_file) ;
    p->mInfo.attributType(HERE)->generateAttributeDeclaration (p->mKey, H_file) ;
    engendrerDeclarationAttributInterne (p->supObject (), H_file) ;
  }
}

//---------------------------------------------------------------------------*

static void
generateAttributeDeclaration (const GGS_typeLexicalAttributesMap & inMap,
                              AC_OutputStream & H_file) {
  engendrerDeclarationAttributInterne (inMap.rootObject (), H_file) ;
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
  inCppFile.writeCTitleComment (C_String ("Key words table '") + nomTable + "'") ;
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
internalGenerateTerminalSymbolsTable (GGS_typeTableTablesDeMotsReserves::element_type * p,
                                      const C_String & inLexiqueName,
                                      AC_OutputStream & inCppFile) {
  if (p != NULL) {
    macroValidPointer (p) ;
    internalGenerateTerminalSymbolsTable (p->infObject (), inLexiqueName, inCppFile) ;
    generateKeyWordTableImplementation (p->mInfo.attributSimpleTable, inLexiqueName, p->mKey, inCppFile) ;
    internalGenerateTerminalSymbolsTable (p->supObject (), inLexiqueName, inCppFile) ;
  }
}

//---------------------------------------------------------------------------*

static void
generateTerminalSymbolsTable (const GGS_typeTableTablesDeMotsReserves & inMap,
                              const C_String & inLexiqueName,
                              AC_OutputStream & inCppFile) {
  internalGenerateTerminalSymbolsTable (inMap.rootObject (), inLexiqueName, inCppFile) ;
}

//---------------------------------------------------------------------------*

static void generateKeyWordTableDeclaration (const GGS_typeTableMotsReserves & inMap,
                                             const C_String & inLexiqueName,
                                             const C_String & nomTable,
                                             AC_OutputStream & H_file) {
  H_file << "//--- Key words table '" << nomTable << "'\n" ;
// ---------------------------- Table size constant
  H_file << "  public : static const sint16 "
           << inLexiqueName
           << "_table_size_"
           << nomTable
           << " ;\n" ; 
// ---------------------------- Table static const definition
  H_file << "  private : static const C_lexique_table_entry "
           << inLexiqueName
           << "_table_for_"
           << nomTable
           << " [" << inMap.count () << "] ;\n" ;

// ---------------------------- Statique search method
  H_file << "  public : static sint16 search_into_" << nomTable
           << " (const C_String & inSearchedString) ;\n\n" ;
}

//---------------------------------------------------------------------------*

static void
internalGenerateTerminalSymbolsTableDeclaration (GGS_typeTableTablesDeMotsReserves::element_type * p,
                                                 const C_String & inLexiqueName,
                                                 AC_OutputStream & H_file) {
  if (p != NULL) {
    macroValidPointer (p) ;
    internalGenerateTerminalSymbolsTableDeclaration (p->infObject (), inLexiqueName, H_file) ;
    generateKeyWordTableDeclaration (p->mInfo.attributSimpleTable, inLexiqueName, p->mKey, H_file) ;
    internalGenerateTerminalSymbolsTableDeclaration (p->supObject (), inLexiqueName, H_file) ;
  }
}

//---------------------------------------------------------------------------*

static void generateTerminalSymbolsTableDeclaration (const GGS_typeTableTablesDeMotsReserves & inMap,
                                                     const C_String & inLexiqueName,
                                                     AC_OutputStream & H_file) {
  internalGenerateTerminalSymbolsTableDeclaration (inMap.rootObject (), inLexiqueName, H_file) ;
}

//---------------------------------------------------------------------------*

static void
engendrerInitialisationAttributInterne (GGS_typeLexicalAttributesMap::element_type * p,
                                        AC_OutputStream & inCppFile) {
  if (p != NULL) {
    macroValidPointer (p) ;
    engendrerInitialisationAttributInterne (p->infObject (), inCppFile) ;
    p->mInfo.attributType(HERE)->generateAttributeInitialization (p->mKey, inCppFile) ;
    engendrerInitialisationAttributInterne (p->supObject (), inCppFile) ;
  }
}

//---------------------------------------------------------------------------*

static void
generateAttributeInitialization (const GGS_typeLexicalAttributesMap & inMap,
                                 AC_OutputStream & inCppFile) {
  engendrerInitialisationAttributInterne (inMap.rootObject (), inCppFile) ;
}

//---------------------------------------------------------------------------*

void generateTerminalSymbolCppName (const C_String & inValue,
                                    AC_OutputStream & ioString) {
  static const char tab [17] = "0123456789ABCDEF" ;
  const sint32 length = inValue.length () ;
  for (sint32 i=0 ; i<length ; i++) {
    const char c = inValue (i COMMA_HERE) ;
    if (isalnum (c)) {
      ioString << c ;
    }else{
      ioString << '_' << tab [c / 16] << tab [c % 16] ;
    }
  }
}

//---------------------------------------------------------------------------*

void buildLexicalRulesFromList (C_Lexique & ioLexique, 
                                GGS_typeTableMotsReserves & keyWordsMap,
                                GGS_typeListeTestsEtInstructions & ioLexicalRulesList) {
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
                                          currentEntry->mInfo.attributNomTerminal) ;
      }
      currentEntry = currentEntry->nextObject () ;
    }
  }
}

//---------------------------------------------------------------------------*

static void
generate_scanning_method (AC_OutputStream & inCppFile,
                          const C_String & inLexiqueClassName,
                          GGS_typeLexicalAttributesMap & table_attributs,
                          const GGS_typeListeTestsEtInstructions & programme_principal) {

  inCppFile.writeCTitleComment ("Get next token : method 'parseLexicalToken'") ;
  inCppFile << "void "
           << inLexiqueClassName
           << "::\n"
              "parseLexicalToken (const bool inPropagateLexicaleErrorException) {\n" ;
   if (instructions_list_uses_loop_variable (programme_principal)) {
     inCppFile << "  bool loop_ = true ;\n" ;
   }
  inCppFile << "  mCurrentTokenCode = -1 ;\n" ;
  generateAttributeInitialization (table_attributs, inCppFile) ;
  inCppFile << "  while (mCurrentTokenCode < 0) {\n" ;
  inCppFile.incIndentation (+4) ;
  inCppFile << "mCurrentTokenStartLocation = currentLocation () ;\n"
              "try{\n" ;
  inCppFile.incIndentation (+2) ;
  generateScannerCode (programme_principal, inLexiqueClassName, inCppFile) ;
  inCppFile << "}else if (testForInputChar ('\\0')) { // End of source text ? \n"
              "  mCurrentTokenCode = " << inLexiqueClassName << "_1_ ; // Empty string code\n"
              "}else{ // Unknown input character\n"
              "  lexicalError (\"Unknown character\") ;\n"
              "}\n" ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}catch (const C_lexicalErrorException &) {\n"
             "  mCurrentTokenCode = -1 ; // No token\n"
             "  advance () ; // ... go throught unknown character\n"
             "  if (inPropagateLexicaleErrorException) {\n"
             "    throw ;\n"
             "  }\n"
             "}\n" ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}\n" ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}\n\n" ;  
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Generate C++ Scanner file                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_scanner_cpp_file (C_Lexique & inLexique,
                           const C_String & inLexiqueClassName,
                           GGS_typeLexicalAttributesMap & table_attributs,
                           GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                           GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves,
                           GGS_typeListeTestsEtInstructions & programme_principal,
                           GGS_typeTableMessagesErreurs & inLexicalErrorsMessageMap,
                           GGS_M_styles & inStylesMap) {
// --------------------------------------- Engendrer les inclusions
  C_String generatedZone2 ; generatedZone2.setAllocationExtra (200000) ;
  generatedZone2 << "#include <ctype.h>\n"
                    "#include <string.h>\n\n"
                    "#include \"" << inLexiqueClassName << ".h\"\n\n" ;

// --------------------------------------- Constructor
  generatedZone2.writeCTitleComment ("Constructor") ;
  generatedZone2 << inLexiqueClassName << "::\n" << inLexiqueClassName
          << " (AC_galgas_io * inGalgasInputOutput)\n"
             ": C_Lexique (inGalgasInputOutput) {\n" ;
  generateAttributeInitialization (table_attributs, generatedZone2) ;
  generatedZone2 << "}\n\n" ;

//---------------------------------------- Generate error message list
  generatedZone2.writeCTitleComment ("Lexical error message list") ;
  GGS_typeTableMessagesErreurs::element_type * currentMessage = inLexicalErrorsMessageMap.firstObject () ;
  sint32 messageNumber = 0 ;
  while (currentMessage != NULL) {
    macroValidPointer (currentMessage) ;
    generatedZone2 << "//--- Message " << messageNumber << " (" << currentMessage->mKey << ") :\n"
               "static const char * gErrorMessage_" << messageNumber << " = " ;
    generatedZone2.writeCstringConstant (currentMessage->mInfo.mErrorMessage) ;
    generatedZone2 << " ;\n" ;
    currentMessage = currentMessage->nextObject () ;
    messageNumber ++ ;
  }
  generatedZone2 << "\n" ;
// --------------------------------------- Generate syntax error messages
  generatedZone2.writeCTitleComment ("Syntax error messages") ;
  C_String errorMessageList ;

  GGS_typeTableDefinitionTerminaux::element_type * currentTerminal = table_des_terminaux.firstObject () ;
  while (currentTerminal != NULL) {
    C_String constanteCname ;
    constanteCname << "gSyntaxErrorMessage_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, constanteCname) ;
    generatedZone2 << "//--- Syntax error message for terminal '$" << currentTerminal->mKey << "$' :\n"
               "static const char * " << constanteCname << " = " ;
    generatedZone2.writeCstringConstant (currentTerminal->mInfo.mErrorMessage.string ()) ;
    generatedZone2 << " ;\n" ;
    errorMessageList << ",\n       gSyntaxErrorMessage_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, errorMessageList) ;
    currentTerminal = currentTerminal->nextObject () ;
  }

  generatedZone2.writeCHyphenLineComment () ;
  generatedZone2 << "void "
           << inLexiqueClassName
           << "::\n"
           << "appendTerminalMessageToSyntaxErrorMessage (const sint16 inTerminalIndex,\n"
           << "                                           C_String & outSyntaxErrorMessage) {\n" ;
  const sint32 n = table_des_terminaux.count () + 1 ;
  generatedZone2 << "  static const char * syntaxErrorMessageArray [" << n << "] = {"
             "\"end of source\"" << errorMessageList << "} ;\n"
             "  outSyntaxErrorMessage << syntaxErrorMessageArray [inTerminalIndex] ;\n"
             "}\n\n" ;

//---------------------------------------- Terminal symbol table
  generateTerminalSymbolsTable (table_tables_mots_reserves, inLexiqueClassName, generatedZone2) ;

//---------------------------------------- Generate parsing method
  generate_scanning_method (generatedZone2,
                            inLexiqueClassName,
                            table_attributs,
                            programme_principal) ;
//---------------------------------------- Generate styles definition 
  generatedZone2.writeCTitleComment ("Styles definition") ;
  generatedZone2 <<  "sint32 " << inLexiqueClassName << "::getStylesCount (void) {\n"
	      "  return " <<  inStylesMap.count () << " ;\n"
	      "}\n\n" ;
  generatedZone2.writeCHyphenLineComment () ;
  generatedZone2 <<  "const char * " << inLexiqueClassName << "::getStyleName (const sint32 inIndex) {\n"
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
  generatedZone2.writeCHyphenLineComment () ;
  generatedZone2 << "uint8 " << inLexiqueClassName << "::\n"
             "terminalStyleIndex (const sint32 inTerminal) {\n"
             "  static const uint8 kTerminalSymbolStyles [" << (table_des_terminaux.count () + 1) << "] = {0" ;

  currentTerminal = table_des_terminaux.firstObject () ;
  while (currentTerminal != NULL) {
    generatedZone2 << ",\n    "
            << currentTerminal->mInfo.mStyleIndex.uintValue ()
            << " /* "
            << inLexiqueClassName
            << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, generatedZone2) ;
    generatedZone2 << " */" ;
    currentTerminal = currentTerminal->nextObject () ;
  }
  generatedZone2 << "\n  } ;\n"
             "  return kTerminalSymbolStyles [inTerminal] ;\n"
             "}\n\n" ;

  C_String generatedZone3 ;
  generatedZone3.writeCHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile ("//",
                          inLexiqueClassName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
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
  inCppFile << attributNom ;
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
                              AC_OutputStream & inCppFile) const {
  inCppFile << "do {\n" ;
  inCppFile.incIndentation (+2) ;
  generate_scanner_instructions_list (attributListeInstructionsDebut, inLexiqueName, inCppFile) ;
  generateScannerCode (attributListeBranches, inLexiqueName, inCppFile) ;
  inCppFile << "}else{\n"
              "  loop_ = false ;\n"
              "}\n" ;
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
                              AC_OutputStream & inCppFile) const {
  generateScannerCode (attributListeBranches, inLexiqueName, inCppFile) ;
  if (attributBrancheSinon.firstObject () != NULL) {
    inCppFile << "}else{\n" ;
    inCppFile.incIndentation (+2) ;
    generate_scanner_instructions_list (attributBrancheSinon, inLexiqueName, inCppFile) ;
    inCppFile.incIndentation (-2) ;
  }
  inCppFile << "}\n" ;
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
                              AC_OutputStream & inCppFile) const {
  inCppFile << "mCurrentTokenCode = " << inLexiqueName << "_1_" ;
  generateTerminalSymbolCppName (attributTerminal, inCppFile) ;
  inCppFile << " ;\n" ;
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
                              AC_OutputStream & inCppFile) const {
  bool premier = true ;
  GGS_typeListeRecherche::element_type * courant = attributListeRecherches.firstObject () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    if (! premier) {
      inCppFile << "if (mCurrentTokenCode == -1) {\n" ;
      inCppFile.incIndentation (+2) ;
    }
    inCppFile << "mCurrentTokenCode = search_into_" << courant->attributNomTable << " ("
             << courant->attributNomAttribut << ") ;\n" ;
    if (premier) {
      premier = false ;
    }else{
      inCppFile.incIndentation (-2) ;
      inCppFile << "}\n" ;
    }
    courant = courant->nextObject () ;
  }
  inCppFile << "if (mCurrentTokenCode == -1) {\n" ;
  inCppFile.incIndentation (+2) ;
  attributEmissionParDefaut(HERE)->generateDefaultToken (inLexiqueName, inCppFile) ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeEmissionTerminalParDefaut::
generateDefaultToken (const C_String & inLexiqueName,
                      AC_OutputStream & inCppFile) const {
  inCppFile << "mCurrentTokenCode = " << inLexiqueName << "_1_" ;
  generateTerminalSymbolCppName (attributNomTerminal, inCppFile) ;
  inCppFile << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeEmissionErreurParDefaut::
generateDefaultToken (const C_String &,
                      AC_OutputStream & inCppFile) const {
  inCppFile << "lexicalError (gErrorMessage_" << mErrorMessageIndex.uintValue () << ") ;\n" ;
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
                              AC_OutputStream & inCppFile) const {
  inCppFile << "lexicalError (gErrorMessage_" << mErrorMessageIndex.uintValue () << ") ;\n" ;
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

void cPtr_typeGalgas_lstring::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) {
  inCppFile << "  " << nom << ".clear () ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) {
  inCppFile << "  " << nom << " = '\\0' ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) {
  inCppFile << "  " << nom << " = false ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) {
  inCppFile << "  " << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) {
  inCppFile << "  " << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_OutputStream & inCppFile) {
  inCppFile << "  " << nom << " = 0.0 ;\n" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier ".h"                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_scanner_header_file (C_Lexique & inLexique,
                              GGS_lstring & inLexiqueClassName,
                              GGS_typeLexicalAttributesMap & table_attributs,
                              GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                              GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves) {
//--- Write #ifndef, ..., #include, ...
  C_String generatedZone2 ;
  generatedZone2 << "#ifndef " << inLexiqueClassName << "_0_DEFINED\n"
                    "#define " << inLexiqueClassName << "_0_DEFINED\n"
                    "#include \"galgas/C_Lexique.h\"\n\n" ;

// --------------- Declaration de la classe de l'analyseur lexical  
  generatedZone2.writeCTitleComment ("Lexical scanner class") ;
  generatedZone2 << "class " << inLexiqueClassName << " : public C_Lexique {\n" ;
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  generatedZone3 << "//--- Terminal symbols enumeration\n"
                    "  public : enum {" ;
  generatedZone3 <<  inLexiqueClassName << "_1_" ;
  GGS_typeTableDefinitionTerminaux::element_type * currentTerminal = table_des_terminaux.firstObject () ;
  while (currentTerminal != NULL) {
    macroValidPointer (currentTerminal) ;    
    generatedZone3 << ",\n  " ;
    generatedZone3 << inLexiqueClassName ;
    generatedZone3 << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, generatedZone3) ;
    currentTerminal = currentTerminal->nextObject () ;
  }
  generatedZone3 << "} ;\n\n" ;
  generateTerminalSymbolsTableDeclaration (table_tables_mots_reserves, inLexiqueClassName, generatedZone3) ;
  generatedZone3 << "  protected : virtual void parseLexicalToken (const bool inPropagateLexicaleErrorException) ;\n"
            "  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const sint16 numeroTerminal,\n"
            "                                                              C_String & messageErreur) ;\n"
            "\n"
            "//--- Constructor\n"
            "  public : "
         << inLexiqueClassName
         << " (AC_galgas_io * inGalgasInputOutput) ;\n" ;
  generateAttributeDeclaration (table_attributs, generatedZone3) ;
  generatedZone3 << "  public : virtual sint16 terminalVocabularyCount (void) const { return "
           << table_des_terminaux.count ()
           << " ; }\n\n"
//--- Styles definition 
              "  public : static sint32 getStylesCount (void) ;\n"
	      "  public : static const char * getStyleName (const sint32 inIndex) ;\n"
              "//--- Virtual method called getting terminal style index\n"
              "  public : virtual uint8 terminalStyleIndex (const sint32 inTerminal) ;\n"
	      "} ;\n\n" ;
//--- End of ".h" file
  generatedZone3.writeCHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile ("//",
                          inLexiqueClassName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & H_file) {
  H_file << "  public : C_String " << nom
	 << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & H_file) {
  H_file << "  public : char " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & H_file) {
  H_file << "  public : bool " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & H_file) {
  H_file << "  public : uint32 " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & H_file) {
  H_file << "  public : sint32 " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_OutputStream & H_file) {
  H_file << "  public : double " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void generate_scanner (C_Lexique & inLexique,
                       GGS_lstring & inLexiqueClassName,
                       GGS_typeLexicalAttributesMap & table_attributs,
                       GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                       GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves,
                       GGS_typeListeTestsEtInstructions & programme_principal,
                       GGS_typeTableMessagesErreurs & inLexicalErrorsMessageMap,
                       GGS_M_styles & inStylesMap) {
//--- Get version string
  const C_String GALGASversionString = inLexique.galgas_IO_Ptr ()->getCompilerVersion () ;
//--- Create GALGAS_OUTPUT directory
  const C_String GALGAS_OUTPUT_directory = inLexique.sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent ("GALGAS_OUTPUT") ;
  const bool ok = GALGAS_OUTPUT_directory.makeDirectoryIfDoesNotExists () ;
  if (ok) {
  //--- Generate header file
    generate_scanner_header_file (inLexique,
                                  inLexiqueClassName,
                                  table_attributs, table_des_terminaux,
                                  table_tables_mots_reserves) ;
  //--- Generate implementation file
    generate_scanner_cpp_file (inLexique,
                               inLexiqueClassName,
                               table_attributs, table_des_terminaux,
                               table_tables_mots_reserves, programme_principal,
                               inLexicalErrorsMessageMap,
                               inStylesMap) ;
  }else{
    C_String errorMessage ;
    errorMessage << "cannot create directory " << GALGAS_OUTPUT_directory ;
    inLexique.galgas_IO_Ptr ()->printFileErrorMessage (inLexique.sourceFileName (), errorMessage.cString ()) ;
  }
}

//---------------------------------------------------------------------------*
