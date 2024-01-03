//--------------------------------------------------------------------------------------------------
//
// Routines for computing FOLLOWS
//
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.
//                                           
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           
//--------------------------------------------------------------------------------------------------

#include "HTMLString.h"
#include "C_Relation.h"

//--------------------------------------------------------------------------------------------------

#include "FOLLOW_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//--------------------------------------------------------------------------------------------------
//
//    C O M P U T E    F O L L O W    S E T S
//
//--------------------------------------------------------------------------------------------------

static void computeFOLLOWsets (const cPureBNFproductionsList & inProductionRules,
                               const C_Relation & inNonterminalSymbolsFollowedByEmpty,
                               const cVocabulary & inVocabulary,
                               const TC_UniqueArray <bool> & inNonterminalSymbolsDerivingInEmpty,
                               const C_Relation & inFIRSTsets,
                               const int32_t inTerminalSymbolsCount,
                               C_Relation & outFOLLOWsets,
                               TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFOLLOWarray,
                               int32_t & outIterationsCount) {
  C_Relation directFollowers (inFIRSTsets.configuration(), false) ;
  directFollowers.addVariable ("last", inFIRSTsets.configuration().typeForVariable(0 COMMA_HERE)) ;
  C_Relation lastOfProduction (directFollowers.configuration(), false) ;
//--- Build the directFollower and lastOfProduction sets
  for (int32_t ip=0 ; ip<inProductionRules.mProductionArray.count () ; ip++) {
    const cProduction & p = inProductionRules.mProductionArray (ip COMMA_HERE) ;
    const int32_t derivationLength = p.derivationLength () ;
  //--- Direct follower
    if (derivationLength > 1) { // The right sequence has more than one element (from 0 to derivationLength-1)
      for (int32_t i=1 ; i<derivationLength ; i++) {
        const C_Relation current (directFollowers.configuration(), 0, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (i-1 COMMA_HERE) COMMA_HERE) ;
        C_Relation s (directFollowers.configuration(), false) ;
        int32_t j = i ;
        do{
          const C_Relation t (directFollowers.configuration(), 1, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
          s.orWith (t COMMA_HERE) ;
          j++ ;
        }while ((j<derivationLength) && inNonterminalSymbolsDerivingInEmpty (p.derivationAtIndex (j-1 COMMA_HERE) COMMA_HERE)) ;
        directFollowers.orWith (current.andOp (s COMMA_HERE) COMMA_HERE) ;
      }
    }
  //--- Last of production
    if (derivationLength > 0) { // The right sequence is not empty
      const C_Relation left (lastOfProduction.configuration (), 2, C_BDD::kEqual, (uint32_t) p.leftNonTerminalIndex () COMMA_HERE) ;
      C_Relation d (lastOfProduction.configuration (), false) ;
      int32_t j = derivationLength-1 ; // last one of right sequence
      do{
        const C_Relation t (lastOfProduction.configuration (), 0, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
        d.orWith (t COMMA_HERE) ;
        j -- ;
      }while ((j>=0) && inNonterminalSymbolsDerivingInEmpty (p.derivationAtIndex (j+1 COMMA_HERE) COMMA_HERE)) ;
      lastOfProduction.orWith (left.andOp (d COMMA_HERE) COMMA_HERE) ;
    }
  }

//--- Compute constant for FOLLOW calculus
  const C_Relation temp3 = directFollowers.swap021 (HERE) ;

  C_Relation extendedFIRSTsets = inFIRSTsets ;
  extendedFIRSTsets.addVariable ("last", inFIRSTsets.configuration().typeForVariable(0 COMMA_HERE)) ;
  const C_Relation temp3_bis = extendedFIRSTsets.swap210 (HERE) ;

  const C_Relation constant = directFollowers.orOp (temp3.andOp (temp3_bis COMMA_HERE).exitsOnVariable (2 COMMA_HERE) COMMA_HERE) ;

//--- Loop for computing FOLLOW
//       follows [g, d] += directFollower [g, d] | ?y (constant [g, d, y] & follows [y, d]) ;
  outFOLLOWsets = constant ;
  C_Relation v = outFOLLOWsets ;
  outIterationsCount = 0 ;
  do{
    v = outFOLLOWsets ; outIterationsCount ++ ;
    outFOLLOWsets = constant ;
    const C_Relation t = v.swap210 (HERE) ;
    outFOLLOWsets.orWith ((lastOfProduction.andOp (t COMMA_HERE)).exitsOnVariable (2 COMMA_HERE) COMMA_HERE) ;
  }while (v != outFOLLOWsets) ;

  //--- Suppress nonterminal symbols in the FOLLOW sets
  outFOLLOWsets.andWith (C_Relation (outFOLLOWsets.configuration(), 1, C_BDD::kLowerOrEqual, (uint32_t) (inTerminalSymbolsCount - 1) COMMA_HERE) COMMA_HERE) ;

//--- FOLLOW, with nonterminal symbols followed by empty string
  const C_Relation emptyString (outFOLLOWsets.configuration(), 1, C_BDD::kEqual, (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex () COMMA_HERE) ;
  C_Relation nonterminalSymbolsFollowedByEmpty = inNonterminalSymbolsFollowedByEmpty ;
  nonterminalSymbolsFollowedByEmpty.addVariable ("", inFIRSTsets.configuration().typeForVariable (0 COMMA_HERE)) ;
  nonterminalSymbolsFollowedByEmpty.addVariable ("", inFIRSTsets.configuration().typeForVariable (0 COMMA_HERE)) ;
  outFOLLOWsets.orWith (nonterminalSymbolsFollowedByEmpty.andOp (emptyString COMMA_HERE) COMMA_HERE) ;
  outFOLLOWsets = outFOLLOWsets.relationByDeletingLastVariable (HERE) ;

//--- FOLLOW sets, given with an array
  { TC_UniqueArray <TC_UniqueArray <uint64_t> > tempArray (inVocabulary.getAllSymbolsCount () COMMA_HERE) ;
    swap (outFOLLOWarray, tempArray) ;
  }
  outFOLLOWsets.getArray (outFOLLOWarray COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

static void
printFOLLOWsets (const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFOLLOWarray,
                 const cVocabulary & inVocabulary,
                 HTMLString & inHTMLfile,
                 const uint64_t inValuesCount,
                 const int32_t inIterationsCount) {
//--- Print messages
  inHTMLfile.addRawData ("<p>") ;
  inHTMLfile.addString ("Calculus completed in ") ;
  inHTMLfile.addSigned (inIterationsCount) ;
  inHTMLfile.addString (" iterations, ") ;
  inHTMLfile.addUnsigned (inValuesCount) ;
  inHTMLfile.addString (" values ;\n"
                "'$$' means the nonterminal symbol can be followed by empty string (see step 6) ;\n\n"
                "the followings of terminal symbols are given for information.\n") ;
  inHTMLfile.addRawData ("</p>") ;

//--- Print FOLLOW sets (don't display last symbol, the '<>' added non terminal)
  inHTMLfile.addRawData ("<table class=\"result\">") ;
  const int32_t symbolsToDisplayCount = inFOLLOWarray.count () - 1 ;
  for (int32_t i=0 ; i<symbolsToDisplayCount ; i++) {
    if (i != inVocabulary.getEmptyStringTerminalSymbolIndex ()) { // Don't print follower of empty string
      inHTMLfile.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      inVocabulary.printInFile (inHTMLfile, i COMMA_HERE) ;
      inHTMLfile.addRawData ("</code></td><td><code>") ;
      const int32_t n = inFOLLOWarray (i COMMA_HERE).count () ;
      for (int32_t j=0 ; j<n ; j++) {
        inHTMLfile.addString (" ") ;
        inVocabulary.printInFile (inHTMLfile, (int32_t) inFOLLOWarray (i COMMA_HERE) (j COMMA_HERE) COMMA_HERE) ;
      }
      inHTMLfile.addRawData ("</code></td></tr>") ;
    }
  }
  inHTMLfile.addRawData ("</table>") ;
}

//--------------------------------------------------------------------------------------------------

static bool
checkFOLLOWsets (HTMLString & ioHTMLFileContents,
                 const bool inPopulateHTMLHelperString,
                 const C_Relation & inNonterminalSymbolsFollowedByEmpty,
                 const cVocabulary & inVocabulary,
                 const C_Relation & inUsefulSymbols,
                 const C_Relation & inFOLLOWsets,
                 const bool inVerboseOptionOn) {

//--- Construire le BDD des non-terminaux pouvant etre suivis du vide
  C_Relation nonterminalSymbolsFollowedByEmpty = inNonterminalSymbolsFollowedByEmpty ;
  nonterminalSymbolsFollowedByEmpty.addVariable ("", inNonterminalSymbolsFollowedByEmpty.configuration().typeForVariable (0 COMMA_HERE)) ;

  const C_Relation temp1 (inFOLLOWsets.configuration(), 1, C_BDD::kEqual, (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex () COMMA_HERE) ;
  const C_Relation ntVide = nonterminalSymbolsFollowedByEmpty.andOp (temp1 COMMA_HERE) ; ;

//--- Suivants, avec nt pouvant etre suivis du vide, limites aux non terminaux utilisateur
  const C_Relation suivantsPlusVide = ntVide.orOp (inFOLLOWsets COMMA_HERE) ;

//--- Verifier les suivants
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p>") ;
    ioHTMLFileContents.addString ("Every useful nonterminal symbol should:"
                   " either have a non empty FOLLOW,"
                   " either can be followed by the empty string,"
                   " either both."
                   " In no way none of them : it is an error.") ;
    ioHTMLFileContents.addRawData ("</p>") ;
  }
//--- Obtenir les non terminaux en erreur
  C_Relation nterminauxAverifier (inUsefulSymbols.configuration(), 0, C_BDD::kGreaterOrEqual, (uint32_t) inVocabulary.getTerminalSymbolsCount () COMMA_HERE) ;
  const C_Relation temp (inUsefulSymbols.configuration(), 0, C_BDD::kLowerOrEqual, (uint32_t) inVocabulary.getAllSymbolsCount () - 1 COMMA_HERE) ;
  nterminauxAverifier.andWith (temp COMMA_HERE) ; ;
  const C_Relation ntErreurSuivants = nterminauxAverifier.andOp (inUsefulSymbols COMMA_HERE).andOp (~(suivantsPlusVide.relationByDeletingLastVariable (HERE)) COMMA_HERE) ;

//--- Afficher les non-terminaux en erreur
  const uint64_t n = ntErreurSuivants.value64Count () ;
  if (inVerboseOptionOn) {
    if (n == 0) {
      gCout.addString ("ok.\n") ;
    }else{
      gCout.addString ("error.\n") ;
    }
    gCout.flush () ;
  }
  if (inPopulateHTMLHelperString) {
    if (n == 0) {
      ioHTMLFileContents.addRawData ("<p><span class=\"success\">") ;
      ioHTMLFileContents.addString ("All FOLLOW are correct.") ;
      ioHTMLFileContents.addRawData ("</span></p>") ;
    }else{
      ioHTMLFileContents.addRawData ("<p><span class=\"error\">") ;
      ioHTMLFileContents.addString ("Error : ") ;
      ioHTMLFileContents.addUnsigned (n) ;
      ioHTMLFileContents.addString (" nonterminal symbol") ;
      ioHTMLFileContents.addString ((n > 1) ? "s have" : " has") ;
      ioHTMLFileContents.addString (" an empty FOLLOW :\n") ;
      ioHTMLFileContents.addRawData ("</span></p>") ;

      TC_UniqueArray <uint64_t> array ;
      ntErreurSuivants.getValueArray (array) ;
      ioHTMLFileContents.addRawData ("<table class=\"result\">") ;
      for (int32_t i=0 ; i < array.count () ; i++) {
        const int32_t symbol = (int32_t) array (i COMMA_HERE) ;
        if (symbol >= inVocabulary.getTerminalSymbolsCount ()) {
          ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
          inVocabulary.printInFile (ioHTMLFileContents, symbol COMMA_HERE) ;
          ioHTMLFileContents.addRawData ("</code></td></tr>") ;
        }
      }
      ioHTMLFileContents.addRawData ("</table>") ;
    }
  }
  return n == 0 ;
}

//--------------------------------------------------------------------------------------------------

void FOLLOW_computations (const cPureBNFproductionsList & inPureBNFproductions,
                          HTMLString & ioHTMLFileContents,
                          const bool inPopulateHTMLHelperString,
                          const cVocabulary & inVocabulary,
                          const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                          const C_Relation & inUsefulSymbols,
                          const C_Relation & inFIRSTsets,
                          const C_Relation & inNonterminalSymbolsFollowedByEmpty,
                          C_Relation & outFOLLOWsets,
                          TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFOLLOWarray,
                          bool & outOk,
                          const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    gCout.addString ("  FOLLOW sets... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p></p>") ;
    ioHTMLFileContents.addCppTitleComment ("Computing the FOLLOW sets", "title") ;
  }
//--- Compute FOLLOW (with BDD)
  int32_t iterationsCount = 0 ;
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
  if (inPopulateHTMLHelperString) {
    printFOLLOWsets (outFOLLOWarray,
                     inVocabulary,
                     ioHTMLFileContents,
                     outFOLLOWsets.value64Count (),
                     iterationsCount) ;
  }

//--- Check FOLLOW
  outOk = checkFOLLOWsets (ioHTMLFileContents,
                           inPopulateHTMLHelperString,
                           inNonterminalSymbolsFollowedByEmpty,
                           inVocabulary,
                           inUsefulSymbols,
                           outFOLLOWsets,
                           inVerboseOptionOn) ;
}

//--------------------------------------------------------------------------------------------------
