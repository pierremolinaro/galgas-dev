//--------------------------------------------------------------------------------------------------
//
//     Routines for SLR grammar computations
//
//  Copyright (C) 2002, ..., 2023 Pierre Molinaro.
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
#include "TC_UniqueArray2.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

#include "SLR_computations.h"
#include "cPureBNFproductionsList.h"
#include "GrammarVocabulary.h"
#include "cDecisionTableElement.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------
//
//    C L A S S    F O R   L R 0    I T E M
//
//--------------------------------------------------------------------------------------------------

class c_LR0_item {
  public: int32_t mProductionRuleIndex ;
  public: int32_t mLocationIndex ;
//--- Default constructor
  public: c_LR0_item (void) ;
//--- Constructor
  public: c_LR0_item (const int32_t inProductionRuleIndex,
                       const int32_t inLocationIndex) ;
//--- Compare two items
  public: static int32_t compare_LR0_items (const c_LR0_item & inItem1,
                                            const c_LR0_item & inItem2) ;
} ;

//--------------------------------------------------------------------------------------------------

c_LR0_item::c_LR0_item (void) :
mProductionRuleIndex (-1),
mLocationIndex (-1) {
}

//--------------------------------------------------------------------------------------------------

c_LR0_item::c_LR0_item (const int32_t inProductionRuleIndex,
                        const int32_t inLocationIndex) :
mProductionRuleIndex (inProductionRuleIndex),
mLocationIndex (inLocationIndex) {
}

//--------------------------------------------------------------------------------------------------

int32_t c_LR0_item::
compare_LR0_items (const c_LR0_item & inItem1,
                   const c_LR0_item & inItem2) {
  int32_t result = inItem1.mProductionRuleIndex - inItem2.mProductionRuleIndex ;
  if (result == 0) {
    result = inItem1.mLocationIndex - inItem2.mLocationIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------
//
//    C L A S S    F O R   L R 0    I T E M S    S E T
//
//--------------------------------------------------------------------------------------------------

class c_LR0_items_set final {
//--- Private data
  private: TC_UniqueArray <c_LR0_item> mItemsSet ;

//--- Default constructor
  public: c_LR0_items_set (void) ;

//--- Add a new LR0 item (returns false if already present)
  public: bool add_LR0_item (const int32_t inProductionRuleIndex,
                              const int32_t inLocationIndex) ;

//--- Get transitions LR0 item set from a state for a symbol
  public: void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                  const int32_t inSymbol,
                                  c_LR0_items_set & out_LR0_item_set) ;

//--- Closing the LR0 items set
  public: void close_items_set (const cPureBNFproductionsList & inProductionRules,
                                const int32_t inTerminalSymbolsCount) ;

//--- Empty set ?
  public: bool isEmptySet (void) const ;

//--- Display LR0 items set
  public: void display (const cPureBNFproductionsList & inProductionRules,
                         const GrammarVocabulary & inVocabulary,
                         HTMLString & inHTMLfile) ;

//--- Compare two items sets
  public: static int32_t compare_LR0_items_sets (const c_LR0_items_set & inItemsSet1,
                                                   const c_LR0_items_set & inItemsSet2) ;

//--- Search from a LR0 items set (used for building 'reduce' actions of SLR table)
  public: void getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <int32_t> & outProductionsSet,
                                                    bool & outAcceptCondition) ;

//--- Handle Copy
  public: c_LR0_items_set (const c_LR0_items_set &) ;

//--- No assignment
  private: c_LR0_items_set & operator = (const c_LR0_items_set &) = delete ;

//--- Friend
  friend void swap (c_LR0_items_set & ioOperand1, c_LR0_items_set & ioOperand2) ;
} ;

//--------------------------------------------------------------------------------------------------

c_LR0_items_set::c_LR0_items_set (void) :
mItemsSet () {
}

//--------------------------------------------------------------------------------------------------

c_LR0_items_set::c_LR0_items_set (const c_LR0_items_set & inSource) :
mItemsSet () {
  inSource.mItemsSet.copyTo (mItemsSet) ;
}

//--------------------------------------------------------------------------------------------------

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
    mItemsSet.appendObject (item) ;
    mItemsSet.sortArrayUsingFunction (c_LR0_item::compare_LR0_items) ;
  }
  return ! found ;
}

//--------------------------------------------------------------------------------------------------


