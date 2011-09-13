//---------------------------------------------------------------------------*
//                                                                           *
//     Routines for SLR grammar computations                                 *
//                                                                           *
//  Copyright (C) 2002, ..., 2010 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
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
#include "collections/TC_UniqueArray2.h"
#include "galgas2/C_Compiler.h"

//---------------------------------------------------------------------------*

#include "SLR_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "cDecisionTableElement.h"
#include "grammarCompilation.h"

//---------------------------------------------------------------------------*
//                                                                           *
//    C L A S S    F O R   L R 0    I T E M                                  *
//                                                                           *
//---------------------------------------------------------------------------*

class c_LR0_item {
  public : PMSInt32 mProductionRuleIndex ;
  public : PMSInt32 mLocationIndex ;
//--- Default constructor
  public : c_LR0_item (void) ;
//--- Constructor
  public : c_LR0_item (const PMSInt32 inProductionRuleIndex,
                       const PMSInt32 inLocationIndex) ;
//--- Compare two items
  public : static PMSInt32 compare_LR0_items (const c_LR0_item & inItem1,
                                            const c_LR0_item & inItem2) ;
} ;

//---------------------------------------------------------------------------*

c_LR0_item::c_LR0_item (void) :
mProductionRuleIndex (-1),
mLocationIndex (-1) {
}

//---------------------------------------------------------------------------*

c_LR0_item::c_LR0_item (const PMSInt32 inProductionRuleIndex,
                        const PMSInt32 inLocationIndex) :
mProductionRuleIndex (inProductionRuleIndex),
mLocationIndex (inLocationIndex) {
}

//---------------------------------------------------------------------------*

PMSInt32 c_LR0_item::
compare_LR0_items (const c_LR0_item & inItem1,
                   const c_LR0_item & inItem2) {
  PMSInt32 result = inItem1.mProductionRuleIndex - inItem2.mProductionRuleIndex ;
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
  public : bool add_LR0_item (const PMSInt32 inProductionRuleIndex,
                              const PMSInt32 inLocationIndex) ;

//--- Get transitions LR0 item set from a state for a symbol
  public : void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const PMSInt32 inSymbol,
                                   c_LR0_items_set & out_LR0_item_set) ;

//--- Closing the LR0 items set
  public : void close_items_set (const cPureBNFproductionsList & inProductionRules,
                                 const PMSInt32 inTerminalSymbolsCount) ;

//--- Empty set ?
  public : bool isEmptySet (void) const ;

//--- Display LR0 items set
  public : void display (const cPureBNFproductionsList & inProductionRules,
                         const cVocabulary & inVocabulary,
                         C_HTML_FileWrite & inHTMLfile) ;

//--- Compare two items sets
  public : static PMSInt32 compare_LR0_items_sets (const c_LR0_items_set & inItemsSet1,
                                               const c_LR0_items_set & inItemsSet2) ;

//--- Search from a LR0 items set (used for building 'reduce' actions of SLR table)
  public : void getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <PMSInt32> & outProductionsSet,
                                                    bool & outAcceptCondition) ;

//--- No copy
  private : c_LR0_items_set (c_LR0_items_set &) ;
  private : c_LR0_items_set & operator = (c_LR0_items_set &) ;

//--- Friend
  friend void swap (c_LR0_items_set & ioOperand1, c_LR0_items_set & ioOperand2) ;
} ;

//---------------------------------------------------------------------------*

c_LR0_items_set::c_LR0_items_set (void) :
mItemsSet () {
}

//---------------------------------------------------------------------------*

