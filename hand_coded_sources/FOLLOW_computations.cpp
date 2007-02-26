//---------------------------------------------------------------------------*
//                                                                           *
// Routines for FOLLOWS sets                                                 *
//                                                                           *
//  Copyright (C) 1999, ..., 2007 Pierre Molinaro.                           *
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

#include "files/C_HTML_FileWrite.h"
#include "bdd/C_BDD_Set2.h"

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
                   const C_BDD_Set1 & inNonterminalSymbolsFollowedByEmpty,
                   const uint16 inBDDBitCount,
                   const cVocabulary & inVocabulary,
                   const TC_UniqueArray <bool> & inNonterminalSymbolsDerivingInEmpty,
                   const C_BDD_Set2 & inFIRSTsets,
                   const sint32 inTerminalSymbolsCount,
                   C_BDD_Set2 & ex_outFOLLOWsets,
                   TC_UniqueArray <TC_UniqueArray <sint32> > & outFOLLOWarray,
                   sint32 & outIterationsCount) {
  C_BDD directFollowers ;
  C_BDD lastOfProduction ;
  const uint16 twoBDDBitCount = (uint16) (inBDDBitCount + inBDDBitCount) ;
//--- Build the directFollower and lastOfProduction sets
  for (sint32 ip=0 ; ip<inProductionRules.length () ; ip++) {
    const cProduction & p = inProductionRules (ip COMMA_HERE) ;
    const sint32 derivationLength = p.aDerivation.count () ;
  //--- Direct follower
    if (derivationLength > 1) { // The right sequence has more than one element (from 0 to derivationLength-1)
      for (sint32 i=1 ; i<derivationLength ; i++) {
        const C_BDD current = C_BDD::varCompareConst (0, inBDDBitCount, C_BDD::kEqual, (uint32) p.aDerivation (i-1 COMMA_HERE)) ;
        C_BDD s ;
        sint32 j = i ;
        do{
          const C_BDD t = C_BDD::varCompareConst (inBDDBitCount, inBDDBitCount, C_BDD::kEqual, (uint32) p.aDerivation (j COMMA_HERE)) ;
          s |= t ;
          j++ ;
        }while ((j<derivationLength) && inNonterminalSymbolsDerivingInEmpty (p.aDerivation (j-1 COMMA_HERE) COMMA_HERE)) ;
        directFollowers |= current & s ;
      }
    }
  //--- Last of production
    if (derivationLength > 0) { // The right sequence is not empty
      const C_BDD left = C_BDD::varCompareConst (twoBDDBitCount,
                                                 inBDDBitCount,
                                                 C_BDD::kEqual,
                                                 (uint32) p.aNumeroNonTerminalGauche) ;
      C_BDD d ;
      sint32 j = derivationLength-1 ; // last one of right sequence
      do{
        const C_BDD t = C_BDD::varCompareConst (0,
                                                inBDDBitCount,
                                                C_BDD::kEqual,
                                                (uint32) p.aDerivation (j COMMA_HERE)) ;      
        d |= t ;
        j -- ;
      }while ((j>=0) && inNonterminalSymbolsDerivingInEmpty (p.aDerivation (j+1 COMMA_HERE) COMMA_HERE)) ;
      lastOfProduction |= left & d ;
    }
  }

//--- Compute constant for FOLLOW calculus
  const C_BDD temp3 = directFollowers.swap132 (inBDDBitCount, inBDDBitCount, inBDDBitCount) ;
  const C_BDD temp3_bis = inFIRSTsets.bdd ().swap321 (inBDDBitCount, inBDDBitCount, inBDDBitCount) ;
  const C_BDD constant = directFollowers | (temp3 & temp3_bis).existsOnBitsAfterNumber (twoBDDBitCount) ;

//--- Loop for computing FOLLOW
//       follows [g, d] += directFollower [g, d] | ?y (constant [g, d, y] & follows [y, d]) ;
  C_BDD outFOLLOWsets = constant ;
  C_BDD v ;
  outIterationsCount = 0 ;
  do{
    v = outFOLLOWsets ; outIterationsCount ++ ;
    outFOLLOWsets = constant ;
    const C_BDD t = v.swap321 (inBDDBitCount, inBDDBitCount, inBDDBitCount) ;
    outFOLLOWsets |= (lastOfProduction & t).existsOnBitsAfterNumber (twoBDDBitCount) ;
  }while (! v.isEqualToBDD (outFOLLOWsets)) ;

//--- Suppress nonterminal symbols in the FOLLOW sets
  outFOLLOWsets &= C_BDD::varCompareConst (inBDDBitCount,
                                           inBDDBitCount,
                                           C_BDD::kLowerOrEqual,
                                           (uint32) (inTerminalSymbolsCount - 1)) ;

//--- FOLLOW, with nonterminal symbols followed by empty string
  const C_BDD emptyStringBDD = C_BDD::varCompareConst (inBDDBitCount,
                                           inBDDBitCount,
                                           C_BDD::kEqual,
                                           (uint32) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  outFOLLOWsets |= inNonterminalSymbolsFollowedByEmpty.bdd () & emptyStringBDD ;
  
//--- FOLLOW sets, given with an array
  { TC_UniqueArray <TC_UniqueArray <sint32> > tempArray (inVocabulary.getAllSymbolsCount () COMMA_HERE) ;
    swap (outFOLLOWarray, tempArray) ;
  }
  outFOLLOWsets.getArray2 (outFOLLOWarray,
                           (uint32) inVocabulary.getAllSymbolsCount (),
                           inBDDBitCount,
                           inBDDBitCount) ;

  C_BDD_Descriptor descriptor = inFIRSTsets.getDescriptor1 () ;
  ex_outFOLLOWsets = C_BDD_Set2 (descriptor, descriptor, outFOLLOWsets) ;
}

//---------------------------------------------------------------------------*

static void
printFOLLOWsets (const TC_UniqueArray <TC_UniqueArray <sint32> > & inFOLLOWarray,
                 const cVocabulary & inVocabulary,
                 C_HTML_FileWrite & inHTMLfile,
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
  const sint32 symbolsToDisplayCount = inFOLLOWarray.count () - 1 ;
  for (sint32 i=0 ; i<symbolsToDisplayCount ; i++) {
    if (i != inVocabulary.getEmptyStringTerminalSymbolIndex ()) { // Don't print follower of empty string
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      inVocabulary.printInFile (inHTMLfile, i COMMA_HERE) ;
      inHTMLfile.outputRawData ("</code></td><td><code>") ;
      TC_UniqueArray <sint32> & s = inFOLLOWarray (i COMMA_HERE) ;
      const sint32 n = s.count () ;
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
checkFOLLOWsets (C_HTML_FileWrite * inHTMLfile,
                 const C_BDD_Set1 & inNonterminalSymbolsFollowedByEmpty,
                 const cVocabulary & inVocabulary,
                 const C_BDD_Set1 & inUsefulSymbols,
                 const C_BDD_Set2 & inFOLLOWsets,
                 const bool inVerboseOptionOn) {

//--- Construire le BDD des non-terminaux pouvant etre suivis du vide
  C_BDD_Set1 temp1 (inUsefulSymbols) ;
  temp1.init (C_BDD::kEqual, (uint16) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  const C_BDD_Set2 ntVide = inNonterminalSymbolsFollowedByEmpty * temp1 ;

//--- Suivants, avec nt pouvant etre suivis du vide, limites aux non terminaux utilisateur
  const C_BDD_Set2 suivantsPlusVide = ntVide | inFOLLOWsets ;

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
  C_BDD_Set1 nterminauxAverifier (inUsefulSymbols) ;
  nterminauxAverifier.init (C_BDD::kGreaterOrEqual, (uint32) inVocabulary.getTerminalSymbolsCount ()) ;
  temp1.init (C_BDD::kLowerOrEqual, (uint32) (inVocabulary.getAllSymbolsCount () - 1)) ;
  nterminauxAverifier &= temp1 ;
  const C_BDD_Set1 ntErreurSuivants = nterminauxAverifier & inUsefulSymbols & ~(suivantsPlusVide.projeterSurAxe1 ()) ; 

//--- Afficher les non-terminaux en erreur
  const uint32 n = ntErreurSuivants.getValuesCount () ;
  if (inVerboseOptionOn) {
    if (n == 0L) {
      co << "ok.\n" ;
    }else{
      co << "error.\n" ;
    }
    co.flush () ;
  }
  if (inHTMLfile != NULL) {
    if (n == 0L) {
      inHTMLfile->outputRawData ("<p><span class=\"success\">") ;
      *inHTMLfile << "All FOLLOW are correct." ;
      inHTMLfile->outputRawData ("</span></p>") ;
    }else{
      inHTMLfile->outputRawData ("<p><span class=\"error\">") ;
      *inHTMLfile << "Error : "
                  << n
                  << " nonterminal symbol"
                  << ((n > 1) ? "s have" : " has")
                  << " an empty FOLLOW :\n" ;
      inHTMLfile->outputRawData ("</span></p>") ;
      TC_UniqueArray <bool> array ;
      ntErreurSuivants.getArray (array) ;
      inHTMLfile->outputRawData ("<table class=\"result\">") ;
      const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
      for (sint32 symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
        if (array (symbol COMMA_HERE)) {
          inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
          inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
          inHTMLfile->outputRawData ("</code></td></tr>") ;
        }
      }
      inHTMLfile->outputRawData ("</table>") ;
    }
  }
  return n == 0L ; 
}

//---------------------------------------------------------------------------*

void
FOLLOW_computations (const cPureBNFproductionsList & inPureBNFproductions,
                     C_HTML_FileWrite * inHTMLfile,
                     const uint16 inBDDBitCount,
                     const cVocabulary & inVocabulary,
                     const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                     const C_BDD_Set1 & inUsefulSymbols,
                     const C_BDD_Set2 & inFIRSTsets,
                     const C_BDD_Set1 & inNonterminalSymbolsFollowedByEmpty,
                     C_BDD_Set2 & ex_outFOLLOWsets,
                     TC_UniqueArray <TC_UniqueArray <sint32> > & outFOLLOWarray,
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
    inHTMLfile->writeCppTitleComment ("Computing the FOLLOW sets", "title") ;
  }
//--- Compute FOLLOW (with BDD)
  sint32 iterationsCount = 0 ;
  computeFOLLOWsets (inPureBNFproductions,
                     inNonterminalSymbolsFollowedByEmpty,
                     inBDDBitCount,
                     inVocabulary,
                     inVocabularyDerivingToEmpty_Array,
                     inFIRSTsets,
                     inVocabulary.getTerminalSymbolsCount (),
                     ex_outFOLLOWsets,
                     outFOLLOWarray,
                     iterationsCount) ;

//--- Print FOLLOW sets
  if (inHTMLfile != NULL) {
    printFOLLOWsets (outFOLLOWarray,
                     inVocabulary,
                     *inHTMLfile,
                     ex_outFOLLOWsets.getValuesCount (),
                     iterationsCount) ;
  }

//--- Check FOLLOW
  outOk = checkFOLLOWsets (inHTMLfile,
                           inNonterminalSymbolsFollowedByEmpty,
                           inVocabulary,
                           inUsefulSymbols,
                           ex_outFOLLOWsets,
                           inVerboseOptionOn) ;
}

//---------------------------------------------------------------------------*
