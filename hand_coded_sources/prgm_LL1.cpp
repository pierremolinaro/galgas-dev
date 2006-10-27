//---------------------------------------------------------------------------*
//                                                                           *
//  Hand-coded file for LL(1) GALGAS compiler                                *
//                                                                           *
//  Copyright (C) 1999-2006 Pierre Molinaro.                                 *
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

#include "bdd/C_BDD.h"

#include "galgas_LL1_prgm.h"

//---------------------------------------------------------------------------*

void galgas_LL1_prgm::_beforeParsing (void) {
  mLexiqueMapForUse = GGS_M_lexiqueComponents::constructor_emptyMap (*_mScannerPtr COMMA_HERE) ;
  mSemanticsComponentsMap = GGS_M_semanticsComponents::constructor_emptyMap (*_mScannerPtr COMMA_HERE) ;
  mSyntaxComponentsMap = GGS_M_syntaxComponents::constructor_emptyMap (*_mScannerPtr COMMA_HERE) ;
  mGrammarsComponentsMap = GGS_M_grammarComponents::constructor_emptyMap (*_mScannerPtr COMMA_HERE) ;
  mOptionComponentsMap = GGS_M_optionComponents::constructor_emptyMap (*_mScannerPtr COMMA_HERE) ;
  mMetamodelComponentMap = GGS_M_metamodelsComponents::constructor_emptyMap (*_mScannerPtr COMMA_HERE) ;
  mConstraintComponentMap = GGS_M_constraintComponents::constructor_emptyMap (*_mScannerPtr COMMA_HERE) ;
  mTerminalIO.mFileGenerationStartDir = _mScannerPtr->sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent ("GALGAS_OUTPUT") ;
  const bool ok = mTerminalIO.mFileGenerationStartDir.makeDirectoryIfDoesNotExists () ;
  if (! ok) {
    C_String errorMessage ;
    errorMessage << "cannot create directory '" << mTerminalIO.mFileGenerationStartDir << "'" ;
    _mScannerPtr->galgas_IO_Ptr ()->printFileErrorMessage (_mScannerPtr->sourceFileName (), errorMessage.cString () COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------*

void galgas_LL1_prgm::_afterParsing (const bool inVerboseOptionOn) {
  if (_mScannerPtr->boolOptionValueFromKeys ("galgas_cli_options", "warningsAsError", true) &&
     (_mScannerPtr->totalErrorCount () == 0) &&
     (_mScannerPtr->totalWarningCount () > 0)) {
    C_String message ;
    message << "warnings are treated as errors" ;
    _mScannerPtr->onTheFlySemanticError (message COMMA_HERE) ;
  }
  C_BDD::markAndSweepUnusedNodes () ;
  if (inVerboseOptionOn) {
    co << _mScannerPtr->checkedLineCount () << " checked line"
       << ((_mScannerPtr->checkedLineCount () > 1) ? "s" : "")
       << ", " << _mScannerPtr->preservedLineCount ()
       << " preserved line"
       << ((_mScannerPtr->preservedLineCount () > 1) ? "s" : "")
       << ", "
       << _mScannerPtr->generatedLineCount ()
       << " generated line"
       << ((_mScannerPtr->generatedLineCount () > 1) ? "s" : "")
       << " for "
       << _mScannerPtr->generatedFileCount ()
       << " file"
       << ((_mScannerPtr->generatedFileCount () > 1) ? "s" : "")
       << ".\n" ;
  }
}

//---------------------------------------------------------------------------*
