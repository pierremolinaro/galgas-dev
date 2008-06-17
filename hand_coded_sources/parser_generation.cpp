//---------------------------------------------------------------------------*
//                                                                           *
//  Generate parser instructions                                             *
//                                                                           *
//  Copyright (C) 1999, ..., 2007 Pierre Molinaro.                           *
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
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate::
generateHdeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

bool cPtr_typeNonterminalToGenerate::isCppClassNeeded (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate::
generateCppClassDeclaration (AC_OutputStream & inHfile,
                             const C_String & /* inTargetFileName */,
                             sint32 & /* ioPrototypeIndex */) const {
  GGS_M_nonterminalSymbolAlts::cElement * currentAltForNonTerminal
        = mNonterminalSymbolParametersMap.firstObject () ;
  while (currentAltForNonTerminal != NULL) {
    macroValidPointer (currentAltForNonTerminal) ;
    inHfile << "  protected : virtual void nt_" << aNomNonTerminal << '_' << currentAltForNonTerminal->mKey
            << " (" << mLexiqueClassName << " &" ;
    GGS_L_EXsignature::cElement * currentArgument
               = currentAltForNonTerminal->mInfo.mFormalParametersList.firstObject () ;
    while (currentArgument != NULL) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inHfile) ;
      currentArgument = currentArgument->nextObject () ;
    }
    inHfile << ") = 0 ;\n\n" ;
    currentAltForNonTerminal = currentAltForNonTerminal->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & /* inCppFile */,
                                const C_String & /* inTargetFileName */,
                                sint32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer::
generateHdeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

bool cPtr_typeProductionAengendrer::isCppClassNeeded (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer::
generateCppClassDeclaration (AC_OutputStream & inHfile,
                               const C_String & inTargetFileName,
                               sint32 & ioPrototypeIndex) const {
  const sint32 select_repeat_prototypeIndexStart = ioPrototypeIndex ;
  GGS_typeAltProductionsMap::cElement * currentAltForNonTerminal = mAltProductionMap.firstObject () ;
  bool prototypesForSelectedAndRepeatNotDeclared = true ;
  while (currentAltForNonTerminal != NULL) {
    macroValidPointer (currentAltForNonTerminal) ;
    ioPrototypeIndex = select_repeat_prototypeIndexStart ;
    inHfile << "  protected : " ;
    macroValidPointer (currentAltForNonTerminal) ;
    inHfile << "void " ;
    inHfile << "pr_" << aNomProduction 
            << '_' << inTargetFileName
            << '_' << aNomProduction.lineNumber ()
            << '_' << aNomProduction.columnNumber ()
            << '_' << currentAltForNonTerminal->mKey << " ("
            << mLexiqueClassName << " &" ;
    GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = currentAltForNonTerminal->mInfo.aListeDeTypesEffectifs.firstObject () ;
    while (currentArgument != NULL) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inHfile) ;
      currentArgument = currentArgument->nextObject () ;
    }
    inHfile << ") ;\n\n" ;
    generateSelectAndRepeatPrototypesForList (currentAltForNonTerminal->mInfo.mAllInstructionsList,
                                              inHfile,
                                              mLexiqueClassName,
                                              inTargetFileName,
                                              ioPrototypeIndex,
                                              prototypesForSelectedAndRepeatNotDeclared) ;
    currentAltForNonTerminal = currentAltForNonTerminal->nextObject () ;
    prototypesForSelectedAndRepeatNotDeclared = false ;
  }
//--- 'parse' label declared ?
  const bool hasParseLabel = mHasParseLabel.boolValue () ;
  if (hasParseLabel) {
    inHfile << "  protected : void pr_" << aNomProduction 
            << '_' << inTargetFileName
            << '_' << aNomProduction.lineNumber ()
            << '_' << aNomProduction.columnNumber ()
            << "_parse ("
            << mLexiqueClassName << " & _inLexique) ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                  const C_String & inTargetFileName,
                                  sint32 & ioPrototypeIndex,
                                  const bool inGenerateDebug) const {
  inCppFile.writeCppTitleComment (C_String ("Implementation of production rule '") + aNomProduction + "'") ;
  const sint32 select_repeat_prototypeIndexStart = ioPrototypeIndex ;
  GGS_typeAltProductionsMap::cElement * currentAltForNonTerminal = mAltProductionMap.firstObject () ;
  bool first = true ;
  while (currentAltForNonTerminal != NULL) {
    macroValidPointer (currentAltForNonTerminal) ;
    ioPrototypeIndex = select_repeat_prototypeIndexStart ;
    if (first) {
      first = false ;
    }else{
      inCppFile.writeCppHyphenLineComment () ;
    }
    macroValidPointer (currentAltForNonTerminal) ;
    inCppFile << "void " ;
    inCppFile << inTargetFileName
              << "::\n"
                 "pr_"
              << aNomProduction << "_" << inTargetFileName
              << '_' << aNomProduction.lineNumber ()
              << '_' << aNomProduction.columnNumber ()
              << '_' << currentAltForNonTerminal->mKey << " ("
              << mLexiqueClassName << " & " ;
    const bool lexiqueFormalArgumentUsed = isLexiqueFormalArgumentUsedForList (currentAltForNonTerminal->mInfo.mAllInstructionsList, true) ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << "/* " ;
    }
    inCppFile << "_inLexique" ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << " */" ;
    }
    GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = currentAltForNonTerminal->mInfo.aListeDeTypesEffectifs.firstObject () ;
    while (currentArgument != NULL) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inCppFile) ;
      const bool variableUtilisee = formalArgumentIsUsedForList (currentAltForNonTerminal->mInfo.mAllInstructionsList, currentArgument->mCppName, true) ;
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
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    _inLexique.enterProduction (\"<" << aNomProduction << ">\", " ;
      if (currentAltForNonTerminal->mKey.length () == 0) {
        inCppFile << "NULL, " ;
      }else{
        inCppFile << "\"" << currentAltForNonTerminal->mKey << "\", " ;
      }
      inCppFile.writeCstringConstant (mProductionTagName) ;
      inCppFile << ") ;\n"
                   "  #endif\n" ;
    }
    generateInstructionListForList (currentAltForNonTerminal->mInfo.mAllInstructionsList, inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ;
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    _inLexique.exitProduction () ;\n"
                   "  #endif\n";
    }
  //--- End of function
    inCppFile << "}\n\n" ;
    currentAltForNonTerminal = currentAltForNonTerminal->nextObject () ;
  }
