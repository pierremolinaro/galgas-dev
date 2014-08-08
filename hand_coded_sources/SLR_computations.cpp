//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Routines for SLR grammar computations                                   *
//                                                                                                                     *
//  Copyright (C) 2002, ..., 2014 Pierre Molinaro.                             *
//                                                                                                                     *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                                                                     *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//   more details.                                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "strings/C_HTMLString.h"
#include "files/C_TextFileWrite.h"
#include "collections/TC_UniqueArray2.h"
#include "galgas2/C_Compiler.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "SLR_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "cDecisionTableElement.h"
#include "grammarCompilation.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    C L A S S    F O R   L R 0    I T E M                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class c_LR0_item {
  public : int32_t mProductionRuleIndex ;
  public : int32_t mLocationIndex ;
//--- Default constructor
  public : c_LR0_item (void) ;
//--- Constructor
  public : c_LR0_item (const int32_t inProductionRuleIndex,
                       const int32_t inLocationIndex) ;
//--- Compare two items
  public : static int32_t compare_LR0_items (const c_LR0_item & inItem1,
                                            const c_LR0_item & inItem2) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

c_LR0_item::c_LR0_item (void) :
mProductionRuleIndex (-1),
mLocationIndex (-1) {
}

//---------------------------------------------------------------------------------------------------------------------*

c_LR0_item::c_LR0_item (const int32_t inProductionRuleIndex,
                        const int32_t inLocationIndex) :
