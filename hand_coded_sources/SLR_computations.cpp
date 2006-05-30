//---------------------------------------------------------------------------*
//                                                                           *
//     Routines for SLR (1) grammar computations                             *
//                                                                           *
//  Copyright (C) 2002 Pierre Molinaro.                                      *
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
//   more details.                                                           *
//                                                                           *
//---------------------------------------------------------------------------*

#include "files/C_HTML_FileWrite.h"
#include "files/C_TextFileWrite.h"
#include "generic_arraies/TC_Array2.h"

//---------------------------------------------------------------------------*

#include "SLR_computations.h"
#include "grammarComputations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "common_semantics.h"
#include "semantics_instructions.h"
#include "scanner_generation.h"

//---------------------------------------------------------------------------*
//                                                                           *
//    C L A S S    F O R   L R 0    I T E M                                  *
//                                                                           *
//---------------------------------------------------------------------------*

class c_LR0_item {
  public : sint32 mProductionRuleIndex ;
  public : sint32 mLocationIndex ;
//--- Default constructor
  public : c_LR0_item (void) ;
//--- Constructor
  public : c_LR0_item (const sint32 inProductionRuleIndex,
                       const sint32 inLocationIndex) ;
//--- Compare two items
  public : static sint32 compare_LR0_items (const c_LR0_item & inItem1,
                                            const c_LR0_item & inItem2) ;
} ;

//---------------------------------------------------------------------------*

c_LR0_item::c_LR0_item (void) {
  mProductionRuleIndex = -1 ;
  mLocationIndex = -1 ;
}

//---------------------------------------------------------------------------*

c_LR0_item::c_LR0_item (const sint32 inProductionRuleIndex,
                        const sint32 inLocationIndex) {
  mProductionRuleIndex = inProductionRuleIndex ;
  mLocationIndex = inLocationIndex ;
}

//---------------------------------------------------------------------------*

sint32 c_LR0_item::
compare_LR0_items (const c_LR0_item & inItem1,
                   const c_LR0_item & inItem2) {
  sint32 result = inItem1.mProductionRuleIndex - inItem2.mProductionRuleIndex ;
  if (result == 0) {
    result = inItem1.mLocationIndex - inItem2.mLocationIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//    C L A S S    F O R   L R 0    I T E M S    S E T                       *
//                                                                           *
//---------------------------------------------------------------------------*

class c_LR0_items_set {
//--- Private data
  private : TC_UniqueArray <c_LR0_item> mItemsSet ;

//--- Default constructor
  public : c_LR0_items_set (void) ;

//--- Add a new LR0 item (returns false if already present)
  public : bool add_LR0_item (const sint32 inProductionRuleIndex,
                              const sint32 inLocationIndex) ;

//--- Get transitions LR0 item set from a state for a symbol
  public : void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const sint32 inSymbol,
                                   c_LR0_items_set & out_LR0_item_set) ;

//--- Closing the LR0 items set
  public : void close_items_set (const cPureBNFproductionsList & inProductionRules,
                                 const sint32 inTerminalSymbolsCount) ;

//--- Empty set ?
  public : bool isEmptySet (void) const ;

//--- Display LR0 items set
  public : void display (const cPureBNFproductionsList & inProductionRules,
                         const cVocabulary & inVocabulary,
                         C_HTML_FileWrite & inHTMLfile) ;

//--- Compare two items sets
  public : static sint32 compare_LR0_items_sets (const c_LR0_items_set & inItemsSet1,
                                               const c_LR0_items_set & inItemsSet2) ;

//--- Search from a LR0 items set (used for building 'reduce' actions of SLR table)
  public : void getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <sint32> & outProductionsSet,
                                                    bool & outAcceptCondition) ;

//--- No copy
  private : c_LR0_items_set (c_LR0_items_set &) ;
  private : void operator = (c_LR0_items_set &) ;

//--- Friend
  friend void swap (c_LR0_items_set & ioOperand1, c_LR0_items_set & ioOperand2) ;
} ;

//---------------------------------------------------------------------------*

c_LR0_items_set::c_LR0_items_set (void) {
}

//---------------------------------------------------------------------------*

bool c_LR0_items_set::
add_LR0_item (const sint32 inProductionRuleIndex,
              const sint32 inLocationIndex) {
  c_LR0_item item (inProductionRuleIndex, inLocationIndex) ;
//--- First, search for this item
  bool found = false ;
  for (sint32 i=0 ; (i<mItemsSet.count ()) && ! found ; i++) {
    found = c_LR0_item::compare_LR0_items (mItemsSet (i COMMA_HERE), item) == 0 ;
  }
//--- If not found, add it
  if (! found) {
    mItemsSet.addObject (item) ;
    mItemsSet.sortArrayUsingFunction (c_LR0_item::compare_LR0_items) ;
  }
  return ! found ;
}

//---------------------------------------------------------------------------*


void c_LR0_items_set::
close_items_set (const cPureBNFproductionsList & inProductionRules,
                 const sint32 inTerminalSymbolsCount) {
  bool loop = true ;
  while (loop) {
    loop = false ;
    for (sint32 i=0 ; i<mItemsSet.count () ; i++) {
      const sint32 locationIndex = mItemsSet (i COMMA_HERE).mLocationIndex ;
      const sint32 productionRule = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
      if (locationIndex < inProductionRules (productionRule COMMA_HERE).aDerivation.count ()) {
        const sint32 prodX = inProductionRules (productionRule COMMA_HERE).aDerivation (locationIndex COMMA_HERE) - inTerminalSymbolsCount ;
        if (prodX >= 0) {
          const sint32 first = inProductionRules.tableauIndicePremiereProduction (prodX COMMA_HERE) ;
          MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
          const sint32 last = inProductionRules.tableauIndiceDerniereProduction (prodX COMMA_HERE) ;
          MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
          for (sint32 j=first ; j<=last ; j++) {
            const sint32 ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
            const bool inserted = add_LR0_item (ip, 0) ;
            loop = loop || inserted ;
          }
        }
      }
    }
  }
}

//---------------------------------------------------------------------------*

bool c_LR0_items_set::isEmptySet (void) const {
  return mItemsSet.count () == 0 ;
}

//---------------------------------------------------------------------------*

