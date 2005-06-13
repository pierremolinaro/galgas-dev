//---------------------------------------------------------------------------*
//                                                                           *
//  Generate parser instructions                                             *
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

#include "semantics_instructions.h"
#include "parser_generation.h"
#include "parser_semantics.h"
#include "galgas_start.h"

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate::
generateHdeclarations (AC_OutputStream & /* inHfile */,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

bool cPtr_typeNonterminalToGenerate::isCppClassNeeded (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate
::generateCppClassDeclaration (AC_OutputStream & inHfile,
                               const C_String & inLexiqueClassName,
                               const C_String & /* inTargetFileName */,
                               sint32 & /* ioPrototypeIndex */) {
  GGS_M_nonterminalSymbolAlts::element_type * currentAlt
        = mNonterminalSymbolParametersMap.firstObject () ;
  while (currentAlt != NULL) {
    macroValidPointer (currentAlt) ;
    inHfile << "  protected : virtual void "
               "nt_" << aNomNonTerminal << '_' << currentAlt->mKey
            << " (" << inLexiqueClassName << " &" ;
    GGS_L_signature::element_type * currentArgument
               = currentAlt->mInfo.mFormalParametersList.firstObject () ;
    while (currentArgument != NULL) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (), currentArgument->mFormalArgumentPassingMode, inHfile) ;
      currentArgument = currentArgument->nextObject () ;
    }
    inHfile << ") = 0 ;\n\n" ;
    currentAlt = currentAlt->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate
::generateCppClassImplementation (AC_OutputStream & /* inCppFile */,
                                  const C_String & /* inLexiqueClassName */,
                                  const C_String & /* inTargetFileName */,
                                  sint32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer::
generateHdeclarations (AC_OutputStream & /* inHfile */,
                       const C_String & /* inLexiqueClassName */,
                       C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         const C_String & /* inLexiqueClassName */,
                         C_Lexique & /* inLexique */) {
}

//---------------------------------------------------------------------------*

bool cPtr_typeProductionAengendrer::isCppClassNeeded (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer
::generateCppClassDeclaration (AC_OutputStream & inHfile,
                               const C_String & inLexiqueClassName,
                               const C_String & inTargetFileName,
                               sint32 & ioPrototypeIndex) {
  const sint32 select_repeat_prototypeIndexStart = ioPrototypeIndex ;
  GGS_typeAltProductionsMap::element_type * currentAlt = mAltProductionMap.firstObject () ;
  bool prototypesForSelectedAndRepeatNotDeclared = true ;
  while (currentAlt != NULL) {
    macroValidPointer (currentAlt) ;
    ioPrototypeIndex = select_repeat_prototypeIndexStart ;
    inHfile << "  protected : void pr_" << aNomProduction 
            << '_' << inTargetFileName
            << '_' << aNomProduction.currentLineNumber ()
            << '_' << aNomProduction.currentColumnNumber ()
            << '_' << currentAlt->mKey << " ("
            << inLexiqueClassName << " &" ;
    GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = currentAlt->mInfo.aListeDeTypesEffectifs.firstObject () ;
    while (currentArgument != NULL) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (), currentArgument->mFormalArgumentPassingMode, inHfile) ;
      currentArgument = currentArgument->nextObject () ;
    }
    inHfile << ") ;\n\n" ;
    generateSelectAndRepeatPrototypesForList (currentAlt->mInfo.mAllInstructionsList,
                                              inHfile,
                                              inLexiqueClassName,
                                              inTargetFileName,
                                              ioPrototypeIndex,
                                              prototypesForSelectedAndRepeatNotDeclared) ;
    currentAlt = currentAlt->nextObject () ;
    prototypesForSelectedAndRepeatNotDeclared = false ;
  }
//--- 'parse' label declared ?
  const bool hasParseLabel = mHasParseLabel.getValue () ;
  if (hasParseLabel) {
    inHfile << "  protected : void pr_" << aNomProduction 
            << '_' << inTargetFileName
            << '_' << aNomProduction.currentLineNumber ()
            << '_' << aNomProduction.currentColumnNumber ()
            << "_parse ("
            << inLexiqueClassName << " & lexique_var_) ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer
::generateCppClassImplementation (AC_OutputStream & inCppFile,
                                  const C_String & inLexiqueClassName,
                                  const C_String & inTargetFileName,
                                  sint32 & ioPrototypeIndex,
                                  const bool inGenerateDebug) {
  inCppFile.writeTitleComment (C_String ("Implementation of production rule '") + aNomProduction + "'") ;
  const sint32 select_repeat_prototypeIndexStart = ioPrototypeIndex ;
  GGS_typeAltProductionsMap::element_type * currentAlt = mAltProductionMap.firstObject () ;
  bool first = true ;
  while (currentAlt != NULL) {
    macroValidPointer (currentAlt) ;
    ioPrototypeIndex = select_repeat_prototypeIndexStart ;
    if (first) {
      first = false ;
    }else{
      inCppFile.writeHyphenLineComment () ;
    }
    inCppFile << "void " << inTargetFileName
              << "::\n"
                 "pr_"
              << aNomProduction << "_" << inTargetFileName
              << '_' << aNomProduction.currentLineNumber ()
              << '_' << aNomProduction.currentColumnNumber ()
              << '_' << currentAlt->mKey << " ("
              << inLexiqueClassName << " & " ;
    const bool lexiqueFormalArgumentUsed = isLexiqueFormalArgumentUsedForList (currentAlt->mInfo.mAllInstructionsList, true) ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << "/* " ;
    }
    inCppFile << "lexique_var_" ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << " */" ;
    }
    GGS_typeListeTypesEtNomsArgMethode::element_type * currentArgument = currentAlt->mInfo.aListeDeTypesEffectifs.firstObject () ;
    while (currentArgument != NULL) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (), currentArgument->mFormalArgumentPassingMode, inCppFile) ;
      const bool variableUtilisee = formalArgumentIsUsedForList (currentAlt->mInfo.mAllInstructionsList, currentArgument->mCppName, true) ;
      if (! variableUtilisee) {
        inCppFile << "/* " ;
      }
      currentArgument->mCppName ()->generateCplusPlusName (inCppFile) ;
      if (! variableUtilisee) {
        inCppFile << " */" ;
      }
      currentArgument = currentArgument->nextObject () ;
    }
    inCppFile << ") {\n" ;
  //--- Engendrer la liste d'instructions
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    lexique_var_.enterProduction (\"<" << aNomProduction << ">\", " ;
      if (currentAlt->mKey.length () == 0) {
        inCppFile << "NULL, " ;
      }else{
        inCppFile << "\"" << currentAlt->mKey << "\", " ;
      }
      inCppFile.writeCstringConstant (mProductionTagName.string ()) ;
      inCppFile << ") ;\n"
                   "  #endif\n" ;
    }
    generateInstructionListForList (currentAlt->mInfo.mAllInstructionsList, inCppFile,
                                    inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ;
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    lexique_var_.exitProduction () ;\n"
                   "  #endif\n";
    }
  //--- Fin de la fonction
    inCppFile << "}\n\n" ;
    currentAlt = currentAlt->nextObject () ;
  }
//--- 'parse' label declared ?
  const bool hasParseLabel = mHasParseLabel.getValue () ;
//--- If yes, generate parse only method, based on first label instructions
  if (hasParseLabel) {
    GGS_typeAltProductionsMap::element_type * firstLabelDef = mAltProductionMap.firstObject () ;
    macroValidPointer (firstLabelDef) ;
    ioPrototypeIndex = select_repeat_prototypeIndexStart ;
    if (first) {
      first = false ;
    }else{
      inCppFile.writeHyphenLineComment () ;
    }
    inCppFile << "void " << inTargetFileName
              << "::\n"
                 "pr_"
              << aNomProduction << "_" << inTargetFileName
              << '_' << aNomProduction.currentLineNumber ()
              << '_' << aNomProduction.currentColumnNumber ()
              << "_parse ("
              << inLexiqueClassName << " & " ;
    const bool lexiqueFormalArgumentUsed = isLexiqueFormalArgumentUsedForList (firstLabelDef->mInfo.mAllInstructionsList, false) ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << "/* " ;
    }
    inCppFile << "lexique_var_" ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << " */" ;
    }
    inCppFile << ") {\n" ;
  //--- Engendrer la liste d'instructions
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    lexique_var_.enterProduction (\"<" << aNomProduction << ">\", " ;
      if (firstLabelDef->mKey.length () == 0) {
        inCppFile << "NULL, " ;
      }else{
        inCppFile << "\"" << firstLabelDef->mKey << "\", " ;
      }
      inCppFile.writeCstringConstant (mProductionTagName.string ()) ;
      inCppFile << ") ;\n"
                   "  #endif\n" ;
    }
    generateInstructionListForList (firstLabelDef->mInfo.mAllInstructionsList, inCppFile,
                                    inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, false) ;
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    lexique_var_.exitProduction () ;\n"
                   "  #endif\n";
    }
  //--- Fin de la fonction
    inCppFile << "}\n\n" ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//   Engendrer la dŽclaration des prototypes des rgles de production        *
//                                                                           *
//---------------------------------------------------------------------------*

void
engendrerDeclarationPrototypesReglesDeProduction (GGS_lstring & nomComposant,
                                                  const C_String & inLexiqueName,
                                                  GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                                                  AC_OutputStream & inHfile) {
//---  declarer une classe si il existe des rgles de production ˆ implŽmenter
  inHfile.writeTitleComment (C_String ("Parser class ") + nomComposant + " declaration") ;
  inHfile << "class " << nomComposant << " {\n"
           << "  public : virtual ~" << nomComposant << " (void) {}\n\n" ;
  GGS_typeEntitiesToGenerateList::element_type * element = listeEntitesAengendrer.firstObject () ;
  sint32 select_repeat_production_index = 0 ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate ()->generateCppClassDeclaration (inHfile,
                                                                inLexiqueName,
                                                                nomComposant,
                                                                select_repeat_production_index) ;
    element = element->nextObject () ;
  }
  inHfile << "} ;\n\n" ;
}

//---------------------------------------------------------------------------*