mProductionRuleIndex (inProductionRuleIndex),
mLocationIndex (inLocationIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

int32_t c_LR0_item::
compare_LR0_items (const c_LR0_item & inItem1,
                   const c_LR0_item & inItem2) {
  int32_t result = inItem1.mProductionRuleIndex - inItem2.mProductionRuleIndex ;
  if (result == 0) {
    result = inItem1.mLocationIndex - inItem2.mLocationIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    C L A S S    F O R   L R 0    I T E M S    S E T                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class c_LR0_items_set {
//--- Private data
  private : TC_UniqueArray <c_LR0_item> mItemsSet ;

//--- Default constructor
  public : c_LR0_items_set (void) ;

//--- Add a new LR0 item (returns false if already present)
  public : bool add_LR0_item (const int32_t inProductionRuleIndex,
                              const int32_t inLocationIndex) ;

//--- Get transitions LR0 item set from a state for a symbol
  public : void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const int32_t inSymbol,
                                   c_LR0_items_set & out_LR0_item_set) ;

//--- Closing the LR0 items set
  public : void close_items_set (const cPureBNFproductionsList & inProductionRules,
                                 const int32_t inTerminalSymbolsCount) ;

//--- Empty set ?
  public : bool isEmptySet (void) const ;

//--- Display LR0 items set
  public : void display (const cPureBNFproductionsList & inProductionRules,
                         const cVocabulary & inVocabulary,
                         C_HTMLString & inHTMLfile) ;

//--- Compare two items sets
  public : static int32_t compare_LR0_items_sets (const c_LR0_items_set & inItemsSet1,
                                                   const c_LR0_items_set & inItemsSet2) ;

//--- Search from a LR0 items set (used for building 'reduce' actions of SLR table)
  public : void getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <int32_t> & outProductionsSet,
                                                    bool & outAcceptCondition) ;

//--- Handle Copy
  public : c_LR0_items_set (const c_LR0_items_set &) ;

//--- No assignment
  private : c_LR0_items_set & operator = (const c_LR0_items_set &) ;

//--- Friend
  friend void swap (c_LR0_items_set & ioOperand1, c_LR0_items_set & ioOperand2) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

c_LR0_items_set::c_LR0_items_set (void) :
mItemsSet () {
}

//---------------------------------------------------------------------------------------------------------------------*

c_LR0_items_set::c_LR0_items_set (const c_LR0_items_set & inSource) :
mItemsSet () {
  inSource.mItemsSet.copyTo (mItemsSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool c_LR0_items_set::
add_LR0_item (const int32_t inProductionRuleIndex,
              const int32_t inLocationIndex) {
  c_LR0_item item (inProductionRuleIndex, inLocationIndex) ;
//--- First, search for this item
  bool found = false ;
  for (int32_t i=0 ; (i<mItemsSet.count ()) && ! found ; i++) {
    found = c_LR0_item::compare_LR0_items (mItemsSet (i COMMA_HERE), item) == 0 ;
  }
//--- If not found, add it
  if (! found) {
    mItemsSet.addObject (item) ;
    mItemsSet.sortArrayUsingFunction (c_LR0_item::compare_LR0_items) ;
  }
  return ! found ;
}

//---------------------------------------------------------------------------------------------------------------------*


void c_LR0_items_set::
close_items_set (const cPureBNFproductionsList & inProductionRules,
                 const int32_t inTerminalSymbolsCount) {
  bool loop = true ;
  while (loop) {
    loop = false ;
    for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
      const int32_t locationIndex = mItemsSet (i COMMA_HERE).mLocationIndex ;
      const int32_t productionRule = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
      if (locationIndex < inProductionRules (productionRule COMMA_HERE).derivationLength ()) {
        const int32_t prodX = inProductionRules (productionRule COMMA_HERE).derivationAtIndex (locationIndex COMMA_HERE) - inTerminalSymbolsCount ;
        if (prodX >= 0) {
          const int32_t first = inProductionRules.tableauIndicePremiereProduction (prodX COMMA_HERE) ;
          MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
          const int32_t last = inProductionRules.tableauIndiceDerniereProduction (prodX COMMA_HERE) ;
          MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
          for (int32_t j=first ; j<=last ; j++) {
            const int32_t ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
            const bool inserted = add_LR0_item (ip, 0) ;
            loop = loop || inserted ;
          }
        }
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

bool c_LR0_items_set::isEmptySet (void) const {
  return mItemsSet.count () == 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void c_LR0_items_set::
display (const cPureBNFproductionsList & inProductionRules,
         const cVocabulary & inVocabulary,
         C_HTMLString & inHTMLfile) {
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const cProduction & p = inProductionRules (mItemsSet (i COMMA_HERE).mProductionRuleIndex COMMA_HERE) ;
    const int32_t location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    inHTMLfile.outputRawData ("<span class=\"list\">") ;
    inHTMLfile << "[" ;
    inVocabulary.printInFile (inHTMLfile, p.leftNonTerminalIndex () COMMA_HERE) ;
    inHTMLfile << " ->" ;
    for (int32_t j=0 ; j<p.derivationLength () ; j++) {
      if (j == location) {
        inHTMLfile << " ." ;      
      }
      inHTMLfile << " " ;
      inVocabulary.printInFile (inHTMLfile, p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
    }
    if (location == p.derivationLength ()) {
      inHTMLfile << " ." ;      
    }
    inHTMLfile << "]" ;
    inHTMLfile.outputRawData ("</span>\n") ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void c_LR0_items_set::
getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                   const int32_t inSymbol,
                   c_LR0_items_set & out_LR0_item_set) {
  out_LR0_item_set.mItemsSet.setCountToZero () ;
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const int32_t productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules (productionRuleIndex COMMA_HERE) ;
    const int32_t location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location < p.derivationLength ()) {
      const int32_t symbol = p.derivationAtIndex (location COMMA_HERE) ;
      if (symbol == inSymbol) {
        out_LR0_item_set.add_LR0_item (productionRuleIndex, location + 1) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void c_LR0_items_set::
getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                    TC_UniqueArray <int32_t> & outProductionsSet,
                                    bool & outAcceptCondition) {
  outProductionsSet.setCountToZero () ;
  outAcceptCondition = false ;
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const int32_t productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules (productionRuleIndex COMMA_HERE) ;
    const int32_t location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location == p.derivationLength ()) {
      outProductionsSet.addObject (productionRuleIndex) ;
    }
    if ((productionRuleIndex == (inProductionRules.length () - 1)) && (location == 1)) {
      outAcceptCondition = true ;
    }
  }  
}

//---------------------------------------------------------------------------------------------------------------------*

int32_t c_LR0_items_set::
compare_LR0_items_sets (const c_LR0_items_set & inItemsSet1,
                        const c_LR0_items_set & inItemsSet2) {
  int32_t result = c_LR0_item::
    compare_LR0_items (inItemsSet1.mItemsSet (0 COMMA_HERE),
                       inItemsSet2.mItemsSet (0 COMMA_HERE)) ;
  if (result == 0) {
    const int32_t length1 = inItemsSet1.mItemsSet.count () ;
    result = length1 - inItemsSet2.mItemsSet.count () ;
    for (int32_t i=1 ; (i<length1) && (result==0) ; i++) {
      result = c_LR0_item::compare_LR0_items (inItemsSet1.mItemsSet (i COMMA_HERE),
                                              inItemsSet2.mItemsSet (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void swap (c_LR0_items_set & ioOperand1, c_LR0_items_set & ioOperand2) {
  swap (ioOperand1.mItemsSet, ioOperand2.mItemsSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// E L E M E N T    C L A S S    F O R   A V L    T R E E                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cLR0_items_sets_AVL_tree {
  public : cLR0_items_sets_AVL_tree * mPtrToInf ;
  public : cLR0_items_sets_AVL_tree * mPtrToSup ;
  private : const int32_t mInfo ;
  public : int32_t mBalance ;
  protected : cLR0_items_sets_AVL_tree (const int32_t inInfo) ;
  public : virtual ~cLR0_items_sets_AVL_tree (void) ;
  private : int32_t compare (const c_LR0_items_set & in_LR0_items_set,
                         const TC_UniqueArray <c_LR0_items_set> & in_LR0_items_sets_array) ;
  public : static int32_t recursiveSearchOrInsert
                         (cLR0_items_sets_AVL_tree * & ioRootPointer,
                          c_LR0_items_set & io_LR0_items_set,
                          TC_UniqueArray <c_LR0_items_set> & io_LR0_items_sets_array,
                          bool & outExtension) ;

//--- No copy
  private : cLR0_items_sets_AVL_tree (cLR0_items_sets_AVL_tree &) ;
  private : cLR0_items_sets_AVL_tree & operator = (cLR0_items_sets_AVL_tree &) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cLR0_items_sets_AVL_tree::
cLR0_items_sets_AVL_tree (const int32_t inInfo) :
mPtrToInf (NULL),
mPtrToSup (NULL),
mInfo (inInfo),
mBalance (0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

cLR0_items_sets_AVL_tree::
~cLR0_items_sets_AVL_tree (void) {
  macroMyDelete (mPtrToInf) ;
  macroMyDelete (mPtrToSup) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

int32_t cLR0_items_sets_AVL_tree::
compare (const c_LR0_items_set & in_LR0_items_set,
         const TC_UniqueArray <c_LR0_items_set> & in_LR0_items_sets_array) {
  return c_LR0_items_set::compare_LR0_items_sets (in_LR0_items_sets_array (mInfo COMMA_HERE), in_LR0_items_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Rotate left                                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Rotate right                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
 
//---------------------------------------------------------------------------------------------------------------------*

int32_t cLR0_items_sets_AVL_tree::
recursiveSearchOrInsert (cLR0_items_sets_AVL_tree * & ioRootPointer,
                         c_LR0_items_set & io_LR0_items_set,
                         TC_UniqueArray <c_LR0_items_set> & io_LR0_items_sets_array,
                         bool & outExtension) {
  int32_t result ;
  if (ioRootPointer == NULL) {
    result = io_LR0_items_sets_array.count () ;
    macroMyNew (ioRootPointer, cLR0_items_sets_AVL_tree (result)) ;
    io_LR0_items_sets_array.addObjectUsingSwap (io_LR0_items_set) ;
    outExtension = true ;
  }else{
    macroValidPointer (ioRootPointer) ;
    const int32_t comp = ioRootPointer->compare (io_LR0_items_set, io_LR0_items_sets_array) ;
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

 
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// C L A S S    F O R   L R 0    I T E M S    S E T S   C O L L E C T I O N    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class c_LR0_items_sets_collection {
//--- Default constructor and destructor
  public : c_LR0_items_sets_collection (void) ;
  public : virtual ~c_LR0_items_sets_collection (void) ;

//--- No copy
  private : c_LR0_items_sets_collection (c_LR0_items_sets_collection &) ;
  private : c_LR0_items_sets_collection & operator = (c_LR0_items_sets_collection &) ;

//--- Search or insert a LR0 items set (return set index)
  public : int32_t searchOrInsert_LR0_itemSet (c_LR0_items_set & ioItemSet) ;

//--- States count
  public : int32_t getStatesCount (void) ;

//--- Get transitions LR0 item set from a state for a symbol
  public : void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const int32_t inStateIndex,
                                   const int32_t inSymbol,
                                   c_LR0_items_set & out_LR0_item_set) ;

//--- Display LR0 items set
  public : void display (const cPureBNFproductionsList & inProductionRules,
                         const cVocabulary & inVocabulary,
                         C_HTMLString & inHTMLfile) ;

//--- Search from a LR0 items set (used for building 'reduce' actions of SLR table)
  public : void getProductionsWhereLocationIsRight (const int32_t inStateIndex,
                                                    const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <int32_t> & outProductionsSet,
                                                    bool & outAcceptCondition) ;

//--- Private data
  private : TC_UniqueArray <c_LR0_items_set> m_LR0_items_sets_array ;
  private : cLR0_items_sets_AVL_tree * mRoot ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

c_LR0_items_sets_collection::c_LR0_items_sets_collection (void) :
m_LR0_items_sets_array (),
mRoot (NULL) {
  m_LR0_items_sets_array.makeRoomUsingSwap (500) ;
}

//---------------------------------------------------------------------------------------------------------------------*

c_LR0_items_sets_collection::~c_LR0_items_sets_collection (void) {
  macroMyDelete (mRoot) ;
}

//---------------------------------------------------------------------------------------------------------------------*

int32_t c_LR0_items_sets_collection::
searchOrInsert_LR0_itemSet (c_LR0_items_set & ioItemSet) {
  bool extension = false ;
  return cLR0_items_sets_AVL_tree::recursiveSearchOrInsert (mRoot, ioItemSet, m_LR0_items_sets_array, extension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void c_LR0_items_sets_collection::
display (const cPureBNFproductionsList & inProductionRules,
         const cVocabulary & inVocabulary,
         C_HTMLString & inHTMLfile) {
  for (int32_t i=0 ; i<m_LR0_items_sets_array.count () ; i++) {
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile << "S" << cStringWithSigned (i) ;
    inHTMLfile.outputRawData ("</td><td><code>") ;
    m_LR0_items_sets_array (i COMMA_HERE).display (inProductionRules, inVocabulary, inHTMLfile) ;
    inHTMLfile.outputRawData ("</code></td></tr>") ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

int32_t c_LR0_items_sets_collection::getStatesCount (void) {
  return m_LR0_items_sets_array.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void c_LR0_items_sets_collection::
getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                   const int32_t inStateIndex,
                   const int32_t inSymbol,
                   c_LR0_items_set & out_LR0_item_set) {
  m_LR0_items_sets_array (inStateIndex COMMA_HERE).getTransitionFrom (inProductionRules, inSymbol, out_LR0_item_set) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void c_LR0_items_sets_collection::
getProductionsWhereLocationIsRight (const int32_t inStateIndex,
                                    const cPureBNFproductionsList & inProductionRules,
                                    TC_UniqueArray <int32_t> & outProductionsSet,
                                    bool & outAcceptCondition) {
  m_LR0_items_sets_array (inStateIndex COMMA_HERE)
       .getProductionsWhereLocationIsRight (inProductionRules,
                                            outProductionsSet,
                                            outAcceptCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// L R 0    A U T O M A T O N    T R A N S I T I O N                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class c_LR0_automaton_transition {
  public : int32_t mSourceState ;
  public : int32_t mAction ;
  public : int32_t mTargetState ;
  public : c_LR0_automaton_transition (const int32_t inSourceState,
                                       const int32_t inAction,
                                       const int32_t inTargetState) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

c_LR0_automaton_transition::
c_LR0_automaton_transition (const int32_t inSourceState,
                            const int32_t inAction,
                            const int32_t inTargetState) :
mSourceState (inSourceState),
mAction (inAction),
mTargetState (inTargetState) {
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// G E N E R A T E    S L R    A N A L Y Z E R                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void
generate_SLR_grammar_cpp_file (const TC_UniqueArray <C_String> & inImplementationFileHeaderList,
                               const cPureBNFproductionsList & inProductionRules,
                               const cVocabulary & inVocabulary,
                               const TC_UniqueArray2 <cDecisionTableElement> & inSLRdecisionTable,
                               const TC_FIFO <c_LR0_automaton_transition> & inTransitionList,
                               const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                               const uint32_t inOriginalGrammarStartSymbol,
                               const C_String & inLexiqueName,
                               const C_String & inTargetFileName,
                               C_String & ioCppFileContents,
                               const bool inHasIndexing,
                               const C_String & inSyntaxDirectedTranslationVarName) {
//--- Generate header file inclusion -----------------------------------------
  ioCppFileContents.appendCppHyphenLineComment () ;
  ioCppFileContents << "#include \"utilities/MF_MemoryControl.h\"\n" ;
  ioCppFileContents << "#include \"galgas2/C_galgas_CLI_Options.h\"\n\n" ;
  ioCppFileContents << "#include \"files/C_FileManager.h\"\n\n" ;

  ioCppFileContents.appendCppHyphenLineComment () ;
  for (int32_t i=0 ; i<inImplementationFileHeaderList.count () ; i++) {
    ioCppFileContents << "#include \"" << inImplementationFileHeaderList (i COMMA_HERE) << ".h\"\n" ;
  }
  ioCppFileContents << "\n" ;

//--- Print non-terminal symbols --------------------------------------
  ioCppFileContents.appendCppTitleComment ("N O N    T E R M I N A L    N A M E S") ;
  ioCppFileContents << "static const char * gNonTerminalNames ["
                 << cStringWithSigned (inVocabulary.getNonTerminalSymbolsCount ()) << "] = {\n" ;
  for (int32_t i=inVocabulary.getTerminalSymbolsCount () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    ioCppFileContents << "  \"<" << inVocabulary.getSymbol (i COMMA_HERE) << ">\""
                   << (((i+1)<inVocabulary.getAllSymbolsCount ()) ? "," : "")
                   << "// Index " << cStringWithSigned (i - inVocabulary.getTerminalSymbolsCount ()) << "\n" ;
  }
  ioCppFileContents << "} ;\n\n" ;

//--- Generate SLR analyze action table --------------------------------------
  ioCppFileContents.appendCppTitleComment ("S L R    A N A L Y Z E R    A C T I O N    T A B L E") ;
  const int32_t rowsCount = inSLRdecisionTable.rowCount () ; // Number of states
  const int32_t columnsCount = inSLRdecisionTable.columnCount () ; // Number of terminal symbols
//--- State action tables
  TC_UniqueArray <int32_t> startIndexArray (rowsCount COMMA_HERE) ;
  ioCppFileContents << "// Action tables handle shift and reduce actions ;\n"
                    "//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;\n"
                    "//  - the accept action is (terminal_symbol, ACCEPT) ;\n"
                    "//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.\n\n"
                    "#define SHIFT(a) ((a) + 2)\n"
                    "#define REDUCE(a) (-(a) - 1)\n"
                    "#define ACCEPT (1)\n"
                    "#define END (-1)\n\n" ;
  ioCppFileContents << "static const int16_t gActionTable [] = {" ;
  bool isFirst = true ;
  int32_t startIndex = 0 ;
  for (int32_t i=0 ; i<rowsCount ; i++) {
    startIndexArray.addObject (startIndex) ;
    ioCppFileContents <<"\n// State S" << cStringWithSigned (i) << " (index = " << cStringWithSigned (startIndex) << ")" ;
    for (int32_t j=0 ; j<columnsCount ; j++) {
      const int32_t parameter = inSLRdecisionTable (i, j COMMA_HERE).parameter () ;
      const cDecisionTableElement::enumDecision decision = inSLRdecisionTable (i, j COMMA_HERE).decision () ;
      if (decision != cDecisionTableElement::kUndefinedState) {
        startIndex += 2 ;
        ioCppFileContents << "\n" ;
        if (isFirst) {
          isFirst = false ;
          ioCppFileContents << "  " ;
        }else{
          ioCppFileContents << ", " ;
        }
        ioCppFileContents << "C_Lexique_" << inLexiqueName.identifierRepresentation () << "::kToken_"
                       << inVocabulary.getSymbol (j COMMA_HERE).identifierRepresentation ()
                       << ", " ;
        if (decision == cDecisionTableElement::kDecisionReduce) { // Reduce action
          ioCppFileContents << "REDUCE (" << cStringWithSigned (parameter) << ")" ;
        }else if (decision == cDecisionTableElement::kDecisionShift) { // Shift action
          ioCppFileContents << "SHIFT (" << cStringWithSigned (parameter) << ")" ;
        }else{ // Accept action
          ioCppFileContents << "ACCEPT" ;
        }
      }
    }
    ioCppFileContents << "\n, END" ;
    startIndex ++ ;
  }
  ioCppFileContents << "} ;\n\n"
                    "static const uint32_t gActionTableIndex [" << cStringWithSigned (rowsCount) << "] = {" ;
  isFirst = true ;
  for (int32_t i=0 ; i<rowsCount ; i++) {
    ioCppFileContents << "\n" ;
    if (isFirst) {
      isFirst = false ;
      ioCppFileContents << "  " ;
    }else{
      ioCppFileContents << ", " ;
    }
    ioCppFileContents << cStringWithSigned (startIndexArray (i COMMA_HERE)) << "  // S" << cStringWithSigned (i) ;
  }
  ioCppFileContents << "\n} ;\n\n" ;
//--- Generate state successor table -----------------------------------------
  ioCppFileContents.appendCppTitleComment ("SLR states successors table") ;
//--- Get successor count, by state
  TC_UniqueArray <int32_t> stateSuccessorsCount (rowsCount, 0 COMMA_HERE) ;
  const int32_t transitionsCount = inTransitionList.length () ;
  for (int32_t i=0 ; i<transitionsCount ; i++) {
    if (inTransitionList (i COMMA_HERE).mAction >= columnsCount) {
      stateSuccessorsCount (inTransitionList (i COMMA_HERE).mSourceState COMMA_HERE) ++ ;
    }
  }

//--- Write successor table, state by state ----------------------------------
  ioCppFileContents << "// Successor tables handle non terminal successors ;\n"
                    "// an entry is (non_terminal_symbol, n) ; successor is state n.\n\n" ;
  int32_t currentSourceState = -1 ; // No state
  for (int32_t t=0 ; t<transitionsCount ; t++) {
    const int32_t nonterminal =  inTransitionList (t COMMA_HERE).mAction - columnsCount ; 
    if (nonterminal >= 0) {
      const int32_t sourceState = inTransitionList (t COMMA_HERE).mSourceState ;
      if (currentSourceState == sourceState) {
        ioCppFileContents << ",\n  " ;
      }else{
        if (currentSourceState >= 0) {
          ioCppFileContents << ", -1} ;\n\n" ;
        }
        ioCppFileContents << "static const int16_t gSuccessorTable"
                << cStringWithSigned (sourceState) << " ["
                << cStringWithSigned ((int32_t)(2 * stateSuccessorsCount (sourceState COMMA_HERE) + 1))
                << "] = {" ;
        currentSourceState = sourceState ;
      }
      ioCppFileContents << cStringWithSigned (nonterminal) << ", " << cStringWithSigned (inTransitionList (t COMMA_HERE).mTargetState) ;
    }
  }
  ioCppFileContents << ", -1} ;\n\n" ;
//--- Write global state successor table
  ioCppFileContents << "static const int16_t * gSuccessorTable ["
          << cStringWithSigned (rowsCount)
          << "] = {\n" ;
  int32_t itemInSameLineCount = 0 ;
  for (int32_t r=0 ; r<rowsCount ; r++) {
    if (r != 0) ioCppFileContents << ", " ;
    if (itemInSameLineCount == 4) {
      ioCppFileContents << "\n  " ;
      itemInSameLineCount = 0 ;
    }
    itemInSameLineCount ++ ;
    if (stateSuccessorsCount (r COMMA_HERE) == 0) {
      ioCppFileContents << "NULL" ;
    }else{
      ioCppFileContents << "gSuccessorTable" << cStringWithSigned (r) ;
    }
  }
  ioCppFileContents << "} ;\n\n" ;

//--- Write for every production, its left non terminal, ---------------------
//    and the size of right string
  const int32_t productionsCount = inProductionRules.length () ;
  ioCppFileContents.appendCppTitleComment ("Production rules infos (left non terminal, size of right string)") ;
  ioCppFileContents << "static const int16_t gProductionsTable ["
          << cStringWithSigned (productionsCount)
          << " * 2] = {\n" ;
  for (int32_t p=0 ; p<productionsCount ; p++) {
    if (p > 0) {
      ioCppFileContents << ",\n" ;
    }
    ioCppFileContents << "  " << cStringWithSigned (inProductionRules (p COMMA_HERE).leftNonTerminalIndex () - columnsCount)
            << ", "
            << cStringWithSigned (inProductionRules (p COMMA_HERE).derivationLength ()) ;
  }
  ioCppFileContents << "\n} ;\n\n" ;

//--- Generate methods, one by non terminal ----------------------------------
  cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis nonTerminal (inNonTerminalSymbolSortedListForGrammarAnalysis, kEnumeration_up) ;
  while (nonTerminal.hasCurrentObject ()) {
    ioCppFileContents.appendCppTitleComment (C_String ("'") + nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue () + "' non terminal implementation") ;
    const int32_t pureBNFleftNonterminalIndex = (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue () ;
    const int32_t first = inProductionRules.tableauIndicePremiereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
  //--- Parse label
    ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                 << "::nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                 << "_parse (" ;
      if (inSyntaxDirectedTranslationVarName.length() > 0) {
        ioCppFileContents << "C_String & " << inSyntaxDirectedTranslationVarName << ",\n                                " ;
      }
      ioCppFileContents << "C_Lexique_" << inLexiqueName.identifierRepresentation () << " * inLexique"
                     << ") {\n"
                        "  switch (inLexique->nextProductionIndex ()) {\n" ;
    if (first >= 0) { // first<0 means the non terminal symbol is unuseful
      MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
      const int32_t last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
      MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
      for (int32_t j=first ; j<=last ; j++) {
        const int32_t ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
        ioCppFileContents << "  case " << cStringWithSigned (ip) << " :\n    " ;
        inProductionRules (ip COMMA_HERE).engendrerAppelProduction (0,
                                                                    inVocabulary,
                                                                    "parse",
                                                                    ioCppFileContents,
                                                                    inSyntaxDirectedTranslationVarName) ;
        ioCppFileContents << "    break ;\n" ;
      }
    }
    ioCppFileContents << "  default :\n"
                      "    inLexique->internalBottomUpParserError (HERE) ;\n"
                      "    break ;\n"
                      "  }\n"
                      "}\n\n" ;
  //--- Indexing
    if (inHasIndexing) {
      ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                   << "::nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                   << "_indexing (C_Lexique_" << inLexiqueName.identifierRepresentation () << " * inLexique"
                   << ") {\n"
                      "  switch (inLexique->nextProductionIndex ()) {\n" ;
      if (first >= 0) { // first<0 means the non terminal symbol is unuseful
        MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
        const int32_t last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
        MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
        for (int32_t j=first ; j<=last ; j++) {
          const int32_t ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
          ioCppFileContents << "  case " << cStringWithSigned (ip) << " :\n    " ;
          inProductionRules (ip COMMA_HERE).engendrerAppelProduction (0,
                                                                      inVocabulary,
                                                                      "indexing",
                                                                      ioCppFileContents,
                                                                      "") ;
          ioCppFileContents << "    break ;\n" ;
        }
      }
      ioCppFileContents << "  default :\n"
                        "    inLexique->internalBottomUpParserError (HERE) ;\n"
                        "    break ;\n"
                        "  }\n"
                        "}\n\n" ;
    }
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis currentAltForNonTerminal2 (nonTerminal.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (currentAltForNonTerminal2.hasCurrentObject ()) {
      ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                     << "::nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                     << "_" << currentAltForNonTerminal2.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                     << " (" ;
      cEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal2.current_mFormalParametersList (HERE), kEnumeration_up) ;
      int16_t numeroParametre = 1 ;
      while (parametre.hasCurrentObject ()) {
        switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
          ioCppFileContents << "const " ;
          break ;
        default : break ;
        }
        ioCppFileContents << "GALGAS_" << parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mAttribute_string.stringValue ().identifierRepresentation () ;
        switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
          ioCppFileContents << " " ;
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
          ioCppFileContents << " " ;
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
          ioCppFileContents << " & " ;
          break ;
        default : break ;
        }
        if (first >= 0) {
          ioCppFileContents << " parameter_" << cStringWithSigned (numeroParametre) ;
        }
        parametre.gotoNextObject () ;
        ioCppFileContents << ",\n                                " ;
        numeroParametre ++ ;
      }
      if (inSyntaxDirectedTranslationVarName.length() > 0) {
        ioCppFileContents << "C_String & " << inSyntaxDirectedTranslationVarName << ",\n                                " ;
      }
      ioCppFileContents << "C_Lexique_" << inLexiqueName.identifierRepresentation () << " * inLexique) {\n"
                        "  switch (inLexique->nextProductionIndex ()) {\n" ;
      if (first >= 0) { // first<0 means the non terminal symbol is unuseful
        MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
        const int32_t last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
        MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
        for (int32_t j=first ; j<=last ; j++) {
          const int32_t ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
          ioCppFileContents << "  case " << cStringWithSigned (ip) << " :\n    " ;
          inProductionRules (ip COMMA_HERE).engendrerAppelProduction (numeroParametre,
                                                                      inVocabulary,
                                                                      currentAltForNonTerminal2.current_lkey (HERE).mAttribute_string.stringValue (),
                                                                      ioCppFileContents,
                                                                      inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents << "    break ;\n" ;
        }
      }
      ioCppFileContents << "  default :\n"
                        "    inLexique->internalBottomUpParserError (HERE) ;\n"
                        "  }\n" ;
      ioCppFileContents << "}\n\n" ;
      currentAltForNonTerminal2.gotoNextObject () ;
    }
    //--- Engendrer l'axiome ?
    if (nonTerminal.current_mNonTerminalIndex (HERE).uintValue () == inOriginalGrammarStartSymbol) {
      if (inHasIndexing) {
        ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                     << "::performIndexing (C_Compiler * inCompiler,\n"
                        "             const C_String & inSourceFilePath) {\n"
                        "  C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                        "  macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, \"\", \"\", inSourceFilePath COMMA_HERE)) ;\n"
                        "  scanner->enableIndexing () ;\n"
                        "  if (scanner->sourceText () != NULL) {\n"
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
        ioCppFileContents.appendCppTitleComment ("Grammar start symbol implementation") ;
      //--- Define file parsing static method
        ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceFileParsing_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (C_Compiler * inCompiler"
                          ",\n                                " ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << "C_String & " << inSyntaxDirectedTranslationVarName << ",\n                                " ;
        }
        ioCppFileContents << "GALGAS_lstring inFilePath" ;
        cEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal.current_mFormalParametersList (HERE), kEnumeration_up) ;
        int32_t numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents << ",\n                                " ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            ioCppFileContents << "const " ;
            break ;
          default : break ;
          }
          ioCppFileContents << "GALGAS_" << parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mAttribute_string.stringValue ().identifierRepresentation () ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            ioCppFileContents << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
            ioCppFileContents << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
            ioCppFileContents << " & " ;
            break ;
          default : break ;
          }
          ioCppFileContents << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        ioCppFileContents << "\n                                "
                          "COMMA_LOCATION_ARGS) {\n" ;
        ioCppFileContents << "  if (inFilePath.isValid ()) {\n"
                          "    const GALGAS_string filePathAsString = inFilePath.reader_string (HERE) ;\n"
                          "    C_String filePath = filePathAsString.stringValue () ;\n"
                          "    if (! C_FileManager::isAbsolutePath (filePath)) {\n"
                          "      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;\n"
                          "    }\n"
                          "    if (C_FileManager::fileExistsAtPath (filePath)) {\n"
                          "      C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "      macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation () << " (inCompiler, \"\", \"\", filePath COMMA_HERE)) ;\n"
                          "      if (scanner->sourceText () != NULL) {\n"
                          "        const bool ok = scanner->performBottomUpParsing (gActionTable, gNonTerminalNames,\n"
                          "                                                         gActionTableIndex, gSuccessorTable,\n"
                          "                                                         gProductionsTable) ;\n"
                          "        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {\n"
                          "          cGrammar_" << inTargetFileName.identifierRepresentation () << " grammar ;\n"
                          "          " ;
        ioCppFileContents << "grammar.nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << "_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents << "parameter_" << cStringWithSigned (numeroParametre) << ", " ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << inSyntaxDirectedTranslationVarName << ", " ;
        }
        ioCppFileContents << "scanner) ;\n"
                             "        }\n"
                             "      }else{\n"
                             "        C_String message ;\n"
                             "        message << \"the '\" << filePath << \"' file exists, but cannot be read\" ;\n"
                             "        const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;\n"
                             "        inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;\n"
                             "      }\n"
                             "      macroDetachSharedObject (scanner) ;\n"
                             "    }else{\n"
                             "      C_String message ;\n"
                             "      message << \"the '\" << filePath << \"' file does not exist\" ;\n"
                             "      const GALGAS_location errorLocation (inFilePath.reader_location (THERE)) ;\n"
                             "      inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;\n"
                             "    }\n"
                             "  }\n"
                             "}\n\n" ;
      //--- Define string parsing static method
        ioCppFileContents.appendCppHyphenLineComment () ;
        ioCppFileContents << "void cGrammar_" << inTargetFileName.identifierRepresentation ()
                       << "::_performSourceStringParsing_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (C_Compiler * inCompiler"
                          ",\n                                " ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << "C_String & " << inSyntaxDirectedTranslationVarName << ",\n                                " ;
        }
        ioCppFileContents << "GALGAS_string inSourceString" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents << ",\n                                " ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            ioCppFileContents << "const " ;
            break ;
          default : break ;
          }
          ioCppFileContents << "GALGAS_" << parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mAttribute_string.stringValue ().identifierRepresentation () ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
            ioCppFileContents << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
            ioCppFileContents << " " ;
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
            ioCppFileContents << " & " ;
            break ;
          default : break ;
          }
          ioCppFileContents << " parameter_" << cStringWithSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        ioCppFileContents << "\n                                "
                          "COMMA_UNUSED_LOCATION_ARGS) {\n" ;
        ioCppFileContents << "  C_Lexique_" << inLexiqueName.identifierRepresentation () << " * scanner = NULL ;\n"
                          "  macroMyNew (scanner, C_Lexique_" << inLexiqueName.identifierRepresentation ()
                       << " (inCompiler, inSourceString.stringValue (), \"\" COMMA_HERE)) ;\n"
                          "  if (scanner->sourceText () != NULL) {\n"
                          "    const bool ok = scanner->performBottomUpParsing (gActionTable, gNonTerminalNames,\n"
                          "                                                     gActionTableIndex, gSuccessorTable,\n"
                          "                                                     gProductionsTable) ;\n"
                          "    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {\n"
                          "      cGrammar_" << inTargetFileName.identifierRepresentation () << " grammar ;\n"
                          "      " ;
        ioCppFileContents << "grammar.nt_" << nonTerminal.current_mNonTerminalSymbol (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << "_" << currentAltForNonTerminal.current_lkey (HERE).mAttribute_string.stringValue ().identifierRepresentation ()
                       << " (" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents << "parameter_" << cStringWithSigned (numeroParametre) << ", " ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << inSyntaxDirectedTranslationVarName << ", " ;
        }
        ioCppFileContents << "scanner) ;\n" ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents << "        scanner->appendLastSeparatorTo (" << inSyntaxDirectedTranslationVarName << ") ;\n" ;
        }
        ioCppFileContents << "      }\n"
                          "  }\n"
                          "  macroDetachSharedObject (scanner) ;\n"
                          "}\n\n" ;
        currentAltForNonTerminal.gotoNextObject () ;
      }
    }
    nonTerminal.gotoNextObject () ;
  }

//--- Implement non terminal from 'select' and 'repeat' instructions ---------
  const int32_t terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  for (int32_t ts=terminalSymbolsCount ; ts<inVocabulary.getAllSymbolsCount () ; ts++) {
    if (inVocabulary.needToGenerateChoice (ts COMMA_HERE)) {
      ioCppFileContents.appendCppTitleComment (C_String ("'") + inVocabulary.getSymbol (ts COMMA_HERE) +"' non terminal implementation") ;
      ioCppFileContents << "int32_t cGrammar_" << inTargetFileName.identifierRepresentation ()
              << "::" << inVocabulary.getSymbol (ts COMMA_HERE) << " ("
              << "C_Lexique_" << inLexiqueName.identifierRepresentation () << " * inLexique"
              << ") {\n" ;
      ioCppFileContents << "// Productions numbers :" ;

      const int32_t first = inProductionRules.tableauIndicePremiereProduction (ts - terminalSymbolsCount COMMA_HERE) ;
      MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
      const int32_t last = inProductionRules.tableauIndiceDerniereProduction (ts - terminalSymbolsCount COMMA_HERE) ;
      MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
      for (int32_t j=first ; j<=last ; j++) {
        ioCppFileContents << " " << cStringWithSigned (inProductionRules.tableauIndirectionProduction (j COMMA_HERE)) ;
      }
      ioCppFileContents << "\n"
                 "  return inLexique->nextProductionIndex () - "
              << cStringWithSigned ((int32_t)(first - 1))
              << " ;\n"
                 "}\n\n" ;
    }
  }
//--- End of C++ file
  ioCppFileContents.appendCppHyphenLineComment () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// G E N E R A T E    S L R    A N A L Y Z E R                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// C O M P U T E    L R 0    A U T O M A T O N                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void
compute_LR0_automation (const cPureBNFproductionsList & inProductionRules,
                        const cVocabulary & inVocabulary,
                        c_LR0_items_sets_collection & outLR0_items_sets_collection,
                        TC_FIFO <c_LR0_automaton_transition> & outTransitionList) {
//--- Create initial LR0 items set (SLR automaton initial state I0)
  const int32_t vocabularyCount = inVocabulary.getAllSymbolsCount () ;
  c_LR0_items_set LR0_items_set ;
//--- Add last production, that is the added production <> -> <start_symbol>
  LR0_items_set.add_LR0_item (inProductionRules.length () - 1, 0) ;
  LR0_items_set.close_items_set (inProductionRules, inVocabulary.getTerminalSymbolsCount ()) ;
  outLR0_items_sets_collection.searchOrInsert_LR0_itemSet (LR0_items_set) ;
//--- Calculate LR0 automaton
  for (int32_t explorationIndex=0 ; explorationIndex<outLR0_items_sets_collection.getStatesCount () ; explorationIndex++) {
    for (int32_t s=0 ; s<vocabularyCount ; s++) {
      outLR0_items_sets_collection.getTransitionFrom (inProductionRules, explorationIndex, s, LR0_items_set) ;
      if (! LR0_items_set.isEmptySet ()) {
        LR0_items_set.close_items_set (inProductionRules, inVocabulary.getTerminalSymbolsCount ()) ;
        const int32_t target = outLR0_items_sets_collection.searchOrInsert_LR0_itemSet (LR0_items_set) ;
        c_LR0_automaton_transition t (explorationIndex, s, target) ;
        outTransitionList.insertByCopy (t) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// S L R    C O M P U T A T I O N S                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void
SLR_computations (const TC_UniqueArray <C_String> & inImplementationFileHeaderList,
                  const cPureBNFproductionsList & inProductionRules,
                  const cVocabulary & inVocabulary,
                  C_HTMLString & ioHTMLFileContents,
                  const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFOLLOWarray,
                  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                  const uint32_t inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  C_String & ioCppFileContents,
                  const C_String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn,
                  const bool inHasIndexing,
                  const C_String & inSyntaxDirectedTranslationVarName) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Building SLR automaton... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (ioHTMLFileContents.registeringIsEnabled ()) {
    ioHTMLFileContents.appendCppTitleComment ("Building SLR automaton", "title") ;
    ioHTMLFileContents.outputRawData ("<p></p>") ;
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
  if (ioHTMLFileContents.registeringIsEnabled ()) {
    ioHTMLFileContents.outputRawData ("<table class=\"result\">"
                              "<tr><td class=\"result_title\" colspan=\"2\">") ;
    ioHTMLFileContents << "LR0 automaton states" ;
    ioHTMLFileContents.outputRawData ("</td></tr>") ;
    LR0_items_sets_collection.display (inProductionRules, inVocabulary, ioHTMLFileContents) ;
    ioHTMLFileContents.outputRawData ("</table>") ;
  }
//--- Display automaton transitions
  if (ioHTMLFileContents.registeringIsEnabled ()) {
    ioHTMLFileContents.outputRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    ioHTMLFileContents << "LR0 automaton transitions" ;
    ioHTMLFileContents.outputRawData ("</td></tr>") ;
    for (int32_t i=0 ; i<transitionList.length () ; i++) {
      ioHTMLFileContents.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      ioHTMLFileContents << "  S" << cStringWithSigned (transitionList (i COMMA_HERE).mSourceState)
                  << " |- " ;
      inVocabulary.printInFile (ioHTMLFileContents, transitionList (i COMMA_HERE).mAction COMMA_HERE) ;
      ioHTMLFileContents << " -> S"
                  << cStringWithSigned (transitionList (i COMMA_HERE).mTargetState) ;
      ioHTMLFileContents.outputRawData ("</code></td></tr>") ;
    }
    ioHTMLFileContents.outputRawData ("</table><p></p>") ;
  }

//--- Console display
  if (inVerboseOptionOn) {
    co << "  Checking SLR condition... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (ioHTMLFileContents.registeringIsEnabled ()) {
  ioHTMLFileContents.appendCppTitleComment ("Checking SLR condition", "title") ;
  }

//--- Build SLR table... detect if grammar is not SLR
  const int32_t terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  TC_UniqueArray2 <cDecisionTableElement> SLRdecisionTable (LR0_items_sets_collection.getStatesCount (), terminalSymbolsCount) ;
  int32_t shiftActions = 0 ;
  int32_t reduceActions = 0 ;
  int32_t successorEntries = 0 ;
  if (ioHTMLFileContents.registeringIsEnabled ()) {
    ioHTMLFileContents.outputRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    ioHTMLFileContents << "SLR decision table" ;
    ioHTMLFileContents.outputRawData ("</td></tr>") ;
  }
//--- Shift actions
  for (int32_t index=0 ; index<transitionList.length () ; index++) {
    if (transitionList (index COMMA_HERE).mAction < terminalSymbolsCount) {
      const int32_t sourceState = transitionList (index COMMA_HERE).mSourceState ;
      const int32_t targetState = transitionList (index COMMA_HERE).mTargetState ;
      const int32_t terminal = transitionList (index COMMA_HERE).mAction ;
      if (ioHTMLFileContents.registeringIsEnabled ()) {
        ioHTMLFileContents.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        ioHTMLFileContents << "Action [S" << cStringWithSigned (sourceState) << ", " ;
        inVocabulary.printInFile (ioHTMLFileContents, terminal COMMA_HERE) ;
        ioHTMLFileContents << "] : shift, goto S" << cStringWithSigned (targetState) ;
        ioHTMLFileContents.outputRawData ("</code></td></tr>") ;
      }
      SLRdecisionTable (sourceState, terminal COMMA_HERE) = cDecisionTableElement::shiftDecision (targetState) ;
      shiftActions ++ ;
    }
  }
//--- Reduce actions
  int32_t conflictCount = 0 ;
  TC_UniqueArray <int32_t> productionsSet ;
  for (int32_t state=0 ; state<LR0_items_sets_collection.getStatesCount () ; state++) {
    bool acceptCondition = false ;
    LR0_items_sets_collection.getProductionsWhereLocationIsRight (state,
                                                                  inProductionRules,
                                                                  productionsSet,
                                                                  acceptCondition) ;
    if (acceptCondition) {
      const int32_t terminal = inVocabulary.getEmptyStringTerminalSymbolIndex () ;
      if (ioHTMLFileContents.registeringIsEnabled ()) {
        ioHTMLFileContents.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        ioHTMLFileContents << "Action [S"
                    << cStringWithSigned (state)
                    << ", " ;
        inVocabulary.printInFile (ioHTMLFileContents, terminal COMMA_HERE) ;
        ioHTMLFileContents << "] : accept" ;
        ioHTMLFileContents.outputRawData ("</code>") ;
      }
      if (! SLRdecisionTable (state, terminal COMMA_HERE).isInUndefinedState ()) {
        if (ioHTMLFileContents.registeringIsEnabled ()) {
          ioHTMLFileContents.outputRawData ("<span class=\"error\">") ;
          ioHTMLFileContents << " *** CONFLICT ***" ;
          ioHTMLFileContents.outputRawData ("</span>") ;
        }
        conflictCount ++ ;
      }
      SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::acceptDecision () ;
      if (ioHTMLFileContents.registeringIsEnabled ()) {
        ioHTMLFileContents.outputRawData ("</td></tr>") ;
      }
    }
    for (int32_t p=0 ; p<productionsSet.count () ; p++) {
      const int32_t productionIndex = productionsSet (p COMMA_HERE) ;
      const int32_t leftNonTerminal = inProductionRules (productionIndex COMMA_HERE).leftNonTerminalIndex () ;
      for (int32_t f=0 ; f<inFOLLOWarray (leftNonTerminal COMMA_HERE).count () ; f++) {
        const int32_t terminal = (int32_t) inFOLLOWarray (leftNonTerminal COMMA_HERE) (f COMMA_HERE) ;
        if (ioHTMLFileContents.registeringIsEnabled ()) {
          ioHTMLFileContents.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
          ioHTMLFileContents << "Action [S"
                      << cStringWithSigned (state)
                      << ", " ;
          inVocabulary.printInFile (ioHTMLFileContents, terminal COMMA_HERE) ;
          ioHTMLFileContents << "] : reduce by " ;
          inVocabulary.printInFile (ioHTMLFileContents, leftNonTerminal COMMA_HERE) ;
          ioHTMLFileContents.outputRawData ("</code>") ;
        }
        if (! SLRdecisionTable (state, terminal COMMA_HERE).isInUndefinedState ()) {
          if (ioHTMLFileContents.registeringIsEnabled ()) {
            ioHTMLFileContents.outputRawData ("<span class=\"error\">") ;
            ioHTMLFileContents << " *** CONFLICT ***" ;
            ioHTMLFileContents.outputRawData ("</span>") ;
          }
          conflictCount ++ ;
        }
        if (ioHTMLFileContents.registeringIsEnabled ()) {
          ioHTMLFileContents.outputRawData ("</td></tr>") ;
        }
        SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::reduceDecision (productionIndex) ;
        reduceActions ++ ;
      }    
    }
  }
//--- Successors
  for (int32_t t=0 ; t<transitionList.length () ; t++) {
    if (transitionList (t COMMA_HERE).mAction >= terminalSymbolsCount) {
      successorEntries ++ ;
      if (ioHTMLFileContents.registeringIsEnabled ()) {
        ioHTMLFileContents.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        ioHTMLFileContents << "Successor [S"
                    << cStringWithSigned (transitionList (t COMMA_HERE).mSourceState)
                    << ", " ;
        inVocabulary.printInFile (ioHTMLFileContents, transitionList (t COMMA_HERE).mAction COMMA_HERE) ;
        ioHTMLFileContents << "] = S"
                    << cStringWithSigned (transitionList (t COMMA_HERE).mTargetState) ;
        ioHTMLFileContents.outputRawData ("</code></td></tr>") ;
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
  if (ioHTMLFileContents.registeringIsEnabled ()) {
    ioHTMLFileContents.outputRawData ("</table><p>") ;
    ioHTMLFileContents << "LR0 automaton has "
                << cStringWithSigned (LR0_items_sets_collection.getStatesCount ())
                << " states and "
                << cStringWithSigned (transitionList.length ())
                << " transitions.\n\n"
                   "Analyze table has "
                << cStringWithSigned (shiftActions) << " shift actions, "
                << cStringWithSigned (reduceActions) << " reduce actions, and "
                << cStringWithSigned (successorEntries) << " state successor entries." ;
    ioHTMLFileContents.outputRawData ("</p><p>") ;
    if (conflictCount == 0) {
      ioHTMLFileContents.outputRawData ("<span class=\"success\">") ;
      ioHTMLFileContents << "No conflict : grammar is SLR (1)." ;
      ioHTMLFileContents.outputRawData ("</span>") ;
    }else{
      ioHTMLFileContents.outputRawData ("<span class=\"error\">") ;
      ioHTMLFileContents << cStringWithSigned (conflictCount)
                  << " conflict"
                  << ((conflictCount > 1) ? "s" : "")
                  << " : grammar is not SLR (1)." ;
      ioHTMLFileContents.outputRawData ("</span>") ;
    }
    ioHTMLFileContents.outputRawData ("</p>") ;
  }
//--- Generate C++ file
  if (conflictCount == 0) {
    generate_SLR_grammar_cpp_file (inImplementationFileHeaderList,
                                   inProductionRules,
                                   inVocabulary,
                                   SLRdecisionTable,
                                   transitionList,
                                   inNonTerminalSymbolSortedListForGrammarAnalysis,
                                   inOriginalGrammarStartSymbol,
                                   inLexiqueName,
                                   inTargetFileName,
                                   ioCppFileContents,
                                   inHasIndexing,
                                   inSyntaxDirectedTranslationVarName) ;
  }
  outOk = conflictCount == 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
