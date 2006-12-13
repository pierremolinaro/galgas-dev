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

#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#include "scannerDecoderGeneration.h"

//---------------------------------------------------------------------------*

static void
generateDecoderForInstructionList (C_Lexique & inLexique,
                                   AC_OutputStream & inCppFile,
                                   const GGS_tListeInstructionsLexicales & inInstructionList,
                                   cDecoderArray * & ioFirstStage,
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

class cDecoderArray {
  public : GGS_lstring mTerminal ;
  public : cDecoderArray * mNextObject ;
  public : const sint32 mDecoderIndex ;
  public : cDecoderArray * mNextStages [256] ;
//--- Constructor
  private : cDecoderArray (const GGS_lstring & inTerminal, sint32 & ioIndex) ;
//--- Destructor
  public : virtual ~cDecoderArray (void) ;
//-- No copy
  private : cDecoderArray (const cDecoderArray &):mDecoderIndex (-1) {}
  private : void operator = (const cDecoderArray &) {}
//--- Friend
  friend class cDecoderController ;
} ;

//---------------------------------------------------------------------------*

class cDecoderController {
  protected : cDecoderArray * mFirstObject ;
  protected : sint32 mDecoderCount ;
//--- Constructor
  public : cDecoderController (void) ;
//--- Destructor
  public : virtual ~cDecoderController (void) ;
//--- State count
  public : inline sint32 stateCount (void) const { return mDecoderCount ; }
//--- Create a new decoder array
  public : cDecoderArray * newDecoderArray (const GGS_lstring & inTerminal) ;
//--- No copy
  private : cDecoderController (const cDecoderController &) {}
  private : void operator = (const cDecoderController &) {}
} ;

//---------------------------------------------------------------------------*

cDecoderController::cDecoderController (void) :
mFirstObject (NULL),
mDecoderCount (0) {
}

//---------------------------------------------------------------------------*

cDecoderController::~cDecoderController (void) {
  while (mFirstObject != NULL) {
    cDecoderArray * p = mFirstObject->mNextObject ;
    macroMyDelete (mFirstObject, cDecoderArray) ;
    mFirstObject = p ;
  }
}

//---------------------------------------------------------------------------*

cDecoderArray * cDecoderController::
newDecoderArray (const GGS_lstring & inTerminal) {
  cDecoderArray * result = NULL ;
  macroMyNew (result, cDecoderArray (inTerminal, mDecoderCount)) ;
  result->mNextObject = mFirstObject ;
  mFirstObject = result ;
  return result ;
}

//---------------------------------------------------------------------------*

cDecoderArray::
cDecoderArray (const GGS_lstring & inTerminal, sint32 & ioIndex):
mTerminal (inTerminal),
mNextObject (NULL),
mDecoderIndex (ioIndex) {
  ioIndex ++ ;
  for (sint32 i=0 ; i<256 ; i++) {
    mNextStages [i] = NULL ;
  }
}

//---------------------------------------------------------------------------*

cDecoderArray::
~cDecoderArray (void) {
}  

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Lexical Instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionLexicale::
generateDecoderFromInstruction (C_Lexique & /* inLexique */,
                                AC_OutputStream & /* inCppFile */,
                                cDecoderArray * & /* ioFirstStage */,
                                cDecoderController & /* ioDecoderController */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionEmettreSimple::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                AC_OutputStream & inCppFile,
                                cDecoderArray * & ioFirstStage,
                                cDecoderController & ioDecoderController) {
  if (ioFirstStage == NULL) {
    ioFirstStage = ioDecoderController.newDecoderArray (mTerminal) ;
  }else{
    macroValidPointer (ioFirstStage) ;
    if (ioFirstStage->mTerminal.length () == 0) {
      ioFirstStage->mTerminal = mTerminal ;
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
                                AC_OutputStream & inCppFile,
                                cDecoderArray * & ioFirstStage,
                                cDecoderController & ioDecoderController) {
  if (ioFirstStage == NULL) {
    ioFirstStage = ioDecoderController.newDecoderArray (mTerminal) ;
  }else{
    macroValidPointer (ioFirstStage) ;
    if (ioFirstStage->mTerminal.length () == 0) {
      ioFirstStage->mTerminal = mTerminal ;
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
                                AC_OutputStream & inCppFile,
                                cDecoderArray * & ioFirstStage,
                                cDecoderController & ioDecoderController) {
  cDecoderArray * * currentStateHandle = & ioFirstStage ;
  GGS_typeListeTestsEtInstructions::element_type * currentBranch = attributListeBranches.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    GGS_typeListeConditionsLexicales::element_type * currentCondition = currentBranch->attributListeConditions.firstObject () ;
    while (currentCondition != NULL) {
      macroValidPointer (currentCondition) ;
      currentCondition->attributCondition (HERE)->generateDecoderFromCondition (inLexique,
        inCppFile,
        currentBranch->attributListeInstructions,
        * currentStateHandle,
        ioDecoderController) ;
      currentCondition = currentCondition->nextObject () ;
    }
    currentBranch = currentBranch->nextObject () ;
  }
  generateDecoderForInstructionList (inLexique,
                                     inCppFile,
                                     attributBrancheSinon,
                                     ioFirstStage,
                                     ioDecoderController) ;
}

//---------------------------------------------------------------------------*

void cPtr_typeInstructionRepetitionLexicale::
generateDecoderFromInstruction (C_Lexique & inLexique,
                                AC_OutputStream & inCppFile,
                                cDecoderArray * & ioFirstStage,
                                cDecoderController & ioDecoderController) {
  cDecoderArray * * currentStateHandle = & ioFirstStage ;
  GGS_typeListeTestsEtInstructions::element_type * currentBranch = attributListeBranches.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    GGS_typeListeConditionsLexicales::element_type * currentCondition = currentBranch->attributListeConditions.firstObject () ;
    while (currentCondition != NULL) {
      macroValidPointer (currentCondition) ;
      currentCondition->attributCondition (HERE)->generateDecoderFromCondition (inLexique,
        inCppFile,
        currentBranch->attributListeInstructions,
        * currentStateHandle,
        ioDecoderController) ;
      currentCondition = currentCondition->nextObject () ;
    }
    currentBranch = currentBranch->nextObject () ;
  }
  generateDecoderForInstructionList (inLexique,
                                     inCppFile,
                                     attributListeInstructionsDebut,
                                     ioFirstStage,
                                     ioDecoderController) ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Lexical Instruction List
#endif

//---------------------------------------------------------------------------*

static void
generateDecoderForInstructionList (C_Lexique & inLexique,
                                   AC_OutputStream & inCppFile,
                                   const GGS_tListeInstructionsLexicales & inInstructionList,
                                   cDecoderArray * & ioFirstStage,
                                   cDecoderController & ioDecoderController) {
  GGS_tListeInstructionsLexicales::element_type * currentInstruction = inInstructionList.firstObject () ;
  while (currentInstruction != NULL) {
    macroValidPointer (currentInstruction) ;
    currentInstruction->attributInstruction (HERE)->generateDecoderFromInstruction (inLexique,
      inCppFile,
      ioFirstStage,
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
                              AC_OutputStream & /* inCppFile */,
                              const GGS_tListeInstructionsLexicales & /* inInstructionList */,
                              cDecoderArray * & /* ioFirstStage */,
                              cDecoderController & /* ioDecoderController */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeConditionCaractere::
generateDecoderFromCondition (C_Lexique & inLexique,
                              AC_OutputStream & inCppFile,
                              const GGS_tListeInstructionsLexicales & inInstructionList,
                              cDecoderArray * & ioFirstStage,
                              cDecoderController & ioDecoderController) {
//--- Allocate first stage if not done
  if (ioFirstStage == NULL) {
    ioFirstStage = ioDecoderController.newDecoderArray (GGS_lstring (inLexique, "")) ;
  }
//--- Get character
  const uint32 c = attributCaractere.charValue () & 0xFFUL ;
//--- Enter instruction list
  generateDecoderForInstructionList (inLexique,
    inCppFile,
    inInstructionList,
    ioFirstStage->mNextStages [c],
    ioDecoderController) ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Write Decoder
#endif

//---------------------------------------------------------------------------*

static void 
writeDecoder (const cDecoderArray * inDecoder,
              const C_String & inLexiqueName,
              C_String & inCppFile) {
  if (inDecoder != NULL) {
    for (sint32 i=0 ; i<256 ; i++) {
      writeDecoder (inDecoder->mNextStages [i], inLexiqueName, inCppFile) ;
    }
  //--- Find the index of the first not null entry
    sint32 firstNotNull = 256 ;
    for (sint32 i=0 ; (i < 256) && (firstNotNull == 256) ; i++) {
      if (inDecoder->mNextStages [i] != NULL) {
        firstNotNull = i ;
      }
    }
    if (firstNotNull == 256) {
      inCppFile << "const sint16 kDecoder_" << inDecoder->mDecoderIndex << " [3] = {\n"
                   "  " << firstNotNull << ", // First entry\n"
                   "  0, // Count\n"
                   "  " << inLexiqueName << "::" << inLexiqueName << "_1_" ;
      generateTerminalSymbolCppName (inDecoder->mTerminal, inCppFile) ;
      inCppFile << " // Default response\n"
                   "} ;\n\n" ;
    }else{
    //--- Find the index of the last not null entry
      sint32 lastNotNull = -1 ;
      for (sint32 i=255 ; (i >= 0) && (lastNotNull < 0) ; i--) {
        if (inDecoder->mNextStages [i] != NULL) {
          lastNotNull = i ;
        }
      }
      const sint32 tabSize = lastNotNull - firstNotNull + 4 ;
      inCppFile << "static const sint16 kDecoder_" << inDecoder->mDecoderIndex << " [" << tabSize << "] = {\n"
                   "  " << firstNotNull << ", // First entry\n"
                   "  " << (lastNotNull - firstNotNull + 1) << ", // Entry Count\n"
                   "  " << inLexiqueName << "::" << inLexiqueName << "_1_" ;
      generateTerminalSymbolCppName (inDecoder->mTerminal, inCppFile) ;
      inCppFile << ", // Default response\n" ;
      for (sint32 i=firstNotNull ; i<=lastNotNull ; i++) {
        if (inDecoder->mNextStages [i] == NULL) {
          inCppFile << "  " <<  inLexiqueName << "::" << inLexiqueName << "_1_" ;
          generateTerminalSymbolCppName (inDecoder->mTerminal, inCppFile) ;
          inCppFile << ((i<lastNotNull) ? "," : "") << "// For character " ;
        }else{
          inCppFile << "  " << - inDecoder->mNextStages [i]->mDecoderIndex
                    << ", // GOTO state " << inDecoder->mNextStages [i]->mDecoderIndex
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
  cDecoderArray * firstStage = NULL ;
//--- Enter tokens from lists
  GGS_tokensInListMap::element_type * currentEntry = inTokensInListMap.firstObject () ;
  while (currentEntry != NULL) {
    C_String key = currentEntry->mKey ;
    const sint32 keyLength = key.length () ;
    cDecoderArray * * currentArrayHandle = & firstStage ;
    for (sint32 i=0 ; i<keyLength ; i++) {
      if ((* currentArrayHandle) == NULL) {
        * currentArrayHandle = decoderController.newDecoderArray (GGS_lstring (inLexique, "")) ;
      }
      const uint32 c = key (i COMMA_HERE) & 0xFFUL ;
      currentArrayHandle = & ((* currentArrayHandle)->mNextStages [c]) ;
    }
    if ((* currentArrayHandle) == NULL) {
      * currentArrayHandle = decoderController.newDecoderArray (currentEntry->mInfo.mTerminalSymbol) ;
    }else if ((* currentArrayHandle)->mTerminal.length () == 0) {
      (* currentArrayHandle)->mTerminal = currentEntry->mInfo.mTerminalSymbol ;
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
        inCppFile,
        currentRule->attributListeInstructions,
        firstStage,
        decoderController) ;
      currentCondition = currentCondition->nextObject () ;
    }
    currentRule = currentRule->nextObject () ;
  }
//--- Write decoder
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
  if (verboseOptionOn) {
    co << "  Scanner decoder: " << decoderController.stateCount () << " state"
       << ((decoderController.stateCount () > 1) ? "s" : "") 
       << "\n" ;
    co.flush () ;
  }
  inCppFile.writeCppTitleComment ("Decoder Tables") ;
  writeDecoder (firstStage, inLexiqueName, inCppFile) ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "/* static const sint16 * gDecoderEntries [" << decoderController.stateCount () << "] = {\n" ;
  for (sint32 i=0 ; i<decoderController.stateCount () ; i++) {
    inCppFile << " kDecoder_" << i ;
    if (i < (decoderController.stateCount () - 1)) {
      inCppFile << ',' ;
    }
    if ((i % 5) == 4) {
      inCppFile << "\n" ;
    }
  }
  inCppFile << "} ; */\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "/* static const sint32 gDecoderSize = " << decoderController.stateCount () << " ; */\n\n" ;
  inCppFile.writeCppHyphenLineComment () ;
}

//---------------------------------------------------------------------------*

