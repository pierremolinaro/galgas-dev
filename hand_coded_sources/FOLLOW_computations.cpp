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

#include "files/C_HTML_FileWrite.h"
#include "bdd/C_BDD_Set2.h"
#include "bdd/C_BDD_Set3.h"

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
                   const cVocabulary & inVocabulary,
                   const TC_UniqueArray <bool> & inNonterminalSymbolsDerivingInEmpty,
                   const C_BDD_Set2 & inFIRSTsets,
                   const sint32 inTerminalSymbolsCount,
                   C_BDD_Set2 & outFOLLOWsets,
                   TC_UniqueArray <TC_UniqueArray <sint32> > & outFOLLOWarray,
                   sint32 & outIterationsCount) {
//--- Build the directFollower and lastOfProduction sets
  C_BDD_Descriptor descriptor = inFIRSTsets.getDescriptor1 () ;
  C_BDD_Set2 directFollower (inFIRSTsets) ; directFollower.clear () ;
  C_BDD_Set3 lastOfProduction (descriptor, descriptor, descriptor) ;
  C_BDD_Set2 s (inFIRSTsets) ; s.clear () ;
  C_BDD_Set2 temp2 (inFIRSTsets) ; temp2.clear () ;
  C_BDD_Set2 current (inFIRSTsets) ; current.clear () ;
  C_BDD_Set3 d (lastOfProduction) ;
  C_BDD_Set3 left (lastOfProduction) ;
  C_BDD_Set3 temp3 (lastOfProduction) ;
  for (sint32 ip=0 ; ip<inProductionRules.length () ; ip++) {
    const cProduction & p = inProductionRules (ip COMMA_HERE) ;
    const sint32 derivationLength = p.aDerivation.count () ;
  //--- Direct follower
    if (derivationLength > 1) { // The right sequence has more than one element (from 0 to derivationLength-1)
      for (sint32 i=1 ; i<derivationLength ; i++) {
        current.initDimension1 (C_BDD::kEqual, (uint32) p.aDerivation (i-1 COMMA_HERE)) ;
        s.clear () ;
        sint32 j = i ;
        do{
          temp2.initDimension2 (C_BDD::kEqual, (uint32) p.aDerivation (j COMMA_HERE)) ;
          s |= temp2 ;
          j++ ;
        }while ((j<derivationLength) && inNonterminalSymbolsDerivingInEmpty (p.aDerivation (j-1 COMMA_HERE) COMMA_HERE)) ;
        directFollower |= current & s ;
      }
    }
  //--- Last of production
    if (derivationLength > 0) { // The right sequence is not empty
      left.initDimension3 (C_BDD::kEqual, (uint32) p.aNumeroNonTerminalGauche) ;
      d.clear () ;
      sint32 j = derivationLength-1 ; // last one of right sequence
      do{
      
        temp3.initDimension1 (C_BDD::kEqual, (uint32) p.aDerivation (j COMMA_HERE)) ;
        d |= temp3 ;
        j -- ;
      }while ((j>=0) && inNonterminalSymbolsDerivingInEmpty (p.aDerivation (j+1 COMMA_HERE) COMMA_HERE)) ;
      lastOfProduction |= left & d ;
    }
  }

//--- Compute constant for FOLLOW calculus  
  C_BDD_Set3 temp3_bis (lastOfProduction) ;
  temp3.initDimension13 (directFollower) ;
  temp3_bis.initDimension32 (inFIRSTsets) ;
  const C_BDD_Set2 constant = directFollower | (temp3 & temp3_bis).projeterSurAxe12 () ;

//--- Loop for computing FOLLOW
//       suivants [g, d] += directFollower [g, d] | ?y (facteurConstant [g, d, y] & suivants [y, d]) ;
  C_BDD_Set2 v (outFOLLOWsets) ;
  outFOLLOWsets.clear () ;
  outIterationsCount = 0 ;
  do{
    v = outFOLLOWsets ; outIterationsCount ++ ;
    outFOLLOWsets = constant ;
    temp3.initDimension32 (v) ;
    outFOLLOWsets |= (lastOfProduction & temp3).projeterSurAxe12 () ;
  }while (! v.isEqualTo (outFOLLOWsets COMMA_HERE)) ;

//--- Suppress nonterminal symbols in the FOLLOW sets
  temp2.initDimension2 (C_BDD::kLowerOrEqual, (uint32) (inTerminalSymbolsCount - 1)) ;
  outFOLLOWsets &= temp2 ;

//--- FOLLOW, with nonterminal symbols followed by empty string
  C_BDD_Set1 temp1 (descriptor) ;
  temp1.init (C_BDD::kEqual, (uint16) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  outFOLLOWsets |= inNonterminalSymbolsFollowedByEmpty * temp1 ;

//--- FOLLOW sets, given with an array
  { TC_UniqueArray <TC_UniqueArray <sint32> > tempArray (inVocabulary.getAllSymbolsCount () COMMA_HERE) ;
    swap (outFOLLOWarray, tempArray) ;
  }
  outFOLLOWsets.getArray (outFOLLOWarray) ;
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
checkFOLLOWsets (C_HTML_FileWrite & inHTMLfile,
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
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "Every useful nonterminal symbol should:"
                " either have a non empty FOLLOW,"
                " either can be followed by the empty string,"
                " either both."
                " In no way none of them : it is an error." ;
  inHTMLfile.outputRawData ("</p>") ;

//--- Obtenir les non terminaux en erreur
  C_BDD_Set1 nterminauxAverifier (inUsefulSymbols) ;
  nterminauxAverifier.init (C_BDD::kGreaterOrEqual, (uint32) inVocabulary.getTerminalSymbolsCount ()) ;
  temp1.init (C_BDD::kLowerOrEqual, (uint32) (inVocabulary.getAllSymbolsCount () - 1)) ;
  nterminauxAverifier &= temp1 ;
  const C_BDD_Set1 ntErreurSuivants = nterminauxAverifier & inUsefulSymbols & ~(suivantsPlusVide.projeterSurAxe1 ()) ; 

//--- Afficher les non-terminaux en erreur
  const uint32 n = ntErreurSuivants.getValuesCount () ;
  if (n == 0L) {
    inHTMLfile.outputRawData ("<p><span class=\"success\">") ;
    inHTMLfile << "All FOLLOW are correct." ;
    inHTMLfile.outputRawData ("</span></p>") ;
    if (inVerboseOptionOn) {
      co << "ok.\n" ;
      co.flush () ;
    }
  }else{
    inHTMLfile.outputRawData ("<p><span class=\"error\">") ;
    inHTMLfile << "Error : "
               << n
               << " nonterminal symbol"
               << ((n > 1) ? "s have" : " has")
               << " an empty FOLLOW :\n" ;
    inHTMLfile.outputRawData ("</span></p>") ;
    TC_UniqueArray <bool> array ;
    ntErreurSuivants.getArray (array) ;
    inHTMLfile.outputRawData ("<table class=\"result\">") ;
    const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
    for (sint32 symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
      if (array (symbol COMMA_HERE)) {
        inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        inVocabulary.printInFile (inHTMLfile, symbol COMMA_HERE) ;
        inHTMLfile.outputRawData ("</code></td></tr>") ;
      }
    }
    inHTMLfile.outputRawData ("</table>") ;
    if (inVerboseOptionOn) {
      co << "error.\n" ;
      co.flush () ;
    }
  }
  return n == 0L ; 
}

//---------------------------------------------------------------------------*

void
FOLLOW_computations (const cPureBNFproductionsList & inPureBNFproductions,
                     C_HTML_FileWrite & inHTMLfile,
                     const cVocabulary & inVocabulary,
                     const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                     const C_BDD_Set1 & inUsefulSymbols,
                     const C_BDD_Set2 & inFIRSTsets,
                     const C_BDD_Set1 & inNonterminalSymbolsFollowedByEmpty,
                     C_BDD_Set2 & outFOLLOWsets,
                     TC_UniqueArray <TC_UniqueArray <sint32> > & outFOLLOWarray,
                     bool & outOk,
                     const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Computing the FOLLOW sets... " ;
    co.flush () ;
  }
//--- Print in BNF file
  inHTMLfile.outputRawData ("<p></p>") ;
  inHTMLfile.writeCppTitleComment ("Computing the FOLLOW sets", "title") ;
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
                           outFOLLOWsets,
                           inVerboseOptionOn) ;
}

//---------------------------------------------------------------------------*
