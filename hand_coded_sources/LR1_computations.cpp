//--------------------------------------------------------------------------------------------------
//
//     Routines for LR(1) grammar computations
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
#include "MF_MemoryControl.h"
#include "Compiler.h"
#include "TC_UniqueArray2.h"

//--------------------------------------------------------------------------------------------------

#include "LR1_computations.h"
#include "cPureBNFproductionsList.h"
#include "GrammarVocabulary.h"
#include "cDecisionTableElement.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------
//
//    C L A S S    F O R   L R 1    I T E M
//
//--------------------------------------------------------------------------------------------------

static uint32_t
computeHashCode (const int32_t inProductionRuleIndex,
                 const int32_t inLocationIndex,
                 const int32_t inTerminalSymbol) {
  uint32_t h  = (uint32_t) inLocationIndex ;
  h = (h << 11) ^ ((uint32_t) inTerminalSymbol) ;
  h = (h << 11) ^ ((uint32_t) inProductionRuleIndex) ;
  return h ;
}

//--------------------------------------------------------------------------------------------------

class c_LR1_item {
  public: const int32_t mLocationIndex ;
  public: const int32_t mTerminalSymbol ;
  public: const int32_t mProductionRuleIndex ;
  public: const uint32_t mHashCode ;
//--- Constructor
  public: inline c_LR1_item (const int32_t inProductionRuleIndex,
                              const int32_t inLocationIndex,
                              const int32_t inTerminalSymbol) :
  mLocationIndex (inLocationIndex),
  mTerminalSymbol (inTerminalSymbol),
  mProductionRuleIndex (inProductionRuleIndex),
  mHashCode (computeHashCode (inProductionRuleIndex, inLocationIndex, inTerminalSymbol))  {
  }

//--- Compare two items
  public: inline static int32_t
  compare_LR1_items (const c_LR1_item & inItem1,
                     const c_LR1_item & inItem2) ;
} ;

//--------------------------------------------------------------------------------------------------

