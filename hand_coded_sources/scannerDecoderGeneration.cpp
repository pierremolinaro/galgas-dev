//---------------------------------------------------------------------------*
//                                                                           *
//   scannerDecoderGeneration.h                                              *
//                                                                           *
//  Copyright (C) 2006 Pierre Molinaro.                                      *
//                                                                           *
//  Started december 13th, 2006.                                             *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
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

#include <string.h>
#include <ctype.h>

//---------------------------------------------------------------------------*

#include "generic_arraies/TC_UniqueArray.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#include "scannerDecoderGeneration.h"

//---------------------------------------------------------------------------*

static void
generateDecoderForInstructionList (C_Lexique & inLexique,
                                   const GGS_tListeInstructionsLexicales & inInstructionList,
                                   sint32 & ioCurrentState,
                                   cDecoderController & ioDecoderController) ;

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

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Decoder Classes
#endif

//---------------------------------------------------------------------------*

class cDecoderState {
  public : GGS_lstring mTerminal ;
  public : sint32 mNextStages [256] ;
//--- Constructor
  public : cDecoderState (const GGS_lstring & inTerminal,
                          const bool inAcceptByDefault) ;
//--- Destructor
  public : virtual ~cDecoderState (void) ;
//--- Write decoder
  public : void
  writeDecoderState (const C_String & inLexiqueName,
                     const sint32 inIndex,
                     C_String & inCppFile) const ;
} ;

//---------------------------------------------------------------------------*

class cDecoderController : public TC_UniqueArray <cDecoderState *> {
//--- Constructor
  public : cDecoderController (void) ;
//--- Destructor
  public : virtual ~cDecoderController (void) ;
//--- Create a new decoder array
  public : sint32 newDecoderArray (const GGS_lstring & inTerminal,
                                   const bool inAcceptByDefault) ;
//--- Write decoder
  public : void
  writeDecoder (const C_String & inLexiqueName,
                C_String & inCppFile,
                const bool inPrintStateCount) const ;
} ;

//---------------------------------------------------------------------------*

cDecoderController::cDecoderController (void) {
  makeRoom (1000) ;
}

//---------------------------------------------------------------------------*

cDecoderController::~cDecoderController (void) {
  for (sint32 i=0 ; i<count () ; i++) {
    macroMyDelete (this->operator () (i COMMA_HERE), cDecoderState) ;
  }
}

//---------------------------------------------------------------------------*

sint32 cDecoderController::
newDecoderArray (const GGS_lstring & inTerminal,
                 const bool inAcceptByDefault) {
  cDecoderState * result = NULL ;
  macroMyNew (result, cDecoderState (inTerminal, inAcceptByDefault)) ;
  addObjectUsingSwap (result) ;
  return count () ;
}

//---------------------------------------------------------------------------*

cDecoderState::
cDecoderState (const GGS_lstring & inTerminal,
               const bool inAcceptByDefault):
mTerminal (inTerminal) {
  const sint32 v = inAcceptByDefault ? 0 : -1 ;
  for (sint32 i=0 ; i<256 ; i++) {
    mNextStages [i] = v ;
  }
}

//---------------------------------------------------------------------------*

