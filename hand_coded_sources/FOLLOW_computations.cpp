//-----------------------------------------------------------------------------*
//                                                                             *
// Routines for computing FOLLOWS                                              *
//                                                                             *
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.                             *
//                                                                             *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//                                                                             *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "files/C_HTML_FileWrite.h"
#include "bdd/C_Relation.h"
#include "bdd/C_BDD_Set2.h"

//-----------------------------------------------------------------------------*

#include "FOLLOW_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//-----------------------------------------------------------------------------*
//                                                                             *
//    C O M P U T E    F O L L O W    S E T S                                  *
//                                                                             *
//-----------------------------------------------------------------------------*

static void
computeFOLLOWsets (const cPureBNFproductionsList & inProductionRules,
                   const C_BDD_Set1 & inNonterminalSymbolsFollowedByEmptyEX,
                   const C_Relation & inNonterminalSymbolsFollowedByEmpty,
                   const uint16_t inBDDBitCount,
                   const cVocabulary & inVocabulary,
                   const TC_UniqueArray <bool> & inNonterminalSymbolsDerivingInEmpty,
                   const C_BDD_Set2 & inFIRSTsetsEX,
                   const C_Relation & inFIRSTsets,
                   const int32_t inTerminalSymbolsCount,
                   C_BDD_Set2 & outFOLLOWsetsEXEX,
                   C_Relation & outFOLLOWsets,
                   TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFOLLOWarray,
                   int32_t & outIterationsCount) {
  C_BDD directFollowersEX ;
  C_BDD lastOfProductionEX ;
  C_Relation directFollowers (inFIRSTsets.configuration(), false) ;
  directFollowers.addVariable ("last", inFIRSTsets.configuration().typeForVariable(0 COMMA_HERE)) ;
  C_Relation lastOfProduction (directFollowers.configuration(), false) ;
  const uint16_t twoBDDBitCount = (uint16_t) (inBDDBitCount + inBDDBitCount) ;
//--- Build the directFollower and lastOfProduction sets
  for (int32_t ip=0 ; ip<inProductionRules.length () ; ip++) {
    const cProduction & p = inProductionRules (ip COMMA_HERE) ;
    const int32_t derivationLength = p.derivationLength () ;
  //--- Direct follower
    if (derivationLength > 1) { // The right sequence has more than one element (from 0 to derivationLength-1)
      for (int32_t i=1 ; i<derivationLength ; i++) {
        const C_BDD currentEX = C_BDD::varCompareConst (0, inBDDBitCount, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (i-1 COMMA_HERE)) ;
        const C_Relation current (directFollowers.configuration(), 0, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (i-1 COMMA_HERE) COMMA_HERE) ;
        C_Relation s (directFollowers.configuration(), false) ;
        C_BDD EXs ;
        int32_t j = i ;
        do{
          const C_Relation t (directFollowers.configuration(), 1, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
          const C_BDD EXt = C_BDD::varCompareConst (inBDDBitCount, inBDDBitCount, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (j COMMA_HERE)) ;
          EXs |= EXt ;
          s.orWith (t COMMA_HERE) ;
          j++ ;
        }while ((j<derivationLength) && inNonterminalSymbolsDerivingInEmpty (p.derivationAtIndex (j-1 COMMA_HERE) COMMA_HERE)) ;
        directFollowersEX |= currentEX & EXs ;
        directFollowers.orWith (current.andOp (s COMMA_HERE) COMMA_HERE) ;
      }
      if (directFollowers.bdd () != directFollowersEX){
        printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
        exit (1) ;
      }
    }
  //--- Last of production
    if (derivationLength > 0) { // The right sequence is not empty
      const C_Relation left (lastOfProduction.configuration (), 2, C_BDD::kEqual, (uint32_t) p.leftNonTerminalIndex () COMMA_HERE) ;
      const C_BDD leftEX = C_BDD::varCompareConst (twoBDDBitCount, inBDDBitCount, C_BDD::kEqual, (uint32_t) p.leftNonTerminalIndex ()) ;
      C_Relation d (lastOfProduction.configuration (), false) ;
      C_BDD EXd ;
      int32_t j = derivationLength-1 ; // last one of right sequence
      do{
        const C_BDD EXt = C_BDD::varCompareConst (0, inBDDBitCount, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (j COMMA_HERE)) ;      
        const C_Relation t (lastOfProduction.configuration (), 0, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;      
        EXd |= EXt ;
        d.orWith (t COMMA_HERE) ;
        j -- ;
      }while ((j>=0) && inNonterminalSymbolsDerivingInEmpty (p.derivationAtIndex (j+1 COMMA_HERE) COMMA_HERE)) ;
      lastOfProductionEX |= leftEX & EXd ;
      lastOfProduction.orWith (left.andOp (d COMMA_HERE) COMMA_HERE) ;
      if (lastOfProduction.bdd () != lastOfProductionEX){
        printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
        exit (1) ;
      }
    }
  }

  if (directFollowers.bdd () != directFollowersEX){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  if (lastOfProduction.bdd () != lastOfProductionEX){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Compute constant for FOLLOW calculus
  const C_Relation temp3 = directFollowers.swap132 (HERE) ;
  const C_BDD temp3EX = directFollowersEX.swap132 (inBDDBitCount, inBDDBitCount, inBDDBitCount) ;
  if (temp3.bdd () != temp3EX){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

  C_Relation extendedFIRSTsets = inFIRSTsets ;
  extendedFIRSTsets.addVariable ("last", inFIRSTsets.configuration().typeForVariable(0 COMMA_HERE)) ;
  const C_Relation temp3_bis = extendedFIRSTsets.swap321 (HERE) ;
  const C_BDD temp3_bisEX = inFIRSTsetsEX.bdd ().swap321 (inBDDBitCount, inBDDBitCount, inBDDBitCount) ;
  if (temp3_bis.bdd () != temp3_bisEX){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

  const C_BDD constantEX = directFollowersEX | (temp3EX & temp3_bisEX).existsOnBitsAfterNumber (twoBDDBitCount) ;
  const C_Relation constant = directFollowers.orOp (temp3.andOp (temp3_bis COMMA_HERE).exitsOnVariable (2 COMMA_HERE) COMMA_HERE) ;
  if (constant.bdd () != constantEX){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Loop for computing FOLLOW
//       follows [g, d] += directFollower [g, d] | ?y (constant [g, d, y] & follows [y, d]) ;
  outFOLLOWsets = constant ;
  C_Relation v = outFOLLOWsets ;
  outIterationsCount = 0 ;
  do{
    v = outFOLLOWsets ; outIterationsCount ++ ;
    outFOLLOWsets = constant ;
    const C_Relation t = v.swap321 (HERE) ;
    outFOLLOWsets.orWith ((lastOfProduction.andOp (t COMMA_HERE)).exitsOnVariable (2 COMMA_HERE) COMMA_HERE) ;
  }while (v != outFOLLOWsets) ;
  
  
  C_BDD FOLLOWsetsEX = constantEX ;
  C_BDD EXv ;
  int32_t iterationsCount = 0 ;
  do{
    EXv = FOLLOWsetsEX ; iterationsCount ++ ;
    FOLLOWsetsEX = constantEX ;
    const C_BDD t = EXv.swap321 (inBDDBitCount, inBDDBitCount, inBDDBitCount) ;
    FOLLOWsetsEX |= (lastOfProductionEX & t).existsOnBitsAfterNumber (twoBDDBitCount) ;
  }while (EXv != FOLLOWsetsEX) ;

  if (outIterationsCount != iterationsCount){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

  if (outFOLLOWsets.bdd () != FOLLOWsetsEX){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Suppress nonterminal symbols in the FOLLOW sets
  FOLLOWsetsEX &= C_BDD::varCompareConst (inBDDBitCount,
                                           inBDDBitCount,
                                           C_BDD::kLowerOrEqual,
                                           (uint32_t) (inTerminalSymbolsCount - 1)) ;
  outFOLLOWsets.andWith (C_Relation (outFOLLOWsets.configuration(), 1, C_BDD::kLowerOrEqual, (uint32_t) (inTerminalSymbolsCount - 1) COMMA_HERE) COMMA_HERE) ;
  if (outFOLLOWsets.bdd () != FOLLOWsetsEX){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- FOLLOW, with nonterminal symbols followed by empty string
  const C_Relation emptyString (outFOLLOWsets.configuration(), 1, C_BDD::kEqual, (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex () COMMA_HERE) ;
  C_Relation nonterminalSymbolsFollowedByEmpty = inNonterminalSymbolsFollowedByEmpty ;
  nonterminalSymbolsFollowedByEmpty.addVariable ("", inFIRSTsets.configuration().typeForVariable (0 COMMA_HERE)) ;
  nonterminalSymbolsFollowedByEmpty.addVariable ("", inFIRSTsets.configuration().typeForVariable (0 COMMA_HERE)) ;
  outFOLLOWsets.orWith (nonterminalSymbolsFollowedByEmpty.andOp (emptyString COMMA_HERE) COMMA_HERE) ;
  outFOLLOWsets = outFOLLOWsets.relationByDeletingLastVariable (HERE) ;

  const C_BDD emptyStringBDD = C_BDD::varCompareConst (inBDDBitCount,
                                           inBDDBitCount,
                                           C_BDD::kEqual,
                                           (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  FOLLOWsetsEX |= inNonterminalSymbolsFollowedByEmptyEX.bdd () & emptyStringBDD ;

  if (outFOLLOWsets.bdd () != FOLLOWsetsEX){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  
//--- FOLLOW sets, given with an array
  { TC_UniqueArray <TC_UniqueArray <uint64_t> > tempArray (inVocabulary.getAllSymbolsCount () COMMA_HERE) ;
    swap (outFOLLOWarray, tempArray) ;
  }
  outFOLLOWsets.getArray (outFOLLOWarray COMMA_HERE) ;

  TC_UniqueArray <TC_UniqueArray <uint64_t> > tempArray (inVocabulary.getAllSymbolsCount () COMMA_HERE) ;
  FOLLOWsetsEX.getArray2 (tempArray,
                         (uint32_t) inVocabulary.getAllSymbolsCount (),
                         inBDDBitCount,
                         inBDDBitCount) ;

  if (outFOLLOWarray != tempArray){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

  C_BDD_Descriptor descriptor = inFIRSTsetsEX.getDescriptor1 () ;
  outFOLLOWsetsEXEX = C_BDD_Set2 (descriptor, descriptor, FOLLOWsetsEX) ;
}

//-----------------------------------------------------------------------------*

static void
printFOLLOWsets (const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFOLLOWarray,
                 const cVocabulary & inVocabulary,
                 C_HTML_FileWrite & inHTMLfile,
                 const uint64_t inValuesCount,
                 const int32_t inIterationsCount) {
//--- Print messages
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "Calculus completed in " ;
  inHTMLfile.appendSigned (inIterationsCount) ;
  inHTMLfile << " iterations, " ;
  inHTMLfile.appendUnsigned (inValuesCount) ;
  inHTMLfile << " values ;\n"
                "'$$' means the nonterminal symbol can be followed by empty string (see step 6) ;\n\n"
                "the followings of terminal symbols are given for information.\n";
  inHTMLfile.outputRawData ("</p>") ;

//--- Print FOLLOW sets (don't display last symbol, the '<>' added non terminal)
  inHTMLfile.outputRawData ("<table class=\"result\">") ;
  const int32_t symbolsToDisplayCount = inFOLLOWarray.count () - 1 ;
  for (int32_t i=0 ; i<symbolsToDisplayCount ; i++) {
    if (i != inVocabulary.getEmptyStringTerminalSymbolIndex ()) { // Don't print follower of empty string
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      inVocabulary.printInFile (inHTMLfile, i COMMA_HERE) ;
      inHTMLfile.outputRawData ("</code></td><td><code>") ;
      const int32_t n = inFOLLOWarray (i COMMA_HERE).count () ;
      for (int32_t j=0 ; j<n ; j++) {
        inHTMLfile << " " ;
        inVocabulary.printInFile (inHTMLfile, (int32_t) inFOLLOWarray (i COMMA_HERE) (j COMMA_HERE) COMMA_HERE) ;
      }
      inHTMLfile.outputRawData ("</code></td></tr>") ;
    }
  }
  inHTMLfile.outputRawData ("</table>") ;
}

//-----------------------------------------------------------------------------*

static bool
checkFOLLOWsets (C_HTML_FileWrite * inHTMLfile,
                 const C_BDD_Set1 & inNonterminalSymbolsFollowedByEmptyEX,
                 const C_Relation & inNonterminalSymbolsFollowedByEmpty,
                 const cVocabulary & inVocabulary,
                 const C_BDD_Set1 & inUsefulSymbolsEX,
                 const C_Relation & inUsefulSymbols,
                 const C_BDD_Set2 & inFOLLOWsetsEX,
                 const C_Relation & inFOLLOWsets,
                 const bool inVerboseOptionOn) {

  if (inNonterminalSymbolsFollowedByEmpty.bdd () != inNonterminalSymbolsFollowedByEmptyEX.bdd ()){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Construire le BDD des non-terminaux pouvant etre suivis du vide
  C_Relation nonterminalSymbolsFollowedByEmpty = inNonterminalSymbolsFollowedByEmpty ;
  nonterminalSymbolsFollowedByEmpty.addVariable ("", inNonterminalSymbolsFollowedByEmpty.configuration().typeForVariable (0 COMMA_HERE)) ;

  const C_Relation temp1 (inFOLLOWsets.configuration(), 1, C_BDD::kEqual, (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex () COMMA_HERE) ;
  const C_Relation ntVide = nonterminalSymbolsFollowedByEmpty.andOp (temp1 COMMA_HERE) ; ;

  C_BDD_Set1 temp1EX (inUsefulSymbolsEX) ;
  temp1EX.init (C_BDD::kEqual, (uint16_t) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  const C_BDD_Set2 ntVideEX = inNonterminalSymbolsFollowedByEmptyEX * temp1EX ;

  if (ntVideEX.bdd () != ntVide.bdd ()){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Suivants, avec nt pouvant etre suivis du vide, limites aux non terminaux utilisateur
  const C_Relation suivantsPlusVide = ntVide.orOp (inFOLLOWsets COMMA_HERE) ;
  const C_BDD_Set2 suivantsPlusVideEX = ntVideEX | inFOLLOWsetsEX ;

  if (suivantsPlusVide.bdd () != suivantsPlusVideEX.bdd ()){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Verifier les suivants
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    *inHTMLfile << "Every useful nonterminal symbol should:"
                   " either have a non empty FOLLOW,"
                   " either can be followed by the empty string,"
                   " either both."
                   " In no way none of them : it is an error." ;
    inHTMLfile->outputRawData ("</p>") ;
  }
//--- Obtenir les non terminaux en erreur
  C_Relation nterminauxAverifier (inUsefulSymbols.configuration(), 0, C_BDD::kGreaterOrEqual, (uint32_t) inVocabulary.getTerminalSymbolsCount () COMMA_HERE) ;
  const C_Relation temp (inUsefulSymbols.configuration(), 0, C_BDD::kLowerOrEqual, (uint32_t) inVocabulary.getAllSymbolsCount () - 1 COMMA_HERE) ;
  nterminauxAverifier.andWith (temp COMMA_HERE) ; ;
  const C_Relation ntErreurSuivants = nterminauxAverifier.andOp (inUsefulSymbols COMMA_HERE).andOp (~(suivantsPlusVide.relationByDeletingLastVariable (HERE)) COMMA_HERE) ; 

  C_BDD_Set1 nterminauxAverifierEX (inUsefulSymbolsEX) ;
  nterminauxAverifierEX.init (C_BDD::kGreaterOrEqual, (uint32_t) inVocabulary.getTerminalSymbolsCount ()) ;

  temp1EX.init (C_BDD::kLowerOrEqual, (uint32_t) (inVocabulary.getAllSymbolsCount () - 1)) ;
  nterminauxAverifierEX &= temp1EX ;
  const C_BDD_Set1 ntErreurSuivantsEX = nterminauxAverifierEX & inUsefulSymbolsEX & ~(suivantsPlusVideEX.projeterSurAxe1 ()) ; 

  if (ntErreurSuivants.bdd () != ntErreurSuivantsEX.bdd ()){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

  if (ntErreurSuivants.value64Count () != ntErreurSuivantsEX.getValuesCount ()){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Afficher les non-terminaux en erreur
  const uint64_t n = ntErreurSuivants.value64Count () ;
  if (inVerboseOptionOn) {
    if (n == 0) {
      co << "ok.\n" ;
    }else{
      co << "error.\n" ;
    }
    co.flush () ;
  }
  if (inHTMLfile != NULL) {
    if (n == 0) {
      inHTMLfile->outputRawData ("<p><span class=\"success\">") ;
      *inHTMLfile << "All FOLLOW are correct." ;
      inHTMLfile->outputRawData ("</span></p>") ;
    }else{
      inHTMLfile->outputRawData ("<p><span class=\"error\">") ;
      *inHTMLfile << "Error : " ;
      inHTMLfile->appendUnsigned (n) ;
      *inHTMLfile << " nonterminal symbol"
                  << ((n > 1) ? "s have" : " has")
                  << " an empty FOLLOW :\n" ;
      inHTMLfile->outputRawData ("</span></p>") ;

      const int32_t symbolsCount = inVocabulary.getAllSymbolsCount () ;
      TC_UniqueArray <uint64_t> array ;
      ntErreurSuivants.getValueArray (array) ;
      inHTMLfile->outputRawData ("<table class=\"result\">") ;
      for (int32_t i=0 ; i < array.count () ; i++) {
        const int32_t symbol = (int32_t) array (i COMMA_HERE) ;
        if (symbol >= inVocabulary.getTerminalSymbolsCount ()) {
          inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
          inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
          inHTMLfile->outputRawData ("</code></td></tr>") ;
        }
      }
      inHTMLfile->outputRawData ("</table>") ;

      TC_UniqueArray <bool> arrayEX ;
      ntErreurSuivantsEX.getArray (arrayEX) ;
      inHTMLfile->outputRawData ("<table class=\"result\">") ;
      for (int32_t symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
        if (arrayEX (symbol COMMA_HERE)) {
          inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
          inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
          inHTMLfile->outputRawData ("</code></td></tr>") ;
        }
      }
      inHTMLfile->outputRawData ("</table>") ;
    }
  }
  return n == 0 ; 
}

//-----------------------------------------------------------------------------*

void
FOLLOW_computations (const cPureBNFproductionsList & inPureBNFproductions,
                     C_HTML_FileWrite * inHTMLfile,
                     const uint16_t inBDDBitCount,
                     const cVocabulary & inVocabulary,
                     const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                     const C_BDD_Set1 & inUsefulSymbolsEX,
                     const C_Relation & inUsefulSymbols,
                     const C_BDD_Set2 & inFIRSTsetsEX,
                     const C_Relation & inFIRSTsets,
                     const C_BDD_Set1 & inNonterminalSymbolsFollowedByEmptyEX,
                     const C_Relation & inNonterminalSymbolsFollowedByEmpty,
                     C_BDD_Set2 & outFOLLOWsetsEX,
                     C_Relation & outFOLLOWsets,
                     TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFOLLOWarray,
                     bool & outOk,
                     const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Computing the FOLLOW sets... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p></p>") ;
    inHTMLfile->appendCppTitleComment ("Computing the FOLLOW sets", "title") ;
  }
//--- Compute FOLLOW (with BDD)
  int32_t iterationsCount = 0 ;
  computeFOLLOWsets (inPureBNFproductions,
                     inNonterminalSymbolsFollowedByEmptyEX,
                     inNonterminalSymbolsFollowedByEmpty,
                     inBDDBitCount,
                     inVocabulary,
                     inVocabularyDerivingToEmpty_Array,
                     inFIRSTsetsEX,
                     inFIRSTsets,
                     inVocabulary.getTerminalSymbolsCount (),
                     outFOLLOWsetsEX,
                     outFOLLOWsets,
                     outFOLLOWarray,
                     iterationsCount) ;

  if (outFOLLOWsets.bdd () != outFOLLOWsetsEX.bdd()){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  if (outFOLLOWsets.value64Count () != outFOLLOWsetsEX.getValuesCount()){
    printf ("\n********* FOLLOW SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Print FOLLOW sets
  if (inHTMLfile != NULL) {
    printFOLLOWsets (outFOLLOWarray,
                     inVocabulary,
                     *inHTMLfile,
                     outFOLLOWsets.value64Count (),
                     iterationsCount) ;
  }

//--- Check FOLLOW
  outOk = checkFOLLOWsets (inHTMLfile,
                           inNonterminalSymbolsFollowedByEmptyEX,
                           inNonterminalSymbolsFollowedByEmpty,
                           inVocabulary,
                           inUsefulSymbolsEX,
                           inUsefulSymbols,
                           outFOLLOWsetsEX,
                           outFOLLOWsets,
                           inVerboseOptionOn) ;
}

//-----------------------------------------------------------------------------*
