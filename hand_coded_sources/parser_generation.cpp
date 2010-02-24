//---------------------------------------------------------------------------*
//                                                                           *
//  Generate parser instructions                                             *
//                                                                           *
//  Copyright (C) 1999, ..., 2009 Pierre Molinaro.                           *
//                                                                           *
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
                             PMSInt32 & /* ioPrototypeIndex */) const {
  GGS_M_nonterminalSymbolAlts::cEnumerator currentAltForNonTerminal (mNonterminalSymbolParametersMap, true) ;
  while (currentAltForNonTerminal.hasCurrentObject ()) {
    inHfile << "  protected : virtual void nt_" << aNomNonTerminal.identifierRepresentation ()
            << "_" << currentAltForNonTerminal._key (HERE).identifierRepresentation ()
            << " ("
            << "C_Lexique_" << mLexiqueClassName.string ().identifierRepresentation ()
            << " &" ;
    GGS_L_EXsignature::cEnumerator currentArgument (currentAltForNonTerminal._mFormalParametersList (HERE), true) ;
    while (currentArgument.hasCurrentObject ()) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
      currentArgument.next () ;
    }
    inHfile << ") = 0 ;\n\n" ;
    currentAltForNonTerminal.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeNonterminalToGenerate::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & /* inCppFile */,
                                const C_String & /* inTargetFileName */,
                                PMSInt32 & /* ioPrototypeIndex */,
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
                               PMSInt32 & ioPrototypeIndex) const {
  const PMSInt32 select_repeat_prototypeIndexStart = ioPrototypeIndex ;
  GGS_typeAltProductionsMap::cEnumerator currentAltForNonTerminal (mAltProductionMap, true) ;
  bool prototypesForSelectedAndRepeatNotDeclared = true ;
  while (currentAltForNonTerminal.hasCurrentObject ()) {
    ioPrototypeIndex = select_repeat_prototypeIndexStart ;
    inHfile << "  protected : void rule_" << inTargetFileName.identifierRepresentation ()
            << "_" << aNomProduction.identifierRepresentation ()
            << "_i" << cStringWithUnsigned (mProductionIndex.uintValue ())
            << "_" << currentAltForNonTerminal._key (HERE).identifierRepresentation () << " ("
            << "C_Lexique_" << mLexiqueClassName.string ().identifierRepresentation ()
            << " &" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (currentAltForNonTerminal._aListeDeTypesEffectifs (HERE), true) ;
    while (currentArgument.hasCurrentObject ()) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
      currentArgument.next () ;
    }
    inHfile << ") ;\n\n" ;
    C_String lexiqueIdentifier ;
    lexiqueIdentifier << "C_Lexique_" << mLexiqueClassName.string ().identifierRepresentation () ;
    generateSelectAndRepeatPrototypesForList (currentAltForNonTerminal._mAllInstructionsList (HERE),
                                              inHfile,
                                              lexiqueIdentifier,
                                              inTargetFileName,
                                              ioPrototypeIndex,
                                              prototypesForSelectedAndRepeatNotDeclared) ;
    currentAltForNonTerminal.next () ;
    prototypesForSelectedAndRepeatNotDeclared = false ;
  }