cDecoderState::
~cDecoderState (void) {
}  

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Lexical Instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionLexicale::
generateDecoderFromInstruction (C_Lexique & /* inLexique */,
                                sint32 & /* ioCurrentState */,
                                cDecoderController & /* ioDecoderController */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionEmettreSimple::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                sint32 & ioCurrentState,
                                cDecoderController & ioDecoderController) {
  if (ioCurrentState <= 0) {
    ioCurrentState = ioDecoderController.newDecoderArray (mTerminal, false) ;
  }else{
    if (ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mTerminal.length () == 0) {
      ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mTerminal = mTerminal ;
    }else {
      mTerminal.signalSemanticWarning (inLexique,
        "this terminal symbol has been already defined"
        COMMA_HERE) ;
    }
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeLexicalDropInstruction::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                sint32 & ioCurrentState,
                                cDecoderController & ioDecoderController) {
  if (ioCurrentState <= 0) {
    ioCurrentState = ioDecoderController.newDecoderArray (mTerminal, false) ;
  }else{
    if (ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mTerminal.length () == 0) {
      ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mTerminal = mTerminal ;
    }else {
      mTerminal.signalSemanticWarning (inLexique,
        "this terminal symbol has been already defined"
        COMMA_HERE) ;
    }
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionSiLexical::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                sint32 & ioCurrentState,
                                cDecoderController & ioDecoderController) {
  GGS_typeListeTestsEtInstructions::element_type * currentBranch = attributListeBranches.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    GGS_typeListeConditionsLexicales::element_type * currentCondition = currentBranch->attributListeConditions.firstObject () ;
    while (currentCondition != NULL) {
      macroValidPointer (currentCondition) ;
      currentCondition->attributCondition (HERE)->generateDecoderFromCondition (inLexique,
        currentBranch->attributListeInstructions,
        ioCurrentState,
        ioDecoderController) ;
      currentCondition = currentCondition->nextObject () ;
    }
    currentBranch = currentBranch->nextObject () ;
  }
  generateDecoderForInstructionList (inLexique,
                                     attributBrancheSinon,
                                     ioCurrentState,
                                     ioDecoderController) ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionRepetitionLexicale::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                sint32 & ioCurrentState,
                                cDecoderController & ioDecoderController) {
//--- Target state
//  const sint32 targetState = ioDecoderController.newDecoderArray (GGS_lstring (inLexique, "")) ;
  GGS_typeListeTestsEtInstructions::element_type * currentBranch = attributListeBranches.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    GGS_typeListeConditionsLexicales::element_type * currentCondition = currentBranch->attributListeConditions.firstObject () ;
    while (currentCondition != NULL) {
      macroValidPointer (currentCondition) ;
      currentCondition->attributCondition (HERE)->generateDecoderFromCondition (inLexique,
        currentBranch->attributListeInstructions,
        ioCurrentState,
        ioDecoderController) ;
      currentCondition = currentCondition->nextObject () ;
    }
    currentBranch = currentBranch->nextObject () ;
  }
/*  generateDecoderForInstructionList (inLexique,
                                     attributListeInstructionsDebut,
                                     ioCurrentState,
                                     ioDecoderController) ;*/
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Lexical Instruction List
#endif

//---------------------------------------------------------------------------*

static void
generateDecoderForInstructionList (C_Lexique & inLexique,
                                   const GGS_tListeInstructionsLexicales & inInstructionList,
                                   sint32 & ioCurrentState,
                                   cDecoderController & ioDecoderController) {
  GGS_tListeInstructionsLexicales::element_type * currentInstruction = inInstructionList.firstObject () ;
  while (currentInstruction != NULL) {
    macroValidPointer (currentInstruction) ;
    currentInstruction->attributInstruction (HERE)->generateDecoderFromInstruction (inLexique,
      ioCurrentState,
      ioDecoderController) ;
    currentInstruction = currentInstruction->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Handle Lexical Conditions
#endif

//---------------------------------------------------------------------------*

void cPtr_typeConditionLexicale::
generateDecoderFromCondition (C_Lexique & /* inLexique */,
                              const GGS_tListeInstructionsLexicales & /* inInstructionList */,
                              sint32 & /* ioCurrentState */,
                              cDecoderController & /* ioDecoderController */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionCaractere::
generateDecoderFromCondition (C_Lexique & inLexique,
                              const GGS_tListeInstructionsLexicales & inInstructionList,
                              sint32 & ioCurrentState,
                              cDecoderController & ioDecoderController) {
//--- Allocate first stage if not done
  if (ioCurrentState <= 0) {
    ioCurrentState = ioDecoderController.newDecoderArray (GGS_lstring (inLexique, ""), false) ;
  }
//--- Get character
  const uint32 c = attributCaractere.charValue () & 0xFFUL ;
//--- Enter instruction list
  generateDecoderForInstructionList (inLexique,
    inInstructionList,
    ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mNextStages [c],
    ioDecoderController) ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Write Decoder
#endif

//---------------------------------------------------------------------------*

void cDecoderState::
writeDecoderState (const C_String & inLexiqueName,
                   const sint32 inIndex,
                   C_String & inCppFile) const {
//--- Find the index of the first not null entry
  sint32 firstNotNull = 256 ;
  const sint32 firstValue = mNextStages [0] ;
  for (sint32 i=1 ; (i < 256) && (firstNotNull == 256) ; i++) {
    if (mNextStages [i] != firstValue) {
      firstNotNull = i ;
    }
  }
  if (firstNotNull == 256) {
    inCppFile << "const sint16 kDecoder_" << inIndex << " [3] = {\n"
                 "  " << firstNotNull << ", // First entry\n"
                 "  0, // Count\n"
                 "  " << inLexiqueName << "::" << inLexiqueName << "_1_" ;
    generateTerminalSymbolCppName (mTerminal, inCppFile) ;
    inCppFile << " // Default response\n"
                 "} ;\n\n" ;
  }else{
  //--- Find the index of the last not null entry
    sint32 lastNotNull = -1 ;
    for (sint32 i=255 ; (i >= 0) && (lastNotNull < 0) ; i--) {
      if (mNextStages [i] != firstValue) {
        lastNotNull = i ;
      }
    }
    const sint32 tabSize = lastNotNull - firstNotNull + 4 ;
    inCppFile << "static const sint16 kDecoder_" << inIndex << " [" << tabSize << "] = {\n"
                 "  " << firstNotNull << ", // First entry\n"
                 "  " << (lastNotNull - firstNotNull + 1) << ", // Entry Count\n" ;
    if (firstValue < 0) {
      inCppFile << "  -1, // Default response\n" ;
    }else{
       inCppFile << "  " << inLexiqueName << "::" << inLexiqueName << "_1_" ;
      generateTerminalSymbolCppName (mTerminal, inCppFile) ;
      inCppFile << ", // Default response\n" ;
    }
    for (sint32 i=firstNotNull ; i<=lastNotNull ; i++) {
      if (mNextStages [i] == 0) {
        inCppFile << "  " <<  inLexiqueName << "::" << inLexiqueName << "_1_" ;
        generateTerminalSymbolCppName (mTerminal, inCppFile) ;
        inCppFile << ((i<lastNotNull) ? "," : "") << " // For character " ;
      }else if (mNextStages [i] == -1) {
        inCppFile << "  -1"
                  << ((i<lastNotNull) ? "," : "") << " // Error for character " ;
      }else{
        inCppFile << "  " << (- mNextStages [i] - 1)
                  << ", // GOTO state " << mNextStages [i]
                  << " (kDecoder_" << mNextStages [i] << ")"
                  << ((i<lastNotNull) ? "," : "") << " for character " ;
      }
      if (::isgraph (i)) {
        inCppFile << "'" << ((char) i) << "' " ;
      }
      inCppFile << "code "  << i << "\n" ;
    }
    inCppFile << "} ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

void cDecoderController::
writeDecoder (const C_String & inLexiqueName,
              C_String & inCppFile,
              const bool inPrintStateCount) const {
  if (inPrintStateCount) {
    co << "  Scanner decoder: " << count () << " state"
       << ((count () > 1) ? "s" : "") 
       << "\n" ;
    co.flush () ;
  }
  inCppFile.writeCppTitleComment ("Decoder Tables") ;
  for (sint32 i=count ()-1 ; i>=0 ; i--) {
    this->operator () (i COMMA_HERE)->writeDecoderState (inLexiqueName, i+1, inCppFile) ;
  }
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "/* static */ const sint16 * gDecoderEntries [" << count () << "] = {\n" ;
  for (sint32 i=0 ; i<count () ; i++) {
    inCppFile << " kDecoder_" << (i+1) ;
    if (i < (count () - 1)) {
      inCppFile << ',' ;
    }
    if ((i % 5) == 4) {
      inCppFile << "\n" ;
    }
  }
  inCppFile << "} ;\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "/* static */ const sint32 gDecoderSize = " << count () << " ;\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark scannerDecoderGeneration
#endif

//---------------------------------------------------------------------------*

void
scannerDecoderGeneration (C_Lexique & inLexique,
                          const C_String & inLexiqueName,
                          const GGS_tokensInListMap & inTokensInListMap,
                          const GGS_typeListeTestsEtInstructions & inRuleList,
                          C_String & inCppFile) {
  cDecoderController decoderController ;
  sint32 firstState = 0 ;
//--- Enter tokens from lists
  GGS_tokensInListMap::element_type * currentEntry = inTokensInListMap.firstObject () ;
  while (currentEntry != NULL) {
    C_String key = currentEntry->mKey ;
    const sint32 keyLength = key.length () ;
    sint32 * currentStatePtr = & firstState ;
    for (sint32 i=0 ; i<keyLength ; i++) {
      if ((* currentStatePtr) <= 0) {
        * currentStatePtr = decoderController.newDecoderArray (GGS_lstring (inLexique, ""), false) ;
      }
      const uint32 c = key (i COMMA_HERE) & 0xFFUL ;
      currentStatePtr = & (decoderController ((*currentStatePtr) - 1 COMMA_HERE)->mNextStages [c]) ;
    }
    if ((* currentStatePtr) <= 0) {
      * currentStatePtr = decoderController.newDecoderArray (currentEntry->mInfo.mTerminalSymbol, false) ;
    }else if (decoderController ((*currentStatePtr) - 1 COMMA_HERE)->mTerminal.length () == 0) {
      decoderController ((*currentStatePtr) - 1 COMMA_HERE)->mTerminal = currentEntry->mInfo.mTerminalSymbol ;
    }else {
      currentEntry->mInfo.mTerminalSymbol.semanticError (inLexique,
        "this terminal symbol has been already defined"
        COMMA_HERE) ;
    }
    currentEntry = currentEntry->nextObject () ;
  }
//--- Enter tokens from rules
  GGS_typeListeTestsEtInstructions::element_type * currentRule = inRuleList.firstObject () ;
  while (currentRule != NULL) {
    macroValidPointer (currentRule) ;
    GGS_typeListeConditionsLexicales::element_type * currentCondition = currentRule->attributListeConditions.firstObject () ;
    while (currentCondition != NULL) {
      macroValidPointer (currentCondition) ;
      currentCondition->attributCondition (HERE)->generateDecoderFromCondition (inLexique,
        currentRule->attributListeInstructions,
        firstState,
        decoderController) ;
      currentCondition = currentCondition->nextObject () ;
    }
    currentRule = currentRule->nextObject () ;
  }
//--- Write decoder
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
  decoderController.writeDecoder (inLexiqueName, inCppFile, verboseOptionOn) ;
}

//---------------------------------------------------------------------------*

