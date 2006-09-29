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
  mLexiqueMapForUse = GGS_M_lexiqueComponents::constructor_emptyMap (*mScannerPtr_ COMMA_HERE) ;
  mSemanticsComponentsMap = GGS_M_semanticsComponents::constructor_emptyMap (*mScannerPtr_ COMMA_HERE) ;
  mSyntaxComponentsMap = GGS_M_syntaxComponents::constructor_emptyMap (*mScannerPtr_ COMMA_HERE) ;
  mGrammarsComponentsMap = GGS_M_grammarComponents::constructor_emptyMap (*mScannerPtr_ COMMA_HERE) ;
  mOptionComponentsMap = GGS_M_optionComponents::constructor_emptyMap (*mScannerPtr_ COMMA_HERE) ;
  mMetamodelComponentMap = GGS_M_metamodelsComponents::constructor_emptyMap (*mScannerPtr_ COMMA_HERE) ;
  mConstraintComponentMap = GGS_M_constraintComponents::constructor_emptyMap (*mScannerPtr_ COMMA_HERE) ;
  mTerminalIO.mFileGenerationStartDir = mScannerPtr_->sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent ("GALGAS_OUTPUT") ;
  const bool ok = mTerminalIO.mFileGenerationStartDir.makeDirectoryIfDoesNotExists () ;
  if (! ok) {
    C_String errorMessage ;
    errorMessage << "cannot create directory '" << mTerminalIO.mFileGenerationStartDir << "'" ;
    mScannerPtr_->galgas_IO_Ptr ()->printFileErrorMessage (mScannerPtr_->sourceFileName (), errorMessage.cString () COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------*

void galgas_LL1_prgm::_afterParsing (const bool inVerboseOptionOn) {
  C_BDD::markAndSweepUnusedNodes () ;
  if (inVerboseOptionOn) {
    co << mScannerPtr_->checkedLineCount () << " checked line"
       << ((mScannerPtr_->checkedLineCount () > 1) ? "s" : "")
       << ", " << mScannerPtr_->preservedLineCount ()
       << " preserved line"
       << ((mScannerPtr_->preservedLineCount () > 1) ? "s" : "")
       << ", "
       << mScannerPtr_->generatedLineCount ()
       << " generated line"
       << ((mScannerPtr_->generatedLineCount () > 1) ? "s" : "")
       << " for "
       << mScannerPtr_->generatedFileCount ()
       << " file"
       << ((mScannerPtr_->generatedFileCount () > 1) ? "s" : "")
       << ".\n" ;
  }
}

//---------------------------------------------------------------------------*
