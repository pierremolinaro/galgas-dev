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

#include "memory/M_memory_control.h"
#include "files/C_text_file_write.h"
#include "time/C_datetime.h"
#include "generic_arraies/TCUniqueArray.h"

#include "scanner_parser.h"
#include "scanner_generation.h"

//---------------------------------------------------------------------------*

#include <ctype.h>

//---------------------------------------------------------------------------*

static bool
instructions_list_uses_loop_variable (const GGS_tListeInstructionsLexicales & inList) {
  bool use = false ;
  GGS_tListeInstructionsLexicales::element_type * courant = inList.getFirstItem () ;
  while ((courant != NULL) && ! use) {
    macroValidPointer (courant) ;
    use = courant->attributInstruction()->instruction__uses_loop_variable () ;
    courant = courant->getNextItem () ;
  }
  return use ;
}

//---------------------------------------------------------------------------*

static bool
instructions_list_uses_loop_variable (const GGS_typeListeTestsEtInstructions & inList) {
  bool use = false ;
  GGS_typeListeTestsEtInstructions::element_type * current = inList.getFirstItem () ;
  while ((current != NULL) && ! use) {
    macroValidPointer (current) ;
    use = instructions_list_uses_loop_variable (current->attributListeInstructions) ;
    current = current->getNextItem () ;
  }
  return use ;
}

//---------------------------------------------------------------------------*

