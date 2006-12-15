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

/*static void
generateDecoderForInstructionList (C_Lexique & inLexique,
                                   const GGS_tListeInstructionsLexicales & inInstructionList,
                                   sint32 & ioCurrentState,
                                   cDecoderController & ioDecoderController) ;*/

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

class cDecoderTargetState {         // Accept    GOTO state   Error  
  public : GGS_lstring mTerminal ;  // "..."         xx         xx
  public : sint32 mNextState ;      //   0          n > 0       -1
  public : cDecoderTargetState (void) ;
  public : bool operator != (const cDecoderTargetState & inOperand) const ;
} ;

//---------------------------------------------------------------------------*

//typedef enum {kRegularState, kAcceptState} enumStateType ;

//---------------------------------------------------------------------------*

class cDecoderState {
//  public : enumStateType mStateType ;
  public : cDecoderTargetState mTransitions [256] ;
//--- Constructor
  public : cDecoderState (void) ;
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
//--- Create a new state (all transitions in error)
  public : sint32 newState (void) ;
//--- Create a new state (report all transitions from current state)
  public : void newState (cDecoderTargetState & ioSourceState) ;
//--- Write decoder
  public : void
  writeDecoder (const C_String & inLexiqueName,
                C_String & inCppFile,
                const bool inPrintStateCount) const ;
} ;

//---------------------------------------------------------------------------*

cDecoderTargetState::cDecoderTargetState (void) :
mNextState (-1) { 
}

//---------------------------------------------------------------------------*

bool cDecoderTargetState::
operator != (const cDecoderTargetState & inOperand) const {
  return (mNextState != inOperand.mNextState) 
      || (mTerminal.string () != inOperand.mTerminal.string ()) ;
}

//---------------------------------------------------------------------------*

cDecoderController::cDecoderController (void) {
  makeRoom (1000) ;
//--- Create initial state
  newState () ;
}

//---------------------------------------------------------------------------*

cDecoderController::~cDecoderController (void) {
  for (sint32 i=0 ; i<count () ; i++) {
    macroMyDelete (this->operator () (i COMMA_HERE), cDecoderState) ;
  }
}

//---------------------------------------------------------------------------*

sint32 cDecoderController::
newState (void) {
  cDecoderState * result = NULL ;
  macroMyNew (result, cDecoderState) ;
  addObjectUsingSwap (result) ;
  return count () ;
}

 //---------------------------------------------------------------------------*

void cDecoderController::
newState (cDecoderTargetState & ioSourceState) {
  cDecoderState * result = NULL ;
  macroMyNew (result, cDecoderState) ;
  for (sint32 i=0 ; i<256 ; i++) {
    result->mTransitions [i] = ioSourceState ;
  }
  addObjectUsingSwap (result) ;
  ioSourceState.mNextState = count () - 1 ;
}

//---------------------------------------------------------------------------*

cDecoderState::
cDecoderState (void) {
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
                                cDecoderTargetState & /* ioCurrentState */,
                                cDecoderController & /* ioDecoderController */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionEmettreSimple::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                cDecoderTargetState & ioCurrentState,
                                cDecoderController & ioDecoderController) {
/*  if (ioCurrentState <= 0) {
    ioCurrentState = ioDecoderController.newState () ;
  }else{
    if (ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mTerminal.length () == 0) {
      ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mTerminal = mTerminal ;
    }else {
      mTerminal.signalSemanticWarning (inLexique,
        "this terminal symbol has been already defined"
        COMMA_HERE) ;
    }
  }*/
}

//---------------------------------------------------------------------------*