void c_LR0_items_set::
close_items_set (const cPureBNFproductionsList & inProductionRules,
                 const int32_t inTerminalSymbolsCount) {
  bool loop = true ;
  while (loop) {
    loop = false ;
    for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
      const int32_t locationIndex = mItemsSet (i COMMA_HERE).mLocationIndex ;
      const int32_t productionRule = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
      if (locationIndex < inProductionRules.mProductionArray (productionRule COMMA_HERE).derivationLength ()) {
        const int32_t prodX = inProductionRules.mProductionArray (productionRule COMMA_HERE).derivationAtIndex (locationIndex COMMA_HERE) - inTerminalSymbolsCount ;
        if (prodX >= 0) {
          const int32_t first = inProductionRules.tableauIndicePremiereProduction (prodX COMMA_HERE) ;
          macroAssert (first >= 0, "first (%ld) < 0", first, 0) ;
          const int32_t last = inProductionRules.tableauIndiceDerniereProduction (prodX COMMA_HERE) ;
          macroAssert (last >= first, "last (%ld) < first (%ld)", last, first) ;
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

//--------------------------------------------------------------------------------------------------

bool c_LR0_items_set::isEmptySet (void) const {
  return mItemsSet.count () == 0 ;
}

//--------------------------------------------------------------------------------------------------

void c_LR0_items_set::
display (const cPureBNFproductionsList & inProductionRules,
         const GrammarVocabulary & inVocabulary,
         HTMLString & inHTMLfile) {
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const cProduction & p = inProductionRules.mProductionArray (mItemsSet (i COMMA_HERE).mProductionRuleIndex COMMA_HERE) ;
    const int32_t location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    inHTMLfile.addRawData ("<span class=\"list\">") ;
    inHTMLfile.appendCString ("[") ;
    inVocabulary.printInFile (inHTMLfile, p.leftNonTerminalIndex () COMMA_HERE) ;
    inHTMLfile.appendCString (" ->") ;
    for (int32_t j=0 ; j<p.derivationLength () ; j++) {
      if (j == location) {
        inHTMLfile.addRawData (" &oplus;") ;
      }
      inHTMLfile.appendCString (" ") ;
      inVocabulary.printInFile (inHTMLfile, p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
    }
    if (location == p.derivationLength ()) {
      inHTMLfile.appendCString (" .") ;
    }
    inHTMLfile.appendCString ("]") ;
    inHTMLfile.addRawData ("</span>\n") ;
  }
}

//--------------------------------------------------------------------------------------------------

void c_LR0_items_set::
getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                   const int32_t inSymbol,
                   c_LR0_items_set & out_LR0_item_set) {
  out_LR0_item_set.mItemsSet.removeAllKeepingCapacity () ;
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const int32_t productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules.mProductionArray (productionRuleIndex COMMA_HERE) ;
    const int32_t location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location < p.derivationLength ()) {
      const int32_t symbol = p.derivationAtIndex (location COMMA_HERE) ;
      if (symbol == inSymbol) {
        out_LR0_item_set.add_LR0_item (productionRuleIndex, location + 1) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void c_LR0_items_set::
getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                    TC_UniqueArray <int32_t> & outProductionsSet,
                                    bool & outAcceptCondition) {
  outProductionsSet.removeAllKeepingCapacity () ;
  outAcceptCondition = false ;
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const int32_t productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules.mProductionArray (productionRuleIndex COMMA_HERE) ;
    const int32_t location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location == p.derivationLength ()) {
      outProductionsSet.appendObject (productionRuleIndex) ;
    }
    if ((productionRuleIndex == (inProductionRules.mProductionArray.count () - 1)) && (location == 1)) {
      outAcceptCondition = true ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void swap (c_LR0_items_set & ioOperand1, c_LR0_items_set & ioOperand2) {
  swap (ioOperand1.mItemsSet, ioOperand2.mItemsSet) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------
//
// E L E M E N T    C L A S S    F O R   A V L    T R E E
//
//--------------------------------------------------------------------------------------------------

class cLR0_items_sets_AVL_tree {
  public: cLR0_items_sets_AVL_tree * mPtrToInf ;
  public: cLR0_items_sets_AVL_tree * mPtrToSup ;
  private: const int32_t mInfo ;
  public: int32_t mBalance ;
  protected: cLR0_items_sets_AVL_tree (const int32_t inInfo) ;
  public: virtual ~cLR0_items_sets_AVL_tree (void) ;
  private: int32_t compare (const c_LR0_items_set & in_LR0_items_set,
                         const TC_UniqueArray <c_LR0_items_set> & in_LR0_items_sets_array) ;
  public: static int32_t recursiveSearchOrInsert
                         (cLR0_items_sets_AVL_tree * & ioRootPointer,
                          c_LR0_items_set & io_LR0_items_set,
                          TC_UniqueArray <c_LR0_items_set> & io_LR0_items_sets_array,
                          bool & outExtension) ;

//--- No copy
  private: cLR0_items_sets_AVL_tree (cLR0_items_sets_AVL_tree &) ;
  private: cLR0_items_sets_AVL_tree & operator = (cLR0_items_sets_AVL_tree &) ;
} ;

//--------------------------------------------------------------------------------------------------

cLR0_items_sets_AVL_tree::
cLR0_items_sets_AVL_tree (const int32_t inInfo) :
mPtrToInf (nullptr),
mPtrToSup (nullptr),
mInfo (inInfo),
mBalance (0) {
} ;

//--------------------------------------------------------------------------------------------------

cLR0_items_sets_AVL_tree::
~cLR0_items_sets_AVL_tree (void) {
  macroMyDelete (mPtrToInf) ;
  macroMyDelete (mPtrToSup) ;
} ;

//--------------------------------------------------------------------------------------------------

int32_t cLR0_items_sets_AVL_tree::
compare (const c_LR0_items_set & in_LR0_items_set,
         const TC_UniqueArray <c_LR0_items_set> & in_LR0_items_sets_array) {
  return c_LR0_items_set::compare_LR0_items_sets (in_LR0_items_sets_array (mInfo COMMA_HERE), in_LR0_items_set) ;
}

//--------------------------------------------------------------------------------------------------
//
//       Rotate left
//
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//       Rotate right
//
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

int32_t cLR0_items_sets_AVL_tree::
recursiveSearchOrInsert (cLR0_items_sets_AVL_tree * & ioRootPointer,
                         c_LR0_items_set & io_LR0_items_set,
                         TC_UniqueArray <c_LR0_items_set> & io_LR0_items_sets_array,
                         bool & outExtension) {
  int32_t result ;
  if (ioRootPointer == nullptr) {
    result = io_LR0_items_sets_array.count () ;
    macroMyNew (ioRootPointer, cLR0_items_sets_AVL_tree (result)) ;
    io_LR0_items_sets_array.appendObjectUsingSwap (io_LR0_items_set) ;
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


//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------
//
// C L A S S    F O R   L R 0    I T E M S    S E T S   C O L L E C T I O N
//
//--------------------------------------------------------------------------------------------------

class c_LR0_items_sets_collection final {
//--- Default constructor and destructor
  public: c_LR0_items_sets_collection (void) ;
  public: ~ c_LR0_items_sets_collection (void) ;

//--- No copy
  private: c_LR0_items_sets_collection (c_LR0_items_sets_collection &) = delete ;
  private: c_LR0_items_sets_collection & operator = (c_LR0_items_sets_collection &) = delete ;

//--- Search or insert a LR0 items set (return set index)
  public: int32_t searchOrInsert_LR0_itemSet (c_LR0_items_set & ioItemSet) ;

//--- States count
  public: int32_t getStatesCount (void) ;

//--- Get transitions LR0 item set from a state for a symbol
  public: void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const int32_t inStateIndex,
                                   const int32_t inSymbol,
                                   c_LR0_items_set & out_LR0_item_set) ;

//--- Display LR0 items set
  public: void display (const cPureBNFproductionsList & inProductionRules,
                         const GrammarVocabulary & inVocabulary,
                         HTMLString & inHTMLfile) ;

//--- Search from a LR0 items set (used for building 'reduce' actions of SLR table)
  public: void getProductionsWhereLocationIsRight (const int32_t inStateIndex,
                                                    const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <int32_t> & outProductionsSet,
                                                    bool & outAcceptCondition) ;

//--- Private data
  private: TC_UniqueArray <c_LR0_items_set> m_LR0_items_sets_array ;
  private: cLR0_items_sets_AVL_tree * mRoot ;
} ;

//--------------------------------------------------------------------------------------------------

c_LR0_items_sets_collection::c_LR0_items_sets_collection (void) :
m_LR0_items_sets_array (),
mRoot (nullptr) {
  m_LR0_items_sets_array.setCapacityUsingSwap (500) ;
}

//--------------------------------------------------------------------------------------------------

c_LR0_items_sets_collection::~c_LR0_items_sets_collection (void) {
  macroMyDelete (mRoot) ;
}

//--------------------------------------------------------------------------------------------------

int32_t c_LR0_items_sets_collection::
searchOrInsert_LR0_itemSet (c_LR0_items_set & ioItemSet) {
  bool extension = false ;
  return cLR0_items_sets_AVL_tree::recursiveSearchOrInsert (mRoot, ioItemSet, m_LR0_items_sets_array, extension) ;
}

//--------------------------------------------------------------------------------------------------

void c_LR0_items_sets_collection::
display (const cPureBNFproductionsList & inProductionRules,
         const GrammarVocabulary & inVocabulary,
         HTMLString & inHTMLfile) {
  for (int32_t i=0 ; i<m_LR0_items_sets_array.count () ; i++) {
    inHTMLfile.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile.appendCString ("S") ;
    inHTMLfile.appendSigned (i) ;
    inHTMLfile.addRawData ("</td><td><code>") ;
    m_LR0_items_sets_array (i COMMA_HERE).display (inProductionRules, inVocabulary, inHTMLfile) ;
    inHTMLfile.addRawData ("</code></td></tr>") ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t c_LR0_items_sets_collection::getStatesCount (void) {
  return m_LR0_items_sets_array.count () ;
}

//--------------------------------------------------------------------------------------------------

void c_LR0_items_sets_collection::
getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                   const int32_t inStateIndex,
                   const int32_t inSymbol,
                   c_LR0_items_set & out_LR0_item_set) {
  m_LR0_items_sets_array (inStateIndex COMMA_HERE).getTransitionFrom (inProductionRules, inSymbol, out_LR0_item_set) ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------
//
// L R 0    A U T O M A T O N    T R A N S I T I O N
//
//--------------------------------------------------------------------------------------------------

class c_LR0_automaton_transition {
  private: int32_t mSourceState ;
  public: int32_t sourceState (void) const { return mSourceState ; }

  private: int32_t mAction ;
  public: int32_t action (void) const { return mAction ; }

  private: int32_t mTargetState ;
  public: int32_t targetState (void) const { return mTargetState ; }

  public: c_LR0_automaton_transition (void) ;

  public: c_LR0_automaton_transition (const int32_t inSourceState,
                                      const int32_t inAction,
                                      const int32_t inTargetState) ;
} ;

//--------------------------------------------------------------------------------------------------

c_LR0_automaton_transition::c_LR0_automaton_transition (void) :
mSourceState (0),
mAction (0),
mTargetState (0) {
}

//--------------------------------------------------------------------------------------------------

c_LR0_automaton_transition::c_LR0_automaton_transition (const int32_t inSourceState,
                                                        const int32_t inAction,
                                                        const int32_t inTargetState) :
mSourceState (inSourceState),
mAction (inAction),
mTargetState (inTargetState) {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------
//
// G E N E R A T E    S L R    A N A L Y Z E R
//
//--------------------------------------------------------------------------------------------------

static void
generate_SLR_grammar_cpp_file (const cPureBNFproductionsList & inProductionRules,
                               const GrammarVocabulary & inVocabulary,
                               const TC_UniqueArray2 <cDecisionTableElement> & inSLRdecisionTable,
                               const TC_UniqueArray <c_LR0_automaton_transition> & inTransitionList,
                               const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                               const uint32_t inOriginalGrammarStartSymbol,
                               const String & inLexiqueName,
                               const String & inTargetFileName,
                               String & ioCppFileContents,
                               const String & inSyntaxDirectedTranslationVarName) {
//--- Generate header file inclusion -----------------------------------------
  ioCppFileContents.appendCppHyphenLineComment () ;
  ioCppFileContents.appendCString ("#include \"MF_MemoryControl.h\"\n") ;
  ioCppFileContents.appendCString ("#include \"C_galgas_CLI_Options.h\"\n\n") ;
  ioCppFileContents.appendCString ("#include \"FileManager.h\"\n\n") ;

  ioCppFileContents.appendCppHyphenLineComment () ;
  ioCppFileContents.appendNewLine () ;

//--- Print non-terminal symbols --------------------------------------
  ioCppFileContents.appendCppTitleComment ("N O N    T E R M I N A L    N A M E S") ;
  ioCppFileContents.appendCString ("static const char * gNonTerminalNames_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [") ;
  ioCppFileContents.appendSigned (inVocabulary.getNonTerminalSymbolsCount ()) ;
  ioCppFileContents.appendCString ("] = {\n") ;
  for (int32_t i=inVocabulary.getTerminalSymbolsCount () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    ioCppFileContents.appendCString ("  \"<") ;
    ioCppFileContents.appendString (inVocabulary.getSymbol (i COMMA_HERE)) ;
    ioCppFileContents.appendCString (">\"") ;
    ioCppFileContents.appendString (((i+1)<inVocabulary.getAllSymbolsCount ()) ? "," : "") ;
    ioCppFileContents.appendCString ("// Index ") ;
    ioCppFileContents.appendSigned (i - inVocabulary.getTerminalSymbolsCount ());
    ioCppFileContents.appendCString ("\n") ;
  }
  ioCppFileContents.appendCString ("} ;\n\n") ;

//--- Generate SLR analyze action table --------------------------------------
  ioCppFileContents.appendCppTitleComment ("S L R    A N A L Y Z E R    A C T I O N    T A B L E") ;
  const int32_t rowsCount = inSLRdecisionTable.rowCount () ; // Number of states
  const int32_t columnsCount = inSLRdecisionTable.columnCount () ; // Number of terminal symbols
//--- State action tables
  TC_UniqueArray <int32_t> startIndexArray (rowsCount COMMA_HERE) ;
  ioCppFileContents.appendCString ("// Action tables handle shift and reduce actions:\n"
                    "//  - a shift action is (terminal_symbol, SHIFT (n)): if shifts to state n;\n"
                    "//  - the accept action is (terminal_symbol, ACCEPT);\n"
                    "//  - a reduce action is (terminal_symbol, REDUCE (n)); if reduces to state n.\n\n") ;
  ioCppFileContents.appendCString ("static const int32_t gActionTable_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [] = {") ;
  bool isFirst = true ;
  int32_t startIndex = 0 ;
  for (int32_t i=0 ; i<rowsCount ; i++) {
    startIndexArray.appendObject (startIndex) ;
    ioCppFileContents.appendCString ("\n// State S") ;
    ioCppFileContents.appendSigned (i) ;
    ioCppFileContents.appendCString (" (index = ") ;
    ioCppFileContents.appendSigned (startIndex) ;
    ioCppFileContents.appendCString (")") ;
    for (int32_t j=0 ; j<columnsCount ; j++) {
      const int32_t parameter = inSLRdecisionTable (i, j COMMA_HERE).parameter () ;
      const cDecisionTableElement::enumDecision decision = inSLRdecisionTable (i, j COMMA_HERE).decision () ;
      if (decision != cDecisionTableElement::kUndefinedState) {
        startIndex += 2 ;
        ioCppFileContents.appendCString ("\n") ;
        if (isFirst) {
          isFirst = false ;
          ioCppFileContents.appendCString ("  ") ;
        }else{
          ioCppFileContents.appendCString (", ") ;
        }
        ioCppFileContents.appendCString ("Lexique_") ;
        ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString ("::kToken_") ;
        ioCppFileContents.appendString (inVocabulary.getSymbol (j COMMA_HERE).identifierRepresentation ()) ;
        ioCppFileContents.appendCString (", ") ;
        if (decision == cDecisionTableElement::kDecisionReduce) { // Reduce action
          ioCppFileContents.appendCString ("BOTTOM_UP_REDUCE (") ;
          ioCppFileContents.appendSigned (parameter) ;
          ioCppFileContents.appendCString (")") ;
        }else if (decision == cDecisionTableElement::kDecisionShift) { // Shift action
          ioCppFileContents.appendCString ("BOTTOM_UP_SHIFT (") ;
          ioCppFileContents.appendSigned (parameter) ;
          ioCppFileContents.appendCString (")") ;
        }else{ // Accept action
          ioCppFileContents.appendCString ("BOTTOM_UP_ACCEPT") ;
        }
      }
    }
    ioCppFileContents.appendCString ("\n, BOTTOM_UP_END") ;
    startIndex ++ ;
  }
  ioCppFileContents.appendCString ("} ;\n\n"
                               "static const uint32_t gActionTableIndex_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [") ;
  ioCppFileContents.appendSigned (rowsCount) ;
  ioCppFileContents.appendCString ("] = {") ;
  isFirst = true ;
  for (int32_t i=0 ; i<rowsCount ; i++) {
    ioCppFileContents.appendCString ("\n") ;
    if (isFirst) {
      isFirst = false ;
      ioCppFileContents.appendCString ("  ") ;
    }else{
      ioCppFileContents.appendCString (", ") ;
    }
    ioCppFileContents.appendSigned (startIndexArray (i COMMA_HERE)) ;
    ioCppFileContents.appendCString ("  // S") ;
    ioCppFileContents.appendSigned (i) ;
  }
  ioCppFileContents.appendCString ("\n} ;\n\n") ;
//--- Generate state successor table -----------------------------------------
  ioCppFileContents.appendCppTitleComment ("SLR states successors table") ;
//--- Get successor count, by state
  TC_UniqueArray <int32_t> stateSuccessorsCount (rowsCount, 0 COMMA_HERE) ;
  const int32_t transitionsCount = inTransitionList.count () ;
  for (int32_t i=0 ; i<transitionsCount ; i++) {
    if (inTransitionList (i COMMA_HERE).action () >= columnsCount) {
      stateSuccessorsCount (inTransitionList (i COMMA_HERE).sourceState () COMMA_HERE) ++ ;
    }
  }

//--- Write successor table, state by state ----------------------------------
  ioCppFileContents.appendCString ("// Successor tables handle non terminal successors ;\n"
                    "// an entry is (non_terminal_symbol, n) ; successor is state n.\n\n") ;
  int32_t currentSourceState = -1 ; // No state
  for (int32_t t=0 ; t<transitionsCount ; t++) {
    const int32_t nonterminal =  inTransitionList (t COMMA_HERE).action () - columnsCount ;
    if (nonterminal >= 0) {
      const int32_t sourceState = inTransitionList (t COMMA_HERE).sourceState () ;
      if (currentSourceState == sourceState) {
        ioCppFileContents.appendCString (",\n  ") ;
      }else{
        if (currentSourceState >= 0) {
          ioCppFileContents.appendCString (", -1} ;\n\n") ;
        }
        ioCppFileContents.appendCString ("static const int32_t gSuccessorTable_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString ("_") ;
        ioCppFileContents.appendSigned (sourceState) ;
        ioCppFileContents.appendCString (" [") ;
        ioCppFileContents.appendSigned ((int32_t)(2 * stateSuccessorsCount (sourceState COMMA_HERE) + 1)) ;
        ioCppFileContents.appendCString ("] = {") ;
        currentSourceState = sourceState ;
      }
      ioCppFileContents.appendSigned (nonterminal) ;
      ioCppFileContents.appendCString (", ") ;
      ioCppFileContents.appendSigned (inTransitionList (t COMMA_HERE).targetState ()) ;
    }
  }
  ioCppFileContents.appendCString (", -1} ;\n\n") ;
//--- Write global state successor table
  ioCppFileContents.appendCString ("static const int32_t * gSuccessorTable_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [") ;
  ioCppFileContents.appendSigned (rowsCount) ;
  ioCppFileContents.appendCString ("] = {\n") ;
  int32_t itemInSameLineCount = 0 ;
  for (int32_t r=0 ; r<rowsCount ; r++) {
    if (r != 0) ioCppFileContents.appendCString (", ") ;
    if (itemInSameLineCount == 4) {
      ioCppFileContents.appendCString ("\n  ") ;
      itemInSameLineCount = 0 ;
    }
    itemInSameLineCount ++ ;
    if (stateSuccessorsCount (r COMMA_HERE) == 0) {
      ioCppFileContents.appendCString ("nullptr") ;
    }else{
      ioCppFileContents.appendCString ("gSuccessorTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString ("_") ;
      ioCppFileContents.appendSigned (r) ;
    }
  }
  ioCppFileContents.appendCString ("} ;\n\n") ;

//--- Write for every production, its left non terminal, ---------------------
//    and the size of right string
  const int32_t productionsCount = inProductionRules.mProductionArray.count () ;
  ioCppFileContents.appendCppTitleComment ("Production rules infos (left non terminal, size of right string)") ;
  ioCppFileContents.appendCString ("static const int32_t gProductionsTable_") ;
  ioCppFileContents.appendString (inTargetFileName) ;
  ioCppFileContents.appendCString (" [") ;
  ioCppFileContents.appendSigned (productionsCount) ;
  ioCppFileContents.appendCString (" * 2] = {\n") ;
  for (int32_t p=0 ; p<productionsCount ; p++) {
    if (p > 0) {
      ioCppFileContents.appendCString (",\n") ;
    }
    ioCppFileContents.appendCString ("  ") ;
    ioCppFileContents.appendSigned (inProductionRules.mProductionArray (p COMMA_HERE).leftNonTerminalIndex () - columnsCount) ;
    ioCppFileContents.appendCString (", ") ;
    ioCppFileContents.appendSigned (inProductionRules.mProductionArray (p COMMA_HERE).derivationLength ()) ;
  }
  ioCppFileContents.appendCString ("\n} ;\n\n") ;

//--- Generate methods, one by non terminal ----------------------------------
  cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis nonTerminal (inNonTerminalSymbolSortedListForGrammarAnalysis, EnumerationOrder::Up) ;
  while (nonTerminal.hasCurrentObject ()) {
    ioCppFileContents.appendCppTitleComment (String ("'") + nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue () + "' non terminal implementation") ;
    const int32_t pureBNFleftNonterminalIndex = (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue () ;
    const int32_t first = inProductionRules.tableauIndicePremiereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
  //--- Parse label
    ioCppFileContents.appendCString ("void cGrammar_") ;
    ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("::nt_") ;
    ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("_parse (") ;
    if (inSyntaxDirectedTranslationVarName.length () > 0) {
      ioCppFileContents.appendCString ("String & ") ;
      ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
      ioCppFileContents.appendCString (",\n                                ") ;
    }
    ioCppFileContents.appendCString ("Lexique_") ;
    ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
    ioCppFileContents.appendCString (" * inLexique") ;
    ioCppFileContents.appendCString (") {\n") ;
    if (first < 0) { // first<0 means the non terminal symbol is unuseful
      ioCppFileContents.appendString ( "  inLexique->internalBottomUpParserError (HERE) ;\n") ;
    }else{
      const int32_t last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
      macroAssert (last >= first, "last (%ld) < first (%ld)", last, first) ;
      if (first == last) {
        const int32_t ip = inProductionRules.tableauIndirectionProduction (first COMMA_HERE) ;
        ioCppFileContents.appendCString ("  if (inLexique->nextProductionIndex () == ") ;
        ioCppFileContents.appendSigned (ip) ;
        ioCppFileContents.appendCString (") {\n") ;
        inProductionRules.mProductionArray (ip COMMA_HERE).engendrerAppelProduction (0,
                                                                    inVocabulary,
                                                                    "parse",
                                                                    ioCppFileContents,
                                                                    inSyntaxDirectedTranslationVarName) ;
        ioCppFileContents.appendCString ("  }else{\n"
                             "    inLexique->internalBottomUpParserError (HERE) ;\n"
                             "  }\n") ;
      }else{
        ioCppFileContents.appendCString ("  switch (inLexique->nextProductionIndex ()) {\n") ;
        for (int32_t j=first ; j<=last ; j++) {
          const int32_t ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
          ioCppFileContents.appendCString ("  case ") ;
          ioCppFileContents.appendSigned (ip) ;
          ioCppFileContents.appendCString (" :\n    ") ;
          inProductionRules.mProductionArray (ip COMMA_HERE).engendrerAppelProduction (0,
                                                                      inVocabulary,
                                                                      "parse",
                                                                      ioCppFileContents,
                                                                      inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString ("    break ;\n") ;
        }
        ioCppFileContents.appendCString ("  default :\n"
                             "    inLexique->internalBottomUpParserError (HERE) ;\n"
                             "    break ;\n"
                             "  }\n") ;
      }
    }
    ioCppFileContents.appendCString ("}\n\n") ;
  //--- Indexing
    ioCppFileContents.appendCString ("void cGrammar_") ;
    ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("::nt_") ;
    ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("_indexing (Lexique_") ;
    ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
    ioCppFileContents.appendCString (" * inLexique") ;
    ioCppFileContents.appendCString (") {\n") ;
    if (first < 0) { // first<0 means the non terminal symbol is unuseful
      ioCppFileContents.appendCString ("  inLexique->internalBottomUpParserError (HERE) ;\n") ;
    }else{
      const int32_t last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
      if (first == last) {
        const int32_t ip = inProductionRules.tableauIndirectionProduction (first COMMA_HERE) ;
        ioCppFileContents.appendCString ("  if (inLexique->nextProductionIndex () == ") ;
        ioCppFileContents.appendSigned (ip) ;
        ioCppFileContents.appendCString (") {\n") ;
        inProductionRules.mProductionArray (ip COMMA_HERE).engendrerAppelProduction (0,
                                                                    inVocabulary,
                                                                    "indexing",
                                                                    ioCppFileContents,
                                                                    "") ;
        ioCppFileContents.appendCString ("  }else{\n"
                             "    inLexique->internalBottomUpParserError (HERE) ;\n"
                             "  }\n") ;
      }else{
        ioCppFileContents.appendCString ("  switch (inLexique->nextProductionIndex ()) {\n") ;
        macroAssert (last >= first, "last (%ld) < first (%ld)", last, first) ;
        for (int32_t j=first ; j<=last ; j++) {
          const int32_t ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
          ioCppFileContents.appendCString ("  case ") ;
          ioCppFileContents.appendSigned (ip) ;
          ioCppFileContents.appendCString (" :\n    ") ;
          inProductionRules.mProductionArray (ip COMMA_HERE).engendrerAppelProduction (0,
                                                                      inVocabulary,
                                                                      "indexing",
                                                                      ioCppFileContents,
                                                                      "") ;
          ioCppFileContents.appendCString ("    break ;\n") ;
        }
        ioCppFileContents.appendCString ("  default :\n"
                                     "    inLexique->internalBottomUpParserError (HERE) ;\n"
                                     "    break ;\n"
                                     "  }\n") ;
      }
    }
    ioCppFileContents.appendCString ("}\n\n") ;
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis currentAltForNonTerminal2 (nonTerminal.current_mNonterminalSymbolParametersMap (HERE), EnumerationOrder::Up) ;
    while (currentAltForNonTerminal2.hasCurrentObject ()) {
      ioCppFileContents.appendCString ("void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::nt_") ;
      ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("_") ;
      ioCppFileContents.appendString (currentAltForNonTerminal2.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (") ;
      cEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal2.current_mFormalParametersList (HERE), EnumerationOrder::Up) ;
      int16_t numeroParametre = 1 ;
      while (parametre.hasCurrentObject ()) {
        if (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn) {
          ioCppFileContents.appendCString ("const ") ;
        }
        ioCppFileContents.appendCString ("GGS_") ;
        ioCppFileContents.appendString (parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn :
          ioCppFileContents.appendCString (" ") ;
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn :
          ioCppFileContents.appendCString (" ") ;
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut :
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut :
          ioCppFileContents.appendCString (" & ") ;
          break ;
        default : break ;
        }
        if (first >= 0) {
          ioCppFileContents.appendCString (" parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
        }
        parametre.gotoNextObject () ;
        ioCppFileContents.appendCString (",\n                                ") ;
        numeroParametre ++ ;
      }
      if (inSyntaxDirectedTranslationVarName.length() > 0) {
        ioCppFileContents.appendCString ("String & ") ;
        ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
        ioCppFileContents.appendCString (",\n                                ") ;
      }
      ioCppFileContents.appendCString ("Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * inLexique) {\n") ;
      if (first < 0) { // first<0 means the non terminal symbol is unuseful
        ioCppFileContents.appendCString ("  inLexique->internalBottomUpParserError (HERE) ;\n") ;
      }else{
        const int32_t last = inProductionRules.tableauIndiceDerniereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
        macroAssert (last >= first, "last (%ld) < first (%ld)", last, first) ;
        if (first == last) {
          const int32_t ip = inProductionRules.tableauIndirectionProduction (first COMMA_HERE) ;
          ioCppFileContents.appendCString ("  if (inLexique->nextProductionIndex () == ") ;
          ioCppFileContents.appendSigned (ip) ;
          ioCppFileContents.appendCString (") {\n") ;
          inProductionRules.mProductionArray (ip COMMA_HERE).engendrerAppelProduction (numeroParametre,
                                                                      inVocabulary,
                                                                      currentAltForNonTerminal2.current_lkey (HERE).mProperty_string.stringValue (),
                                                                      ioCppFileContents,
                                                                      inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString ("  }else{\n"
                               "    inLexique->internalBottomUpParserError (HERE) ;\n"
                               "  }\n") ;
        }else{
          ioCppFileContents.appendCString ("  switch (inLexique->nextProductionIndex ()) {\n") ;
          for (int32_t j=first ; j<=last ; j++) {
            const int32_t ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
            ioCppFileContents.appendCString ("  case ") ;
            ioCppFileContents.appendSigned (ip) ;
            ioCppFileContents.appendCString (" :\n    ") ;
            inProductionRules.mProductionArray (ip COMMA_HERE).engendrerAppelProduction (numeroParametre,
                                                                        inVocabulary,
                                                                        currentAltForNonTerminal2.current_lkey (HERE).mProperty_string.stringValue (),
                                                                        ioCppFileContents,
                                                                        inSyntaxDirectedTranslationVarName) ;
            ioCppFileContents.appendCString ("    break ;\n") ;
          }
          ioCppFileContents.appendCString ("  default :\n"
                               "    inLexique->internalBottomUpParserError (HERE) ;\n"
                               "    break ;\n"
                               "  }\n") ;
        }
      }
      ioCppFileContents.appendCString ("}\n\n") ;
      currentAltForNonTerminal2.gotoNextObject () ;
    }
    //--- Engendrer l'axiome ?
    if (nonTerminal.current_mNonTerminalIndex (HERE).uintValue () == inOriginalGrammarStartSymbol) {
      ioCppFileContents.appendCString ("void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::performIndexing (Compiler * inCompiler,\n"
                           "             const String & inSourceFilePath) {\n"
                           "  Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                           "  macroMyNew (scanner, Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (inCompiler, inSourceFilePath COMMA_HERE)) ;\n"
                           "  scanner->enableIndexing () ;\n"
                           "  if (scanner->sourceText ().isValid ()) {\n"
                           "    const bool ok = scanner->performBottomUpParsing (gActionTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gNonTerminalNames_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (",\n"
                           "                                                     gActionTableIndex_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gSuccessorTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (",\n"
                           "                                                     gProductionsTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (") ;\n"
                           "    if (ok) {\n"
                           "      cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" grammar ;\n      grammar.nt_") ;
      ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("_indexing (scanner) ;\n"
                           "    }\n"
                           "    scanner->generateIndexFile () ;\n"
                           "  }\n"
                           "  macroDetachSharedObject (scanner) ;\n"
                           "}\n\n"
                           "void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::performOnlyLexicalAnalysis (Compiler * inCompiler,\n"
                           "             const String & inSourceFilePath) {\n"
                           "  Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                           "  macroMyNew (scanner, Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (inCompiler, inSourceFilePath COMMA_HERE)) ;\n"
                           "  if (scanner->sourceText ().isValid ()) {\n"
                           "    scanner->performLexicalAnalysis () ;\n"
                           "  }\n"
                           "  macroDetachSharedObject (scanner) ;\n"
                           "}\n\n"
                           "void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::performOnlySyntaxAnalysis (Compiler * inCompiler,\n"
                           "             const String & inSourceFilePath) {\n"
                           "  Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                           "  macroMyNew (scanner, Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (inCompiler, inSourceFilePath COMMA_HERE)) ;\n"
                           "  if (scanner->sourceText ().isValid ()) {\n"
                           "    scanner->performBottomUpParsing (gActionTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gNonTerminalNames_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (",\n"
                           "                                     gActionTableIndex_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gSuccessorTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (",\n"
                           "                                     gProductionsTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (") ;\n"
                           "  }\n"
                           "  macroDetachSharedObject (scanner) ;\n"
                           "}\n\n") ;
      cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis currentAltForNonTerminal (nonTerminal.current_mNonterminalSymbolParametersMap (HERE), EnumerationOrder::Up) ;
      while (currentAltForNonTerminal.hasCurrentObject ()) {
        ioCppFileContents.appendCppTitleComment ("Grammar start symbol implementation") ;
      //--- Define file parsing static method
        ioCppFileContents.appendCString ("void cGrammar_") ;
        ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString ("::_performSourceFileParsing_") ;
        ioCppFileContents.appendString (currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (Compiler * inCompiler"
                             ",\n                                ") ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendCString ("String & ") ;
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (",\n                                ") ;
        }
        ioCppFileContents.appendCString ("GGS_lstring inFilePath") ;
        cEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal.current_mFormalParametersList (HERE), EnumerationOrder::Up) ;
        int32_t numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents.appendCString (",\n                                ") ;
          if (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn) {
            ioCppFileContents.appendCString ("const ") ;
          }
          ioCppFileContents.appendCString ("GGS_") ;
          ioCppFileContents.appendString (parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn :
            ioCppFileContents.appendCString (" ") ;
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn :
            ioCppFileContents.appendCString (" ") ;
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut :
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut :
            ioCppFileContents.appendCString (" & ") ;
            break ;
          default : break ;
          }
          ioCppFileContents.appendCString (" parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        ioCppFileContents.appendCString ("\n                                COMMA_LOCATION_ARGS) {\n");
        ioCppFileContents.appendCString ("  if (inFilePath.isValid ()) {\n"
                             "    const GGS_string filePathAsString = inFilePath.readProperty_string () ;\n"
                             "    String filePath = filePathAsString.stringValue () ;\n"
                             "    if (! FileManager::isAbsolutePath (filePath)) {\n"
                             "      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;\n"
                             "    }\n"
                             "    if (FileManager::fileExistsAtPath (filePath)) {\n"
                             "      Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                             "      macroMyNew (scanner, Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (inCompiler, filePath COMMA_HERE)) ;\n"
                             "      if (scanner->sourceText ().isValid ()) {\n"
                             "        const bool ok = scanner->performBottomUpParsing (gActionTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gNonTerminalNames_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (",\n"
                             "                                                         gActionTableIndex_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (", gSuccessorTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (",\n"
                             "                                                         gProductionsTable_") ;
      ioCppFileContents.appendString (inTargetFileName) ;
      ioCppFileContents.appendCString (") ;\n"
                             "        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {\n"
                             "          cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" grammar ;\n          grammar.nt_") ;
      ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("_") ;
      ioCppFileContents.appendString (currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (") ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents.appendCString ("parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
          ioCppFileContents.appendCString (", ") ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (", ") ;
        }
        ioCppFileContents.appendCString ("scanner) ;\n"
                             "        }\n"
                             "      }else{\n"
                             "        String message ;\n"
                             "        message.appendString (\"the '\") ;\n"
                             "        message.appendString (filePath) ;\n"
                             "        message.appendString (\"' file exists, but cannot be read\") ;\n"
                             "        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;\n"
                             "        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;\n"
                             "      }\n"
                             "      macroDetachSharedObject (scanner) ;\n"
                             "    }else{\n"
                             "      String message ;\n"
                             "      message.appendString (\"the '\") ;\n"
                             "      message.appendString (filePath) ;\n"
                             "      message.appendString (\"' file does not exist\") ;\n"
                             "      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;\n"
                             "      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;\n"
                             "    }\n"
                             "  }\n"
                             "}\n\n") ;
      //--- Define string parsing static method
        ioCppFileContents.appendCppHyphenLineComment () ;
        ioCppFileContents.appendCString ("void cGrammar_") ;
        ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString ("::_performSourceStringParsing_") ;
        ioCppFileContents.appendString (currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (Compiler * inCompiler"
                                     ",\n                                ") ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendCString ("String & ") ;
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (",\n                                ") ;
        }
        ioCppFileContents.appendCString ("GGS_string inSourceString"
                                     ",\n                                "
                                     "GGS_string inNameString") ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents.appendCString (",\n                                ") ;
          if (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue () == GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn) {
            ioCppFileContents.appendCString ("const ") ;
          }
          ioCppFileContents.appendCString ("GGS_") ;
          ioCppFileContents.appendString (parametre.current_mGalgasTypeNameForGrammarAnalysis (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
          switch (parametre.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn :
            ioCppFileContents.appendCString (" ") ;
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn :
            ioCppFileContents.appendCString (" ") ;
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut :
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut :
            ioCppFileContents.appendCString (" & ") ;
            break ;
          default : break ;
          }
          ioCppFileContents.appendCString (" parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        ioCppFileContents.appendCString ("\n                                COMMA_UNUSED_LOCATION_ARGS) {\n"
                                     "  if (inSourceString.isValid () && inNameString.isValid ()) {\n"
                                     "    const String sourceString = inSourceString.stringValue () ;\n"
                                     "    const String nameString = inNameString.stringValue () ;\n"
                                     "    Lexique_") ;
        ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                                     "    macroMyNew (scanner, Lexique_") ;
        ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (inCompiler, sourceString, nameString COMMA_HERE)) ;\n"
                                     "    if (scanner->sourceText ().isValid ()) {\n"
                                     "      const bool ok = scanner->performBottomUpParsing (gActionTable_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gNonTerminalNames_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (",\n"
                                     "                                                       gActionTableIndex_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (", gSuccessorTable_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (",\n"
                                     "                                                       gProductionsTable_") ;
        ioCppFileContents.appendString (inTargetFileName) ;
        ioCppFileContents.appendCString (") ;\n"
                                     "      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {\n"
                                     "        cGrammar_") ;
        ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" grammar ;\n"
                                     "        ") ;
        ioCppFileContents.appendCString ("grammar.nt_") ;
        ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        ioCppFileContents.appendCString ("_") ;
        ioCppFileContents.appendString (currentAltForNonTerminal.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (") ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hasCurrentObject ()) {
          ioCppFileContents.appendCString ("parameter_") ;
          ioCppFileContents.appendSigned (numeroParametre) ;
          ioCppFileContents.appendCString (", ") ;
          parametre.gotoNextObject () ;
          numeroParametre ++ ;
        }
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (", ") ;
        }
        ioCppFileContents.appendCString ("scanner) ;\n") ;
        if (inSyntaxDirectedTranslationVarName.length() > 0) {
          ioCppFileContents.appendCString ("          scanner->appendLastSeparatorTo (") ;
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (") ;\n") ;
        }
        ioCppFileContents.appendCString ("      }\n"
                                     "    }\n"
                                     "    macroDetachSharedObject (scanner) ;\n"
                                     "  }\n"
                                     "}\n\n") ;
        currentAltForNonTerminal.gotoNextObject () ;
      }
    }
    nonTerminal.gotoNextObject () ;
  }

//--- Implement non terminal from 'select' and 'repeat' instructions ---------
  const int32_t terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  for (int32_t ts=terminalSymbolsCount ; ts<inVocabulary.getAllSymbolsCount () ; ts++) {
    if (inVocabulary.needToGenerateChoice (ts COMMA_HERE)) {
      ioCppFileContents.appendCppTitleComment (String ("'") + inVocabulary.getSymbol (ts COMMA_HERE) + "' non terminal implementation") ;
      ioCppFileContents.appendCString ("int32_t cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::") ;
      ioCppFileContents.appendString (inVocabulary.getSymbol (ts COMMA_HERE)) ;
      ioCppFileContents.appendCString (" (") ;
      ioCppFileContents.appendCString ("Lexique_") ;
      ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" * inLexique") ;
      ioCppFileContents.appendCString (") {\n") ;
      ioCppFileContents.appendCString ("// Productions numbers: ") ;

      const int32_t first = inProductionRules.tableauIndicePremiereProduction (ts - terminalSymbolsCount COMMA_HERE) ;
      macroAssert (first >= 0, "first (%ld) < 0", first, 0) ;
      const int32_t last = inProductionRules.tableauIndiceDerniereProduction (ts - terminalSymbolsCount COMMA_HERE) ;
      macroAssert (last >= first, "last (%ld) < first (%ld)", last, first) ;
      for (int32_t j=first ; j<=last ; j++) {
        ioCppFileContents.appendCString (" ") ;
        ioCppFileContents.appendSigned (inProductionRules.tableauIndirectionProduction (j COMMA_HERE)) ;
      }
      ioCppFileContents.appendCString ("\n"
                                   "  return inLexique->nextProductionIndex () - ") ;
      ioCppFileContents.appendSigned ((int32_t)(first - 1)) ;
      ioCppFileContents.appendCString (" ;\n"
                                   "}\n\n") ;
    }
  }
//--- End of C++ file
  ioCppFileContents.appendCppHyphenLineComment () ;
}

//--------------------------------------------------------------------------------------------------
//
// G E N E R A T E    S L R    A N A L Y Z E R
//
//--------------------------------------------------------------------------------------------------
//
// C O M P U T E    L R 0    A U T O M A T O N
//
//--------------------------------------------------------------------------------------------------

static void
compute_LR0_automation (const cPureBNFproductionsList & inProductionRules,
                        const GrammarVocabulary & inVocabulary,
                        c_LR0_items_sets_collection & outLR0_items_sets_collection,
                        TC_UniqueArray <c_LR0_automaton_transition> & outTransitionList) {
//--- Create initial LR0 items set (SLR automaton initial state I0)
  const int32_t vocabularyCount = inVocabulary.getAllSymbolsCount () ;
  c_LR0_items_set LR0_items_set ;
//--- Add last production, that is the added production <> -> <start_symbol>
  LR0_items_set.add_LR0_item (inProductionRules.mProductionArray.count () - 1, 0) ;
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
        outTransitionList.appendObject (t) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
// S L R    C O M P U T A T I O N S
//
//--------------------------------------------------------------------------------------------------

void
SLR_computations (const cPureBNFproductionsList & inProductionRules,
                  const GrammarVocabulary & inVocabulary,
                  HTMLString & ioHTMLFileContents,
                  const bool inPopulateHTMLHelperString,
                  const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFOLLOWarray,
                  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                  const uint32_t inOriginalGrammarStartSymbol,
                  const String & inTargetFileName,
                  String & ioCppFileContents,
                  const String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn,
                  const String & inSyntaxDirectedTranslationVarName) {
//--- Console display
  if (inVerboseOptionOn) {
    gCout.appendCString ("  SLR automaton... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.appendTitleComment ("Building SLR automaton", "title") ;
    ioHTMLFileContents.addRawData ("<p></p>") ;
  }

//--- Compute LR0 automaton
  c_LR0_items_sets_collection LR0_items_sets_collection ;
  TC_UniqueArray <c_LR0_automaton_transition> transitionList ;
  compute_LR0_automation (inProductionRules,
                          inVocabulary,
                          LR0_items_sets_collection,
                          transitionList) ;
  if (inVerboseOptionOn) {
    gCout.appendSigned (LR0_items_sets_collection.getStatesCount ()) ;
    gCout.appendCString (" states, ") ;
    gCout.appendSigned (transitionList.count ()) ;
    gCout.appendCString (" transitions.\n") ;
    gCout.flush () ;
  }
//--- Display automaton states
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<table class=\"result\">"
                                   "<tr><td class=\"result_title\" colspan=\"2\">") ;
    ioHTMLFileContents.appendCString ("LR0 automaton states") ;
    ioHTMLFileContents.addRawData ("</td></tr>") ;
    LR0_items_sets_collection.display (inProductionRules, inVocabulary, ioHTMLFileContents) ;
    ioHTMLFileContents.addRawData ("</table>") ;
  }
//--- Display automaton transitions
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    ioHTMLFileContents.appendCString ("LR0 automaton transitions") ;
    ioHTMLFileContents.addRawData ("</td></tr>") ;
    for (int32_t i=0 ; i<transitionList.count () ; i++) {
      ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      ioHTMLFileContents.appendCString ("  S") ;
      ioHTMLFileContents.appendSigned (transitionList (i COMMA_HERE).sourceState ()) ;
      ioHTMLFileContents.appendCString (" |- ") ;
      inVocabulary.printInFile (ioHTMLFileContents, transitionList (i COMMA_HERE).action () COMMA_HERE) ;
      ioHTMLFileContents.appendCString (" -> S") ;
      ioHTMLFileContents.appendSigned (transitionList (i COMMA_HERE).targetState ()) ;
      ioHTMLFileContents.addRawData ("</code></td></tr>") ;
    }
    ioHTMLFileContents.addRawData ("</table><p></p>") ;
  }

//--- Console display
  if (inVerboseOptionOn) {
    gCout.appendCString ("  Checking SLR condition... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.appendTitleComment ("Checking SLR condition", "title") ;
  }

//--- Build SLR table... detect if grammar is not SLR
  const int32_t terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  TC_UniqueArray2 <cDecisionTableElement> SLRdecisionTable (LR0_items_sets_collection.getStatesCount (), terminalSymbolsCount) ;
  int32_t shiftActions = 0 ;
  int32_t reduceActions = 0 ;
  int32_t successorEntries = 0 ;
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    ioHTMLFileContents.appendCString ("SLR decision table") ;
    ioHTMLFileContents.addRawData ("</td></tr>") ;
  }
//--- Shift actions
  for (int32_t index=0 ; index<transitionList.count () ; index++) {
    if (transitionList (index COMMA_HERE).action () < terminalSymbolsCount) {
      const int32_t sourceState = transitionList (index COMMA_HERE).sourceState () ;
      const int32_t targetState = transitionList (index COMMA_HERE).targetState () ;
      const int32_t terminal = transitionList (index COMMA_HERE).action () ;
      if (inPopulateHTMLHelperString) {
        ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        ioHTMLFileContents.appendCString ("Action [S") ;
        ioHTMLFileContents.appendSigned (sourceState) ;
        ioHTMLFileContents.appendCString (", ") ;
        inVocabulary.printInFile (ioHTMLFileContents, terminal COMMA_HERE) ;
        ioHTMLFileContents.appendCString ("] : shift, goto S") ;
        ioHTMLFileContents.appendSigned (targetState) ;
        ioHTMLFileContents.addRawData ("</code></td></tr>") ;
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
      if (inPopulateHTMLHelperString) {
        ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        ioHTMLFileContents.appendCString ("Action [S") ;
        ioHTMLFileContents.appendSigned (state) ;
        ioHTMLFileContents.appendCString (", ") ;
        inVocabulary.printInFile (ioHTMLFileContents, terminal COMMA_HERE) ;
        ioHTMLFileContents.appendCString ("] : accept") ;
        ioHTMLFileContents.addRawData ("</code>") ;
      }
      if (! SLRdecisionTable (state, terminal COMMA_HERE).isInUndefinedState ()) {
        if (inPopulateHTMLHelperString) {
          const String symbol = inVocabulary.getSymbol (SLRdecisionTable (state, terminal COMMA_HERE).parameter () COMMA_HERE) ;
          ioHTMLFileContents.addRawData ("<span class=\"error\">") ;
          ioHTMLFileContents.appendCString (" *** CONFLICT (") ;
          ioHTMLFileContents.appendString (symbol) ;
          ioHTMLFileContents.appendCString (") ***") ;
          ioHTMLFileContents.addRawData ("</span>") ;
        }
        conflictCount += 1 ;
      }
      SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::acceptDecision () ;
      if (inPopulateHTMLHelperString) {
        ioHTMLFileContents.addRawData ("</td></tr>") ;
      }
    }
    for (int32_t p=0 ; p<productionsSet.count () ; p++) {
      const int32_t productionIndex = productionsSet (p COMMA_HERE) ;
      const int32_t leftNonTerminal = inProductionRules.mProductionArray (productionIndex COMMA_HERE).leftNonTerminalIndex () ;
      for (int32_t f=0 ; f<inFOLLOWarray (leftNonTerminal COMMA_HERE).count () ; f++) {
        const int32_t terminal = (int32_t) inFOLLOWarray (leftNonTerminal COMMA_HERE) (f COMMA_HERE) ;
        if (inPopulateHTMLHelperString) {
          ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
          ioHTMLFileContents.appendCString ("Action [S") ;
          ioHTMLFileContents.appendSigned (state) ;
          ioHTMLFileContents.appendCString (", ") ;
          inVocabulary.printInFile (ioHTMLFileContents, terminal COMMA_HERE) ;
          ioHTMLFileContents.appendCString ("] : reduce by ") ;
          inVocabulary.printInFile (ioHTMLFileContents, leftNonTerminal COMMA_HERE) ;
          ioHTMLFileContents.addRawData ("</code>") ;
        }
        if (! SLRdecisionTable (state, terminal COMMA_HERE).isInUndefinedState ()) {
          if (inPopulateHTMLHelperString) {
            ioHTMLFileContents.addRawData ("<span class=\"error\">") ;
            ioHTMLFileContents.appendCString (" *** CONFLICT ***") ;
            ioHTMLFileContents.addRawData ("</span>") ;
          }
          conflictCount += 1 ;
        }
        if (inPopulateHTMLHelperString) {
          ioHTMLFileContents.addRawData ("</td></tr>") ;
        }
        SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::reduceDecision (productionIndex) ;
        reduceActions += 1 ;
      }
    }
  }
//--- Successors
  for (int32_t t=0 ; t<transitionList.count () ; t++) {
    if (transitionList (t COMMA_HERE).action () >= terminalSymbolsCount) {
      successorEntries ++ ;
      if (inPopulateHTMLHelperString) {
        ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        ioHTMLFileContents.appendCString ("Successor [S") ;
        ioHTMLFileContents.appendSigned (transitionList (t COMMA_HERE).sourceState ()) ;
        ioHTMLFileContents.appendCString (", ") ;
        inVocabulary.printInFile (ioHTMLFileContents, transitionList (t COMMA_HERE).action () COMMA_HERE) ;
        ioHTMLFileContents.appendCString ("] = S") ;
        ioHTMLFileContents.appendSigned (transitionList (t COMMA_HERE).targetState ()) ;
        ioHTMLFileContents.addRawData ("</code></td></tr>") ;
      }
    }
  }
//--- Display summary
  if (inVerboseOptionOn) {
    if (conflictCount == 0) {
      gCout.appendCString ("ok.\n") ;
    }else{
      gCout.appendCString ("error, ") ;
      gCout.appendSigned (conflictCount) ;
      gCout.appendCString (" conflict") ;
      gCout.appendString ((conflictCount > 1) ? "s" : "") ;
      gCout.appendCString (".\n") ;
    }
    gCout.flush () ;
  }
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("</table><p>") ;
    ioHTMLFileContents.appendCString ("LR0 automaton has ") ;
    ioHTMLFileContents.appendSigned (LR0_items_sets_collection.getStatesCount ()) ;
    ioHTMLFileContents.appendCString (" states and ") ;
    ioHTMLFileContents.appendSigned (transitionList.count ()) ;
    ioHTMLFileContents.appendCString (" transitions.\n\n") ;
    ioHTMLFileContents.appendCString ("Analyze table has ") ;
    ioHTMLFileContents.appendSigned (shiftActions) ;
    ioHTMLFileContents.appendCString (" shift actions, ") ;
    ioHTMLFileContents.appendSigned (reduceActions) ;
    ioHTMLFileContents.appendString ( " reduce actions, and ") ;
    ioHTMLFileContents.appendSigned (successorEntries) ;
    ioHTMLFileContents.appendCString (" state successor entries.") ;
    ioHTMLFileContents.addRawData ("</p><p>") ;
    if (conflictCount == 0) {
      ioHTMLFileContents.addRawData ("<span class=\"success\">") ;
      ioHTMLFileContents.appendCString ("No conflict : grammar is SLR (1).") ;
      ioHTMLFileContents.addRawData ("</span>") ;
    }else{
      ioHTMLFileContents.addRawData ("<span class=\"error\">") ;
      ioHTMLFileContents.appendSigned (conflictCount) ;
      ioHTMLFileContents.appendCString (" conflict") ;
      ioHTMLFileContents.appendString ((conflictCount > 1) ? "s" : "") ;
      ioHTMLFileContents.appendCString (" : grammar is not SLR (1).") ;
      ioHTMLFileContents.addRawData ("</span>") ;
    }
    ioHTMLFileContents.addRawData ("</p>") ;
  }
//--- Generate C++ file
  if (conflictCount == 0) {
    generate_SLR_grammar_cpp_file (inProductionRules,
                                   inVocabulary,
                                   SLRdecisionTable,
                                   transitionList,
                                   inNonTerminalSymbolSortedListForGrammarAnalysis,
                                   inOriginalGrammarStartSymbol,
                                   inLexiqueName,
                                   inTargetFileName,
                                   ioCppFileContents,
                                   inSyntaxDirectedTranslationVarName) ;
  }
  outOk = conflictCount == 0 ;
}

//--------------------------------------------------------------------------------------------------
