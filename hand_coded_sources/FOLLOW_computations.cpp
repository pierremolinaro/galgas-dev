//---------------------------------------------------------------------------*
//                                                                           *
// Routines for FOLLOWS sets                                                 *
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

#include "files/C_html_file_write.h"
#include "bdd/C_bdd_set2.h"
#include "bdd/C_bdd_set3.h"

//---------------------------------------------------------------------------*

#include "FOLLOW_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//---------------------------------------------------------------------------*
//                                                                           *
//    C O M P U T E    F O L L O W    S E T S                                *
//                                                                           *
//---------------------------------------------------------------------------*

static void
computeFOLLOWsets (const cPureBNFproductionsList & inProductionRules,
                   const C_bdd_set1 & inNonterminalSymbolsFollowedByEmpty,
                   const cVocabulary & inVocabulary,
                   const TC_unique_dyn_array <bool> & inNonterminalSymbolsDerivingInEmpty,
                   const C_bdd_set2 & inFIRSTsets,
                   const sint32 inTerminalSymbolsCount,
                   C_bdd_set2 & outFOLLOWsets,
                   TC_unique_dyn_array <TC_unique_grow_array <sint32> > & outFOLLOWarray,
                   sint32 & outIterationsCount) {
//--- Build the directFollower and lastOfProduction sets
  C_bdd_descriptor descriptor = inFIRSTsets.getDescriptor1 () ;
  C_bdd_set2 directFollower (inFIRSTsets) ; directFollower.clear () ;
  C_bdd_set3 lastOfProduction (descriptor, descriptor, descriptor) ;
  C_bdd_set2 s (inFIRSTsets) ; s.clear () ;
  C_bdd_set2 temp2 (inFIRSTsets) ; temp2.clear () ;
  C_bdd_set2 current (inFIRSTsets) ; current.clear () ;
  C_bdd_set3 d (lastOfProduction) ;
  C_bdd_set3 left (lastOfProduction) ;
  C_bdd_set3 temp3 (lastOfProduction) ;
  for (sint32 ip=0 ; ip<inProductionRules.getLength () ; ip++) {
    const cProduction & p = inProductionRules (ip COMMA_HERE) ;
    const sint32 derivationLength = p.aDerivation.getCount () ;
  //--- Direct follower
    if (derivationLength > 1) { // The right sequence has more than one element (from 0 to derivationLength-1)
      for (sint32 i=1 ; i<derivationLength ; i++) {
        current.initDimension1 (C_bdd::kEqual, (uint32) p.aDerivation (i-1 COMMA_HERE)) ;
        s.clear () ;
        sint32 j = i ;
        do{
          temp2.initDimension2 (C_bdd::kEqual, (uint32) p.aDerivation (j COMMA_HERE)) ;
          s |= temp2 ;
          j++ ;
        }while ((j<derivationLength) && inNonterminalSymbolsDerivingInEmpty (p.aDerivation (j-1 COMMA_HERE) COMMA_HERE)) ;
        directFollower |= current & s ;
      }
    }
  //--- Last of production
    if (derivationLength > 0) { // The right sequence is not empty
      left.initDimension3 (C_bdd::kEqual, (uint32) p.aNumeroNonTerminalGauche) ;
      d.clear () ;
      sint32 j = derivationLength-1 ; // last one of right sequence
      do{
      
        temp3.initDimension1 (C_bdd::kEqual, (uint32) p.aDerivation (j COMMA_HERE)) ;
        d |= temp3 ;
        j -- ;
      }while ((j>=0) && inNonterminalSymbolsDerivingInEmpty (p.aDerivation (j+1 COMMA_HERE) COMMA_HERE)) ;
      lastOfProduction |= left & d ;
    }
  }

//--- Compute constant for FOLLOW calculus  
  C_bdd_set3 temp3_bis (lastOfProduction) ;
  temp3.initDimension13 (directFollower) ;
  temp3_bis.initDimension32 (inFIRSTsets) ;
  const C_bdd_set2 constant = directFollower | (temp3 & temp3_bis).projeterSurAxe12 () ;

//--- Loop for computing FOLLOW
//       suivants [g, d] += directFollower [g, d] | ?y (facteurConstant [g, d, y] & suivants [y, d]) ;
  C_bdd_set2 v (outFOLLOWsets) ;
  outFOLLOWsets.clear () ;
  outIterationsCount = 0 ;
  do{
    v = outFOLLOWsets ; outIterationsCount ++ ;
    outFOLLOWsets = constant ;
    temp3.initDimension32 (v) ;
    outFOLLOWsets |= (lastOfProduction & temp3).projeterSurAxe12 () ;
  }while (! v.isEqualTo (outFOLLOWsets COMMA_HERE)) ;

//--- Suppress nonterminal symbols in the FOLLOW sets
  temp2.initDimension2 (C_bdd::kLowerOrEqual, (uint32) (inTerminalSymbolsCount - 1)) ;
  outFOLLOWsets &= temp2 ;

//--- FOLLOW, with nonterminal symbols followed by empty string
  C_bdd_set1 temp1 (descriptor) ;
  temp1.init (C_bdd::kEqual, (uint16) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  outFOLLOWsets |= inNonterminalSymbolsFollowedByEmpty * temp1 ;

//--- FOLLOW sets, given with an array
  { TC_unique_dyn_array <TC_unique_grow_array <sint32> > tempArray (inVocabulary.getAllSymbolsCount () COMMA_HERE) ;
    swap (outFOLLOWarray, tempArray) ;
  }
  outFOLLOWsets.getArray (outFOLLOWarray) ;
}

//---------------------------------------------------------------------------*

static void
printFOLLOWsets (const TC_unique_dyn_array <TC_unique_grow_array <sint32> > & inFOLLOWarray,
                 const cVocabulary & inVocabulary,
                 C_html_file_write & inHTMLfile,
                 const uint32 inValuesCount,
                 const sint32 inIterationsCount) {
//--- Print messages
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "Calculus completed in "
             << inIterationsCount
             << " iterations, "
             << inValuesCount
             << " values ;\n"
                "'$$' means the nonterminal symbol can be followed by empty string (see step 6) ;\n\n"
                "the followings of terminal symbols are given for information.\n";
  inHTMLfile.outputRawData ("</p>") ;

//--- Print FOLLOW sets (don't display last symbol, the '<>' added non terminal)
  inHTMLfile.outputRawData ("<table class=\"result\">") ;
  const sint32 symbolsToDisplayCount = inFOLLOWarray.getCount () - 1 ;
  for (sint32 i=0 ; i<symbolsToDisplayCount ; i++) {
    if (i != inVocabulary.getEmptyStringTerminalSymbolIndex ()) { // Don't print follower of empty string
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td><code>") ;
      inVocabulary.printInFile (inHTMLfile, i COMMA_HERE) ;
      inHTMLfile.outputRawData ("</code></td><td><code>") ;
      TC_unique_grow_array <sint32> & s = inFOLLOWarray (i COMMA_HERE) ;
      const sint32 n = s.getCount () ;
      for (sint32 j=0 ; j<n ; j++) {
        inHTMLfile << ' ' ;
        inVocabulary.printInFile (inHTMLfile, s (j COMMA_HERE) COMMA_HERE) ;
      }
      inHTMLfile.outputRawData ("</code></td></tr>") ;
    }
  }
  inHTMLfile.outputRawData ("</table>") ;
}

//---------------------------------------------------------------------------*

static bool
checkFOLLOWsets (C_html_file_write & inHTMLfile,
                 const C_bdd_set1 & inNonterminalSymbolsFollowedByEmpty,
                 const cVocabulary & inVocabulary,
                 const C_bdd_set1 & inUsefulSymbols,
                 const C_bdd_set2 & inFOLLOWsets) {

//--- Construire le BDD des non-terminaux pouvant être suivis du vide
  C_bdd_set1 temp1 (inUsefulSymbols) ;
  temp1.init (C_bdd::kEqual, (uint16) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  const C_bdd_set2 ntVide = inNonterminalSymbolsFollowedByEmpty * temp1 ;

//--- Suivants, avec nt pouvant être suivis du vide, limités aux non terminaux utilisateur
  const C_bdd_set2 suivantsPlusVide = ntVide | inFOLLOWsets ;

//--- Vérifier les suivants
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "Every useful nonterminal symbol must :"
                " either have a non empty FOLLOW,"
                " either can be followed by the empty string,"
                " either both."
                " In no way none of them : it is an error." ;
  inHTMLfile.outputRawData ("</p>") ;

//--- Obtenir les non terminaux en erreur
  C_bdd_set1 nterminauxAverifier (inUsefulSymbols) ;
  nterminauxAverifier.init (C_bdd::kGreaterOrEqual, (uint32) inVocabulary.getTerminalSymbolsCount ()) ;
  temp1.init (C_bdd::kLowerOrEqual, (uint32) (inVocabulary.getAllSymbolsCount () - 1)) ;
  nterminauxAverifier &= temp1 ;
  const C_bdd_set1 ntErreurSuivants = nterminauxAverifier & inUsefulSymbols & ~(suivantsPlusVide.projeterSurAxe1 ()) ; 

//--- Afficher les non-terminaux en erreur
  const uint32 n = ntErreurSuivants.getValuesCount () ;
  if (n == 0L) {
    inHTMLfile.outputRawData ("<p><span class=\"success\">") ;
    inHTMLfile << "All FOLLOW are correct." ;
    inHTMLfile.outputRawData ("</span></p>") ;
    co << "ok.\n" ;
    co.flush () ;
  }else{
    inHTMLfile.outputRawData ("<p><span class=\"error\">") ;
    inHTMLfile << "Error : "
               << n
               << " nonterminal symbol"
               << ((n > 1) ? "s have" : " has")
               << " an empty FOLLOW :\n" ;
    inHTMLfile.outputRawData ("</span></p>") ;
    TC_unique_dyn_array <bool> array ;
    ntErreurSuivants.getArray (array) ;
    inHTMLfile.outputRawData ("<table class=\"result\">") ;
    const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
    for (sint32 symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
      if (array (symbol COMMA_HERE)) {
        inHTMLfile.outputRawData ("<tr class=\"result_line\"><td><code>") ;
        inVocabulary.printInFile (inHTMLfile, symbol COMMA_HERE) ;
        inHTMLfile.outputRawData ("</code></td></tr>") ;
      }
    }
    inHTMLfile.outputRawData ("</table>") ;
    co << "error.\n" ;
    co.flush () ;
  }
  return n == 0L ; 
}

//---------------------------------------------------------------------------*

void
FOLLOW_computations (const cPureBNFproductionsList & inPureBNFproductions,
                     C_html_file_write & inHTMLfile,
                     const cVocabulary & inVocabulary,
                     const TC_unique_dyn_array <bool> & inVocabularyDerivingToEmpty_Array,
                     const C_bdd_set1 & inUsefulSymbols,
                     const C_bdd_set2 & inFIRSTsets,
                     const C_bdd_set1 & inNonterminalSymbolsFollowedByEmpty,
                     C_bdd_set2 & outFOLLOWsets,
                     TC_unique_dyn_array <TC_unique_grow_array <sint32> > & outFOLLOWarray,
                     bool & outOk) {
//--- Console display
  co << "  Computing the FOLLOW sets... " ;

//--- Print in BNF file
  inHTMLfile.outputRawData ("<p></p>") ;
  inHTMLfile.writeTitleComment ("Computing the FOLLOW sets", "title") ;

//--- Compute FOLLOW (with BDD)
  sint32 iterationsCount = 0 ;
  computeFOLLOWsets (inPureBNFproductions,
                     inNonterminalSymbolsFollowedByEmpty,
                     inVocabulary,
                     inVocabularyDerivingToEmpty_Array,
                     inFIRSTsets,
                     inVocabulary.getTerminalSymbolsCount (),
                     outFOLLOWsets,
                     outFOLLOWarray,
                     iterationsCount) ;

//--- Print FOLLOW sets
  printFOLLOWsets (outFOLLOWarray,
                   inVocabulary,
                   inHTMLfile,
                   outFOLLOWsets.getValuesCount (),
                   iterationsCount) ;


//--- Check FOLLOW
  outOk = checkFOLLOWsets (inHTMLfile,
                           inNonterminalSymbolsFollowedByEmpty,
                           inVocabulary,
                           inUsefulSymbols,
                           outFOLLOWsets) ;
}

//---------------------------------------------------------------------------*