static void
generate_scanner_instructions_list (const GGS_tListeInstructionsLexicales & inList,
                                    const C_string & inLexiqueName,
                                    AC_output_stream & inCppFile) {
  GGS_tListeInstructionsLexicales::element_type * courant = inList.getFirstItem () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    courant->attributInstruction()->generate_scanner_instruction (inLexiqueName, inCppFile) ;
    courant = courant->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateScannerCode (const GGS_typeListeTestsEtInstructions & inList,
                     const C_string & inLexiqueName,
                     AC_output_stream & inCppFile) {
  bool premier = true ;
  GGS_typeListeTestsEtInstructions::element_type * courant = inList.getFirstItem () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    if (premier) {
      premier = false ;
    }else{
      inCppFile << "}else " ;
    }
    inCppFile << "if (" ;
    macroValidPointer (courant->attributListeConditions.getFirstItem ()) ;
    GGS_typeListeConditionsLexicales::element_type * cond = courant->attributListeConditions.getFirstItem () ;
    bool premiereCondition = true ;
    while (cond != NULL) {
      macroValidPointer (cond) ;
      if (premiereCondition) {
        premiereCondition = false ;
      }else{
        inCppFile << " ||\n    " ;
      }
      cond->attributCondition()->generateLexicalCondition (inCppFile) ;
      cond = cond->getNextItem () ;
    }
    inCppFile << ") {\n" ;
    inCppFile.incIndentation (+2) ;
    generate_scanner_instructions_list (courant->attributListeInstructions, inLexiqueName, inCppFile) ;
    inCppFile.incIndentation (-2) ;
    courant = courant->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*

static void
engendrerDeclarationAttributInterne (GGS_typeLexicalAttributesMap::element_type * p,
                                     AC_output_stream & H_file) {
  if (p != NULL) {
    macroValidPointer (p) ;
    engendrerDeclarationAttributInterne (p->getInfPtr (), H_file) ;
    p->mInfo.attributType()->generateAttributeDeclaration (p->mKey, H_file) ;
    engendrerDeclarationAttributInterne (p->getSupPtr (), H_file) ;
  }
}

//---------------------------------------------------------------------------*

static void
generateAttributeDeclaration (const GGS_typeLexicalAttributesMap & inMap,
                              AC_output_stream & H_file) {
  engendrerDeclarationAttributInterne (inMap.getRoot (), H_file) ;
}

//---------------------------------------------------------------------------*

//--- Local class for storing table entries
class cTableEntry {
  public : C_string mEntryString ;
  public : sint32 mEntryStringLength ;
  public : C_string mTokenCode ;
} ;

//---------------------------------------------------------------------------*

static int compareEntries (const cTableEntry & inEntry1,
                              const cTableEntry & inEntry2) {
  int result = inEntry1.mEntryStringLength - inEntry2.mEntryStringLength ;
  if (result == 0) {
    result = ::strcmp (inEntry1.mEntryString.getStringPtr (),
                       inEntry2.mEntryString.getStringPtr ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

static void
generateKeyWordTableEntries (const GGS_typeTableMotsReserves & inMap,
                             AC_output_stream & inCppFile,
                             const C_string & inLexiqueName) {
//--- Create entries array
  const sint32 entriesCount = inMap.count () ;
  TCUniqueArray <cTableEntry> entriesArray (entriesCount COMMA_HERE) ;
  GGS_typeTableMotsReserves::element_type * p = inMap.getFirstItem () ;
  sint32 index = 0 ;
  while (p != NULL) {
    macroValidPointer (p) ;
    cTableEntry e ;
    e.mEntryString = p->mKey ;
    e.mEntryStringLength = p->mKey.getLength () ;
    e.mTokenCode = p->mInfo.attributNomTerminal ;
    entriesArray.addObject (e) ;
    p = p->getNextItem () ;
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
                                    const C_string & inLexiqueName,
                                    const C_string & nomTable,
                                    AC_output_stream & inCppFile) {
  inCppFile.writeTitleComment (C_string ("Key words table '") + nomTable + "'") ;
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
            << " (const C_string & inSearchedString) {\n"
               "  return searchInList (inSearchedString, "
            << inLexiqueName << "_table_for_" << nomTable << ", "
            << inLexiqueName << "_table_size_" << nomTable << ") ;\n"
               "}\n\n" ;
}

//---------------------------------------------------------------------------*

static void
internalGenerateTerminalSymbolsTable (GGS_typeTableTablesDeMotsReserves::element_type * p,
                                      const C_string & inLexiqueName,
                                      AC_output_stream & inCppFile) {
  if (p != NULL) {
    macroValidPointer (p) ;
    internalGenerateTerminalSymbolsTable (p->getInfPtr (), inLexiqueName, inCppFile) ;
    generateKeyWordTableImplementation (p->mInfo.attributSimpleTable, inLexiqueName, p->mKey, inCppFile) ;
    internalGenerateTerminalSymbolsTable (p->getSupPtr (), inLexiqueName, inCppFile) ;
  }
}

//---------------------------------------------------------------------------*

static void
generateTerminalSymbolsTable (const GGS_typeTableTablesDeMotsReserves & inMap,
                              const C_string & inLexiqueName,
                              AC_output_stream & inCppFile) {
  internalGenerateTerminalSymbolsTable (inMap.getRoot (), inLexiqueName, inCppFile) ;
}

//---------------------------------------------------------------------------*

static void generateKeyWordTableDeclaration (const GGS_typeTableMotsReserves & inMap,
                                             const C_string & inLexiqueName,
                                             const C_string & nomTable,
                                             AC_output_stream & H_file) {
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
           << " (const C_string & inSearchedString) ;\n\n" ;
}

//---------------------------------------------------------------------------*

static void
internalGenerateTerminalSymbolsTableDeclaration (GGS_typeTableTablesDeMotsReserves::element_type * p,
                                                 const C_string & inLexiqueName,
                                                 AC_output_stream & H_file) {
  if (p != NULL) {
    macroValidPointer (p) ;
    internalGenerateTerminalSymbolsTableDeclaration (p->getInfPtr (), inLexiqueName, H_file) ;
    generateKeyWordTableDeclaration (p->mInfo.attributSimpleTable, inLexiqueName, p->mKey, H_file) ;
    internalGenerateTerminalSymbolsTableDeclaration (p->getSupPtr (), inLexiqueName, H_file) ;
  }
}

//---------------------------------------------------------------------------*

static void generateTerminalSymbolsTableDeclaration (const GGS_typeTableTablesDeMotsReserves & inMap,
                                                     const C_string & inLexiqueName,
                                                     AC_output_stream & H_file) {
  internalGenerateTerminalSymbolsTableDeclaration (inMap.getRoot (), inLexiqueName, H_file) ;
}

//---------------------------------------------------------------------------*

static void
engendrerInitialisationAttributInterne (GGS_typeLexicalAttributesMap::element_type * p,
                                        AC_output_stream & inCppFile) {
  if (p != NULL) {
    macroValidPointer (p) ;
    engendrerInitialisationAttributInterne (p->getInfPtr (), inCppFile) ;
    p->mInfo.attributType()->generateAttributeInitialization (p->mKey, inCppFile) ;
    engendrerInitialisationAttributInterne (p->getSupPtr (), inCppFile) ;
  }
}

//---------------------------------------------------------------------------*

static void
generateAttributeInitialization (const GGS_typeLexicalAttributesMap & inMap,
                                 AC_output_stream & inCppFile) {
  engendrerInitialisationAttributInterne (inMap.getRoot (), inCppFile) ;
}

//---------------------------------------------------------------------------*

void generateTerminalSymbolCppName (const C_string & inValue,
                                    AC_output_stream & ioString) {
  static const char tab [17] = "0123456789ABCDEF" ;
  const sint32 length = inValue.getLength () ;
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

void buildLexicalRulesFromList (C_lexique & ioLexique, 
                                GGS_typeTableMotsReserves & keyWordsMap,
                                GGS_typeListeTestsEtInstructions & ioLexicalRulesList) {
//--- First, find the longest string
  sint32 longestString = 0 ;
  GGS_typeTableMotsReserves::element_type * currentEntry = keyWordsMap.getFirstItem () ;
  while (currentEntry != NULL) {
    macroValidPointer (currentEntry) ;
    const sint32 length = currentEntry->mKey.getLength () ;
    if (longestString < length) {
      longestString = length ;
    }
    currentEntry = currentEntry->getNextItem () ;
  }
//--- Analyse strings from longest ones
  for (sint32 length=longestString ; length>0 ; length--) {
    currentEntry = keyWordsMap.getFirstItem () ;
    while (currentEntry != NULL) {
      macroValidPointer (currentEntry) ;
      const sint32 currentLength = currentEntry->mKey.getLength () ;
      if (length == currentLength) {
        ::routine_appendToLexicalInstructionList (ioLexique,
                                          ioLexicalRulesList,
                                          currentEntry->mKey,
                                          currentEntry->mInfo.attributNomTerminal) ;
      }
      currentEntry = currentEntry->getNextItem () ;
    }
  }
}

//---------------------------------------------------------------------------*

static void
generate_scanning_method (AC_output_stream & inCppFile,
                          const C_string & inLexiqueClassName,
                          GGS_typeLexicalAttributesMap & table_attributs,
                          const GGS_typeListeTestsEtInstructions & programme_principal) {

  inCppFile.writeTitleComment ("Get next token : method 'parseLexicalToken'") ;
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
  inCppFile << "mCurrentTokenStartLocation = getCurrentLocation () ;\n"
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
generate_scanner_cpp_file (C_lexique & inLexique,
                           const C_string & inLexiqueClassName,
                           GGS_typeLexicalAttributesMap & table_attributs,
                           GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                           GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves,
                           GGS_typeListeTestsEtInstructions & programme_principal,
                           GGS_typeListeInclusions & liste_des_inclusions,
                           GGS_typeTableMessagesErreurs & inLexicalErrorsMessageMap,
                           GGS_M_styles & inStylesMap) {
// --------------------------------------- Engendrer les inclusions
  C_string generatedZone2 ;
  generatedZone2 << "#include <ctype.h>\n"
                    "#include <string.h>\n\n"
                    "#include \"" << inLexiqueClassName << ".h\"\n\n" ;

  GGS_typeListeInclusions::element_type * courant = liste_des_inclusions.getFirstItem () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    courant->attributInclusion()->engendrerInclusion (generatedZone2) ;
    courant = courant->getNextItem () ;
  }
  generatedZone2 << "\n" ;

  C_string generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
// --------------------------------------- Constructor
  generatedZone3.writeTitleComment ("Constructor") ;
  generatedZone3 << inLexiqueClassName << "::\n" << inLexiqueClassName
          << " (AC_galgas_io * inGalgasInputOutput)\n"
             ": C_lexique (inGalgasInputOutput) {\n" ;
  generateAttributeInitialization (table_attributs, generatedZone3) ;
  generatedZone3 << "}\n\n" ;

//---------------------------------------- Generate error message list
  generatedZone3.writeTitleComment ("Lexical error message list") ;
  GGS_typeTableMessagesErreurs::element_type * currentMessage = inLexicalErrorsMessageMap.getFirstItem () ;
  sint32 messageNumber = 0 ;
  while (currentMessage != NULL) {
    macroValidPointer (currentMessage) ;
    generatedZone3 << "//--- Message " << messageNumber << " (" << currentMessage->mKey << ") :\n"
               "static const char * gErrorMessage_" << messageNumber << " = " ;
    generatedZone3.writeCstringConstant (currentMessage->mInfo.mErrorMessage) ;
    generatedZone3 << " ;\n" ;
    currentMessage = currentMessage->getNextItem () ;
    messageNumber ++ ;
  }
  generatedZone3 << "\n" ;
// --------------------------------------- Generate syntax error messages
  generatedZone3.writeTitleComment ("Syntax error messages") ;
  C_string errorMessageList ;

  GGS_typeTableDefinitionTerminaux::element_type * currentTerminal = table_des_terminaux.getFirstItem () ;
  while (currentTerminal != NULL) {
    C_string constanteCname ;
    constanteCname << "gSyntaxErrorMessage_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, constanteCname) ;
    generatedZone3 << "//--- Syntax error message for terminal '$" << currentTerminal->mKey << "$' :\n"
               "static const char * " << constanteCname << " = " ;
    generatedZone3.writeCstringConstant (currentTerminal->mInfo.mErrorMessage.getString ()) ;
    generatedZone3 << " ;\n" ;
    errorMessageList << ",\n       gSyntaxErrorMessage_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, errorMessageList) ;
    currentTerminal = currentTerminal->getNextItem () ;
  }

  generatedZone3.writeHyphenLineComment () ;
  generatedZone3 << "void "
           << inLexiqueClassName
           << "::\n"
           << "appendTerminalMessageToSyntaxErrorMessage (const sint16 inTerminalIndex,\n"
           << "                                           C_string & outSyntaxErrorMessage) {\n" ;
  const sint32 n = table_des_terminaux.count () + 1 ;
  generatedZone3 << "  static const char * syntaxErrorMessageArray [" << n << "] = {"
             "\"end of source\"" << errorMessageList << "} ;\n"
             "  outSyntaxErrorMessage << syntaxErrorMessageArray [inTerminalIndex] ;\n"
             "}\n\n" ;

//---------------------------------------- Terminal symbol table
  generateTerminalSymbolsTable (table_tables_mots_reserves, inLexiqueClassName, generatedZone3) ;

//---------------------------------------- Generate parsing method
  generate_scanning_method (generatedZone3,
                            inLexiqueClassName,
                            table_attributs,
                            programme_principal) ;
//---------------------------------------- Generate styles definition 
  generatedZone3.writeTitleComment ("Styles definition") ;
  generatedZone3 <<  "sint32 " << inLexiqueClassName << "::getStylesCount (void) {\n"
	      "  return " <<  inStylesMap.count () << " ;\n"
	      "}\n\n" ;
  generatedZone3.writeHyphenLineComment () ;
  generatedZone3 <<  "const char * " << inLexiqueClassName << "::getStyleName (const sint32 inIndex) {\n"
	            "  const char * kStylesArray [" << (inStylesMap.count () + 1) << "] = {" ;
  GGS_M_styles::element_type * style = inStylesMap.getFirstItem () ;
  while (style != NULL) {
    macroValidPointer (style) ;
    generatedZone3.writeCstringConstant (style->mInfo.mTitle) ;
    generatedZone3 << ", " ;
    style = style->getNextItem () ;
  }
  generatedZone3 << "NULL} ;\n"
             "  return (inIndex < " <<  inStylesMap.count () << ") ? kStylesArray [inIndex] : NULL ;\n"
	           "} ;\n\n" ;
  generatedZone3.writeHyphenLineComment () ;
  generatedZone3 << "uint8 " << inLexiqueClassName << "::\n"
             "getTerminalStyleIndex (const sint32 inTerminal) {\n"
             "  static const uint8 kTerminalSymbolStyles [" << (table_des_terminaux.count () + 1) << "] = {0" ;

//  generateTerminalSymbolStyleEntries (table_des_terminaux, inLexiqueClassName, generatedZone3) ;

  currentTerminal = table_des_terminaux.getFirstItem () ;
  while (currentTerminal != NULL) {
    generatedZone3 << ",\n    "
            << currentTerminal->mInfo.mStyleIndex.getValue ()
            << " /* "
            << inLexiqueClassName
            << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, generatedZone3) ;
    generatedZone3 << " */" ;
    currentTerminal = currentTerminal->getNextItem () ;
  }




  generatedZone3 << "\n  } ;\n"
             "  return kTerminalSymbolStyles [inTerminal] ;\n"
             "}\n\n" ;
  generatedZone3.writeHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile (inLexiqueClassName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}


//---------------------------------------------------------------------------*

static void
generateExternArgumentForList (const GGS_typeListeArgumentsRoutExterne & inList,
                               AC_output_stream & inCppFile) {
  GGS_typeListeArgumentsRoutExterne::element_type * courant = inList.getFirstItem () ;
  bool premier = true ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    if (premier) {
      premier = false ;
    }else{
      inCppFile << ", " ;
    }
    courant->attributArgument()->generateExternArgument (inCppFile) ;
    courant = courant->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentAttribut::
generateExternArgument (AC_output_stream & inCppFile) const {
  inCppFile << attributNom ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentCaractere::
generateExternArgument (AC_output_stream & inCppFile) const {
  inCppFile.writeCcharConstant (attributCaractere.getValue ()) ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentCaractereCourant::
generateExternArgument (AC_output_stream & inCppFile) const {
  inCppFile << "getPreviousChar ()" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentEntier::
generateExternArgument (AC_output_stream & inCppFile) const {
  inCppFile << attributValeur.getValue () ;
}

//---------------------------------------------------------------------------*

void cPtr_typeArgumentRoutine::
generateExternArgument (AC_output_stream & inCppFile) const {
  inCppFile << attributNomRoutine << " (" ;
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
generate_scanner_instruction (const C_string &, //inLexiqueName
                              AC_output_stream & inCppFile) const {
  inCppFile << attributNomRoutineExterne << " (" ;
//--- Engendrer la liste des arguments (au moins 1)
  generateExternArgumentForList (attributListeArguments, inCppFile) ;
//--- Engendrer la liste des messages d'erreurs (zŽro, un ou plusieurs)
  GGS_typeListeMessagesErreur::element_type * courant = attributListeMessageErreur.getFirstItem () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    inCppFile << ", gErrorMessage_" << courant->mErrorMessageIndex.getValue () ;
    courant = courant->getNextItem () ;
  }
//--- End of instruction
  inCppFile << ", * this) ;\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeInstructionRepetitionLexicale::
instruction__uses_loop_variable (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionRepetitionLexicale::
generate_scanner_instruction (const C_string & inLexiqueName,
                              AC_output_stream & inCppFile) const {
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
generate_scanner_instruction (const C_string & inLexiqueName,
                              AC_output_stream & inCppFile) const {
  generateScannerCode (attributListeBranches, inLexiqueName, inCppFile) ;
  if (attributBrancheSinon.getFirstItem () != NULL) {
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
generate_scanner_instruction (const C_string & inLexiqueName,
                              AC_output_stream & inCppFile) const {
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
generate_scanner_instruction (const C_string & inLexiqueName,
                              AC_output_stream & inCppFile) const {
  bool premier = true ;
  GGS_typeListeRecherche::element_type * courant = attributListeRecherches.getFirstItem () ;
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
    courant = courant->getNextItem () ;
  }
  inCppFile << "if (mCurrentTokenCode == -1) {\n" ;
  inCppFile.incIndentation (+2) ;
  attributEmissionParDefaut()->generateDefaultToken (inLexiqueName, inCppFile) ;
  inCppFile.incIndentation (-2) ;
  inCppFile << "}\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeEmissionTerminalParDefaut::
generateDefaultToken (const C_string & inLexiqueName,
                      AC_output_stream & inCppFile) const {
  inCppFile << "mCurrentTokenCode = " << inLexiqueName << "_1_" ;
  generateTerminalSymbolCppName (attributNomTerminal, inCppFile) ;
  inCppFile << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeEmissionErreurParDefaut::
generateDefaultToken (const C_string &,
                      AC_output_stream & inCppFile) const {
  inCppFile << "lexicalError (gErrorMessage_" << mErrorMessageIndex.getValue () << ") ;\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

bool cPtr_typeInstructionErreurLexicale::
instruction__uses_loop_variable (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionErreurLexicale::
generate_scanner_instruction (const C_string &, // inLexiqueName
                              AC_output_stream & inCppFile) const {
  inCppFile << "lexicalError (gErrorMessage_" << mErrorMessageIndex.getValue () << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionCaractere::
generateLexicalCondition (AC_output_stream & inCppFile) {
  inCppFile << "testForInputChar (" ;
  inCppFile.writeCcharConstant (attributCaractere.getValue ()) ;
  inCppFile << ")" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionChaine::
generateLexicalCondition (AC_output_stream & inCppFile) {
  inCppFile << "testForInputString (" ;
  inCppFile.writeCstringConstant (attributChaine) ;
  inCppFile << ", " << attributChaine.getLength () ;
  inCppFile << ")" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionIntervalle::
generateLexicalCondition (AC_output_stream & inCppFile) {
  inCppFile << "testForInputChar (" ;
  inCppFile.writeCcharConstant (attributBorneInf.getValue ()) ;
  inCppFile << ", " ;
  inCppFile.writeCcharConstant (attributBorneSup.getValue ()) ;
  inCppFile << ")" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInclusionUtilisateur::
engendrerInclusion (AC_output_stream & inCppFile) {
  inCppFile << "#include \"" << attributNomFichierInclus
           << "\" // Generated by 'include \"...\"'\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInclusionSysteme::
engendrerInclusion (AC_output_stream & inCppFile) {
  inCppFile << "#include <" << attributNomFichierInclus
           << "> // Generated by 'include <> \"...\"'\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_output_stream & inCppFile) {
  inCppFile << "  " << nom << ".clearString () ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_output_stream & inCppFile) {
  inCppFile << "  " << nom << " = '\\0' ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_output_stream & inCppFile) {
  inCppFile << "  " << nom << " = false ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_output_stream & inCppFile) {
  inCppFile << "  " << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_output_stream & inCppFile) {
  inCppFile << "  " << nom << " = 0 ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldfloat::
generateAttributeInitialization (const GGS_lstring & nom,
                                 AC_output_stream & inCppFile) {
  inCppFile << "  " << nom << " = 0.0 ;\n" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier ".h"                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_scanner_header_file (C_lexique & inLexique,
                              GGS_lstring & inLexiqueClassName,
                              GGS_typeLexicalAttributesMap & table_attributs,
                              GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                              GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves) {
//--- Write #ifndef, ..., #include, ...
  C_string generatedZone2 ;
  generatedZone2 << "#ifndef " << inLexiqueClassName << "_0_DEFINED\n"
                    "#define " << inLexiqueClassName << "_0_DEFINED\n"
                    "#include \"galgas/C_lexique.h\"\n\n" ;

// --------------- Déclaration de la classe de l'analyseur lexical  
  C_string generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  generatedZone3.writeTitleComment ("Lexical scanner class") ;
  generatedZone3 << "class " << inLexiqueClassName << " : public C_lexique {\n"
            "// Terminal symbols enumeration\n"
            "  public : enum {" ;
  generatedZone3 <<  inLexiqueClassName << "_1_" ;
  GGS_typeTableDefinitionTerminaux::element_type * currentTerminal = table_des_terminaux.getFirstItem () ;
  while (currentTerminal != NULL) {
    macroValidPointer (currentTerminal) ;    
    generatedZone3 << ",\n  " ;
    generatedZone3 << inLexiqueClassName ;
    generatedZone3 << "_1_" ;
    generateTerminalSymbolCppName (currentTerminal->mKey, generatedZone3) ;
    currentTerminal = currentTerminal->getNextItem () ;
  }
  generatedZone3 << "} ;\n\n" ;
  generateTerminalSymbolsTableDeclaration (table_tables_mots_reserves, inLexiqueClassName, generatedZone3) ;
  generatedZone3 << "  protected : virtual void parseLexicalToken (const bool inPropagateLexicaleErrorException) ;\n"
            "  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const sint16 numeroTerminal,\n"
            "                                                              C_string & messageErreur) ;\n"
            "\n"
            "//--- Constructor\n"
            "  public : "
         << inLexiqueClassName
         << " (AC_galgas_io * inGalgasInputOutput) ;\n" ;
  generateAttributeDeclaration (table_attributs, generatedZone3) ;
  generatedZone3 << "  public : virtual sint16 getTerminalVocabularyCount_ (void) const { return "
           << table_des_terminaux.count ()
           << " ; }\n\n"
//--- Styles definition 
              "  public : static sint32 getStylesCount (void) ;\n"
	      "  public : static const char * getStyleName (const sint32 inIndex) ;\n"
              "//--- Virtual method called getting terminal style index\n"
              "  public : virtual uint8 getTerminalStyleIndex (const sint32 inTerminal) ;\n"
	      "} ;\n\n" ;
//--- End of ".h" file
  generatedZone3.writeHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile (inLexiqueClassName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_output_stream & H_file) {
  H_file << "  public : C_string " << nom
	 << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_output_stream & H_file) {
  H_file << "  public : char " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_output_stream & H_file) {
  H_file << "  public : bool " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_output_stream & H_file) {
  H_file << "  public : uint32 " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_output_stream & H_file) {
  H_file << "  public : sint32 " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldfloat::
generateAttributeDeclaration (const GGS_lstring & nom,
                              AC_output_stream & H_file) {
  H_file << "  public : double " << nom
         << " ; // user defined attribute\n" ;
}

//---------------------------------------------------------------------------*

void generate_scanner (C_lexique & inLexique,
                       GGS_lstring & inLexiqueClassName,
                       GGS_typeLexicalAttributesMap & table_attributs,
                       GGS_typeTableDefinitionTerminaux & table_des_terminaux,
                       GGS_typeTableTablesDeMotsReserves & table_tables_mots_reserves,
                       GGS_typeListeTestsEtInstructions & programme_principal,
                       GGS_typeListeInclusions & liste_des_inclusions,
                       GGS_typeTableMessagesErreurs & inLexicalErrorsMessageMap,
                       GGS_M_styles & inStylesMap) {
//--- Get version string
  const C_string GALGASversionString = inLexique.getGalgasIOptr ()->getCompilerVersion () ;
//--- Create GALGAS_OUTPUT directory
  const C_string GALGAS_OUTPUT_directory = inLexique.getSourceFile ().getPath () + "/GALGAS_OUTPUT/" ;
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
                               liste_des_inclusions, inLexicalErrorsMessageMap,
                               inStylesMap) ;
  }else{
    C_string errorMessage ;
    errorMessage << "cannot create directory " << GALGAS_OUTPUT_directory ;
    inLexique.getGalgasIOptr ()->printFileErrorMessage (inLexique.getSourceFile (), errorMessage.getStringPtr ()) ;
  }
}

//---------------------------------------------------------------------------*
