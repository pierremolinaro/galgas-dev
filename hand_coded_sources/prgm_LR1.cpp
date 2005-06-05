//---------------------------------------------------------------------------*
//                                                                           *
//  Program overrided methods for LR(1) GALGAS                               *                                                               *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes*
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

void galgas_LR1_prgm::beforeParsing_ (void) {
  mLexiqueMapForUse = GGS_M_lexiqueComponents::constructor_empty () ;
  mSemanticsComponentsMap = GGS_M_semanticsComponents::constructor_empty () ;
  mSyntaxComponentsMap = GGS_M_syntaxComponents::constructor_empty () ;
  mGrammarsComponentsMap = GGS_M_grammarComponents::constructor_empty () ;
  mOptionComponentsMap = GGS_M_optionComponents::constructor_empty () ;
  mTerminalIO.mFileGenerationStartDir = mScanner_.getSourceFile ().getPath () + "/GALGAS_OUTPUT" ;
  const bool ok = mTerminalIO.mFileGenerationStartDir.makeDirectoryIfDoesNotExists () ;
  if (! ok) {
    C_String errorMessage ;
    errorMessage << "cannot create directory '" << mTerminalIO.mFileGenerationStartDir << "'" ;
    mScanner_.getGalgasIOptr ()->printFileErrorMessage (mScanner_.getSourceFile (), errorMessage.getStringPtr ()) ;
  }
}

//--------------------------------------------------------------------------*

void galgas_LR1_prgm::afterParsing_ (void) {
  C_BDD::markAndSweepUnusedNodes () ;
  printf ("%lu checked line%s, %lu preserved line%s, %lu generated line%s for %lu file%s.\n",
          mScanner_.getCheckedLines (), (mScanner_.getCheckedLines () > 1) ? "s" : "",
          mScanner_.getPreservedLines (), (mScanner_.getPreservedLines () > 1) ? "s" : "",
          mScanner_.getGeneratedLines (), (mScanner_.getGeneratedLines () > 1) ? "s" : "",
          mScanner_.getGeneratedFileCount (), (mScanner_.getGeneratedFileCount () > 1) ? "s" : "") ;
}

//---------------------------------------------------------------------------*