bool c_LR0_items_set::
add_LR0_item (const PMSInt32 inProductionRuleIndex,
              const PMSInt32 inLocationIndex) {
  c_LR0_item item (inProductionRuleIndex, inLocationIndex) ;
//--- First, search for this item
  bool found = false ;
  for (PMSInt32 i=0 ; (i<mItemsSet.count ()) && ! found ; i++) {
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
                 const PMSInt32 inTerminalSymbolsCount) {
  bool loop = true ;
  while (loop) {
    loop = false ;
    for (PMSInt32 i=0 ; i<mItemsSet.count () ; i++) {
      const PMSInt32 locationIndex = mItemsSet (i COMMA_HERE).mLocationIndex ;
      const PMSInt32 productionRule = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
      if (locationIndex < inProductionRules (productionRule COMMA_HERE).aDerivation.count ()) {
        const PMSInt32 prodX = inProductionRules (productionRule COMMA_HERE).aDerivation (locationIndex COMMA_HERE) - inTerminalSymbolsCount ;
        if (prodX >= 0) {
          const PMSInt32 first = inProductionRules.tableauIndicePremiereProduction (prodX COMMA_HERE) ;
          MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
          const PMSInt32 last = inProductionRules.tableauIndiceDerniereProduction (prodX COMMA_HERE) ;
          MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
          for (PMSInt32 j=first ; j<=last ; j++) {
            const PMSInt32 ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
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
  for (PMSInt32 i=0 ; i<mItemsSet.count () ; i++) {
    const cProduction & p = inProductionRules (mItemsSet (i COMMA_HERE).mProductionRuleIndex COMMA_HERE) ;
    const PMSInt32 location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    inHTMLfile.outputRawData ("<span class=\"list\">") ;
    inHTMLfile << "[" ;
    inVocabulary.printInFile (inHTMLfile, p.aNumeroNonTerminalGauche COMMA_HERE) ;
    inHTMLfile << " ->" ;
    for (PMSInt32 j=0 ; j<p.aDerivation.count () ; j++) {
      if (j == location) {
        inHTMLfile << " ." ;      
      }
      inHTMLfile << " " ;
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
                   const PMSInt32 inSymbol,
                   c_LR0_items_set & out_LR0_item_set) {
  out_LR0_item_set.mItemsSet.removeAllObjects () ;
  for (PMSInt32 i=0 ; i<mItemsSet.count () ; i++) {
    const PMSInt32 productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules (productionRuleIndex COMMA_HERE) ;
    const PMSInt32 location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location < p.aDerivation.count ()) {
      const PMSInt32 symbol = p.aDerivation (location COMMA_HERE) ;
      if (symbol == inSymbol) {
        out_LR0_item_set.add_LR0_item (productionRuleIndex, location + 1) ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

void c_LR0_items_set::
getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                    TC_UniqueArray <PMSInt32> & outProductionsSet,
                                    bool & outAcceptCondition) {
  outProductionsSet.removeAllObjects () ;
  outAcceptCondition = false ;
  for (PMSInt32 i=0 ; i<mItemsSet.count () ; i++) {
    const PMSInt32 productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules (productionRuleIndex COMMA_HERE) ;
    const PMSInt32 location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location == p.aDerivation.count ()) {
      outProductionsSet.addObject (productionRuleIndex) ;
    }
    if ((productionRuleIndex == (inProductionRules.length () - 1)) && (location == 1)) {
      outAcceptCondition = true ;
    }
  }  
}

//---------------------------------------------------------------------------*

PMSInt32 c_LR0_items_set::
compare_LR0_items_sets (const c_LR0_items_set & inItemsSet1,
                        const c_LR0_items_set & inItemsSet2) {
  PMSInt32 result = c_LR0_item::
    compare_LR0_items (inItemsSet1.mItemsSet (0 COMMA_HERE),
                       inItemsSet2.mItemsSet (0 COMMA_HERE)) ;
  if (result == 0) {
    const PMSInt32 length1 = inItemsSet1.mItemsSet.count () ;
    result = length1 - inItemsSet2.mItemsSet.count () ;
    for (PMSInt32 i=1 ; (i<length1) && (result==0) ; i++) {
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
  private : const PMSInt32 mInfo ;
  public : PMSInt32 mBalance ;
  protected : cLR0_items_sets_AVL_tree (const PMSInt32 inInfo) ;
  public : virtual ~cLR0_items_sets_AVL_tree (void) ;
  private : PMSInt32 compare (const c_LR0_items_set & in_LR0_items_set,
                         const TC_UniqueArray <c_LR0_items_set> & in_LR0_items_sets_array) ;
  public : static PMSInt32 recursiveSearchOrInsert
                         (cLR0_items_sets_AVL_tree * & ioRootPointer,
                          c_LR0_items_set & io_LR0_items_set,
                          TC_UniqueArray <c_LR0_items_set> & io_LR0_items_sets_array,
                          bool & outExtension) ;

//--- No copy
  private : cLR0_items_sets_AVL_tree (cLR0_items_sets_AVL_tree &) ;
  private : cLR0_items_sets_AVL_tree & operator = (cLR0_items_sets_AVL_tree &) ;
} ;

//---------------------------------------------------------------------------*

cLR0_items_sets_AVL_tree::
cLR0_items_sets_AVL_tree (const PMSInt32 inInfo) :
mPtrToInf (NULL),
mPtrToSup (NULL),
mInfo (inInfo),
mBalance (0) {
} ;

//---------------------------------------------------------------------------*

cLR0_items_sets_AVL_tree::
~cLR0_items_sets_AVL_tree (void) {
  macroMyDelete (mPtrToInf) ;
  macroMyDelete (mPtrToSup) ;
} ;

//---------------------------------------------------------------------------*

PMSInt32 cLR0_items_sets_AVL_tree::
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

PMSInt32 cLR0_items_sets_AVL_tree::
recursiveSearchOrInsert (cLR0_items_sets_AVL_tree * & ioRootPointer,
                         c_LR0_items_set & io_LR0_items_set,
                         TC_UniqueArray <c_LR0_items_set> & io_LR0_items_sets_array,
                         bool & outExtension) {
  PMSInt32 result ;
  if (ioRootPointer == NULL) {
    result = io_LR0_items_sets_array.count () ;
    macroMyNew (ioRootPointer, cLR0_items_sets_AVL_tree (result)) ;
    io_LR0_items_sets_array.addObjectUsingSwap (io_LR0_items_set) ;
    outExtension = true ;
  }else{
    macroValidPointer (ioRootPointer) ;
    const PMSInt32 comp = ioRootPointer->compare (io_LR0_items_set, io_LR0_items_sets_array) ;
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

//--- No copy
  private : c_LR0_items_sets_collection (c_LR0_items_sets_collection &) ;
  private : c_LR0_items_sets_collection & operator = (c_LR0_items_sets_collection &) ;

//--- Search or insert a LR0 items set (return set index)
  public : PMSInt32 searchOrInsert_LR0_itemSet (c_LR0_items_set & ioItemSet) ;

//--- States count
  public : PMSInt32 getStatesCount (void) ;

//--- Get transitions LR0 item set from a state for a symbol
  public : void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const PMSInt32 inStateIndex,
                                   const PMSInt32 inSymbol,
                                   c_LR0_items_set & out_LR0_item_set) ;

//--- Display LR0 items set
  public : void display (const cPureBNFproductionsList & inProductionRules,
                         const cVocabulary & inVocabulary,
                         C_HTML_FileWrite & inHTMLfile) ;

//--- Search from a LR0 items set (used for building 'reduce' actions of SLR table)
  public : void getProductionsWhereLocationIsRight (const PMSInt32 inStateIndex,
                                                    const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <PMSInt32> & outProductionsSet,
                                                    bool & outAcceptCondition) ;

//--- Private data
  private : TC_UniqueArray <c_LR0_items_set> m_LR0_items_sets_array ;
  private : cLR0_items_sets_AVL_tree * mRoot ;
} ;

//---------------------------------------------------------------------------*

c_LR0_items_sets_collection::c_LR0_items_sets_collection (void) :
m_LR0_items_sets_array (),
mRoot (NULL) {
  m_LR0_items_sets_array.makeRoomUsingSwap (500) ;
}

//---------------------------------------------------------------------------*

c_LR0_items_sets_collection::~c_LR0_items_sets_collection (void) {
  macroMyDelete (mRoot) ;
}

//---------------------------------------------------------------------------*

PMSInt32 c_LR0_items_sets_collection::
searchOrInsert_LR0_itemSet (c_LR0_items_set & ioItemSet) {
  bool extension = false ;
  return cLR0_items_sets_AVL_tree::recursiveSearchOrInsert (mRoot, ioItemSet, m_LR0_items_sets_array, extension) ;
}

//---------------------------------------------------------------------------*

void c_LR0_items_sets_collection::
display (const cPureBNFproductionsList & inProductionRules,
         const cVocabulary & inVocabulary,
         C_HTML_FileWrite & inHTMLfile) {
  for (PMSInt32 i=0 ; i<m_LR0_items_sets_array.count () ; i++) {
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile << "S" << cStringWithSigned (i) ;
    inHTMLfile.outputRawData ("</td><td><code>") ;
    m_LR0_items_sets_array (i COMMA_HERE).display (inProductionRules, inVocabulary, inHTMLfile) ;
    inHTMLfile.outputRawData ("</code></td></tr>") ;
  }
}

//---------------------------------------------------------------------------*

PMSInt32 c_LR0_items_sets_collection::getStatesCount (void) {
  return m_LR0_items_sets_array.count () ;
}

//---------------------------------------------------------------------------*

void c_LR0_items_sets_collection::
getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                   const PMSInt32 inStateIndex,
                   const PMSInt32 inSymbol,
                   c_LR0_items_set & out_LR0_item_set) {
  m_LR0_items_sets_array (inStateIndex COMMA_HERE).getTransitionFrom (inProductionRules, inSymbol, out_LR0_item_set) ;
}

//---------------------------------------------------------------------------*

void c_LR0_items_sets_collection::
getProductionsWhereLocationIsRight (const PMSInt32 inStateIndex,
                                    const cPureBNFproductionsList & inProductionRules,
                                    TC_UniqueArray <PMSInt32> & outProductionsSet,
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
  public : PMSInt32 mSourceState ;
  public : PMSInt32 mAction ;
  public : PMSInt32 mTargetState ;
  public : c_LR0_automaton_transition (const PMSInt32 inSourceState,
                                       const PMSInt32 inAction,
                                       const PMSInt32 inTargetState) ;
} ;

//---------------------------------------------------------------------------*

c_LR0_automaton_transition::
c_LR0_automaton_transition (const PMSInt32 inSourceState,
                            const PMSInt32 inAction,
                            const PMSInt32 inTargetState) :
mSourceState (inSourceState),
mAction (inAction),
mTargetState (inTargetState) {
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

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
generate_SLR_grammar_cpp_file (C_Compiler * inCompiler,
                               const cPureBNFproductionsList & inProductionRules,
                               const cVocabulary & inVocabulary,
                               const TC_UniqueArray2 <cDecisionTableElement> & inSLRdecisionTable,
                               const TC_FIFO <c_LR0_automaton_transition> & inTransitionList,
                               const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                               const PMUInt32 inOriginalGrammarStartSymbol,
                               const C_String & inLexiqueName,
                               const C_String & inTargetFileName,
                               const C_String & inOutputDirectoryForCppFiles,
                               const bool inHasIndexing) {
//--- Generate header file inclusion -----------------------------------------
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"utilities/MF_MemoryControl.h\"\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"" << inTargetFileName << ".h\"\n\n" ;

  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inCompiler->sourceFilePath ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;

//--- Print non-terminal symbols --------------------------------------
  generatedZone3.appendCppTitleComment ("N O N    T E R M I N A L    N A M E S") ;
  generatedZone3 << "static const char * gNonTerminalNames ["
                 << cStringWithSigned (inVocabulary.getNonTerminalSymbolsCount ()) << "] = {\n" ;
  for (PMSInt32 i=inVocabulary.getTerminalSymbolsCount () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    generatedZone3 << "  \"<" << inVocabulary.getSymbol (i COMMA_HERE) << ">\""
                   << (((i+1)<inVocabulary.getAllSymbolsCount ()) ? "," : "")
                   << "// Index " << cStringWithSigned (i - inVocabulary.getTerminalSymbolsCount ()) << "\n" ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate SLR analyze action table --------------------------------------
  generatedZone3.appendCppTitleComment ("S L R    A N A L Y Z E R    A C T I O N    T A B L E") ;
  const PMSInt32 rowsCount = inSLRdecisionTable.rowCount () ; // Number of states
  const PMSInt32 columnsCount = inSLRdecisionTable.columnCount () ; // Number of terminal symbols
//--- State action tables
  TC_UniqueArray <PMSInt32> startIndexArray (rowsCount COMMA_HERE) ;
  generatedZone3 << "// Action tables handle shift and reduce actions ;\n"
                    "//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;\n"
                    "//  - the accept action is (terminal_symbol, ACCEPT) ;\n"
                    "//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.\n\n"
                    "#define SHIFT(a) ((a) + 2)\n"
                    "#define REDUCE(a) (-(a) - 1)\n"
                    "#define ACCEPT (1)\n"
                    "#define END (-1)\n\n" ;
  generatedZone3 << "static const PMSInt16 gActionTable [] = {" ;
  bool isFirst = true ;
  PMSInt32 startIndex = 0 ;
  for (PMSInt32 i=0 ; i<rowsCount ; i++) {
    startIndexArray.addObject (startIndex) ;
    generatedZone3 <<"\n// State S" << cStringWithSigned (i) << " (index = " << cStringWithSigned (startIndex) << ")" ;
    for (PMSInt32 j=0 ; j<columnsCount ; j++) {
      const PMSInt32 parameter = inSLRdecisionTable (i, j COMMA_HERE).parameter () ;
      const cDecisionTableElement::enumDecision decision = inSLRdecisionTable (i, j COMMA_HERE).decision () ;
      if (decision != cDecisionTableElement::kUndefinedState) {
        startIndex += 2 ;
        generatedZone3 << "\n" ;
        if (isFirst) {
          isFirst = false ;
          generatedZone3 << "  " ;
        }else{
          generatedZone3 << ", " ;
        }
        generatedZone3 << "C_Lexique_" << inLexiqueName.identifierRepresentation () << "::kToken_"
                       << inVocabulary.getSymbol (j COMMA_HERE).identifierRepresentation ()
                       << ", " ;
        if (decision == cDecisionTableElement::kDecisionReduce) { // Reduce action
          generatedZone3 << "REDUCE (" << cStringWithSigned (parameter) << ")" ;
        }else if (decision == cDecisionTableElement::kDecisionShift) { // Shift action
          generatedZone3 << "SHIFT (" << cStringWithSigned (parameter) << ")" ;
        }else{ // Accept action
          generatedZone3 << "ACCEPT" ;
        }
      }
    }
    generatedZone3 << "\n, END" ;
    startIndex ++ ;
  }
  generatedZone3 << "} ;\n\n"
                    "static const PMUInt32 gActionTableIndex [" << cStringWithSigned (rowsCount) << "] = {" ;
  isFirst = true ;
  for (PMSInt32 i=0 ; i<rowsCount ; i++) {
    generatedZone3 << "\n" ;
    if (isFirst) {
      isFirst = false ;
      generatedZone3 << "  " ;
    }else{
      generatedZone3 << ", " ;
    }
    generatedZone3 << cStringWithSigned (startIndexArray (i COMMA_HERE)) << "  // S" << cStringWithSigned (i) ;
  }
  generatedZone3 << "\n} ;\n\n" ;
//--- Generate state successor table -----------------------------------------
  generatedZone3.appendCppTitleComment ("SLR states successors table") ;
//--- Get successor count, by state
  TC_UniqueArray <PMSInt32> stateSuccessorsCount (rowsCount, 0 COMMA_HERE) ;
  const PMSInt32 transitionsCount = inTransitionList.length () ;
  for (PMSInt32 i=0 ; i<transitionsCount ; i++) {
    if (inTransitionList (i COMMA_HERE).mAction >= columnsCount) {
      stateSuccessorsCount (inTransitionList (i COMMA_HERE).mSourceState COMMA_HERE) ++ ;
    }
  }

//--- Write successor table, state by state ----------------------------------
  generatedZone3 << "// Successor tables handle non terminal successors ;\n"
                    "// an entry is (non_terminal_symbol, n) ; successor is state n.\n\n" ;
  PMSInt32 currentSourceState = -1 ; // No state
  for (PMSInt32 t=0 ; t<transitionsCount ; t++) {
    const PMSInt32 nonterminal =  inTransitionList (t COMMA_HERE).mAction - columnsCount ; 
    if (nonterminal >= 0) {
      const PMSInt32 sourceState = inTransitionList (t COMMA_HERE).mSourceState ;
      if (currentSourceState == sourceState) {
        generatedZone3 << ",\n  " ;
      }else{
        if (currentSourceState >= 0) {
          generatedZone3 << ", -1} ;\n\n" ;
        }
        generatedZone3 << "static const PMSInt16 gSuccessorTable"
                << cStringWithSigned (sourceState) << " ["
                << cStringWithSigned ((PMSInt32)(2 * stateSuccessorsCount (sourceState COMMA_HERE) + 1))
                << "] = {" ;
        currentSourceState = sourceState ;
      }
      generatedZone3 << cStringWithSigned (nonterminal) << ", " << cStringWithSigned (inTransitionList (t COMMA_HERE).mTargetState) ;
    }
  }
  generatedZone3 << ", -1} ;\n\n" ;
//--- Write global state successor table
  generatedZone3 << "static const PMSInt16 * gSuccessorTable ["
          << cStringWithSigned (rowsCount)
          << "] = {\n" ;
  PMSInt32 itemInSameLineCount = 0 ;
  for (PMSInt32 r=0 ; r<rowsCount ; r++) {
    if (r != 0) generatedZone3 << ", " ;
    if (itemInSameLineCount == 4) {
      generatedZone3 << "\n  " ;
      itemInSameLineCount = 0 ;
    }
    itemInSameLineCount ++ ;
    if (stateSuccessorsCount (r COMMA_HERE) == 0) {
      generatedZone3 << "NULL" ;
    }else{
      generatedZone3 << "gSuccessorTable" << cStringWithSigned (r) ;
    }
  }
  generatedZone3 << "} ;\n\n" ;

//--- Write for every production, its left non terminal, ---------------------
//    and the size of right string
  const PMSInt32 productionsCount = inProductionRules.length () ;
  generatedZone3.appendCppTitleComment ("Production rules infos (left non terminal, size of right string)") ;
  generatedZone3 << "static const PMSInt16 gProductionsTable ["
          << cStringWithSigned (productionsCount)
          << " * 2] = {\n" ;
  for (PMSInt32 p=0 ; p<productionsCount ; p++) {
    if (p > 0) {
      generatedZone3 << ",\n" ;
    }
    generatedZone3 << "  " << cStringWithSigned (inProductionRules (p COMMA_HERE).aNumeroNonTerminalGauche - columnsCount)
            << ", "
            << cStringWithSigned (inProductionRules (p COMMA_HERE).aDerivation.count ()) ;
  }
  generatedZone3 << "\n} ;\n\n" ;

//--- Generate methods, one by non terminal ----------------------------------
  cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis nonTerminal (inNonTerminalSymbolSortedListForGrammarAnalysis, kEnumeration_up) ;
  while (nonTerminal.hasCurrentObject ()) {
    generatedZone3.appendCppTitleComment (C_String ("'") + nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue () + "' non terminal implementation") ;
    const PMSInt32 pureBNFleftNonterminalIndex = (PMSInt32) nonTerminal.current_mNonTerminalIndex (HERE).uintValue () ;
    const PMSInt32 first = inProductionRules.tableauIndicePremiereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
  //--- Parse label
    generatedZone3 << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                 << "::nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                 << "_parse (C_Lexique_" << inLexiqueName.identifierRepresentation () << " * inLexique"
                 << ") {\n"
                    "  switch (inLexique->nextProductionIndex ()) {\n" ;
    if (first >= 0) { // first<0 means the non terminal symbol is unuseful
      MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
      const PMSInt32 last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
      MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
      for (PMSInt32 j=first ; j<=last ; j++) {
        const PMSInt32 ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
        generatedZone3 << "  case " << cStringWithSigned (ip) << " :\n    " ;
        inProductionRules (ip COMMA_HERE).engendrerAppelProduction (0,
                                                                    inVocabulary,
                                                                    "parse",
                                                                    generatedZone3) ;
        generatedZone3 << "    break ;\n" ;
      }
    }
    generatedZone3 << "  default :\n"
                      "    inLexique->internalBottomUpParserError (HERE) ;\n"
                      "    break ;\n"
                      "  }\n"
                      "}\n\n" ;
  //--- Indexing
    if (inHasIndexing) {
      generatedZone3 << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                   << "::nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                   << "_indexing (C_Lexique_" << inLexiqueName.identifierRepresentation () << " * inLexique"
                   << ") {\n"
                      "  switch (inLexique->nextProductionIndex ()) {\n" ;
      if (first >= 0) { // first<0 means the non terminal symbol is unuseful
        MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
        const PMSInt32 last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
        MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
        for (PMSInt32 j=first ; j<=last ; j++) {
          const PMSInt32 ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
          generatedZone3 << "  case " << cStringWithSigned (ip) << " :\n    " ;
          inProductionRules (ip COMMA_HERE).engendrerAppelProduction (0,
                                                                      inVocabulary,
                                                                      "indexing",
                                                                      generatedZone3) ;
          generatedZone3 << "    break ;\n" ;
        }
      }
      generatedZone3 << "  default :\n"
                        "    inLexique->internalBottomUpParserError (HERE) ;\n"
                        "    break ;\n"
                        "  }\n"
                        "}\n\n" ;
    }
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis currentAltForNonTerminal2 (nonTerminal.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (currentAltForNonTerminal2.hasCurrentObject ()) {
      generatedZone3 << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                     << "::nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                     << "_" << currentAltForNonTerminal2.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                     << " (" ;
      cEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal2.current_mFormalParametersList (HERE), kEnumeration_up) ;
      PMSInt16 numeroParametre = 1 ;
      while (parametre.hasCurrentObject ()) {
        switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
          generatedZone3 << "const " ;
          break ;
        default : break ;
        }
        generatedZone3 << "GALGAS_" << parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mAttribute_string.stringValue ().identifierRepresentation () ;
        switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
          generatedZone3 << " " ;
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
          generatedZone3 << " " ;
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
          generatedZone3 << " & " ;
          break ;
        default : break ;
        }
        if (first >= 0) {
          generatedZone3 << " parameter_" << cStringWithSigned (numeroParametre) ;
        }
        parametre.gotoNextObject () ;
        generatedZone3 << ",\n                                " ;
        numeroParametre ++ ;
      }
      generatedZone3 << "C_Lexique_" << inLexiqueName.identifierRepresentation () << " * inLexique) {\n"
                        "  switch (inLexique->nextProductionIndex ()) {\n" ;
      if (first >= 0) { // first<0 means the non terminal symbol is unuseful
        MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
        const PMSInt32 last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
        MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
        for (PMSInt32 j=first ; j<=last ; j++) {
          const PMSInt32 ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
          generatedZone3 << "  case " << cStringWithSigned (ip) << " :\n    " ;
          inProductionRules (ip COMMA_HERE).engendrerAppelProduction (numeroParametre,
                                                                      inVocabulary,
                                                                      currentAltForNonTerminal2.current_lkey (HERE).mAttribute_string.stringValue (),
                                                                      generatedZone3) ;
          generatedZone3 << "    break ;\n" ;
        }
      }
      generatedZone3 << "  default :\n"
                        "    inLexique->internalBottomUpParserError (HERE) ;\n"
                        "  }\n" ;
      generatedZone3 << "}\n\n" ;
      currentAltForNonTerminal2.gotoNextObject () ;
    }
    //--- Engendrer l'axiome ?
    if (nonTerminal.current_mNonTerminalIndex (HERE).uintValue () == inOriginalGrammarStartSymbol) {
      if (inHasIndexing) {
        generatedZone3 << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                     << "::performIndexing (C_Compiler * inCompiler,\n"
                        "             const C_String & inSourceFilePath) {\n"
                        "  C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                        "  macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, \"\", \"\", inCompiler->ioParametersPtr (), inSourceFilePath COMMA_HERE)) ;\n"
                        "  scanner->enableIndexing () ;\n"
                        "  if (scanner->sourceText () != NULL) {\n"
                        "    scanner->mPerformGeneration = inCompiler->mPerformGeneration ;\n"
                        "    const bool ok = scanner->performBottomUpParsing (gActionTable, gNonTerminalNames,\n"
                        "                                                     gActionTableIndex, gSuccessorTable,\n"
                        "                                                     gProductionsTable) ;\n"
                        "    if (ok) {\n"
                        "      cGrammar_" << inTargetFileName.identifierRepresentation () << " grammar ;\n"
                        "      grammar.nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation () << "_indexing (scanner) ;\n"
                        "    }\n"
                        "    scanner->generateIndexFile () ;\n"
                        "  }\n"
                        "  macroDetachSharedObject (scanner) ;\n"
                        "}\n\n" ;
      }
      cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis currentAltForNonTerminal (nonTerminal.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
      while (currentAltForNonTerminal.hasCurrentObject ()) {
        generatedZone3.appendCppTitleComment ("Grammar start symbol implementation") ;
      //--- Define file parsing static method
        generatedZone3 << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceFileParsing_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (C_Compiler * inCompiler"
                          ",\n                                "
                          "GALGAS_lstring inFilePath" ;
        cEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal.current_mFormalParametersList (HERE), kEnumeration_up) ;
        PMSInt32 numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << ",\n                                " ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            generatedZone3 << "const " ;
            break ;
          default : break ;
          }
          generatedZone3 << "GALGAS_" << parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mAttribute_string.stringValue ().identifierRepresentation () ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            generatedZone3 << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
            generatedZone3 << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
            generatedZone3 << " & " ;
            break ;
          default : break ;
          }
          generatedZone3 << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "\n                                "
                          "COMMA_LOCATION_ARGS) {\n" ;
        generatedZone3 << "  if (inFilePath.isValid ()) {\n"
                          "    const GALGAS_string filePathAsString = inFilePath.reader_string (HERE) ;\n"
                          "    C_String filePath = filePathAsString.stringValue () ;\n"
                          "    if (! filePath.isAbsolutePath ()) {\n"
                          "      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;\n"
                          "    }\n"
                          "    if (filePath.fileExists ()) {\n"
                          "      C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "      macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, \"\", \"\", inCompiler->ioParametersPtr (), filePath COMMA_HERE)) ;\n"
                          "      // if (scanner->needsCompiling ()) {\n"
                          "        if (scanner->sourceText () != NULL) {\n"
                          "          scanner->mPerformGeneration = inCompiler->mPerformGeneration ;\n"
                          "          const bool ok = scanner->performBottomUpParsing (gActionTable, gNonTerminalNames,\n"
                          "                                                           gActionTableIndex, gSuccessorTable,\n"
                          "                                                           gProductionsTable) ;\n"
                          "          if (ok && ! scanner->mParseOnlyFlag) {\n"
                          "            cGrammar_" << inTargetFileName.identifierRepresentation () << " grammar ;\n"
                          "            " ;
        generatedZone3 << "grammar.nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << "_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << "parameter_" << cStringWithSigned (numeroParametre) << ", " ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "scanner) ;\n"
                          "          }\n"
                          "        }else{\n"
                          "          C_String message ;\n"
                          "          message << \"the '\" << filePath << \"' file exists, but cannot be read\" ;\n"
                          "          const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;\n"
                          "          inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;\n" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          if (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut) {
            generatedZone3 << "          parameter_" << cStringWithSigned (numeroParametre) << ".drop () ;\n" ;
          }
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "      }\n"
                          "    // }\n"
                          "    macroDetachSharedObject (scanner) ;\n"
                          "  }else{\n"
                          "    C_String message ;\n"
                          "    message << \"the '\" << filePath << \"' file does not exist\" ;\n"
                          "    const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;\n"
                          "    inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;\n" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          if (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut) {
            generatedZone3 << "    parameter_" << cStringWithSigned (numeroParametre) << ".drop () ;\n" ;
          }
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "    }\n"
                          "  }\n"
                          "}\n\n" ;
      //--- Define string parsing static method
        generatedZone3.appendCppHyphenLineComment () ;
        generatedZone3 << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceStringParsing_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (C_Compiler * inCompiler"
                          ",\n                                "
                          "GALGAS_string inSourceString" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << ",\n                                " ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            generatedZone3 << "const " ;
            break ;
          default : break ;
          }
          generatedZone3 << "GALGAS_" << parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mAttribute_string.stringValue ().identifierRepresentation () ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            generatedZone3 << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
            generatedZone3 << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
            generatedZone3 << " & " ;
            break ;
          default : break ;
          }
          generatedZone3 << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "\n                                "
                          "COMMA_UNUSED_LOCATION_ARGS) {\n" ;
        generatedZone3 << "  C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "  macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation ()
//                       << " (inCompiler, inCompiler->ioParametersPtr (), inSourceString.stringValue (), \"Error when parsing dynamic string\" COMMA_HERE)) ;\n"
                       << " (inCompiler, inCompiler->ioParametersPtr (), inSourceString.stringValue (), \"\" COMMA_HERE)) ;\n"
                          "  if (scanner->sourceText () != NULL) {\n"
                          "    scanner->mPerformGeneration = inCompiler->mPerformGeneration ;\n" ;
        generatedZone3 << "    const bool ok = scanner->performBottomUpParsing (gActionTable, gNonTerminalNames,\n"
                          "                                                     gActionTableIndex, gSuccessorTable,\n"
                          "                                                     gProductionsTable) ;\n"
                          "    if (ok && ! scanner->mParseOnlyFlag) {\n"
                          "      cGrammar_" << inTargetFileName.identifierRepresentation () << " _grammar ;\n"
                          "      " ;
        generatedZone3 << "_grammar.nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << "_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          generatedZone3 << "parameter_" << cStringWithSigned (numeroParametre) << ", " ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "scanner) ;\n"
                           "    }\n"
                          "  }\n"
                          "  macroDetachSharedObject (scanner) ;\n"
                          "}\n\n" ;
        currentAltForNonTerminal.gotoNextObject () ;
      }
    }
    nonTerminal.gotoNextObject () ;
  }

//--- Implement non terminal from 'select' and 'repeat' instructions ---------
  const PMSInt32 terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  for (PMSInt32 ts=terminalSymbolsCount ; ts<inVocabulary.getAllSymbolsCount () ; ts++) {
    if (inVocabulary.needToGenerateChoice (ts COMMA_HERE)) {
      generatedZone3.appendCppTitleComment (C_String ("'") + inVocabulary.getSymbol (ts COMMA_HERE) +"' non terminal implementation") ;
      generatedZone3 << "PMSInt32 cGrammar_" << inTargetFileName.identifierRepresentation ()
              << "::" << inVocabulary.getSymbol (ts COMMA_HERE) << " ("
              << "C_Lexique_" << inLexiqueName.identifierRepresentation () << " * inLexique"
              << ") {\n" ;
      generatedZone3 << "// Productions numbers :" ;

      const PMSInt32 first = inProductionRules.tableauIndicePremiereProduction (ts - terminalSymbolsCount COMMA_HERE) ;
      MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
      const PMSInt32 last = inProductionRules.tableauIndiceDerniereProduction (ts - terminalSymbolsCount COMMA_HERE) ;
      MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
      for (PMSInt32 j=first ; j<=last ; j++) {
        generatedZone3 << " " << cStringWithSigned (inProductionRules.tableauIndirectionProduction (j COMMA_HERE)) ;
      }
      generatedZone3 << "\n"
                 "  return inLexique->nextProductionIndex () - "
              << cStringWithSigned ((PMSInt32)(first - 1))
              << " ;\n"
                 "}\n\n" ;
    }
  }
//--- End of C++ file
  generatedZone3.appendCppHyphenLineComment () ;

//--- Generate file
  TC_UniqueArray <C_String> directoriesToExclude ;
  directoriesToExclude.addObject ("DEPENDENCIES") ;
  inCompiler->generateFileFromPathes (inOutputDirectoryForCppFiles,
                                    directoriesToExclude,
                                    "//",
                                    inTargetFileName + ".cpp",
                                    "\n\n", // User Zone 1
                                    generatedZone2,
                                    "\n\n", // User Zone 2
                                    generatedZone3) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
// G E N E R A T E    S L R    A N A L Y Z E R                               *
//                                                                           *
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
  const PMSInt32 vocabularyCount = inVocabulary.getAllSymbolsCount () ;
  c_LR0_items_set LR0_items_set ;
//--- Add last production, that is the added production <> -> <start_symbol>
  LR0_items_set.add_LR0_item (inProductionRules.length () - 1, 0) ;
  LR0_items_set.close_items_set (inProductionRules, inVocabulary.getTerminalSymbolsCount ()) ;
  outLR0_items_sets_collection.searchOrInsert_LR0_itemSet (LR0_items_set) ;
//--- Calculate LR0 automaton
  for (PMSInt32 explorationIndex=0 ; explorationIndex<outLR0_items_sets_collection.getStatesCount () ; explorationIndex++) {
    for (PMSInt32 s=0 ; s<vocabularyCount ; s++) {
      outLR0_items_sets_collection.getTransitionFrom (inProductionRules, explorationIndex, s, LR0_items_set) ;
      if (! LR0_items_set.isEmptySet ()) {
        LR0_items_set.close_items_set (inProductionRules, inVocabulary.getTerminalSymbolsCount ()) ;
        const PMSInt32 target = outLR0_items_sets_collection.searchOrInsert_LR0_itemSet (LR0_items_set) ;
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
SLR_computations (C_Compiler * inCompiler,
                  const cPureBNFproductionsList & inProductionRules,
                  const cVocabulary & inVocabulary,
                  C_HTML_FileWrite * inHTMLfile,
                  const TC_UniqueArray <TC_UniqueArray <PMSInt32> > & inFOLLOWarray,
                  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                  const PMUInt32 inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  const C_String & inOutputDirectoryForCppFiles,
                  const C_String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn,
                  const bool inHasIndexing) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Building SLR automaton... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->appendCppTitleComment ("Building SLR automaton", "title") ;
    inHTMLfile->outputRawData ("<p></p>") ;
  }

//--- Compute LR0 automaton
  c_LR0_items_sets_collection LR0_items_sets_collection ;
  TC_FIFO <c_LR0_automaton_transition> transitionList ;
  compute_LR0_automation (inProductionRules,
                          inVocabulary,
                          LR0_items_sets_collection,
                          transitionList) ;
  if (inVerboseOptionOn) {
    co << cStringWithSigned (LR0_items_sets_collection.getStatesCount ()) << " states, "
       << cStringWithSigned (transitionList.length ()) << " transitions.\n" ;
    co.flush () ;
  }
//--- Display automaton states
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<table class=\"result\">"
                              "<tr><td class=\"result_title\" colspan=\"2\">") ;
    *inHTMLfile << "LR0 automaton states" ;
    inHTMLfile->outputRawData ("</td></tr>") ;
    LR0_items_sets_collection.display (inProductionRules, inVocabulary, *inHTMLfile) ;
    inHTMLfile->outputRawData ("</table>") ;
  }
//--- Display automaton transitions
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    *inHTMLfile << "LR0 automaton transitions" ;
    inHTMLfile->outputRawData ("</td></tr>") ;
    for (PMSInt32 i=0 ; i<transitionList.length () ; i++) {
      inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      *inHTMLfile << "  S" << cStringWithSigned (transitionList (i COMMA_HERE).mSourceState)
                  << " |- " ;
      inVocabulary.printInFile (*inHTMLfile, transitionList (i COMMA_HERE).mAction COMMA_HERE) ;
      *inHTMLfile << " -> S"
                  << cStringWithSigned (transitionList (i COMMA_HERE).mTargetState) ;
      inHTMLfile->outputRawData ("</code></td></tr>") ;
    }
    inHTMLfile->outputRawData ("</table><p></p>") ;
  }

//--- Console display
  if (inVerboseOptionOn) {
    co << "  Checking SLR condition... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
  inHTMLfile->appendCppTitleComment ("Checking SLR condition", "title") ;
  }

//--- Build SLR table... detect if grammar is not SLR
  const PMSInt32 terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  TC_UniqueArray2 <cDecisionTableElement> SLRdecisionTable (LR0_items_sets_collection.getStatesCount (), terminalSymbolsCount) ;
  PMSInt32 shiftActions = 0 ;
  PMSInt32 reduceActions = 0 ;
  PMSInt32 successorEntries = 0 ;
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    *inHTMLfile << "SLR decision table" ;
    inHTMLfile->outputRawData ("</td></tr>") ;
  }
//--- Shift actions
  for (PMSInt32 index=0 ; index<transitionList.length () ; index++) {
    if (transitionList (index COMMA_HERE).mAction < terminalSymbolsCount) {
      const PMSInt32 sourceState = transitionList (index COMMA_HERE).mSourceState ;
      const PMSInt32 targetState = transitionList (index COMMA_HERE).mTargetState ;
      const PMSInt32 terminal = transitionList (index COMMA_HERE).mAction ;
      if (inHTMLfile != NULL) {
        inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        *inHTMLfile << "Action [S" << cStringWithSigned (sourceState) << ", " ;
        inVocabulary.printInFile (*inHTMLfile, terminal COMMA_HERE) ;
        *inHTMLfile << "] : shift, goto S" << cStringWithSigned (targetState) ;
        inHTMLfile->outputRawData ("</code></td></tr>") ;
      }
      SLRdecisionTable (sourceState, terminal COMMA_HERE) = cDecisionTableElement::shiftDecision (targetState) ;
      shiftActions ++ ;
    }
  }
//--- Reduce actions
  PMSInt32 conflictCount = 0 ;
  TC_UniqueArray <PMSInt32> productionsSet ;
  for (PMSInt32 state=0 ; state<LR0_items_sets_collection.getStatesCount () ; state++) {
    bool acceptCondition = false ;
    LR0_items_sets_collection.getProductionsWhereLocationIsRight (state,
                                                                  inProductionRules,
                                                                  productionsSet,
                                                                  acceptCondition) ;
    if (acceptCondition) {
      const PMSInt32 terminal = inVocabulary.getEmptyStringTerminalSymbolIndex () ;
      if (inHTMLfile != NULL) {
        inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        *inHTMLfile << "Action [S"
                    << cStringWithSigned (state)
                    << ", " ;
        inVocabulary.printInFile (*inHTMLfile, terminal COMMA_HERE) ;
        *inHTMLfile << "] : accept" ;
        inHTMLfile->outputRawData ("</code>") ;
      }
      if (! SLRdecisionTable (state, terminal COMMA_HERE).isInUndefinedState ()) {
        if (inHTMLfile != NULL) {
          inHTMLfile->outputRawData ("<span class=\"error\">") ;
          *inHTMLfile << " *** CONFLICT ***" ;
          inHTMLfile->outputRawData ("</span>") ;
        }
        conflictCount ++ ;
      }
      SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::acceptDecision () ;
      if (inHTMLfile != NULL) {
        inHTMLfile->outputRawData ("</td></tr>") ;
      }
    }
    for (PMSInt32 p=0 ; p<productionsSet.count () ; p++) {
      const PMSInt32 productionIndex = productionsSet (p COMMA_HERE) ;
      const PMSInt32 leftNonTerminal = inProductionRules (productionIndex COMMA_HERE).aNumeroNonTerminalGauche ;
      const TC_UniqueArray <PMSInt32> & followsArray = inFOLLOWarray (leftNonTerminal COMMA_HERE) ;
      for (PMSInt32 f=0 ; f<followsArray.count () ; f++) {
        const PMSInt32 terminal = followsArray (f COMMA_HERE) ;
        if (inHTMLfile != NULL) {
          inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
          *inHTMLfile << "Action [S"
                      << cStringWithSigned (state)
                      << ", " ;
          inVocabulary.printInFile (*inHTMLfile, terminal COMMA_HERE) ;
          *inHTMLfile << "] : reduce by " ;
          inVocabulary.printInFile (*inHTMLfile, leftNonTerminal COMMA_HERE) ;
          inHTMLfile->outputRawData ("</code>") ;
        }
        if (! SLRdecisionTable (state, terminal COMMA_HERE).isInUndefinedState ()) {
          if (inHTMLfile != NULL) {
            inHTMLfile->outputRawData ("<span class=\"error\">") ;
            *inHTMLfile << " *** CONFLICT ***" ;
            inHTMLfile->outputRawData ("</span>") ;
          }
          conflictCount ++ ;
        }
        if (inHTMLfile != NULL) {
          inHTMLfile->outputRawData ("</td></tr>") ;
        }
        SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::reduceDecision (productionIndex) ;
        reduceActions ++ ;
      }    
    }
  }
//--- Successors
  for (PMSInt32 t=0 ; t<transitionList.length () ; t++) {
    if (transitionList (t COMMA_HERE).mAction >= terminalSymbolsCount) {
      successorEntries ++ ;
      if (inHTMLfile != NULL) {
        inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        *inHTMLfile << "Successor [S"
                    << cStringWithSigned (transitionList (t COMMA_HERE).mSourceState)
                    << ", " ;
        inVocabulary.printInFile (*inHTMLfile, transitionList (t COMMA_HERE).mAction COMMA_HERE) ;
        *inHTMLfile << "] = S"
                    << cStringWithSigned (transitionList (t COMMA_HERE).mTargetState) ;
        inHTMLfile->outputRawData ("</code></td></tr>") ;
      }
    }
  }
//--- Display summary
  if (inVerboseOptionOn) {
    if (conflictCount == 0) {
      co << "ok.\n" ;
    }else{
      co << "error.\n" ;
    }
    co.flush () ;
  }
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("</table><p>") ;
    *inHTMLfile << "LR0 automaton has "
                << cStringWithSigned (LR0_items_sets_collection.getStatesCount ())
                << " states and "
                << cStringWithSigned (transitionList.length ())
                << " transitions.\n\n"
                   "Analyze table has "
                << cStringWithSigned (shiftActions) << " shift actions, "
                << cStringWithSigned (reduceActions) << " reduce actions, and "
                << cStringWithSigned (successorEntries) << " state successor entries." ;
    inHTMLfile->outputRawData ("</p><p>") ;
    if (conflictCount == 0) {
      inHTMLfile->outputRawData ("<span class=\"success\">") ;
      *inHTMLfile << "No conflict : grammar is SLR (1)." ;
      inHTMLfile->outputRawData ("</span>") ;
    }else{
      inHTMLfile->outputRawData ("<span class=\"error\">") ;
      *inHTMLfile << cStringWithSigned (conflictCount)
                  << " conflict"
                  << ((conflictCount > 1) ? "s" : "")
                  << " : grammar is not SLR (1)." ;
      inHTMLfile->outputRawData ("</span>") ;
    }
    inHTMLfile->outputRawData ("</p>") ;
  }
//--- Generate C++ file
  if (conflictCount == 0) {
    generate_SLR_grammar_cpp_file (inCompiler,
                                   inProductionRules,
                                   inVocabulary,
                                   SLRdecisionTable,
                                   transitionList,
                                   inNonTerminalSymbolSortedListForGrammarAnalysis,
                                   inOriginalGrammarStartSymbol,
                                   inLexiqueName,
                                   inTargetFileName,
                                   inOutputDirectoryForCppFiles,
                                   inHasIndexing) ;
  }
  outOk = conflictCount == 0 ;
}

//---------------------------------------------------------------------------*
