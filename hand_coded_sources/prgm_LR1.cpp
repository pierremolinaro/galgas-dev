//---------------------------------------------------------------------------*
//                                                                           *
//  Program overrided methods for LR(1) GALGAS                               *
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

#include "bdd/C_BDD.h"

#include "galgas_LR1_prgm.h"

//---------------------------------------------------------------------------*

void galgas_LR1_prgm::_beforeParsing (void) {
  mLexiqueMapForUse = GGS_M_lexiqueComponents::constructor_empty (HERE) ;
  mSemanticsComponentsMap = GGS_M_semanticsComponents::constructor_empty (HERE) ;
  mSyntaxComponentsMap = GGS_M_syntaxComponents::constructor_empty (HERE) ;
  mGrammarsComponentsMap = GGS_M_grammarComponents::constructor_empty (HERE) ;
  mOptionComponentsMap = GGS_M_optionComponents::constructor_empty (HERE) ;
  mMetamodelComponentMap = GGS_M_metamodelsComponents::constructor_empty (HERE) ;
  mTerminalIO.mFileGenerationStartDir = mScannerPtr_->sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent ("GALGAS_OUTPUT") ;
  const bool ok = mTerminalIO.mFileGenerationStartDir.makeDirectoryIfDoesNotExists () ;
  if (! ok) {
    C_String errorMessage ;
    errorMessage << "cannot create directory '" << mTerminalIO.mFileGenerationStartDir << "'" ;
    mScannerPtr_->galgas_IO_Ptr ()->printFileErrorMessage (mScannerPtr_->sourceFileName (), errorMessage.cString () COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------*

void galgas_LR1_prgm::_afterParsing (void) {
  C_BDD::markAndSweepUnusedNodes () ;
  printf ("%lu checked line%s, %lu preserved line%s, %lu generated line%s for %lu file%s.\n",
          mScannerPtr_->checkedLineCount (), (mScannerPtr_->checkedLineCount () > 1) ? "s" : "",
          mScannerPtr_->preservedLineCount (), (mScannerPtr_->preservedLineCount () > 1) ? "s" : "",
          mScannerPtr_->generatedLineCount (), (mScannerPtr_->generatedLineCount () > 1) ? "s" : "",
          mScannerPtr_->generatedFileCount (), (mScannerPtr_->generatedFileCount () > 1) ? "s" : "") ;
}

//---------------------------------------------------------------------------*