int32_t  c_LR1_item::
compare_LR1_items (const c_LR1_item & inItem1,
                   const c_LR1_item & inItem2) {
  int32_t result = inItem1.mProductionRuleIndex - inItem2.mProductionRuleIndex ;
  if (result == 0) {
    result = inItem1.mLocationIndex - inItem2.mLocationIndex ;
  }
  if (result == 0) {
    result = inItem1.mTerminalSymbol - inItem2.mTerminalSymbol ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------
//
// C L A S S    F O R   I T E M S    A V L    T R E E
//
//--------------------------------------------------------------------------------------------------

class cLR1_items_AVL_tree {
  public: cLR1_items_AVL_tree * mPtrToInf ;
  public: cLR1_items_AVL_tree * mPtrToSup ;
  public: const c_LR1_item mLR1item ;
  public: int32_t mBalance ;

  protected: cLR1_items_AVL_tree (const c_LR1_item & inLR1item) ;

  public: virtual ~cLR1_items_AVL_tree (void) ;

  public: static cLR1_items_AVL_tree * // Return inserted object, or nullptr
  recursiveSearchOrInsertLR1Item (cLR1_items_AVL_tree * & ioRootPointer,
                                  const c_LR1_item & in_LR1_item,
                                  bool & outExtension) ;

//--- No copy
  private: cLR1_items_AVL_tree (cLR1_items_AVL_tree &) ;
  private: cLR1_items_AVL_tree & operator = (cLR1_items_AVL_tree &) ;
} ;

//--------------------------------------------------------------------------------------------------

cLR1_items_AVL_tree::
cLR1_items_AVL_tree (const c_LR1_item & inLR1item) :
mPtrToInf ((cLR1_items_AVL_tree *) nullptr),
mPtrToSup ((cLR1_items_AVL_tree *) nullptr),
mLR1item (inLR1item),
mBalance (0) {
} ;

//--------------------------------------------------------------------------------------------------

cLR1_items_AVL_tree::~cLR1_items_AVL_tree (void) {
  macroMyDelete (mPtrToInf) ;
  macroMyDelete (mPtrToSup) ;
} ;

//--------------------------------------------------------------------------------------------------
//
//       Rotate left
//
//--------------------------------------------------------------------------------------------------

static void rotateLeft (cLR1_items_AVL_tree * & ioPtr) {
//--- Rotate
  cLR1_items_AVL_tree * ptr = ioPtr->mPtrToSup ;
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

static void rotateRight (cLR1_items_AVL_tree * & ioPtr) {
//--- Rotate
  cLR1_items_AVL_tree * ptr = ioPtr->mPtrToInf ;
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

cLR1_items_AVL_tree * cLR1_items_AVL_tree::
recursiveSearchOrInsertLR1Item (cLR1_items_AVL_tree * & ioRootPointer,
                                const c_LR1_item & in_LR1_item,
                                bool & outExtension) {
  cLR1_items_AVL_tree * result = nullptr ;
  if (ioRootPointer == nullptr) {
    macroMyNew (ioRootPointer, cLR1_items_AVL_tree (in_LR1_item)) ;
    result = ioRootPointer ;
    outExtension = true ;
  }else{
    const int32_t comp = c_LR1_item::compare_LR1_items (in_LR1_item, ioRootPointer->mLR1item) ;
    if (comp > 0) {
      result = recursiveSearchOrInsertLR1Item (ioRootPointer->mPtrToSup,
                                                  in_LR1_item,
                                                  outExtension) ;
      if (outExtension) {
        ioRootPointer->mBalance -- ;
        switch (ioRootPointer->mBalance) {
        case 0:
          outExtension = false;
          break;
        case -1:
          break;
        case -2:
          if (ioRootPointer->mPtrToSup->mBalance == 1) {
            ::rotateRight (ioRootPointer->mPtrToSup) ;
          }
          ::rotateLeft (ioRootPointer) ;
          outExtension = false;
          break;
        default :
          break ;
        }
      }
    }else if (comp < 0) {
      result = recursiveSearchOrInsertLR1Item (ioRootPointer->mPtrToInf,
                                                  in_LR1_item,
                                                  outExtension) ;
      if (outExtension) {
        ioRootPointer->mBalance ++ ;
        switch (ioRootPointer->mBalance) {
        case 0:
          outExtension = false;
          break;
        case 1:
          break;
        case 2:
          if (ioRootPointer->mPtrToInf->mBalance == -1) {
            ::rotateLeft (ioRootPointer->mPtrToInf) ;
          }
          ::rotateRight (ioRootPointer) ;
          outExtension = false;
          break;
        default :
          break ;
        }
      }
    }else{ // Found
      outExtension = false;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Class cLR1ItemUniqueArray
#endif

//--------------------------------------------------------------------------------------------------

class cLR1ItemUniqueArray {
//--- Default Constructor
  public: cLR1ItemUniqueArray (void) ;

//--- Allocation Constructor (empty array)
  public: cLR1ItemUniqueArray (const int32_t inAllocatedSize COMMA_LOCATION_ARGS) ;

//--- Virtual Destructor
  public: virtual ~cLR1ItemUniqueArray (void) ;

//--- No copy
  private: cLR1ItemUniqueArray (const cLR1ItemUniqueArray &) ;
  private: cLR1ItemUniqueArray & operator = (const cLR1ItemUniqueArray &) ;

//--- Get Count
  public: inline int32_t count (void) const { return mCount ; }

//--- Get allocated capacity
  public: inline int32_t capacity (void) const { return mCapacity ; }

//--- Methods for making room
  public: void makeRoom (const int32_t inNewCapacity) ;

//--- Remove all objects (no deallocation)
  public: inline void clear (void) { mCount = 0 ; }

//--- Remove all objects and deallocate
  public: void free (void) ;

//--- Add objects at the end of the array
  public: void appendObject (const cLR1_items_AVL_tree * inValue) ;

//--- Array access (with index checking)
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: const c_LR1_item & operator () (const int32_t inIndex COMMA_LOCATION_ARGS) ;
    public: const c_LR1_item & operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  #endif

//--- Array access (without index checking)
  #ifdef DO_NOT_GENERATE_CHECKINGS
    public: inline const c_LR1_item & operator () (const int32_t inIndex) { return mArray [inIndex]->mLR1item ; }
    public: inline const c_LR1_item & operator () (const int32_t inIndex) const { return mArray [inIndex]->mLR1item ; }
  #endif

//--- Index checking
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: void checkIndex (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
    protected: void checkIndexForInsertion (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  #endif

//--- Protected attributes
  protected: const cLR1_items_AVL_tree * * mArray ;
  protected: int32_t mCount ;
  protected: int32_t mCapacity ;

//--- swap
  friend void swap (cLR1ItemUniqueArray & ioOperand1,
                    cLR1ItemUniqueArray & ioOperand2) ;

} ;

//--------------------------------------------------------------------------------------------------

void swap (cLR1ItemUniqueArray & ioOperand1,
           cLR1ItemUniqueArray & ioOperand2) {
  swap (ioOperand1.mArray, ioOperand2.mArray) ;
  swap (ioOperand1.mCount, ioOperand2.mCount) ;
  swap (ioOperand1.mCapacity, ioOperand2.mCapacity) ;
}

//--------------------------------------------------------------------------------------------------
//
//   Default Constructor
//
//--------------------------------------------------------------------------------------------------

cLR1ItemUniqueArray::cLR1ItemUniqueArray (void) :
mArray (nullptr),
mCount (0),
mCapacity (0) {
}

//--------------------------------------------------------------------------------------------------
//
//   Allocation Constructor
//
//--------------------------------------------------------------------------------------------------

cLR1ItemUniqueArray::
cLR1ItemUniqueArray (const int32_t inAllocatedSize COMMA_LOCATION_ARGS) :
mArray (nullptr),
mCount (0),
mCapacity (0) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    macroAssertThere (inAllocatedSize >= 0, "inAllocatedSize (%ld) < 0", inAllocatedSize, 0) ;
  #endif
  if (inAllocatedSize > 0) {
    macroMyNewArray (mArray, const cLR1_items_AVL_tree *, uint32_t (inAllocatedSize)) ;
    for (int32_t i=0 ; i<inAllocatedSize ; i++) {
      mArray [i] = nullptr ;
    }
    mCapacity = inAllocatedSize ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//   Destructor
//
//--------------------------------------------------------------------------------------------------

cLR1ItemUniqueArray::~cLR1ItemUniqueArray (void) {
  macroMyDeleteArray (mArray) ;
}

//--------------------------------------------------------------------------------------------------
//
//   Method for making room using copy
//
//--------------------------------------------------------------------------------------------------

void cLR1ItemUniqueArray::makeRoom (const int32_t inNewCapacity) {
  if (mCapacity < inNewCapacity) {
    int32_t newCapacity = (mCapacity > 32) ? mCapacity : 32 ;
    while (newCapacity < inNewCapacity) {
      newCapacity <<= 1 ;
    }
    const cLR1_items_AVL_tree * * newArray = nullptr ;
    macroMyNewArray (newArray, const cLR1_items_AVL_tree *, uint32_t (newCapacity)) ;
    for (int32_t i=0 ; i<mCapacity ; i++) {
      newArray [i] = mArray [i] ;
    }
    macroMyDeleteArray (mArray) ; mArray = newArray ;
    mCapacity = newCapacity ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//   Remove all objects and deallocate
//
//--------------------------------------------------------------------------------------------------

void cLR1ItemUniqueArray::free (void) {
  mCount = 0 ;
  macroMyDeleteArray (mArray) ;
  mCapacity = 0 ;
}

//--------------------------------------------------------------------------------------------------
//
//   Add object at the end of the array
//
//--------------------------------------------------------------------------------------------------

void cLR1ItemUniqueArray::appendObject (const cLR1_items_AVL_tree * inValue) {
  if (mCount >= mCapacity) {
    makeRoom (mCount + 1) ;
  }
  mArray [mCount] = inValue ;
  mCount ++ ;
}

//--------------------------------------------------------------------------------------------------
//
//   Check index before insertion
//
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cLR1ItemUniqueArray::
  checkIndexForInsertion (const int32_t inIndex COMMA_LOCATION_ARGS) const {
    macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    macroAssertThere (inIndex <= mCount, "inIndex (%d) > mCount (%ld)", inIndex, mCount) ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//   Array Access
//
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cLR1ItemUniqueArray::
  checkIndex (const int32_t inIndex COMMA_LOCATION_ARGS) const {
    macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    macroAssertThere (inIndex < mCount, "inIndex (%ld) >= mCount (%ld)", inIndex, mCount) ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  const c_LR1_item & cLR1ItemUniqueArray::
  operator () (const int32_t inIndex COMMA_LOCATION_ARGS) {
    checkIndex (inIndex COMMA_THERE) ;
    return mArray [inIndex]->mLR1item ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  const c_LR1_item & cLR1ItemUniqueArray::operator () (const int32_t inIndex
                                                       COMMA_LOCATION_ARGS) const {
    checkIndex (inIndex COMMA_THERE) ;
    return mArray [inIndex]->mLR1item ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Class c_LR1_items_set
#endif

//--------------------------------------------------------------------------------------------------
//
//    C L A S S    F O R   L R 1    I T E M S    S E T
//
//--------------------------------------------------------------------------------------------------

class c_LR1_items_set final {
//--- Private data
  private: cLR1ItemUniqueArray mItemsSet ;
  private: cLR1_items_AVL_tree * mRoot ;
  private: uint32_t mHashCode ;
  private: bool mArrayIsSorted ;

//--- Default constructor
  public: c_LR1_items_set (void) ;

//--- Destructor
  public: ~c_LR1_items_set (void) ;

//--- No copy
  private: c_LR1_items_set (const c_LR1_items_set &) ;
  private: c_LR1_items_set & operator = (const c_LR1_items_set &) ;

//--- Add a new LR1 item (returns false if already present)
  public: void add_LR1_item (const int32_t inProductionRuleIndex,
                              const int32_t inLocationIndex,
                              const int32_t inTerminalSymbol) ;
  protected: void recursiveBuildSortedArray (cLR1_items_AVL_tree * inPointer) ;

//--- Get transitions LR1 item set from a state for a symbol
  public: void  getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const int32_t inSymbol,
                                   c_LR1_items_set & out_LR1_item_set) ;

//--- Closing the LR1 items set
  public: void close_LR1_items_set (const cPureBNFproductionsList & inProductionRules,
                                    const int32_t inTerminalSymbolsCount,
                                    const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFIRSTarray,
                                    const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array) ;

  public: void clear (void) ;

//--- Empty set ?
  public: bool isEmptySet (void) const ;

//--- Display LR1 items set
  public: void
  display (const cPureBNFproductionsList & inProductionRules,
           const GrammarVocabulary & inVocabulary,
           HTMLString & inHTMLfile) const ;

//--- Compare two items sets
  public: static
  int32_t compare_LR1_items_sets (c_LR1_items_set & inItemsSet1,
                                 c_LR1_items_set & inItemsSet2) ;

//--- Search from a LR1 items set (used for building 'reduce' actions of LR table)
  public: void
  getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                      TC_UniqueArray <int32_t> & outProductionsSet,
                                      TC_UniqueArray <int32_t> & outTerminalArray,
                                      bool & outAcceptCondition) ;

//--- Hash code
  public: inline uint32_t hashCode (void) const { return mHashCode ; }

//--- Friend
  friend void swap (c_LR1_items_set & ioOperand1, c_LR1_items_set & ioOperand2) ;
} ;

//--------------------------------------------------------------------------------------------------

c_LR1_items_set::c_LR1_items_set (void) :
mItemsSet (),
mRoot (nullptr),
mHashCode (0),
mArrayIsSorted (true) {
}

//--------------------------------------------------------------------------------------------------

c_LR1_items_set::~c_LR1_items_set (void) {
  macroMyDelete (mRoot) ;
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_set::clear (void) {
  mItemsSet.clear () ;
  macroMyDelete (mRoot) ;
  mHashCode = 0 ;
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_set::
recursiveBuildSortedArray (cLR1_items_AVL_tree * inPointer) {
  if (inPointer != nullptr) {
    recursiveBuildSortedArray (inPointer->mPtrToSup) ;
    mItemsSet.appendObject (inPointer) ;
    recursiveBuildSortedArray (inPointer->mPtrToInf) ;
  }
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_set::
add_LR1_item (const int32_t inProductionRuleIndex,
              const int32_t inLocationIndex,
              const int32_t inTerminalSymbol) {
  const c_LR1_item item (inProductionRuleIndex, inLocationIndex, inTerminalSymbol) ;
//--- Find or add
  bool extension = false ; // Unused
  cLR1_items_AVL_tree * p = cLR1_items_AVL_tree::recursiveSearchOrInsertLR1Item (mRoot,
                                                       item,
                                                       extension) ;
//--- If not found, add it
  if (p != nullptr) {
    mItemsSet.appendObject (p) ;
    mArrayIsSorted = false ;
    mHashCode ^= item.mHashCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_set::
close_LR1_items_set (const cPureBNFproductionsList & inProductionRules,
                     const int32_t inTerminalSymbolsCount,
                     const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFIRSTarray,
                     const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array) {
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const int32_t locationIndex = mItemsSet (i COMMA_HERE).mLocationIndex ;
    const int32_t productionRule = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules.mProductionArray (productionRule COMMA_HERE) ;
    const int32_t derivationLength = p.derivationLength () ;
    if (locationIndex < derivationLength) {
      const int32_t prodX = p.derivationAtIndex (locationIndex COMMA_HERE) - inTerminalSymbolsCount ;
      if (prodX >= 0) {
      //--- Evaluate FIRSTs of derivation following prodX
        int32_t derivationIndex = locationIndex + 1 ;
        bool emptyStringAccepted = true ;
        TC_UniqueArray <int32_t> theFirst ;
        while (emptyStringAccepted && (derivationIndex < derivationLength)) {
          const int32_t symbol = p.derivationAtIndex (derivationIndex COMMA_HERE) ;
          if (symbol < inTerminalSymbolsCount) {
            theFirst.appendObject (symbol) ;
            emptyStringAccepted = false ;
          }else{
            const int32_t nFirst = inFIRSTarray (symbol COMMA_HERE).count () ;
            for (int32_t s=0 ; s<nFirst ; s++) {
              theFirst.appendObject ((int32_t) inFIRSTarray (symbol COMMA_HERE) (s COMMA_HERE)) ;
            }
            emptyStringAccepted = inVocabularyDerivingToEmpty_Array (symbol COMMA_HERE) ;
          }
          derivationIndex ++ ;
        }
        if (emptyStringAccepted) {
          theFirst.appendObject (mItemsSet (i COMMA_HERE).mTerminalSymbol) ;
        }
        const int32_t first = inProductionRules.tableauIndicePremiereProduction (prodX COMMA_HERE) ;
        if (first >= 0) { // first < 0 means the non terminal symbol is unuseful
          macroAssert (first >= 0, "first (%ld) < 0", first, 0) ;
          const int32_t last = inProductionRules.tableauIndiceDerniereProduction (prodX COMMA_HERE) ;
          macroAssert (last >= first, "last (%ld) < first (%ld)", last, first) ;
          for (int32_t j=first ; j<=last ; j++) {
            const int32_t ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
            for (int32_t k=theFirst.count () - 1 ; k>=0 ; k--) {
              add_LR1_item (ip, 0, theFirst (k COMMA_HERE)) ;
            }
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

bool c_LR1_items_set::isEmptySet (void) const {
  return mItemsSet.count () == 0 ;
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_set::
display (const cPureBNFproductionsList & inProductionRules,
         const GrammarVocabulary & inVocabulary,
         HTMLString & inHTMLfile) const {
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const cProduction & p = inProductionRules.mProductionArray (mItemsSet (i COMMA_HERE).mProductionRuleIndex COMMA_HERE) ;
    const int32_t location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    inHTMLfile.addRawData ("<span class=\"list\">") ;
    inHTMLfile.appendCString ("[") ;
    inVocabulary.printInFile (inHTMLfile, p.leftNonTerminalIndex () COMMA_HERE) ;
    inHTMLfile.appendCString (" ->") ;
    for (int32_t j=0 ; j<p.derivationLength () ; j++) {
      if (j == location) {
        inHTMLfile.appendCString (" .") ;
      }
      inHTMLfile.appendCString (" ") ;
      inVocabulary.printInFile (inHTMLfile, p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
    }
    if (location == p.derivationLength ()) {
      inHTMLfile.appendCString (" .") ;
    }
    inHTMLfile.appendCString (", ") ;
    inVocabulary.printInFile (inHTMLfile, mItemsSet (i COMMA_HERE).mTerminalSymbol COMMA_HERE) ;
    inHTMLfile.appendCString ("]") ;
    inHTMLfile.addRawData ("</span>") ;
  }
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_set::
getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                   const int32_t inSymbol,
                   c_LR1_items_set & out_LR1_item_set) {
  out_LR1_item_set.clear () ;
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const int32_t productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules.mProductionArray (productionRuleIndex COMMA_HERE) ;
    const int32_t location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location < p.derivationLength ()) {
      const int32_t symbol = p.derivationAtIndex (location COMMA_HERE) ;
      if (symbol == inSymbol) {
        out_LR1_item_set.add_LR1_item (productionRuleIndex, location + 1, mItemsSet (i COMMA_HERE).mTerminalSymbol) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_set::
getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                    TC_UniqueArray <int32_t> & outProductionsSet,
                                    TC_UniqueArray <int32_t> & outTerminalArray,
                                    bool & outAcceptCondition) {
  outProductionsSet.removeAllKeepingCapacity () ;
  outTerminalArray.removeAllKeepingCapacity () ;
  outAcceptCondition = false ;
  for (int32_t i=0 ; i<mItemsSet.count () ; i++) {
    const int32_t productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules.mProductionArray (productionRuleIndex COMMA_HERE) ;
    const int32_t location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location == p.derivationLength ()) {
      outProductionsSet.appendObject (productionRuleIndex) ;
      outTerminalArray.appendObject (mItemsSet (i COMMA_HERE).mTerminalSymbol) ;
    }
    if ((productionRuleIndex == (inProductionRules.mProductionArray.count () - 1)) && (location == 1)) {
      outAcceptCondition = true ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

int32_t c_LR1_items_set::
compare_LR1_items_sets (c_LR1_items_set & inItemsSet1,
                        c_LR1_items_set & inItemsSet2) {
  const int32_t length1 = inItemsSet1.mItemsSet.count () ;
  int32_t result = length1 - inItemsSet2.mItemsSet.count () ;
  if (result == 0) {
    if (! inItemsSet1.mArrayIsSorted) {
      inItemsSet1.mArrayIsSorted = true ;
      inItemsSet1.mItemsSet.clear () ;
      inItemsSet1.recursiveBuildSortedArray (inItemsSet1.mRoot) ;
    }
    if (! inItemsSet2.mArrayIsSorted) {
      inItemsSet2.mArrayIsSorted = true ;
      inItemsSet2.mItemsSet.clear () ;
      inItemsSet2.recursiveBuildSortedArray (inItemsSet2.mRoot) ;
    }
    for (int32_t i=0 ; (i<length1) && (result==0) ; i++) {
      result = c_LR1_item::compare_LR1_items (inItemsSet1.mItemsSet (i COMMA_HERE),
                                              inItemsSet2.mItemsSet (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void swap (c_LR1_items_set & ioOperand1, c_LR1_items_set & ioOperand2) {
  swap (ioOperand1.mItemsSet, ioOperand2.mItemsSet) ;
  swap (ioOperand1.mRoot, ioOperand2.mRoot) ;
  swap (ioOperand1.mArrayIsSorted, ioOperand2.mArrayIsSorted) ;
  swap (ioOperand1.mHashCode, ioOperand2.mHashCode) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------
//
// C L A S S    F O R   I T E M S    S E T    A V L    T R E E
//
//--------------------------------------------------------------------------------------------------

class cLR1_items_sets_AVL_tree {
  public: cLR1_items_sets_AVL_tree * mPtrToInf ;
  public: cLR1_items_sets_AVL_tree * mPtrToSup ;
  private: const int32_t mInfoIndex ;
  public: int32_t mBalance ;

  protected: cLR1_items_sets_AVL_tree (const int32_t inInfo) ;

  public: virtual ~cLR1_items_sets_AVL_tree (void) ;

  private: int32_t
  compare (c_LR1_items_set & in_LR1_items_set,
           TC_UniqueArray <c_LR1_items_set> & in_LR1_items_sets_array) ;

  public: static int32_t
  recursiveSearchOrInsert (cLR1_items_sets_AVL_tree * & ioRootPointer,
                           c_LR1_items_set & io_LR1_items_set,
                           TC_UniqueArray <c_LR1_items_set> & io_LR1_items_sets_array,
                           bool & outExtension) ;

//--- No copy
  private: cLR1_items_sets_AVL_tree (cLR1_items_sets_AVL_tree &) ;
  private: cLR1_items_sets_AVL_tree & operator = (cLR1_items_sets_AVL_tree &) ;
} ;

//--------------------------------------------------------------------------------------------------

cLR1_items_sets_AVL_tree::cLR1_items_sets_AVL_tree (const int32_t inInfo) :
mPtrToInf (nullptr),
mPtrToSup (nullptr),
mInfoIndex (inInfo),
mBalance (0) {
}

//--------------------------------------------------------------------------------------------------

cLR1_items_sets_AVL_tree::~cLR1_items_sets_AVL_tree (void) {
  macroMyDelete (mPtrToInf) ;
  macroMyDelete (mPtrToSup) ;
}

//--------------------------------------------------------------------------------------------------

int32_t cLR1_items_sets_AVL_tree::
compare (c_LR1_items_set & in_LR1_items_set,
         TC_UniqueArray <c_LR1_items_set> & in_LR1_items_sets_array) {
  return c_LR1_items_set::compare_LR1_items_sets (in_LR1_items_sets_array (mInfoIndex COMMA_HERE), in_LR1_items_set) ;
}

//--------------------------------------------------------------------------------------------------
//
//       Rotate left
//
//--------------------------------------------------------------------------------------------------

static void rotateLeft (cLR1_items_sets_AVL_tree * & ioPtr) {
//--- Rotate
  cLR1_items_sets_AVL_tree * ptr = ioPtr->mPtrToSup ;
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

static void rotateRight (cLR1_items_sets_AVL_tree * & ioPtr) {
//--- Rotate
  cLR1_items_sets_AVL_tree * ptr = ioPtr->mPtrToInf ;
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

int32_t cLR1_items_sets_AVL_tree::
recursiveSearchOrInsert (cLR1_items_sets_AVL_tree * & ioRootPointer,
                         c_LR1_items_set & io_LR1_items_set,
                         TC_UniqueArray <c_LR1_items_set> & io_LR1_items_sets_array,
                         bool & outExtension) {
  int32_t result ;
  if (ioRootPointer == nullptr) {
    result = io_LR1_items_sets_array.count () ;
    macroMyNew (ioRootPointer, cLR1_items_sets_AVL_tree (result)) ;
    io_LR1_items_sets_array.appendObjectUsingSwap (io_LR1_items_set) ;
    outExtension = true ;
  }else{
    const int32_t comp = ioRootPointer->compare (io_LR1_items_set, io_LR1_items_sets_array) ;
    if (comp > 0) {
      result = recursiveSearchOrInsert (ioRootPointer->mPtrToSup,
                                        io_LR1_items_set,
                                        io_LR1_items_sets_array,
                                        outExtension) ;
      if (outExtension) {
        ioRootPointer->mBalance -- ;
        switch (ioRootPointer->mBalance) {
        case 0:
          outExtension = false;
          break;
        case -1:
          break;
        case -2:
          if (ioRootPointer->mPtrToSup->mBalance == 1) {
            ::rotateRight (ioRootPointer->mPtrToSup) ;
          }
          ::rotateLeft (ioRootPointer) ;
          outExtension = false;
          break;
        default :
          break ;
        }
      }
    }else if (comp < 0) {
      result = recursiveSearchOrInsert (ioRootPointer->mPtrToInf,
                                        io_LR1_items_set,
                                        io_LR1_items_sets_array,
                                        outExtension) ;
      if (outExtension) {
        ioRootPointer->mBalance ++ ;
        switch (ioRootPointer->mBalance) {
        case 0:
          outExtension = false;
          break;
        case 1:
          break;
        case 2:
          if (ioRootPointer->mPtrToInf->mBalance == -1) {
            ::rotateLeft (ioRootPointer->mPtrToInf) ;
          }
          ::rotateRight (ioRootPointer) ;
          outExtension = false;
          break;
        default :
          break ;
        }
      }
    }else{ // Found
      result = ioRootPointer->mInfoIndex ;
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
// C L A S S    F O R   L R 1    I T E M S    S E T S   C O L L E C T I O N
//
//--------------------------------------------------------------------------------------------------

static const uint32_t kSlotCount = 46489 ;

class c_LR1_items_sets_collection {
//--- Default constructor and destructor
  public: c_LR1_items_sets_collection (void) ;
  public: virtual ~c_LR1_items_sets_collection (void) ;

//--- No copy
  private: c_LR1_items_sets_collection (c_LR1_items_sets_collection &) ;
  private: c_LR1_items_sets_collection & operator = (c_LR1_items_sets_collection &) ;

//--- Search or insert a LR1 items set (return set index)
  public: int32_t searchOrInsert_LR1_itemSet (c_LR1_items_set & ioItemSet) ;

//--- States count
  public: int32_t getStateCount (void) ;

//--- Get transitions LR1 item set from a state for a symbol
  public: void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const int32_t inStateIndex,
                                   const int32_t inSymbol,
                                   c_LR1_items_set & out_LR1_item_set) ;

//--- Display LR1 items set
  public: void display (const cPureBNFproductionsList & inProductionRules,
                         const GrammarVocabulary & inVocabulary,
                         HTMLString & inHTMLfile) const ;

//--- Search from a LR1 items set (used for building 'reduce' actions of SLR table)
  public: void getProductionsWhereLocationIsRight (const int32_t inStateIndex,
                                                    const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <int32_t> & outProductionsSet,
                                                    TC_UniqueArray <int32_t> & outTerminalArray,
                                                    bool & outAcceptCondition) ;

//--- Private data
  private: TC_UniqueArray <c_LR1_items_set> m_LR1_items_sets_array ;
  private: cLR1_items_sets_AVL_tree * mRoot [kSlotCount] ;
} ;

//--------------------------------------------------------------------------------------------------

c_LR1_items_sets_collection::c_LR1_items_sets_collection (void) :
m_LR1_items_sets_array () {
  m_LR1_items_sets_array.setCapacityUsingSwap (500) ;
  for (uint32_t i=0 ; i<kSlotCount ; i++) {
    mRoot [i] = (cLR1_items_sets_AVL_tree *) nullptr ;
  }
}

//--------------------------------------------------------------------------------------------------

c_LR1_items_sets_collection::
~c_LR1_items_sets_collection (void) {
  for (uint32_t i=0 ; i<kSlotCount ; i++) {
    macroMyDelete (mRoot [i]) ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t c_LR1_items_sets_collection::
searchOrInsert_LR1_itemSet (c_LR1_items_set & ioItemSet) {
  bool extension = false ;
  const uint32_t h = ioItemSet.hashCode () % kSlotCount ;
  return cLR1_items_sets_AVL_tree::recursiveSearchOrInsert (mRoot [h], ioItemSet, m_LR1_items_sets_array, extension) ;
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_sets_collection::
display (const cPureBNFproductionsList & inProductionRules,
         const GrammarVocabulary & inVocabulary,
         HTMLString & inHTMLfile) const {
  for (int32_t i=0 ; i<m_LR1_items_sets_array.count () ; i++) {
    inHTMLfile.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile.appendCString ("S") ;
    inHTMLfile.appendSigned (i) ;
    inHTMLfile.addRawData ("</td><td><code>") ;
    m_LR1_items_sets_array (i COMMA_HERE).display (inProductionRules, inVocabulary, inHTMLfile) ;
    inHTMLfile.addRawData ("</code></td></tr>") ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t c_LR1_items_sets_collection::getStateCount (void) {
  return m_LR1_items_sets_array.count () ;
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_sets_collection::getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                                     const int32_t inStateIndex,
                                                     const int32_t inSymbol,
                                                     c_LR1_items_set & out_LR1_item_set) {
  m_LR1_items_sets_array (inStateIndex COMMA_HERE).getTransitionFrom (inProductionRules, inSymbol, out_LR1_item_set) ;
}

//--------------------------------------------------------------------------------------------------

void c_LR1_items_sets_collection::getProductionsWhereLocationIsRight (const int32_t inStateIndex,
                                            const cPureBNFproductionsList & inProductionRules,
                                              TC_UniqueArray <int32_t> & outProductionsSet,
                                              TC_UniqueArray <int32_t> & outTerminalArray,
                                                                    bool & outAcceptCondition) {
  m_LR1_items_sets_array (inStateIndex COMMA_HERE)
       .getProductionsWhereLocationIsRight (inProductionRules,
                                            outProductionsSet,
                                            outTerminalArray,
                                            outAcceptCondition) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------
//
// L R 1    A U T O M A T O N    T R A N S I T I O N
//
//--------------------------------------------------------------------------------------------------

class c_LR1_automaton_transition final {
  private: int32_t mSourceState ;
  public: int32_t sourceState (void) const { return mSourceState ; }

  private: int32_t mAction ;
  public: int32_t action (void) const { return mAction ; }

  private: int32_t mTargetState ;
  public: int32_t targetState (void) const { return mTargetState ; }

  public: c_LR1_automaton_transition (void) :
    mSourceState (0),
    mAction (0),
    mTargetState (0) {
  }

  public: c_LR1_automaton_transition (const int32_t inSourceState,
                                      const int32_t inAction,
                                      const int32_t inTargetState) :
    mSourceState (inSourceState),
    mAction (inAction),
    mTargetState (inTargetState) {
  }
} ;

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------
//
// G E N E R A T E    L R ( 1 )    A N A L Y Z E R
//
//--------------------------------------------------------------------------------------------------

static void
generate_LR1_grammar_cpp_file (const cPureBNFproductionsList & inProductionRules,
                               const GrammarVocabulary & inVocabulary,
                               const TC_UniqueArray2 <cDecisionTableElement> & inSLRdecisionTable,
                               const TC_UniqueArray <c_LR1_automaton_transition> & inTransitionList,
                               const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                               const uint32_t inOriginalGrammarStartSymbol,
                               const String & inLexiqueName,
                               const String & inTargetFileName,
                               String & ioCppFileContents,
                               const String & inSyntaxDirectedTranslationVarName) {
//--- Generate header file inclusion -----------------------------------------
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
    ioCppFileContents.appendSigned (i - inVocabulary.getTerminalSymbolsCount ()) ;
    ioCppFileContents.appendCString ("\n") ;
  }
  ioCppFileContents.appendCString ("} ;\n\n") ;

//--- Generate SLR analyze action table --------------------------------------
  ioCppFileContents.appendCppTitleComment ("L R ( 1 )    A N A L Y Z E R    A C T I O N    T A B L E") ;
  const int32_t rowsCount = inSLRdecisionTable.rowCount () ; // Number of states
  const int32_t columnsCount = inSLRdecisionTable.columnCount () ; // Number of terminal symbols
//--- State action tables
  TC_UniqueArray <int32_t> startIndexArray (rowsCount COMMA_HERE) ;
  ioCppFileContents.appendCString ("// Action tables handle shift and reduce actions ;\n"
                    "//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;\n"
                    "//  - the accept action is (terminal_symbol, ACCEPT) ;\n"
                    "//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.\n\n") ;
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
        ioCppFileContents.appendNewLine () ;
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
  UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis nonTerminal (inNonTerminalSymbolSortedListForGrammarAnalysis) ;
  while (nonTerminal.hasCurrentObject ()) {
    const int32_t pureBNFleftNonterminalIndex = (int32_t) nonTerminal.current_mNonTerminalIndex (HERE).uintValue () ;
    const int32_t first = inProductionRules.tableauIndicePremiereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
    ioCppFileContents.appendCppTitleComment (String ("'") + nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue () + "' non terminal implementation") ;
  //--- Parse label
    ioCppFileContents.appendCString ("void cGrammar_") ;
    ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("::nt_") ;
    ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("_parse (") ;
    if (inSyntaxDirectedTranslationVarName.length() > 0) {
      ioCppFileContents.appendCString ("String & ") ;
      ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
      ioCppFileContents.appendCString (",\n                                ") ;
    }
    ioCppFileContents.appendCString ("Lexique_") ;
    ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
    ioCppFileContents.appendCString (" * inLexique") ;
    ioCppFileContents.appendCString (") {\n") ;
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
  //--- Indexing ?
    ioCppFileContents.appendCString ("void cGrammar_") ;
    ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("::nt_") ;
    ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
    ioCppFileContents.appendCString ("_indexing (") ;
    if (inSyntaxDirectedTranslationVarName.length() > 0) {
      ioCppFileContents.appendCString ("String & ") ;
      ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
      ioCppFileContents.appendCString (",\n                                ") ;
    }
    ioCppFileContents.appendCString ("Lexique_") ;
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
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis currentAltForNonTerminal2 (nonTerminal.current_mNonterminalSymbolParametersMap (HERE)) ;
    while (currentAltForNonTerminal2.hasCurrentObject ()) {
      ioCppFileContents.appendCString ("void cGrammar_") ;
      ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("::nt_") ;
      ioCppFileContents.appendString (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString ("_") ;
      ioCppFileContents.appendString (currentAltForNonTerminal2.current_lkey (HERE).mProperty_string.stringValue ().identifierRepresentation ()) ;
      ioCppFileContents.appendCString (" (") ;
      UpEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal2.current_mFormalParametersList (HERE)) ;
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
      UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis currentAltForNonTerminal (nonTerminal.current_mNonterminalSymbolParametersMap (HERE)) ;
      while (currentAltForNonTerminal.hasCurrentObject ()) {
        ioCppFileContents.appendCppTitleComment ("Grammar start symbol implementation") ;
      //--- Define file parsing static method
        ioCppFileContents.appendCppHyphenLineComment () ;
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
        UpEnumerator_signatureForGrammarAnalysis parametre (currentAltForNonTerminal.current_mFormalParametersList (HERE)) ;
        int16_t numeroParametre = 1 ;
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
        ioCppFileContents.appendCString ("\n                                ");
        ioCppFileContents.appendCString ("COMMA_LOCATION_ARGS) {\n"
                               "  if (inFilePath.isValid ()) {\n"
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
                             "        }\n"
                             "        macroDetachSharedObject (scanner) ;\n"
                             "      }else{\n"
                             "        String message ;\n"
                             "        message.appendString (\"the '\") ;\n"
                             "        message.appendString (filePath) ;\n"
                             "        message.appendString (\"' file does not exist\") ;\n"
                             "        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;\n"
                             "        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;\n"
                             "    }\n"
                             "  }\n"
                             "}\n\n") ;
      //--- Define string parsing static method
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
        ioCppFileContents.appendCString ("GGS_string inSourceString") ;
        ioCppFileContents.appendCString (",\n                                ") ;
        ioCppFileContents.appendCString ("GGS_string inNameString") ;
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
        ioCppFileContents.appendCString ("\n                                ") ;
        ioCppFileContents.appendCString ("COMMA_UNUSED_LOCATION_ARGS) {\n"
                               "  if (inSourceString.isValid () && inNameString.isValid ()) {\n"
                               "    const String sourceString = inSourceString.stringValue () ;\n"
                               "    const String nameString = inNameString.stringValue () ;\n"
                               "    Lexique_") ;
        ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" * scanner = nullptr ;\n"
                               "    macroMyNew (scanner, Lexique_") ;
        ioCppFileContents.appendString (inLexiqueName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" (inCompiler, sourceString, nameString COMMA_HERE)) ;\n"
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
                               "    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {\n"
                               "      cGrammar_") ;
        ioCppFileContents.appendString (inTargetFileName.identifierRepresentation ()) ;
        ioCppFileContents.appendCString (" grammar ;\n      grammar.nt_") ;
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
          ioCppFileContents.appendCString ("      scanner->appendLastSeparatorTo (") ;
          ioCppFileContents.appendString (inSyntaxDirectedTranslationVarName) ;
          ioCppFileContents.appendCString (") ;\n") ;
        }
        ioCppFileContents.appendCString ("    }\n"
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
      ioCppFileContents.appendCString (" * inLexique) {\n"
                                   "// Productions numbers :") ;

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
// C O M P U T E    L R 1    A U T O M A T O N
//
//--------------------------------------------------------------------------------------------------

static void
compute_LR1_automation (const cPureBNFproductionsList & inProductionRules,
                        const GrammarVocabulary & inVocabulary,
                        const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFIRSTarray,
                        c_LR1_items_sets_collection & outLR1_items_sets_collection,
                        const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                        TC_UniqueArray <c_LR1_automaton_transition> & outTransitionList) {
//--- Create initial LR1 items set (LR(1) automaton initial state I0)
  const int32_t vocabularyCount = inVocabulary.getAllSymbolsCount () ;
  c_LR1_items_set LR1_items_set ;
//--- Add last production, that is the added production <> -> <start_symbol>
  LR1_items_set.add_LR1_item (inProductionRules.mProductionArray.count () - 1,
                              0,
                              inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  LR1_items_set.close_LR1_items_set (inProductionRules,
                                     inVocabulary.getTerminalSymbolsCount (),
                                     inFIRSTarray,
                                     inVocabularyDerivingToEmpty_Array) ;
  outLR1_items_sets_collection.searchOrInsert_LR1_itemSet (LR1_items_set) ;
//--- Calculate LR1 automaton
  for (int32_t explorationIndex=0 ; explorationIndex<outLR1_items_sets_collection.getStateCount () ; explorationIndex++) {
    for (int32_t s=0 ; s<vocabularyCount ; s++) {
      outLR1_items_sets_collection.getTransitionFrom (inProductionRules, explorationIndex, s, LR1_items_set) ;
      if (! LR1_items_set.isEmptySet ()) {
        LR1_items_set.close_LR1_items_set (inProductionRules,
                                           inVocabulary.getTerminalSymbolsCount (),
                                           inFIRSTarray,
                                           inVocabularyDerivingToEmpty_Array) ;
        const int32_t target = outLR1_items_sets_collection.searchOrInsert_LR1_itemSet (LR1_items_set) ;
        c_LR1_automaton_transition ts (explorationIndex, s, target) ;
        outTransitionList.appendObjectUsingSwap (ts) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
// L R ( 1 )    C O M P U T A T I O N S
//
//--------------------------------------------------------------------------------------------------

void
LR1_computations (const cPureBNFproductionsList & inProductionRules,
                  const GrammarVocabulary & inVocabulary,
                  HTMLString & ioHTMLFileContents,
                  const bool inPopulateHTMLHelperString,
                  const TC_UniqueArray <TC_UniqueArray <uint64_t> > & inFIRSTarray,
                  const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
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
    gCout.appendCString ("  LR(1) automaton... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p></p>") ;
    ioHTMLFileContents.appendTitleComment ("Building LR(1) automaton", "title") ;
  }

//--- Compute LR1 automaton
  c_LR1_items_sets_collection * LR1_items_sets_collection = nullptr ;
  macroMyNew (LR1_items_sets_collection, c_LR1_items_sets_collection) ;
  TC_UniqueArray <c_LR1_automaton_transition> transitionList ;
  compute_LR1_automation (inProductionRules,
                          inVocabulary,
                          inFIRSTarray,
                          * LR1_items_sets_collection,
                          inVocabularyDerivingToEmpty_Array,
                          transitionList) ;
  if (inVerboseOptionOn) {
    gCout.appendSigned (LR1_items_sets_collection->getStateCount ()) ;
    gCout.appendCString (" states, ") ;
    gCout.appendSigned (transitionList.count ()) ;
    gCout.appendCString (" transitions.\n") ;
    gCout.flush () ;
  }
//--- Display automaton states
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p></p><table class=\"result\">"
                              "<tr class=\"result_line\"><td  class=\"result_line\" colspan=\"2\">") ;
    ioHTMLFileContents.appendCString ("LR1 automaton states") ;
    LR1_items_sets_collection->display (inProductionRules, inVocabulary, ioHTMLFileContents) ;
    ioHTMLFileContents.addRawData ("</table>") ;
  }
//--- Display automaton transitions
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    ioHTMLFileContents.appendCString ("LR1 automaton transitions") ;
    ioHTMLFileContents.addRawData ("</td></tr>") ;
    for (int32_t i=0 ; i<transitionList.count () ; i++) {
      ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      ioHTMLFileContents.appendCString ("S") ;
      ioHTMLFileContents.appendSigned (transitionList (i COMMA_HERE).sourceState ()) ;
      ioHTMLFileContents.appendCString (" |- ") ;
      inVocabulary.printInFile (ioHTMLFileContents, transitionList (i COMMA_HERE).action () COMMA_HERE) ;
      ioHTMLFileContents.appendCString (" -> S") ;
      ioHTMLFileContents.appendSigned (transitionList (i COMMA_HERE).targetState ()) ;
      ioHTMLFileContents.addRawData ("</code></td></tr>") ;
    }
    ioHTMLFileContents.addRawData ("</table>") ;
  }
//--- Console display
  if (inVerboseOptionOn) {
    gCout.appendCString ("  Checking LR(1) condition... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p></p>") ;
    ioHTMLFileContents.appendTitleComment ("Checking LR(1) condition", "title") ;
  }

//--- Build LR1 table... detect if grammar is not LR1
  const int32_t terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  TC_UniqueArray2 <cDecisionTableElement> SLRdecisionTable (LR1_items_sets_collection->getStateCount (), terminalSymbolsCount) ;
  int32_t shiftActions = 0 ;
  int32_t reduceActions = 0 ;
  int32_t successorEntries = 0 ;
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    ioHTMLFileContents.appendCString ("LR (1) decision table") ;
    ioHTMLFileContents.addRawData ("</td></tr>") ;
  }
//--- Shift actions
  for (int32_t index=0 ; index<transitionList.count () ; index++) {
    if (transitionList (index COMMA_HERE).action () < terminalSymbolsCount) {
      const int32_t sourceState = transitionList (index COMMA_HERE).sourceState () ;
      const int32_t targetState = transitionList (index COMMA_HERE).targetState () ;
      const int32_t terminal = transitionList (index COMMA_HERE).action () ;
      SLRdecisionTable (sourceState, terminal COMMA_HERE) = cDecisionTableElement::shiftDecision (targetState) ;
      shiftActions ++ ;
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
    }
  }
//--- Reduce actions
  int32_t conflictCount = 0 ;
  TC_UniqueArray <int32_t> productionsSet ;
  TC_UniqueArray <int32_t> terminalArray ;
  for (int32_t state=0 ; state<LR1_items_sets_collection->getStateCount () ; state++) {
  //--- Accept condition
    bool acceptCondition = false ;
    LR1_items_sets_collection->getProductionsWhereLocationIsRight (state,
                                                                   inProductionRules,
                                                                   productionsSet,
                                                                   terminalArray,
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
        conflictCount ++ ;
        if (inPopulateHTMLHelperString) {
          ioHTMLFileContents.addRawData ("<span class=\"error\">") ;
          ioHTMLFileContents.appendCString (" *** CONFLICT ***") ;
          ioHTMLFileContents.addRawData ("</span>") ;
        }
      }
      if (inPopulateHTMLHelperString) {
        ioHTMLFileContents.addRawData ("</td></tr>") ;
      }
      SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::acceptDecision () ;
    }
  //--- Reduce
    for (int32_t p=0 ; p<productionsSet.count () ; p++) {
      const int32_t productionIndex = productionsSet (p COMMA_HERE) ;
      const int32_t leftNonTerminal = inProductionRules.mProductionArray (productionIndex COMMA_HERE).leftNonTerminalIndex () ;
      if (leftNonTerminal != (inVocabulary.getAllSymbolsCount () - 1)) {
        const int32_t terminal = terminalArray (p COMMA_HERE) ;
        reduceActions ++ ;
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
          conflictCount ++ ;
          if (inPopulateHTMLHelperString) {
            ioHTMLFileContents.addRawData ("<span class=\"error\">") ;
            ioHTMLFileContents.appendCString (" *** CONFLICT ***") ;
            ioHTMLFileContents.addRawData ("</span>") ;
          }
        }
        if (inPopulateHTMLHelperString) {
          ioHTMLFileContents.addRawData ("</td></tr>") ;
        }
        SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::reduceDecision (productionIndex) ;
      }
    }
  }
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.appendCString ("\n") ;
  }
//--- Successors
  for (int32_t tr=0 ; tr<transitionList.count () ; tr++) {
    if (transitionList (tr COMMA_HERE).action () >= terminalSymbolsCount) {
      successorEntries ++ ;
      if (inPopulateHTMLHelperString) {
        ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        ioHTMLFileContents.appendCString ("Successor [S") ;
        ioHTMLFileContents.appendSigned (transitionList (tr COMMA_HERE).sourceState ()) ;
        ioHTMLFileContents.appendCString (", ") ;
        inVocabulary.printInFile (ioHTMLFileContents, transitionList (tr COMMA_HERE).action () COMMA_HERE) ;
        ioHTMLFileContents.appendCString ("] = S") ;
        ioHTMLFileContents.appendSigned (transitionList (tr COMMA_HERE).targetState ()) ;
        ioHTMLFileContents.addRawData ("</code></td></tr>") ;
      }
    }
  }
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("</table><p>") ;
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
    ioHTMLFileContents.appendCString ("LR1 automaton has ") ;
    ioHTMLFileContents.appendSigned (LR1_items_sets_collection->getStateCount ()) ;
    ioHTMLFileContents.appendCString (" states and ") ;
    ioHTMLFileContents.appendSigned (transitionList.count ()) ;
    ioHTMLFileContents.appendCString (" transitions.\n\n"
                                  "Analyze table has ") ;
    ioHTMLFileContents.appendSigned (shiftActions) ;
    ioHTMLFileContents.appendCString (" shift actions, ") ;
    ioHTMLFileContents.appendSigned (reduceActions) ;
    ioHTMLFileContents.appendCString (" reduce actions, and ") ;
    ioHTMLFileContents.appendSigned (successorEntries) ;
    ioHTMLFileContents.appendCString (" state successor entries.\n\n") ;
    ioHTMLFileContents.addRawData ("</p><p>") ;
    if (conflictCount == 0) {
      ioHTMLFileContents.addRawData ("<span class=\"success\">") ;
      ioHTMLFileContents.appendCString ("No conflict : grammar is LR (1).") ;
      ioHTMLFileContents.addRawData ("</span>") ;
    }else{
      ioHTMLFileContents.addRawData ("<span class=\"error\">") ;
      ioHTMLFileContents.appendSigned (conflictCount) ;
      ioHTMLFileContents.appendCString (" conflict") ;
      ioHTMLFileContents.appendString ((conflictCount > 1) ? "s" : "") ;
      ioHTMLFileContents.appendCString (" : grammar is not LR (1).") ;
      ioHTMLFileContents.addRawData ("</span>") ;
    }
    ioHTMLFileContents.addRawData ("</p>") ;
  }
//--- Generate C++ file
  if (conflictCount == 0) {
    generate_LR1_grammar_cpp_file (inProductionRules,
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
  macroMyDelete (LR1_items_sets_collection) ;
  outOk = conflictCount == 0 ;
}

//--------------------------------------------------------------------------------------------------