//--- 'parse' label declared ?
  const bool hasParseLabel = mHasParseLabel.boolValue () ;
//--- If yes, generate parse only method, based on first label instructions
  if (hasParseLabel) {
    GGS_typeAltProductionsMap::cElement * firstLabelDef = mAltProductionMap.firstObject () ;
    macroValidPointer (firstLabelDef) ;
    ioPrototypeIndex = select_repeat_prototypeIndexStart ;
    if (first) {
      first = false ;
    }else{
      inCppFile.writeCppHyphenLineComment () ;
    }
    inCppFile << "void " << inTargetFileName
              << "::\n"
                 "pr_"
              << aNomProduction << "_" << inTargetFileName
              << '_' << aNomProduction.lineNumber ()
              << '_' << aNomProduction.columnNumber ()
              << "_parse ("
              << mLexiqueClassName << " & " ;
    const bool lexiqueFormalArgumentUsed = isLexiqueFormalArgumentUsedForList (firstLabelDef->mInfo.mAllInstructionsList, false) ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << "/* " ;
    }
    inCppFile << "_inLexique" ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << " */" ;
    }
    inCppFile << ") {\n" ;
  //--- Engendrer la liste d'instructions
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    _inLexique.enterProduction (\"<" << aNomProduction << ">\", " ;
      if (firstLabelDef->mKey.length () == 0) {
        inCppFile << "NULL, " ;
      }else{
        inCppFile << "\"" << firstLabelDef->mKey << "\", " ;
      }
      inCppFile.writeCstringConstant (mProductionTagName) ;
      inCppFile << ") ;\n"
                   "  #endif\n" ;
    }
    generateInstructionListForList (firstLabelDef->mInfo.mAllInstructionsList, inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, false) ;
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    _inLexique.exitProduction () ;\n"
                   "  #endif\n";
    }
  //--- Fin de la fonction
    inCppFile << "}\n\n" ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//   Engendrer la declaration des prototypes des regles de production        *
//                                                                           *
//---------------------------------------------------------------------------*

void
engendrerDeclarationPrototypesReglesDeProduction (const GGS_lstring & nomComposant,
                                                  const GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                                                  AC_OutputStream & inHfile) {
//---  declarer une classe si il existe des regles de production a implementer
  inHfile.writeCppTitleComment (C_String ("Parser class ") + nomComposant + " declaration") ;
  inHfile << "class " << nomComposant << " {\n"
           << "  public : virtual ~" << nomComposant << " (void) {}\n\n" ;
  GGS_typeEntitiesToGenerateList::cElement * element = listeEntitesAengendrer.firstObject () ;
  sint32 select_repeat_production_index = 0 ;
  while (element != NULL) {
    macroValidPointer (element) ;
    element->mEntityToGenerate (HERE)->generateCppClassDeclaration (inHfile,
                                                                    nomComposant,
                                                                    select_repeat_production_index) ;
    element = element->nextObject () ;
  }
  inHfile << "} ;\n\n" ;
}

//---------------------------------------------------------------------------*