//--- 'parse' label declared ?
  const bool hasParseLabel = mHasParseLabel.boolValue () ;
  if (hasParseLabel) {
    inHfile << "  protected : void rule_" << inTargetFileName.identifierRepresentation ()
            << "_" << aNomProduction.identifierRepresentation ()
            << "_i" << cStringWithUnsigned (mProductionIndex.uintValue ())
            << "_parse (C_Lexique_" << mLexiqueClassName.string ().identifierRepresentation ()
            << " & inLexique) ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeProductionAengendrer::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                  const C_String & inTargetFileName,
                                  PMSInt32 & ioPrototypeIndex,
                                  const bool inGenerateDebug) const {
  inCppFile.appendCppTitleComment (C_String ("Implementation of production rule '") + aNomProduction + "'") ;
  const PMSInt32 select_repeat_prototypeIndexStart = ioPrototypeIndex ;
  GGS_typeAltProductionsMap::cEnumerator currentAltForNonTerminal (mAltProductionMap, true) ;
  bool first = true ;
  while (currentAltForNonTerminal.hasCurrentObject ()) {
    ioPrototypeIndex = select_repeat_prototypeIndexStart ;
    if (first) {
      first = false ;
    }else{
      inCppFile.appendCppHyphenLineComment () ;
    }
    inCppFile << "void "
              << inTargetFileName
              << "::rule_"
              << inTargetFileName.identifierRepresentation ()
              << "_" << aNomProduction.identifierRepresentation ()
              << "_i" << cStringWithUnsigned (mProductionIndex.uintValue ())
              << "_" << currentAltForNonTerminal._key (HERE).identifierRepresentation () << " ("
              << "C_Lexique_" << mLexiqueClassName.string ().identifierRepresentation ()
              << " & " ;
    const bool lexiqueFormalArgumentUsed = isLexiqueFormalArgumentUsedForList (currentAltForNonTerminal._mAllInstructionsList (HERE), true) ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << "/* " ;
    }
    inCppFile << "inLexique" ;
    if (! (lexiqueFormalArgumentUsed || inGenerateDebug)) {
      inCppFile << " */" ;
    }
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (currentAltForNonTerminal._aListeDeTypesEffectifs (HERE), true) ;
    while (currentArgument.hasCurrentObject ()) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inCppFile) ;
      const bool variableUtilisee = formalArgumentIsUsedForList (currentAltForNonTerminal._mAllInstructionsList (HERE), currentArgument._mCppName (HERE), true) ;
      if (! variableUtilisee) {
        inCppFile << "/* " ;
      }
      currentArgument._mCppName (HERE) (HERE)->generateCplusPlusName (inCppFile) ;
      if (! variableUtilisee) {
        inCppFile << " */" ;
      }
      currentArgument.next () ;
    }
    inCppFile << ") {\n" ;
  //--- Engendrer la liste d'instructions
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    inLexique.enterProduction (\"<" << aNomProduction << ">\", " ;
      if (currentAltForNonTerminal._key (HERE).length () == 0) {
        inCppFile << "NULL, " ;
      }else{
        inCppFile << "\"" << currentAltForNonTerminal._key (HERE) << "\", " ;
      }
      inCppFile.appendCLiteralStringConstant (mProductionTagName.string ()) ;
      inCppFile << ") ;\n"
                   "  #endif\n" ;
    }
    generateInstructionListForList (currentAltForNonTerminal._mAllInstructionsList (HERE), inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ;
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    inLexique.exitProduction () ;\n"
                   "  #endif\n";
    }
  //--- End of function
    inCppFile << "}\n\n" ;
    currentAltForNonTerminal.next () ;
  }
//--- 'parse' label declared ?
  const bool hasParseLabel = mHasParseLabel.boolValue () ;
//--- If yes, generate parse only method, based on first label instructions
  if (hasParseLabel) {
    GGS_typeAltProductionsMap::cEnumerator firstLabelDef (mAltProductionMap, true) ;
    ioPrototypeIndex = select_repeat_prototypeIndexStart ;
    if (first) {
      first = false ;
    }else{
      inCppFile.appendCppHyphenLineComment () ;
    }
    inCppFile << "void " << inTargetFileName
              << "::rule_"
              << inTargetFileName.identifierRepresentation ()
              << "_" << aNomProduction.identifierRepresentation ()
              << "_i" << cStringWithUnsigned (mProductionIndex.uintValue ())
              << "_parse ("
              << "C_Lexique_" << mLexiqueClassName.string ().identifierRepresentation ()
              << " & inLexique) {\n" ;
  //--- Engendrer la liste d'instructions
    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    inLexique.enterProduction (\"<" << aNomProduction << ">\", " ;
      if (firstLabelDef._key (HERE).length () == 0) {
        inCppFile << "NULL, " ;
      }else{
        inCppFile << "\"" << firstLabelDef._key (HERE) << "\", " ;
      }
      inCppFile.appendCLiteralStringConstant (mProductionTagName.string ()) ;
      inCppFile << ") ;\n"
                   "  #endif\n" ;
    }
    generateInstructionListForList (firstLabelDef._mAllInstructionsList (HERE), inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, false) ;
    inCppFile << "  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;\n" ;

    if (inGenerateDebug) {
      inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
                   "    inLexique.exitProduction () ;\n"
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
  inHfile.appendCppTitleComment (C_String ("Parser class ") + nomComposant + " declaration") ;
  inHfile << "class " << nomComposant << " {\n"
           << "  public : virtual ~" << nomComposant << " (void) {}\n\n" ;
  GGS_typeEntitiesToGenerateList::cEnumerator element (listeEntitesAengendrer, true) ;
  PMSInt32 select_repeat_production_index = 0 ;
  while (element.hasCurrentObject ()) {
    element._mEntityToGenerate (HERE) (HERE)->generateCppClassDeclaration (inHfile,
                                                                    nomComposant,
                                                                    select_repeat_production_index) ;
    element.next () ;
  }
  inHfile << "} ;\n\n" ;
}

//---------------------------------------------------------------------------*