void c_LR0_items_set::
display (const cPureBNFproductionsList & inProductionRules,
         const cVocabulary & inVocabulary,
         C_HTML_FileWrite & inHTMLfile) {
  for (sint32 i=0 ; i<mItemsSet.count () ; i++) {
    const cProduction & p = inProductionRules (mItemsSet (i COMMA_HERE).mProductionRuleIndex COMMA_HERE) ;
    const sint32 location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    inHTMLfile.outputRawData ("<span class=\"list\">") ;
    inHTMLfile << "[" ;
    inVocabulary.printInFile (inHTMLfile, p.aNumeroNonTerminalGauche COMMA_HERE) ;
    inHTMLfile << " ->" ;
    for (sint32 j=0 ; j<p.aDerivation.count () ; j++) {
      if (j == location) {
        inHTMLfile << " ." ;      
      }
      inHTMLfile << ' ' ;
      inVocabulary.printInFile (inHTMLfile, p.aDerivation (j COMMA_HERE) COMMA_HERE) ;
    }
    if (location == p.aDerivation.count ()) {
      inHTMLfile << " ." ;      
    }
    inHTMLfile << "]" ;
    inHTMLfile.outputRawData ("</span>\n") ;
  }
}

//---------------------------------------------------------------------------*

void c_LR0_items_set::
getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                   const sint32 inSymbol,
                   c_LR0_items_set & out_LR0_item_set) {
  out_LR0_item_set.mItemsSet.clear () ;
  for (sint32 i=0 ; i<mItemsSet.count () ; i++) {
    const sint32 productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules (productionRuleIndex COMMA_HERE) ;
    const sint32 location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location < p.aDerivation.count ()) {
      const sint32 symbol = p.aDerivation (location COMMA_HERE) ;
      if (symbol == inSymbol) {
        out_LR0_item_set.add_LR0_item (productionRuleIndex, location + 1) ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

void c_LR0_items_set::
getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                    TC_UniqueArray <sint32> & outProductionsSet,
                                    bool & outAcceptCondition) {
  outProductionsSet.clear () ;
  outAcceptCondition = false ;
  for (sint32 i=0 ; i<mItemsSet.count () ; i++) {
    const sint32 productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules (productionRuleIndex COMMA_HERE) ;
    const sint32 location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location == p.aDerivation.count ()) {
      outProductionsSet.addObject (productionRuleIndex) ;
    }
    if ((productionRuleIndex == (inProductionRules.length () - 1)) && (location == 1)) {
      outAcceptCondition = true ;
    }
  }  
}

//---------------------------------------------------------------------------*

sint32 c_LR0_items_set::
compare_LR0_items_sets (const c_LR0_items_set & inItemsSet1,
                        const c_LR0_items_set & inItemsSet2) {
  sint32 result = c_LR0_item::
    compare_LR0_items (inItemsSet1.mItemsSet (0 COMMA_HERE),
                       inItemsSet2.mItemsSet (0 COMMA_HERE)) ;
  if (result == 0) {
    const sint32 length1 = inItemsSet1.mItemsSet.count () ;
    result = length1 - inItemsSet2.mItemsSet.count () ;
    for (sint32 i=1 ; (i<length1) && (result==0) ; i++) {
      result = c_LR0_item::compare_LR0_items (inItemsSet1.mItemsSet (i COMMA_HERE),
                                              inItemsSet2.mItemsSet (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

void swap (c_LR0_items_set & ioOperand1, c_LR0_items_set & ioOperand2) {
  swap (ioOperand1.mItemsSet, ioOperand2.mItemsSet) ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// E L E M E N T    C L A S S    F O R   A V L    T R E E                    *
//                                                                           *
//---------------------------------------------------------------------------*

class cLR0_items_sets_AVL_tree {
  public : cLR0_items_sets_AVL_tree * mPtrToInf ;
  public : cLR0_items_sets_AVL_tree * mPtrToSup ;
  private : const sint32 mInfo ;
  public : sint8 mBalance ;
  private : cLR0_items_sets_AVL_tree (const sint32 inInfo) ;
  public : virtual ~cLR0_items_sets_AVL_tree (void) ;
  private : sint32 compare (const c_LR0_items_set & in_LR0_items_set,
                         const TC_UniqueArray <c_LR0_items_set> & in_LR0_items_sets_array) ;
  public : static sint32 recursiveSearchOrInsert
                         (cLR0_items_sets_AVL_tree * & ioRootPointer,
                          c_LR0_items_set & io_LR0_items_set,
                          TC_UniqueArray <c_LR0_items_set> & io_LR0_items_sets_array,
                          bool & outExtension) ;
} ;

//---------------------------------------------------------------------------*

cLR0_items_sets_AVL_tree::
cLR0_items_sets_AVL_tree (const sint32 inInfo) :
mInfo (inInfo) {
  mPtrToInf = (cLR0_items_sets_AVL_tree *) NULL ;
  mPtrToSup = (cLR0_items_sets_AVL_tree *) NULL ;
  mBalance = 0 ;
} ;

//---------------------------------------------------------------------------*

cLR0_items_sets_AVL_tree::
~cLR0_items_sets_AVL_tree (void) {
  macroMyDelete (mPtrToInf, cLR0_items_sets_AVL_tree) ;
  macroMyDelete (mPtrToSup, cLR0_items_sets_AVL_tree) ;
} ;

//---------------------------------------------------------------------------*

sint32 cLR0_items_sets_AVL_tree::
compare (const c_LR0_items_set & in_LR0_items_set,
         const TC_UniqueArray <c_LR0_items_set> & in_LR0_items_sets_array) {
  return c_LR0_items_set::compare_LR0_items_sets (in_LR0_items_sets_array (mInfo COMMA_HERE), in_LR0_items_set) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       Rotate left                                                         *
//                                                                           *
//---------------------------------------------------------------------------*

static void rotateLeft (cLR0_items_sets_AVL_tree * & ioPtr) {
//--- Rotate 
  cLR0_items_sets_AVL_tree * ptr = ioPtr->mPtrToSup ;
  ioPtr->mPtrToSup = ptr->mPtrToInf ;
  ptr->mPtrToInf = ioPtr ;
//--- Update balance 
  if (ptr->mBalance < 0) {
    ioPtr->mBalance -= ptr->mBalance ;
  }
  ioPtr->mBalance ++ ;
  if (ioPtr->mBalance > 0) {
    ptr->mBalance += ioPtr->mBalance ;
  }
  ptr->mBalance ++ ;
  ioPtr = ptr ;
} 

//---------------------------------------------------------------------------*
//                                                                           *
//       Rotate right                                                        *
//                                                                           *
//---------------------------------------------------------------------------*

static void rotateRight (cLR0_items_sets_AVL_tree * & ioPtr) {
//--- Rotate 
  cLR0_items_sets_AVL_tree * ptr = ioPtr->mPtrToInf ;
  ioPtr->mPtrToInf = ptr->mPtrToSup ;
  ptr->mPtrToSup = ioPtr ;
 //--- Update balance 
  if (ptr->mBalance > 0) {
    ioPtr->mBalance -= ptr->mBalance ;
  }
  ioPtr->mBalance -- ;
  if (ioPtr->mBalance < 0) {
    ptr->mBalance += ioPtr->mBalance ;
  }
  ptr->mBalance-- ;
  ioPtr = ptr ;
}
 
//---------------------------------------------------------------------------*

sint32 cLR0_items_sets_AVL_tree::
recursiveSearchOrInsert (cLR0_items_sets_AVL_tree * & ioRootPointer,
                         c_LR0_items_set & io_LR0_items_set,
                         TC_UniqueArray <c_LR0_items_set> & io_LR0_items_sets_array,
                         bool & outExtension) {
  sint32 result ;
  if (ioRootPointer == NULL) {
    result = io_LR0_items_sets_array.count () ;
    macroMyNew (ioRootPointer, cLR0_items_sets_AVL_tree (result)) ;
    io_LR0_items_sets_array.addObjectUsingSwap (io_LR0_items_set) ;
    outExtension = true ;
  }else{
    macroValidPointer (ioRootPointer) ;
    const sint32 comp = ioRootPointer->compare (io_LR0_items_set, io_LR0_items_sets_array) ;
    if (comp > 0) {
      result = recursiveSearchOrInsert (ioRootPointer->mPtrToSup,
                                        io_LR0_items_set,
                                        io_LR0_items_sets_array,
                                        outExtension) ;
      macroValidPointer (ioRootPointer) ;
      if (outExtension) {
        ioRootPointer->mBalance -- ;
        switch (ioRootPointer->mBalance) {
        case 0:
          outExtension = false;
          break;
        case -1:
          break;
        case -2:
          macroValidPointer (ioRootPointer->mPtrToSup) ;
          if (ioRootPointer->mPtrToSup->mBalance == 1) {
            ::rotateRight (ioRootPointer->mPtrToSup) ;
          }
          macroValidPointer (ioRootPointer) ;
          ::rotateLeft (ioRootPointer) ;
          outExtension = false;
          break;
        default :
          break ;
        }
      }
    }else if (comp < 0) {
      result = recursiveSearchOrInsert (ioRootPointer->mPtrToInf,
                                        io_LR0_items_set,
                                        io_LR0_items_sets_array,
                                        outExtension) ;
      macroValidPointer (ioRootPointer) ;
      if (outExtension) {
        ioRootPointer->mBalance ++ ;
        switch (ioRootPointer->mBalance) {
        case 0:
          outExtension = false;
          break;
        case 1:
          break;
        case 2:
          macroValidPointer (ioRootPointer->mPtrToInf) ;
          if (ioRootPointer->mPtrToInf->mBalance == -1) {
            ::rotateLeft (ioRootPointer->mPtrToInf) ;
          }
          macroValidPointer (ioRootPointer) ;
          ::rotateRight (ioRootPointer) ;
          outExtension = false;
          break;
        default :
          break ;
        }
      }
    }else{ // Found
      result = ioRootPointer->mInfo ;
      outExtension = false;
    }
  }
  return result ;
}

 
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// C L A S S    F O R   L R 0    I T E M S    S E T S   C O L L E C T I O N  *
//                                                                           *
//---------------------------------------------------------------------------*

class c_LR0_items_sets_collection {
//--- Default constructor and destructor
  public : c_LR0_items_sets_collection (void) ;
  public : virtual ~c_LR0_items_sets_collection (void) ;

//--- Search or insert a LR0 items set (return set index)
  public : sint32 searchOrInsert_LR0_itemSet (c_LR0_items_set & ioItemSet) ;

//--- States count
  public : sint32 getStatesCount (void) ;

//--- Get transitions LR0 item set from a state for a symbol
  public : void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const sint32 inStateIndex,
                                   const sint32 inSymbol,
                                   c_LR0_items_set & out_LR0_item_set) ;

//--- Display LR0 items set
  public : void display (const cPureBNFproductionsList & inProductionRules,
                         const cVocabulary & inVocabulary,
                         C_HTML_FileWrite & inHTMLfile) ;

//--- Search from a LR0 items set (used for building 'reduce' actions of SLR table)
  public : void getProductionsWhereLocationIsRight (const sint32 inStateIndex,
                                                    const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <sint32> & outProductionsSet,
                                                    bool & outAcceptCondition) ;

//--- Private data
  private : TC_UniqueArray <c_LR0_items_set> m_LR0_items_sets_array ;
  private : cLR0_items_sets_AVL_tree * mRoot ;
} ;

//---------------------------------------------------------------------------*

c_LR0_items_sets_collection::c_LR0_items_sets_collection (void) {
  m_LR0_items_sets_array.makeRoomUsingSwap (500) ;
  mRoot = (cLR0_items_sets_AVL_tree *) NULL ;
}

//---------------------------------------------------------------------------*

c_LR0_items_sets_collection::~c_LR0_items_sets_collection (void) {
  macroMyDelete (mRoot, cLR0_items_sets_AVL_tree) ;
}

//---------------------------------------------------------------------------*

sint32 c_LR0_items_sets_collection::
searchOrInsert_LR0_itemSet (c_LR0_items_set & ioItemSet) {
  bool extension = false ;
  return cLR0_items_sets_AVL_tree::recursiveSearchOrInsert (mRoot, ioItemSet, m_LR0_items_sets_array, extension) ;
}

//---------------------------------------------------------------------------*

void c_LR0_items_sets_collection::
display (const cPureBNFproductionsList & inProductionRules,
         const cVocabulary & inVocabulary,
         C_HTML_FileWrite & inHTMLfile) {
  for (sint32 i=0 ; i<m_LR0_items_sets_array.count () ; i++) {
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td>") ;
    inHTMLfile << "S" << i ;
    inHTMLfile.outputRawData ("</td><td><code>") ;
    m_LR0_items_sets_array (i COMMA_HERE).display (inProductionRules, inVocabulary, inHTMLfile) ;
    inHTMLfile.outputRawData ("</code></td></tr>") ;
  }
}

//---------------------------------------------------------------------------*

sint32 c_LR0_items_sets_collection::getStatesCount (void) {
  return m_LR0_items_sets_array.count () ;
}

//---------------------------------------------------------------------------*

void c_LR0_items_sets_collection::
getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                   const sint32 inStateIndex,
                   const sint32 inSymbol,
                   c_LR0_items_set & out_LR0_item_set) {
  m_LR0_items_sets_array (inStateIndex COMMA_HERE).getTransitionFrom (inProductionRules, inSymbol, out_LR0_item_set) ;
}

//---------------------------------------------------------------------------*

void c_LR0_items_sets_collection::
getProductionsWhereLocationIsRight (const sint32 inStateIndex,
                                    const cPureBNFproductionsList & inProductionRules,
                                    TC_UniqueArray <sint32> & outProductionsSet,
                                    bool & outAcceptCondition) {
  m_LR0_items_sets_array (inStateIndex COMMA_HERE)
       .getProductionsWhereLocationIsRight (inProductionRules,
                                            outProductionsSet,
                                            outAcceptCondition) ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// L R 0    A U T O M A T O N    T R A N S I T I O N                         *
//                                                                           *
//---------------------------------------------------------------------------*

class c_LR0_automaton_transition {
  public : sint32 mSourceState ;
  public : sint32 mAction ;
  public : sint32 mTargetState ;
  public : c_LR0_automaton_transition (const sint32 inSourceState,
                                       const sint32 inAction,
                                       const sint32 inTargetState) ;
} ;

//---------------------------------------------------------------------------*

c_LR0_automaton_transition::c_LR0_automaton_transition (const sint32 inSourceState,
                                                        const sint32 inAction,
                                                        const sint32 inTargetState) {
  mSourceState = inSourceState ;
  mAction = inAction ;
  mTargetState = inTargetState ;
} ;

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// L R 0    D E C I S I O N    T A B L E    E L E M E N T                    *
//                                                                           *
//---------------------------------------------------------------------------*

class cLR0_decisionTableElement {
  public : enum enumDecision {kDecisionError, kDecisionShift, kDecisionReduce, kDecisionAccept} ;
  public : enumDecision mDecision ;
  public : sint32 mParameter ;
  public : cLR0_decisionTableElement (void) ;
  public : bool isInErrorDecision (void) const ;
  public : static cLR0_decisionTableElement shiftDecision (const sint32 inNextState) ;
  public : static cLR0_decisionTableElement reduceDecision (const sint32 inReduceProduction) ;
  public : static cLR0_decisionTableElement acceptDecision (void) ;
} ;

//---------------------------------------------------------------------------*

cLR0_decisionTableElement::cLR0_decisionTableElement (void) :
mDecision (kDecisionError) {
  mParameter = 0 ;
}

//---------------------------------------------------------------------------*

bool cLR0_decisionTableElement::isInErrorDecision (void) const {
  return mDecision == kDecisionError ;
}

//---------------------------------------------------------------------------*

cLR0_decisionTableElement cLR0_decisionTableElement::
shiftDecision (const sint32 inNextState) {
  cLR0_decisionTableElement d ;
  d.mDecision = kDecisionShift ;
  d.mParameter = inNextState ;
  return d ;
}

//---------------------------------------------------------------------------*

cLR0_decisionTableElement cLR0_decisionTableElement::
reduceDecision (const sint32 inReduceProduction) {
  cLR0_decisionTableElement d ;
  d.mDecision = kDecisionReduce ;
  d.mParameter = inReduceProduction ;
  return d ;
}

//---------------------------------------------------------------------------*

cLR0_decisionTableElement cLR0_decisionTableElement::acceptDecision (void) {
  cLR0_decisionTableElement d ;
  d.mDecision = kDecisionAccept ;
  d.mParameter = 0 ; // Unused value
  return d ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// G E N E R A T E    S L R    A N A L Y Z E R                               *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_SLR_grammar_cpp_file (C_Lexique & inLexique,
                               const cPureBNFproductionsList & inProductionRules,
                               const cVocabulary & inVocabulary,
                               const TC_Array2 <cLR0_decisionTableElement> & inSLRdecisionTable,
                               const TC_FIFO <c_LR0_automaton_transition> & inTransitionList,
                               const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
                               const uint32 inOriginalGrammarStartSymbol,
                               const C_String & inLexiqueName,
                               const C_String & inTargetFileName,
                               const GGS_stringset & inClassesNamesSet,
                               GGS_M_startSymbolEntityAndMetamodel & inStartSymbolEntityAndMetamodelMap) {
//--- Generate header file inclusion -----------------------------------------
  C_String generatedZone2 ;
  generatedZone2 << "#include \"" << inTargetFileName << ".h\"\n\n" ;

  generatedZone2.writeCHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  static const char gGGSsourceFile [] = \"" << inLexique.sourceFileName ().lastPathComponent () << "\" ;\n"
                    "  #define SOURCE_FILE_AT_LINE(line) , gGGSsourceFile, line\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

  C_String generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;

//--- Print non-terminal symbols --------------------------------------
  generatedZone3.writeCTitleComment ("N O N    T E R M I N A L    N A M E S") ;
  generatedZone3 << "static const char * gNonTerminalNames ["
                 << inVocabulary.getNonTerminalSymbolsCount () << "] = {\n" ;
  for (sint32 i=inVocabulary.getTerminalSymbolsCount () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    generatedZone3 << "  \"<" << inVocabulary.getSymbol (i COMMA_HERE) << ">\""
                   << (((i+1)<inVocabulary.getAllSymbolsCount ()) ? "," : "")
                   << "// Index " << (i - inVocabulary.getTerminalSymbolsCount ()) << "\n" ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate SLR analyze action table --------------------------------------
  generatedZone3.writeCTitleComment ("S L R    A N A L Y Z E R    A C T I O N    T A B L E") ;
  const sint32 rowsCount = inSLRdecisionTable.rowCount () ; // Number of states
  const sint32 columnsCount = inSLRdecisionTable.columnCount () ; // Number of terminal symbols
//--- State action tables
  TC_UniqueArray <sint32> startIndexArray (rowsCount COMMA_HERE) ;
  generatedZone3 << "// Action tables handle shift and reduce actions ;\n"
                    "//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;\n"
                    "//  - the accept action is (terminal_symbol, ACCEPT) ;\n"
                    "//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.\n\n"
                    "#define SHIFT(a) ((a) + 2)\n"
                    "#define REDUCE(a) (-(a) - 1)\n"
                    "#define ACCEPT (1)\n"
                    "#define END (-1)\n\n" ;
  generatedZone3 << "static const sint16 gActionTable [] = {" ;
  bool first = true ;
  sint32 startIndex = 0 ;
  for (sint32 i=0 ; i<rowsCount ; i++) {
    startIndexArray.addObject (startIndex) ;
    generatedZone3 <<"\n// State S" << i << " (index = " << startIndex << ')' ;
    for (sint32 j=0 ; j<columnsCount ; j++) {
      const sint32 parameter = inSLRdecisionTable (i, j COMMA_HERE).mParameter ;
      const cLR0_decisionTableElement::enumDecision decision = inSLRdecisionTable (i, j COMMA_HERE).mDecision ;
      if (decision != cLR0_decisionTableElement::kDecisionError) {
        startIndex += 2 ;
        generatedZone3 << '\n' ;
        if (first) {
          first = false ;
          generatedZone3 << "  " ;
        }else{
          generatedZone3 << ", " ;
        }
        generatedZone3 << inLexiqueName << "::" << inLexiqueName << "_1_" ;
        generateTerminalSymbolCppName (inVocabulary.getSymbol (j COMMA_HERE), generatedZone3) ;
        generatedZone3 << ", " ;
        if (decision == cLR0_decisionTableElement::kDecisionReduce) { // Reduce action
          generatedZone3 << "REDUCE (" << parameter << ')' ;
        }else if (decision == cLR0_decisionTableElement::kDecisionShift) { // Shift action
          generatedZone3 << "SHIFT (" << parameter << ')' ;
        }else{ // Accept action
          generatedZone3 << "ACCEPT" ;
        }
      }
    }
    generatedZone3 << "\n, END" ;
    startIndex ++ ;
  }
  generatedZone3 << "} ;\n\n"
                    "static const uint32 gActionTableIndex [" << rowsCount << "] = {" ;
  first = true ;
  for (sint32 i=0 ; i<rowsCount ; i++) {
    generatedZone3 << '\n' ;
    if (first) {
      first = false ;
      generatedZone3 << "  " ;
    }else{
      generatedZone3 << ", " ;
    }
    generatedZone3 << startIndexArray (i COMMA_HERE) << "  // S" << i ;
  }
  generatedZone3 << "\n} ;\n\n" ;
//--- Generate state successor table -----------------------------------------
  generatedZone3.writeCTitleComment ("SLR states successors table") ;
//--- Get successor count, by state
  TC_UniqueArray <sint32> stateSuccessorsCount (rowsCount, 0 COMMA_HERE) ;
  const sint32 transitionsCount = inTransitionList.length () ;
  for (sint32 i=0 ; i<transitionsCount ; i++) {
    if (inTransitionList (i COMMA_HERE).mAction >= columnsCount) {
      stateSuccessorsCount (inTransitionList (i COMMA_HERE).mSourceState COMMA_HERE) ++ ;
    }
  }

//--- Write successor table, state by state ----------------------------------
  generatedZone3 << "// Successor tables handle non terminal successors ;\n"
                    "// an entry is (non_terminal_symbol, n) ; successor is state n.\n\n" ;
  sint32 currentSourceState = -1 ; // No state
  for (sint32 t=0 ; t<transitionsCount ; t++) {
    const sint32 nonterminal =  inTransitionList (t COMMA_HERE).mAction - columnsCount ; 
    if (nonterminal >= 0) {
      const sint32 sourceState = inTransitionList (t COMMA_HERE).mSourceState ;
      if (currentSourceState == sourceState) {
        generatedZone3 << ",\n  " ;
      }else{
        if (currentSourceState >= 0) {
          generatedZone3 << ", -1} ;\n\n" ;
        }
        generatedZone3 << "static const sint16 gSuccessorTable"
                << sourceState << " ["
                << ((sint32)(2 * stateSuccessorsCount (sourceState COMMA_HERE) + 1))
                << "] = {" ;
        currentSourceState = sourceState ;
      }
      generatedZone3 << nonterminal << ", " << inTransitionList (t COMMA_HERE).mTargetState ;
    }
  }
  generatedZone3 << ", -1} ;\n\n" ;
//--- Write global state successor table
  generatedZone3 << "static const sint16 * gSuccessorTable ["
          << rowsCount
          << "] = {\n" ;
  sint32 itemInSameLineCount = 0 ;
  for (sint32 r=0 ; r<rowsCount ; r++) {
    if (r != 0) generatedZone3 << ", " ;
    if (itemInSameLineCount == 4) {
      generatedZone3 << "\n  " ;
      itemInSameLineCount = 0 ;
    }
    itemInSameLineCount ++ ;
    if (stateSuccessorsCount (r COMMA_HERE) == 0) {
      generatedZone3 << "NULL" ;
    }else{
      generatedZone3 << "gSuccessorTable" << r ;
    }
  }
  generatedZone3 << "} ;\n\n" ;

//--- Write for every production, its left non terminal, ---------------------
//    and the size of right string
  const sint32 productionsCount = inProductionRules.length () ;
  generatedZone3.writeCTitleComment ("Production rules infos (left non terminal, size of right string)") ;
  generatedZone3 << "static const sint16 gProductionsTable ["
          << productionsCount
          << " * 2] = {\n" ;
  for (sint32 p=0 ; p<productionsCount ; p++) {
    if (p > 0) {
      generatedZone3 << ",\n  " ;
    }
    generatedZone3 << (inProductionRules (p COMMA_HERE).aNumeroNonTerminalGauche - columnsCount)
            << ", "
            << inProductionRules (p COMMA_HERE).aDerivation.count () ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate methods, one by non terminal ----------------------------------
  GGS_M_nonTerminalSymbolsForGrammar::element_type * nonTerminal = inNonterminalSymbolsMapForGrammar.firstObject () ;
  while (nonTerminal != NULL) {
    macroValidPointer (nonTerminal) ;
    generatedZone3.writeCTitleComment (C_String ("'") + nonTerminal->mKey + "' non terminal implementation") ;
    GGS_M_nonterminalSymbolAltsForGrammar::element_type * currentAltForNonTerminal = nonTerminal->mInfo.mNonterminalSymbolParametersMap.firstObject () ;
    while (currentAltForNonTerminal != NULL) {
      macroValidPointer (currentAltForNonTerminal) ;
      if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
        generatedZone3 << "GGS_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                       << " * " ;      
      }else{
        generatedZone3 << "void " ;
      }
      generatedZone3 << inTargetFileName
                     << "::\n"
                     << "nt_" << nonTerminal->mKey << '_' << currentAltForNonTerminal->mKey
                     << " (" << inLexiqueName << " & _inLexique" ;
      const sint32 pureBNFleftNonterminalIndex = (sint32) nonTerminal->mIndex ;
      const sint32 first = inProductionRules.tableauIndicePremiereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
      GGS_L_signature::element_type * parametre = currentAltForNonTerminal->mInfo.mFormalParametersList.firstObject () ;
      sint16 numeroParametre = 1 ;
      while (parametre != NULL) {
        macroValidPointer (parametre) ;
        generatedZone3 << ",\n                                " ;
        generateFormalArgumentFromTypeName (parametre->mGalgasTypeName, parametre->mFormalArgumentPassingMode, generatedZone3) ;
        if (first >= 0) {
          generatedZone3 << " parameter_" << numeroParametre ;
        }
        parametre = parametre->nextObject () ;
        numeroParametre ++ ;
      }
      generatedZone3 << ") {\n" ;
      if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
        generatedZone3 << "  GGS_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                       << " * _outReturnedModelInstance = NULL ;\n" ;      
      }
      generatedZone3 << "  switch (_inLexique.nextProductionIndex ()) {\n" ;
      if (first >= 0) { // first<0 means the non terminal symbol is unuseful
        MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
        const sint32 last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
        MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
        for (sint32 j=first ; j<=last ; j++) {
          const sint32 ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
          generatedZone3 << "  case " << ip << " :\n    " ;
          inProductionRules (ip COMMA_HERE).engendrerAppelProduction (numeroParametre,
                                                                      inVocabulary,
                                                                      currentAltForNonTerminal->mKey,
                               currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0,
                                                                      generatedZone3) ;
          generatedZone3 << "    break ;\n" ;
        }
      }
      generatedZone3 << "  default :\n"
                        "    _inLexique.internalBottomUpParserError (HERE) ;\n"
                        "  }\n" ;
      if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
        generatedZone3 << "  return _outReturnedModelInstance ;\n" ;      
      }
      generatedZone3 << "}\n\n" ;
      currentAltForNonTerminal = currentAltForNonTerminal->nextObject () ;
    }
    //--- Engendrer l'axiome ?
    if (nonTerminal->mIndex == (sint32) inOriginalGrammarStartSymbol) {
      generatedZone3.writeCTitleComment ("Grammar start symbol implementation") ;
      GGS_M_nonterminalSymbolAltsForGrammar::element_type * currentAltForNonTerminal = nonTerminal->mInfo.mNonterminalSymbolParametersMap.firstObject () ;
      while (currentAltForNonTerminal != NULL) {
        macroValidPointer (currentAltForNonTerminal) ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          generatedZone3 << "GGS_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                         << " * " ;      
        }else{
          generatedZone3 << "void " ;
        }
        generatedZone3 << inTargetFileName
                       << "::startParsing_" << currentAltForNonTerminal->mKey
                       << " (" << inLexiqueName << " & _inLexique" ;
        GGS_L_signature::element_type * parametre = currentAltForNonTerminal->mInfo.mFormalParametersList.firstObject () ;
        sint16 numeroParametre = 1 ;
        while (parametre != NULL) {
          macroValidPointer (parametre) ;
          generatedZone3 << ",\n                                " ;
          generateFormalArgumentFromTypeName (parametre->mGalgasTypeName, parametre->mFormalArgumentPassingMode, generatedZone3) ;
          generatedZone3 << " parameter_" << numeroParametre ;
          parametre = parametre->nextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << ") {\n" ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          generatedZone3 << "  GGS_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                         << " * _outReturnedModelInstance = NULL ;\n" ;      
        }
        generateClassRegistering (generatedZone3, inClassesNamesSet) ;
        generatedZone3 << "  const bool ok = _inLexique.performBottomUpParsing (gActionTable, gNonTerminalNames,\n"
                          "                                                     gActionTableIndex, gSuccessorTable,\n"
                          "                                                     gProductionsTable) ;\n"
                          "  if (ok && ! _inLexique.parseOnlyFlagOn ()) {\n"
                          "    " ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          generatedZone3 << "_outReturnedModelInstance = " ;      
        }
        generatedZone3 << "nt_" << nonTerminal->mKey << '_' << currentAltForNonTerminal->mKey
                       << " (_inLexique" ;
        parametre = currentAltForNonTerminal->mInfo.mFormalParametersList.firstObject () ;
        numeroParametre = 1 ;
        while (parametre != NULL) {
          macroValidPointer (parametre) ;
          generatedZone3 << ", parameter_" << numeroParametre ;
          parametre = parametre->nextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << ") ;\n" ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          GGS_lstring entityName ;
          GGS_lstring metamodelName ;
          inStartSymbolEntityAndMetamodelMap.method_searchKey (inLexique,
                                                               currentAltForNonTerminal->mKey,
                                                               entityName,
                                                               metamodelName
                                                               COMMA_HERE) ;
          generatedZone3 << "    _checkMetamodel_" << metamodelName
                         << " (_inLexique, _outReturnedModelInstance) ;\n" ;
        }
        generatedZone3 << "  }\n" ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          generatedZone3 << "  return _outReturnedModelInstance ;\n" ;      
        }
        generatedZone3 << "}\n\n" ;
        currentAltForNonTerminal = currentAltForNonTerminal->nextObject () ;
      }
    }
    nonTerminal = nonTerminal->nextObject () ;
  }

//--- Implement non terminal from 'select' and 'repeat' instructions ---------
  const sint32 terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  for (sint32 ts=terminalSymbolsCount ; ts<inVocabulary.getAllSymbolsCount () ; ts++) {
    if (inVocabulary.needToGenerateChoice (ts COMMA_HERE)) {
      generatedZone3.writeCTitleComment (C_String ("'") + inVocabulary.getSymbol (ts COMMA_HERE) +"' non terminal implementation") ;
      generatedZone3 << "\nsint16 " << inTargetFileName
              << "::" << inVocabulary.getSymbol (ts COMMA_HERE) << " ("
              << inLexiqueName << " & _inLexique"
              << ") {\n" ;
      generatedZone3 << "// Productions numbers :" ;

      const sint32 first = inProductionRules.tableauIndicePremiereProduction (ts - terminalSymbolsCount COMMA_HERE) ;
      MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
      const sint32 last = inProductionRules.tableauIndiceDerniereProduction (ts - terminalSymbolsCount COMMA_HERE) ;
      MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
      for (sint32 j=first ; j<=last ; j++) {
        generatedZone3 << ' ' << inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
      }
      generatedZone3 << "\n"
                 "  return (sint16) (_inLexique.nextProductionIndex () - "
              << ((sint32)(first - 1))
              << ") ;\n"
                 "}\n\n" ;
    }
  }
//--- End of C++ file
  generatedZone3.writeCHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile ("//",
                          inTargetFileName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
// C O M P U T E    L R 0    A U T O M A T O N                               *
//                                                                           *
//---------------------------------------------------------------------------*

static void
compute_LR0_automation (const cPureBNFproductionsList & inProductionRules,
                        const cVocabulary & inVocabulary,
                        c_LR0_items_sets_collection & outLR0_items_sets_collection,
                        TC_FIFO <c_LR0_automaton_transition> & outTransitionList) {
//--- Create initial LR0 items set (SLR automaton initial state I0)
  const sint32 vocabularyCount = inVocabulary.getAllSymbolsCount () ;
  c_LR0_items_set LR0_items_set ;
//--- Add last production, that is the added production <> -> <start_symbol>
  LR0_items_set.add_LR0_item (inProductionRules.length () - 1, 0) ;
  LR0_items_set.close_items_set (inProductionRules, inVocabulary.getTerminalSymbolsCount ()) ;
  outLR0_items_sets_collection.searchOrInsert_LR0_itemSet (LR0_items_set) ;
//--- Calculate LR0 automaton
  for (sint32 explorationIndex=0 ; explorationIndex<outLR0_items_sets_collection.getStatesCount () ; explorationIndex++) {
    for (sint32 s=0 ; s<vocabularyCount ; s++) {
      outLR0_items_sets_collection.getTransitionFrom (inProductionRules, explorationIndex, s, LR0_items_set) ;
      if (! LR0_items_set.isEmptySet ()) {
        LR0_items_set.close_items_set (inProductionRules, inVocabulary.getTerminalSymbolsCount ()) ;
        const sint32 target = outLR0_items_sets_collection.searchOrInsert_LR0_itemSet (LR0_items_set) ;
        c_LR0_automaton_transition t (explorationIndex, s, target) ;
        outTransitionList.insertByCopy (t) ;
      }
    }
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
// S L R    C O M P U T A T I O N S                                          *
//                                                                           *
//---------------------------------------------------------------------------*

void
SLR_computations (C_Lexique & inLexique,
                  const cPureBNFproductionsList & inProductionRules,
                  const cVocabulary & inVocabulary,
                  C_HTML_FileWrite & inHTMLfile,
                  const TC_UniqueArray <TC_UniqueArray <sint32> > & inFOLLOWarray,
                  const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
                  const uint32 inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  const C_String & inLexiqueName,
                  const GGS_stringset & inClassesNamesSet,
                  bool & outOk,
                  GGS_M_startSymbolEntityAndMetamodel & inStartSymbolEntityAndMetamodelMap) {
//--- Console display
 co << "  Building SLR automaton... " ;
//--- Print in BNF file
  inHTMLfile.writeCTitleComment ("Building SLR automaton", "title") ;
  inHTMLfile.outputRawData ("<p></p>") ;

//--- Compute LR0 automaton
  c_LR0_items_sets_collection LR0_items_sets_collection ;
  TC_FIFO <c_LR0_automaton_transition> transitionList ;
  compute_LR0_automation (inProductionRules,
                          inVocabulary,
                          LR0_items_sets_collection,
                          transitionList) ;
  co << LR0_items_sets_collection.getStatesCount () << " states, "
               << transitionList.length () << " transitions.\n" ;

//--- Display automaton states
  inHTMLfile.outputRawData ("<table class=\"result\">"
                            "<tr><td class=\"result_title\" colspan=\"2\">") ;
  inHTMLfile <<"LR0 automaton states" ;
  inHTMLfile.outputRawData ("</td></tr>") ;
  LR0_items_sets_collection.display (inProductionRules, inVocabulary, inHTMLfile) ;
  inHTMLfile.outputRawData ("</table>") ;
//--- Display automaton transitions
  inHTMLfile.outputRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
  inHTMLfile << "LR0 automaton transitions" ;
  inHTMLfile.outputRawData ("</td></tr>") ;
  for (sint32 i=0 ; i<transitionList.length () ; i++) {
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td><code>") ;
    inHTMLfile << "  S" << transitionList (i COMMA_HERE).mSourceState
               << " |- " ;
    inVocabulary.printInFile (inHTMLfile, transitionList (i COMMA_HERE).mAction COMMA_HERE) ;
    inHTMLfile << " -> S"
               << transitionList (i COMMA_HERE).mTargetState ;
    inHTMLfile.outputRawData ("</code></td></tr>") ;
  }
  inHTMLfile.outputRawData ("</table><p></p>") ;

//--- Console display
 co << "  Checking SLR condition... " ;
//--- Print in BNF file
  inHTMLfile.writeCTitleComment ("Checking SLR condition", "title") ;

//--- Build SLR table... detect if grammar is not SLR
  const sint32 terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  TC_Array2 <cLR0_decisionTableElement> SLRdecisionTable (LR0_items_sets_collection.getStatesCount (), terminalSymbolsCount COMMA_HERE) ;
  sint32 shiftActions = 0 ;
  sint32 reduceActions = 0 ;
  sint32 successorEntries = 0 ;
  inHTMLfile.outputRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
  inHTMLfile << "SLR decision table" ;
  inHTMLfile.outputRawData ("</td></tr>") ;
//--- Shift actions
  for (sint32 index=0 ; index<transitionList.length () ; index++) {
    if (transitionList (index COMMA_HERE).mAction < terminalSymbolsCount) {
      const sint32 sourceState = transitionList (index COMMA_HERE).mSourceState ;
      const sint32 targetState = transitionList (index COMMA_HERE).mTargetState ;
      const sint32 terminal = transitionList (index COMMA_HERE).mAction ;
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td><code>") ;
      inHTMLfile << "Action [S" << sourceState << ", " ;
      inVocabulary.printInFile (inHTMLfile, terminal COMMA_HERE) ;
      inHTMLfile << "] : shift, goto S" << targetState ;
      SLRdecisionTable (sourceState, terminal COMMA_HERE) = cLR0_decisionTableElement::shiftDecision (targetState) ;
      shiftActions ++ ;
      inHTMLfile.outputRawData ("</code></td></tr>") ;
    }
  }
//--- Reduce actions
  sint32 conflictCount = 0 ;
  TC_UniqueArray <sint32> productionsSet ;
  for (sint32 state=0 ; state<LR0_items_sets_collection.getStatesCount () ; state++) {
    bool acceptCondition = false ;
    LR0_items_sets_collection.getProductionsWhereLocationIsRight (state,
                                                                  inProductionRules,
                                                                  productionsSet,
                                                                  acceptCondition) ;
    if (acceptCondition) {
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td><code>") ;
      const sint32 terminal = inVocabulary.getEmptyStringTerminalSymbolIndex () ;
      inHTMLfile << "Action [S"
                << state
                << ", " ;
      inVocabulary.printInFile (inHTMLfile, terminal COMMA_HERE) ;
      inHTMLfile << "] : accept" ;
      inHTMLfile.outputRawData ("</code>") ;
      if (! SLRdecisionTable (state, terminal COMMA_HERE).isInErrorDecision ()) {
        inHTMLfile.outputRawData ("<span class=\"error\">") ;
        inHTMLfile << " *** CONFLICT ***" ;
        inHTMLfile.outputRawData ("</span>") ;
        conflictCount ++ ;
      }
      SLRdecisionTable (state, terminal COMMA_HERE) = cLR0_decisionTableElement::acceptDecision () ;
      inHTMLfile.outputRawData ("</td></tr>") ;
    }
    for (sint32 p=0 ; p<productionsSet.count () ; p++) {
      const sint32 productionIndex = productionsSet (p COMMA_HERE) ;
      const sint32 leftNonTerminal = inProductionRules (productionIndex COMMA_HERE).aNumeroNonTerminalGauche ;
      const TC_UniqueArray <sint32> & followsArray = inFOLLOWarray (leftNonTerminal COMMA_HERE) ;
      for (sint32 f=0 ; f<followsArray.count () ; f++) {
        inHTMLfile.outputRawData ("<tr class=\"result_line\"><td><code>") ;
        const sint32 terminal = followsArray (f COMMA_HERE) ;
        inHTMLfile << "Action [S"
                  << state
                  << ", " ;
        inVocabulary.printInFile (inHTMLfile, terminal COMMA_HERE) ;
        inHTMLfile << "] : reduce by " ;
        inVocabulary.printInFile (inHTMLfile, leftNonTerminal COMMA_HERE) ;
        inHTMLfile.outputRawData ("</code>") ;
        if (! SLRdecisionTable (state, terminal COMMA_HERE).isInErrorDecision ()) {
          inHTMLfile.outputRawData ("<span class=\"error\">") ;
          inHTMLfile << " *** CONFLICT ***" ;
          inHTMLfile.outputRawData ("</span>") ;
          conflictCount ++ ;
        }
        inHTMLfile.outputRawData ("</td></tr>") ;
        SLRdecisionTable (state, terminal COMMA_HERE) = cLR0_decisionTableElement::reduceDecision (productionIndex) ;
        reduceActions ++ ;
      }    
    }
  }
//--- Successors
  for (sint32 t=0 ; t<transitionList.length () ; t++) {
    if (transitionList (t COMMA_HERE).mAction >= terminalSymbolsCount) {
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td><code>") ;
      inHTMLfile << "Successor [S"
                << transitionList (t COMMA_HERE).mSourceState
                << ", " ;
      inVocabulary.printInFile (inHTMLfile, transitionList (t COMMA_HERE).mAction COMMA_HERE) ;
      inHTMLfile << "] = S"
                << transitionList (t COMMA_HERE).mTargetState ;
      successorEntries ++ ;
      inHTMLfile.outputRawData ("</code></td></tr>") ;
    }
  }
  inHTMLfile.outputRawData ("</table><p>") ;
  inHTMLfile << "LR0 automaton has "
            << LR0_items_sets_collection.getStatesCount ()
            << " states and "
            << transitionList.length ()
            << " transitions.\n\n"
               "Analyze table has "
            << shiftActions << " shift actions, "
            << reduceActions << " reduce actions, and "
            << successorEntries << " state successor entries." ;
  inHTMLfile.outputRawData ("</p><p>") ;
  if (conflictCount == 0) {
    inHTMLfile.outputRawData ("<span class=\"success\">") ;
    inHTMLfile << "No conflict : grammar is SLR (1)." ;
    inHTMLfile.outputRawData ("</span>") ;
    co << "ok.\n" ;
    outOk = true ; // No error
  }else{
    inHTMLfile.outputRawData ("<span class=\"error\">") ;
    inHTMLfile << conflictCount
              << " conflict"
              << ((conflictCount > 1) ? "s" : "")
              << " : grammar is not SLR (1)." ;
    inHTMLfile.outputRawData ("</span>") ;
    co << "error.\n" ;
    outOk = false ; // Error, grammar is not SRL (1)
  }
  co.flush () ;
  inHTMLfile.outputRawData ("</p>") ;
//--- Generate C++ file
  if (conflictCount == 0) {
    generate_SLR_grammar_cpp_file (inLexique,
                                   inProductionRules,
                                   inVocabulary,
                                   SLRdecisionTable,
                                   transitionList,
                                   inNonterminalSymbolsMapForGrammar,
                                   inOriginalGrammarStartSymbol,
                                   inLexiqueName,
                                   inTargetFileName,
                                   inClassesNamesSet,
                                   inStartSymbolEntityAndMetamodelMap) ;

  }
}

//---------------------------------------------------------------------------*