void cPtr_typeLexicalDropInstruction::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                cDecoderTargetState & ioCurrentState,
                                cDecoderController & ioDecoderController) {
/*  if (ioCurrentState <= 0) {
    ioCurrentState = ioDecoderController.newState () ;
  }else{
    if (ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mTerminal.length () == 0) {
      ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mTerminal = mTerminal ;
    }else {
      mTerminal.signalSemanticWarning (inLexique,
        "this terminal symbol has been already defined"
        COMMA_HERE) ;
    }
  }*/
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionSiLexical::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                cDecoderTargetState & ioCurrentState,
                                cDecoderController & ioDecoderController) {
/*  GGS_typeListeTestsEtInstructions::element_type * currentBranch = attributListeBranches.firstObject () ;
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
                                     ioDecoderController) ;*/
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionRepetitionLexicale::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                cDecoderTargetState & ioCurrentState,
                                cDecoderController & ioDecoderController) {
//--- Target state
//  const sint32 targetState = ioDecoderController.newState (GGS_lstring (inLexique, "")) ;
/*  GGS_typeListeTestsEtInstructions::element_type * currentBranch = attributListeBranches.firstObject () ;
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
  }*/
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

/*static void
generateDecoderForInstructionList (C_Lexique & inLexique,
                                   const GGS_tListeInstructionsLexicales & inInstructionList,
                                   cDecoderTargetState & ioCurrentState,
                                   cDecoderController & ioDecoderController) {
  GGS_tListeInstructionsLexicales::element_type * currentInstruction = inInstructionList.firstObject () ;
  while (currentInstruction != NULL) {
    macroValidPointer (currentInstruction) ;
    currentInstruction->attributInstruction (HERE)->generateDecoderFromInstruction (inLexique,
      ioCurrentState,
      ioDecoderController) ;
    currentInstruction = currentInstruction->nextObject () ;
  }
}*/

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Handle Lexical Conditions
#endif

//---------------------------------------------------------------------------*

void cPtr_typeConditionLexicale::
generateDecoderFromCondition (C_Lexique & /* inLexique */,
                              const GGS_tListeInstructionsLexicales & /* inInstructionList */,
                              cDecoderTargetState & /* ioCurrentState */,
                              cDecoderController & /* ioDecoderController */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionCaractere::
generateDecoderFromCondition (C_Lexique & inLexique,
                              const GGS_tListeInstructionsLexicales & inInstructionList,
                              cDecoderTargetState & ioCurrentState,
                              cDecoderController & ioDecoderController) {
//--- Allocate first stage if not done
/*  if (ioCurrentState <= 0) {
    ioCurrentState = ioDecoderController.newState () ;
  }
//--- Get character
  const uint32 c = attributCaractere.charValue () & 0xFFUL ;
//--- Enter instruction list
  generateDecoderForInstructionList (inLexique,
    inInstructionList,
    ioDecoderController (ioCurrentState - 1 COMMA_HERE)->mTransitions [c],
    ioDecoderController) ;*/
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
  const cDecoderTargetState firstValue = mTransitions [0] ;
  for (sint32 i=1 ; (i < 256) && (firstNotNull == 256) ; i++) {
    if (mTransitions [i] != firstValue) {
      firstNotNull = i ;
    }
  }
  if (firstNotNull == 256) {
    inCppFile << "const sint16 kDecoder_" << inIndex << " [2] = {\n"
                 "  -1, // All transitions have the same target\n" ;
    if (firstValue.mNextState < 0) {
      inCppFile << "  -1} ; // Lexical error\n\n" ;
    }else{
      inCppFile << "  " << inLexiqueName << "::" << inLexiqueName << "_1_" ;
      generateTerminalSymbolCppName (firstValue.mTerminal, inCppFile) ;
      inCppFile << " // Default response\n"
                   "} ;\n\n" ;
    }
  }else{
  //--- Find the index of the last not null entry
    sint32 lastNotNull = -1 ;
    for (sint32 i=255 ; (i >= 0) && (lastNotNull < 0) ; i--) {
      if (mTransitions [i] != firstValue) {
        lastNotNull = i ;
      }
    }
    const sint32 tabSize = lastNotNull - firstNotNull + 4 ;
    inCppFile << "static const sint16 kDecoder_" << inIndex << " [" << tabSize << "] = {\n"
                 "  " << firstNotNull << ", // First entry\n"
                 "  " << (lastNotNull - firstNotNull + 1) << ", // Entry Count\n" ;
    if (firstValue.mNextState < 0) {
      inCppFile << "  -1, // Default response: lexical error\n" ;
    }else{
       inCppFile << "  " << inLexiqueName << "::" << inLexiqueName << "_1_" ;
      generateTerminalSymbolCppName (firstValue.mTerminal, inCppFile) ;
      inCppFile << ", // Default response: accept terminal\n" ;
    }
    for (sint32 i=firstNotNull ; i<=lastNotNull ; i++) {
      if (mTransitions [i].mNextState < 0) {
        inCppFile << "  -1"
                  << ((i<lastNotNull) ? "," : "") << " // Lexical error" ;
      }else if (mTransitions [i].mNextState > 0) {
        inCppFile << "  " << (- mTransitions [i].mNextState - 1)
                  << ", // GOTO state " << mTransitions [i].mNextState
                  << " (kDecoder_" << mTransitions [i].mNextState << ")"
                  << ((i<lastNotNull) ? "," : "") ;
      }else{
        inCppFile << "  " <<  inLexiqueName << "::" << inLexiqueName << "_1_" ;
        generateTerminalSymbolCppName (mTransitions [i].mTerminal, inCppFile) ;
        inCppFile << ((i<lastNotNull) ? "," : "") << " // Accept" ;
      }
      if (::isgraph (i)) {
        inCppFile << " for character'" << ((char) i) << "' " ;
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
//--- Enter tokens from lists
  GGS_tokensInListMap::element_type * currentEntry = inTokensInListMap.firstObject () ;
  while (currentEntry != NULL) {
    C_String key = currentEntry->mKey ;
    const sint32 keyLength = key.length () ;
    const uint32 c0 = key (0 COMMA_HERE) & 0xFFUL ;
    cDecoderTargetState * currentTargetStatePtr = & (decoderController (0 COMMA_HERE)->mTransitions [c0]) ;
    for (sint32 i=1 ; i<keyLength ; i++) {
      if (currentTargetStatePtr->mNextState <= 0) {
        decoderController.newState (* currentTargetStatePtr) ;
      }
      const uint32 c = key (i COMMA_HERE) & 0xFFUL ;
      currentTargetStatePtr = & (decoderController (currentTargetStatePtr->mNextState COMMA_HERE)->mTransitions [c]) ;
    }
    if (currentTargetStatePtr->mNextState > 0) { // GOTO
      cDecoderState * currentStatePtr = decoderController (currentTargetStatePtr->mNextState COMMA_HERE) ;
      bool foundOne = false ;
      for (sint32 i=0 ; i<256 ; i++) {
        if (currentStatePtr->mTransitions [i].mNextState < 0) {
          currentStatePtr->mTransitions [i].mNextState = 0 ;
          currentStatePtr->mTransitions [i].mTerminal = currentEntry->mInfo.mTerminalSymbol ;
          foundOne = true ;
        }
      }
      if (! foundOne) {
        currentEntry->mInfo.mTerminalSymbol.signalSemanticWarning (inLexique,
          C_String ("the '$") + currentEntry->mInfo.mTerminalSymbol + "$'terminal symbol has been already defined"
          COMMA_HERE) ;
      }
    }else if (currentTargetStatePtr->mNextState < 0) { // Error transition : change to accept
      currentTargetStatePtr->mNextState = 0 ;
      currentTargetStatePtr->mTerminal = currentEntry->mInfo.mTerminalSymbol ;
    }else{
      currentEntry->mInfo.mTerminalSymbol.signalSemanticWarning (inLexique,
        C_String ("the '$") + currentEntry->mInfo.mTerminalSymbol + "$'terminal symbol has been already defined"
        COMMA_HERE) ;
    }
    currentEntry = currentEntry->nextObject () ;
  }
//--- Enter tokens from rules
/*  GGS_typeListeTestsEtInstructions::element_type * currentRule = inRuleList.firstObject () ;
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
  }*/
//--- Write decoder
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
  decoderController.writeDecoder (inLexiqueName, inCppFile, verboseOptionOn) ;
}

//---------------------------------------------------------------------------*

