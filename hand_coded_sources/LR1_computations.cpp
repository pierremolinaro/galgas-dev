//---------------------------------------------------------------------------*
//                                                                           *
//     Routines for LR(1) grammar computations                               *
//                                                                           *
//  Copyright (C) 2002, ..., 2007 Pierre Molinaro.                           *
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
#include "files/C_TextFileWrite.h"
#include "utilities/MF_MemoryControl.h"
#include "collections/TC_UniqueArray2.h"

//---------------------------------------------------------------------------*

#include "LR1_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "common_semantics.h"
#include "semantics_instructions.h"
#include "scannerDecoderGeneration.h"
#include "cDecisionTableElement.h"

//---------------------------------------------------------------------------*
//                                                                           *
//    C L A S S    F O R   L R 1    I T E M                                  *
//                                                                           *
//---------------------------------------------------------------------------*

static uint32
computeHashCode (const sint32 inProductionRuleIndex,
                 const sint32 inLocationIndex,
                 const sint32 inTerminalSymbol) {
  uint32 h  = (uint32) inLocationIndex ;
  h = (h << 11) ^ ((uint32) inTerminalSymbol) ;
  h = (h << 11) ^ ((uint32) inProductionRuleIndex) ;
  return h ;
}

//---------------------------------------------------------------------------*

class c_LR1_item {
  public : const sint32 mLocationIndex ;
  public : const sint32 mTerminalSymbol ;
  public : const sint32 mProductionRuleIndex ;
  public : const uint32 mHashCode ;
//--- Constructor
  public : inline c_LR1_item (const sint32 inProductionRuleIndex,
                              const sint32 inLocationIndex,
                              const sint32 inTerminalSymbol) :
  mLocationIndex (inLocationIndex),
  mTerminalSymbol (inTerminalSymbol),
  mProductionRuleIndex (inProductionRuleIndex),
  mHashCode (computeHashCode (inProductionRuleIndex, inLocationIndex, inTerminalSymbol))  {
  }

//--- Compare two items
  public : inline static sint32
  compare_LR1_items (const c_LR1_item & inItem1,
                     const c_LR1_item & inItem2) ;
} ;

//---------------------------------------------------------------------------*

sint32  c_LR1_item::
compare_LR1_items (const c_LR1_item & inItem1,
                   const c_LR1_item & inItem2) {
  sint32 result = inItem1.mProductionRuleIndex - inItem2.mProductionRuleIndex ;
  if (result == 0) {
    result = inItem1.mLocationIndex - inItem2.mLocationIndex ;
  }
  if (result == 0) {
    result = inItem1.mTerminalSymbol - inItem2.mTerminalSymbol ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// C L A S S    F O R   I T E M S    A V L    T R E E                        *
//                                                                           *
//---------------------------------------------------------------------------*

class cLR1_items_AVL_tree {
  public : cLR1_items_AVL_tree * mPtrToInf ;
  public : cLR1_items_AVL_tree * mPtrToSup ;
  public : const c_LR1_item mLR1item ;
  public : sint32 mBalance ;

  private : cLR1_items_AVL_tree (const c_LR1_item & inLR1item) ;

  public : virtual ~cLR1_items_AVL_tree (void) ;

  public : static cLR1_items_AVL_tree * // Return inserted object, or NULL
  recursiveSearchOrInsertLR1Item (cLR1_items_AVL_tree * & ioRootPointer,
                                  const c_LR1_item & in_LR1_item,
                                  bool & outExtension) ;

//--- No copy
  private : cLR1_items_AVL_tree (cLR1_items_AVL_tree &) ;
  private : cLR1_items_AVL_tree & operator = (cLR1_items_AVL_tree &) ;
} ;

//---------------------------------------------------------------------------*

cLR1_items_AVL_tree::
cLR1_items_AVL_tree (const c_LR1_item & inLR1item) :
mPtrToInf ((cLR1_items_AVL_tree *) NULL),
mPtrToSup ((cLR1_items_AVL_tree *) NULL),
mLR1item (inLR1item),
mBalance (0) {
} ;

//---------------------------------------------------------------------------*

cLR1_items_AVL_tree::~cLR1_items_AVL_tree (void) {
  macroMyDelete (mPtrToInf, cLR1_items_AVL_tree) ;
  macroMyDelete (mPtrToSup, cLR1_items_AVL_tree) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//       Rotate left                                                         *
//                                                                           *
//---------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------*
//                                                                           *
//       Rotate right                                                        *
//                                                                           *
//---------------------------------------------------------------------------*

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
 
//---------------------------------------------------------------------------*

cLR1_items_AVL_tree * cLR1_items_AVL_tree::
recursiveSearchOrInsertLR1Item (cLR1_items_AVL_tree * & ioRootPointer,
                                const c_LR1_item & in_LR1_item,
                                bool & outExtension) {
  cLR1_items_AVL_tree * result = NULL ;
  if (ioRootPointer == NULL) {
    macroMyNew (ioRootPointer, cLR1_items_AVL_tree (in_LR1_item)) ;
    result = ioRootPointer ;
    outExtension = true ;
  }else{
    const sint32 comp = c_LR1_item::compare_LR1_items (in_LR1_item, ioRootPointer->mLR1item) ;
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

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Class cLR1ItemUniqueArray
#endif

//---------------------------------------------------------------------------*

class cLR1ItemUniqueArray {
//--- Default Constructor
  public : cLR1ItemUniqueArray (void) ;
  
//--- Allocation Constructor (empty array)
  public : cLR1ItemUniqueArray (const sint32 inAllocatedSize COMMA_LOCATION_ARGS) ;
  
//--- Virtual Destructor
  public : virtual ~cLR1ItemUniqueArray (void) ;

//--- No copy
  private : cLR1ItemUniqueArray (const cLR1ItemUniqueArray &) ;
  private : cLR1ItemUniqueArray & operator = (const cLR1ItemUniqueArray &) ;

//--- Get Count
  public : inline sint32 count (void) const { return mCount ; }

//--- Get allocated capacity
  public : inline sint32 capacity (void) const { return mCapacity ; }

//--- Methods for making room
  public : void makeRoom (const sint32 inNewCapacity) ;

//--- Remove all objects (no deallocation)
  public : inline void clear (void) { mCount = 0 ; }

//--- Remove all objects and deallocate
  public : void free (void) ;
  
//--- Add objects at the end of the array
  public : void addObject (const cLR1_items_AVL_tree * inValue) ;

//--- Array access (with index checking)
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : const c_LR1_item & operator () (const sint32 inIndex COMMA_LOCATION_ARGS) ;
    public : const c_LR1_item & operator () (const sint32 inIndex COMMA_LOCATION_ARGS) const ;
  #endif

//--- Array access (without index checking)
  #ifdef DO_NOT_GENERATE_CHECKINGS
    public : inline const c_LR1_item & operator () (const sint32 inIndex) { return mArray [inIndex]->mLR1item ; }
    public : inline const c_LR1_item & operator () (const sint32 inIndex) const { return mArray [inIndex]->mLR1item ; }
  #endif

//--- Index checking
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : void checkIndex (const sint32 inIndex COMMA_LOCATION_ARGS) const ;
    protected : void checkIndexForInsertion (const sint32 inIndex COMMA_LOCATION_ARGS) const ;
  #endif

//--- Protected attributes
  protected : const cLR1_items_AVL_tree * * mArray ;
  protected : sint32 mCount ;
  protected : sint32 mCapacity ;

//--- swap
  friend void swap (cLR1ItemUniqueArray & ioOperand1,
                    cLR1ItemUniqueArray & ioOperand2) ;

} ;

//---------------------------------------------------------------------------*

void swap (cLR1ItemUniqueArray & ioOperand1,
           cLR1ItemUniqueArray & ioOperand2) {
  swap (ioOperand1.mArray, ioOperand2.mArray) ;
  swap (ioOperand1.mCount, ioOperand2.mCount) ;
  swap (ioOperand1.mCapacity, ioOperand2.mCapacity) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//   Default Constructor                                                     *
//                                                                           *
//---------------------------------------------------------------------------*

cLR1ItemUniqueArray::cLR1ItemUniqueArray (void) :
mArray (NULL),
mCount (0),
mCapacity (0) {
}

//---------------------------------------------------------------------------*
//                                                                           *
//   Allocation Constructor                                                  *
//                                                                           *
//---------------------------------------------------------------------------*

cLR1ItemUniqueArray::
cLR1ItemUniqueArray (const sint32 inAllocatedSize COMMA_LOCATION_ARGS) :
mArray (NULL),
mCount (0),
mCapacity (0) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    MF_AssertThere (inAllocatedSize >= 0, "inAllocatedSize (%ld) < 0", inAllocatedSize, 0) ;
  #endif
  if (inAllocatedSize > 0) {
    mArray = new const cLR1_items_AVL_tree * [inAllocatedSize] ;
    for (sint32 i=0 ; i<inAllocatedSize ; i++) {
      mArray [i] = NULL ;
    }
    mCapacity = inAllocatedSize ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//   Destructor                                                              *
//                                                                           *
//---------------------------------------------------------------------------*

cLR1ItemUniqueArray::~cLR1ItemUniqueArray (void) {
  delete [] mArray ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//   Method for making room using copy                                       *
//                                                                           *
//---------------------------------------------------------------------------*

void cLR1ItemUniqueArray::makeRoom (const sint32 inNewCapacity) {
  if (mCapacity < inNewCapacity) {
    sint32 newCapacity = (mCapacity > 32) ? mCapacity : 32 ;
    while (newCapacity < inNewCapacity) {
      newCapacity <<= 1 ;
    }
    const cLR1_items_AVL_tree * * newArray = new const cLR1_items_AVL_tree * [newCapacity] ;
    for (sint32 i=0 ; i<mCapacity ; i++) {
      newArray [i] = mArray [i] ;
    }
    delete [] mArray ; mArray = newArray ;
    mCapacity = newCapacity ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//   Remove all objects and deallocate                                       *
//                                                                           *
//---------------------------------------------------------------------------*

void cLR1ItemUniqueArray::free (void) {
  mCount = 0 ;
  delete [] mArray ; mArray = NULL ;
  mCapacity = 0 ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//   Add object at the end of the array                                      *
//                                                                           *
//---------------------------------------------------------------------------*

void cLR1ItemUniqueArray::addObject (const cLR1_items_AVL_tree * inValue) {
  if (mCount >= mCapacity) {
    makeRoom (mCount + 1) ;
  }
  mArray [mCount] = inValue ;
  mCount ++ ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//   Check index before insertion                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cLR1ItemUniqueArray::
  checkIndexForInsertion (const sint32 inIndex COMMA_LOCATION_ARGS) const {
    MF_AssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    MF_AssertThere (inIndex <= mCount, "inIndex (%d) > mCount (%ld)", inIndex, mCount) ;
  }
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//   Array Access                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cLR1ItemUniqueArray::
  checkIndex (const sint32 inIndex COMMA_LOCATION_ARGS) const {
    MF_AssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    MF_AssertThere (inIndex < mCount, "inIndex (%ld) >= mCount (%ld)", inIndex, mCount) ;
  }
#endif

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  const c_LR1_item & cLR1ItemUniqueArray::
  operator () (const sint32 inIndex COMMA_LOCATION_ARGS) {
    checkIndex (inIndex COMMA_THERE) ;
    return mArray [inIndex]->mLR1item ;
  }
#endif

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  const c_LR1_item & cLR1ItemUniqueArray::
  operator () (const sint32 inIndex COMMA_LOCATION_ARGS) const {
    checkIndex (inIndex COMMA_THERE) ;
    return mArray [inIndex]->mLR1item ;
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Class c_LR1_items_set
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//    C L A S S    F O R   L R 1    I T E M S    S E T                       *
//                                                                           *
//---------------------------------------------------------------------------*

class c_LR1_items_set {
//--- Private data
  private : cLR1ItemUniqueArray mItemsSet ;
  private : cLR1_items_AVL_tree * mRoot ;
  private : uint32 mHashCode ;
  private : bool mArrayIsSorted ;

//--- Default constructor
  public : c_LR1_items_set (void) ;

//--- Destructor
  public : virtual ~c_LR1_items_set (void) ;

//--- No copy
  private : c_LR1_items_set (const c_LR1_items_set &) ;
  private : c_LR1_items_set & operator = (const c_LR1_items_set &) ;

//--- Add a new LR1 item (returns false if already present)
  public : void add_LR1_item (const sint32 inProductionRuleIndex,
                              const sint32 inLocationIndex,
                              const sint32 inTerminalSymbol) ;
  protected : void
  recursiveBuildSortedArray (cLR1_items_AVL_tree * inPointer) ;

//--- Get transitions LR1 item set from a state for a symbol
  public : void
  getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                     const sint32 inSymbol,
                     c_LR1_items_set & out_LR1_item_set) ;

//--- Closing the LR1 items set
  public : void
  close_LR1_items_set (const cPureBNFproductionsList & inProductionRules,
                       const sint32 inTerminalSymbolsCount,
                       const TC_UniqueArray <TC_UniqueArray <sint32> > & inFIRSTarray,
                       const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array) ;

  public : void clear (void) ;

//--- Empty set ?
  public : bool isEmptySet (void) const ;

//--- Display LR1 items set
  public : void
  display (const cPureBNFproductionsList & inProductionRules,
           const cVocabulary & inVocabulary,
           C_HTML_FileWrite & inHTMLfile) const ;

//--- Compare two items sets
  public : static
  sint32 compare_LR1_items_sets (c_LR1_items_set & inItemsSet1,
                                 c_LR1_items_set & inItemsSet2) ;

//--- Search from a LR1 items set (used for building 'reduce' actions of LR table)
  public : void
  getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                      TC_UniqueArray <sint32> & outProductionsSet,
                                      TC_UniqueArray <sint32> & outTerminalArray,
                                      bool & outAcceptCondition) ;

//--- Hash code
  public : inline uint32 hashCode (void) const { return mHashCode ; }

//--- No copy
  private : c_LR1_items_set (c_LR1_items_set &) ;
  private : c_LR1_items_set & operator = (c_LR1_items_set &) ;

//--- Friend
  friend void swap (c_LR1_items_set & ioOperand1, c_LR1_items_set & ioOperand2) ;
} ;

//---------------------------------------------------------------------------*

c_LR1_items_set::c_LR1_items_set (void) :
mItemsSet (),
mRoot (NULL),
mHashCode (0),
mArrayIsSorted (true) {
}

//---------------------------------------------------------------------------*

c_LR1_items_set::~c_LR1_items_set (void) {
  macroMyDelete (mRoot, cLR1_items_AVL_tree) ;
}

//---------------------------------------------------------------------------*

void c_LR1_items_set::clear (void) {
  mItemsSet.clear () ;
  macroMyDelete (mRoot, cLR1_items_AVL_tree) ;
  mHashCode = 0 ;
}

//---------------------------------------------------------------------------*

void c_LR1_items_set::
recursiveBuildSortedArray (cLR1_items_AVL_tree * inPointer) {
  if (inPointer != NULL) {
    recursiveBuildSortedArray (inPointer->mPtrToSup) ;
    mItemsSet.addObject (inPointer) ;
    recursiveBuildSortedArray (inPointer->mPtrToInf) ;
  }
}

//---------------------------------------------------------------------------*

void c_LR1_items_set::
add_LR1_item (const sint32 inProductionRuleIndex,
              const sint32 inLocationIndex,
              const sint32 inTerminalSymbol) {
  const c_LR1_item item (inProductionRuleIndex, inLocationIndex, inTerminalSymbol) ;
//--- Find or add
  bool extension = false ; // Unused
  cLR1_items_AVL_tree * p = cLR1_items_AVL_tree::recursiveSearchOrInsertLR1Item (mRoot,
                                                       item,
                                                       extension) ;
//--- If not found, add it
  if (p != NULL) {
    mItemsSet.addObject (p) ;
    mArrayIsSorted = false ;
    mHashCode ^= item.mHashCode ;
  }
}

//---------------------------------------------------------------------------*

void c_LR1_items_set::
close_LR1_items_set (const cPureBNFproductionsList & inProductionRules,
                     const sint32 inTerminalSymbolsCount,
                     const TC_UniqueArray <TC_UniqueArray <sint32> > & inFIRSTarray,
                     const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array) {
  for (sint32 i=0 ; i<mItemsSet.count () ; i++) {
    const sint32 locationIndex = mItemsSet (i COMMA_HERE).mLocationIndex ;
    const sint32 productionRule = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules (productionRule COMMA_HERE) ;
    const sint32 derivationLength = p.aDerivation.count () ;
    if (locationIndex < derivationLength) {
      const sint32 prodX = p.aDerivation (locationIndex COMMA_HERE) - inTerminalSymbolsCount ;
      if (prodX >= 0) {
      //--- Evaluate FIRSTs of derivation following prodX
        sint32 derivationIndex = locationIndex + 1 ;
        bool emptyStringAccepted = true ;
        TC_UniqueArray <sint32> theFirst ;
        while (emptyStringAccepted && (derivationIndex < derivationLength)) {
          const sint32 symbol = p.aDerivation (derivationIndex COMMA_HERE) ;
          if (symbol < inTerminalSymbolsCount) {
            theFirst.addObject (symbol) ;
            emptyStringAccepted = false ;
          }else{
            const TC_UniqueArray <sint32> & f = inFIRSTarray (symbol COMMA_HERE) ;
            const sint32 nFirst = f.count () ;
            for (sint32 s=0 ; s<nFirst ; s++) {
              theFirst.addObject (f (s COMMA_HERE)) ;
            }
            emptyStringAccepted = inVocabularyDerivingToEmpty_Array (symbol COMMA_HERE) ;
          }
          derivationIndex ++ ;
        }
        if (emptyStringAccepted) {
          theFirst.addObject (mItemsSet (i COMMA_HERE).mTerminalSymbol) ;
        }
        const sint32 first = inProductionRules.tableauIndicePremiereProduction (prodX COMMA_HERE) ;
        if (first >= 0) { // first < 0 means the non terminal symbol is unuseful
          MF_Assert (first >= 0, "first (%ld) < 0", first, 0) ;
          const sint32 last = inProductionRules.tableauIndiceDerniereProduction (prodX COMMA_HERE) ;
          MF_Assert (last >= first, "last (%ld) < first (%ld)", last, first) ;
          for (sint32 j=first ; j<=last ; j++) {
            const sint32 ip = inProductionRules.tableauIndirectionProduction (j COMMA_HERE) ;
            for (sint32 k=theFirst.count () - 1 ; k>=0 ; k--) {
              add_LR1_item (ip, 0, theFirst (k COMMA_HERE)) ;
            }
          }
        }
      }
    }
  }
}

//---------------------------------------------------------------------------*

bool c_LR1_items_set::isEmptySet (void) const {
  return mItemsSet.count () == 0 ;
}

//---------------------------------------------------------------------------*

void c_LR1_items_set::
display (const cPureBNFproductionsList & inProductionRules,
         const cVocabulary & inVocabulary,
         C_HTML_FileWrite & inHTMLfile) const {
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
    inHTMLfile << ", " ;
    inVocabulary.printInFile (inHTMLfile, mItemsSet (i COMMA_HERE).mTerminalSymbol COMMA_HERE) ;
    inHTMLfile << "]" ;
    inHTMLfile.outputRawData ("</span>") ;
  }
}

//---------------------------------------------------------------------------*

void c_LR1_items_set::
getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                   const sint32 inSymbol,
                   c_LR1_items_set & out_LR1_item_set) {
  out_LR1_item_set.clear () ;
  for (sint32 i=0 ; i<mItemsSet.count () ; i++) {
    const sint32 productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules (productionRuleIndex COMMA_HERE) ;
    const sint32 location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location < p.aDerivation.count ()) {
      const sint32 symbol = p.aDerivation (location COMMA_HERE) ;
      if (symbol == inSymbol) {
        out_LR1_item_set.add_LR1_item (productionRuleIndex, location + 1, mItemsSet (i COMMA_HERE).mTerminalSymbol) ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

void c_LR1_items_set::
getProductionsWhereLocationIsRight (const cPureBNFproductionsList & inProductionRules,
                                    TC_UniqueArray <sint32> & outProductionsSet,
                                    TC_UniqueArray <sint32> & outTerminalArray,
                                    bool & outAcceptCondition) {
  outProductionsSet.clear () ;
  outTerminalArray.clear () ;
  outAcceptCondition = false ;
  for (sint32 i=0 ; i<mItemsSet.count () ; i++) {
    const sint32 productionRuleIndex = mItemsSet (i COMMA_HERE).mProductionRuleIndex ;
    const cProduction & p = inProductionRules (productionRuleIndex COMMA_HERE) ;
    const sint32 location = mItemsSet (i COMMA_HERE).mLocationIndex ;
    if (location == p.aDerivation.count ()) {
      outProductionsSet.addObject (productionRuleIndex) ;
      outTerminalArray.addObject (mItemsSet (i COMMA_HERE).mTerminalSymbol) ;
    }
    if ((productionRuleIndex == (inProductionRules.length () - 1)) && (location == 1)) {
      outAcceptCondition = true ;
    }
  }  
}

//---------------------------------------------------------------------------*

sint32 c_LR1_items_set::
compare_LR1_items_sets (c_LR1_items_set & inItemsSet1,
                        c_LR1_items_set & inItemsSet2) {
  const sint32 length1 = inItemsSet1.mItemsSet.count () ;
  sint32 result = length1 - inItemsSet2.mItemsSet.count () ;
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
    for (sint32 i=0 ; (i<length1) && (result==0) ; i++) {
      result = c_LR1_item::compare_LR1_items (inItemsSet1.mItemsSet (i COMMA_HERE),
                                              inItemsSet2.mItemsSet (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

void swap (c_LR1_items_set & ioOperand1, c_LR1_items_set & ioOperand2) {
  swap (ioOperand1.mItemsSet, ioOperand2.mItemsSet) ;
  swap (ioOperand1.mRoot, ioOperand2.mRoot) ;
  swap (ioOperand1.mArrayIsSorted, ioOperand2.mArrayIsSorted) ;
  swap (ioOperand1.mHashCode, ioOperand2.mHashCode) ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// C L A S S    F O R   I T E M S    S E T    A V L    T R E E               *
//                                                                           *
//---------------------------------------------------------------------------*

class cLR1_items_sets_AVL_tree {
  public : cLR1_items_sets_AVL_tree * mPtrToInf ;
  public : cLR1_items_sets_AVL_tree * mPtrToSup ;
  private : const sint32 mInfoIndex ;
  public : sint32 mBalance ;

  private : cLR1_items_sets_AVL_tree (const sint32 inInfo) ;

  public : virtual ~cLR1_items_sets_AVL_tree (void) ;

  private : sint32
  compare (c_LR1_items_set & in_LR1_items_set,
           TC_UniqueArray <c_LR1_items_set> & in_LR1_items_sets_array) ;

  public : static sint32
  recursiveSearchOrInsert (cLR1_items_sets_AVL_tree * & ioRootPointer,
                           c_LR1_items_set & io_LR1_items_set,
                           TC_UniqueArray <c_LR1_items_set> & io_LR1_items_sets_array,
                           bool & outExtension) ;

//--- No copy
  private : cLR1_items_sets_AVL_tree (cLR1_items_sets_AVL_tree &) ;
  private : cLR1_items_sets_AVL_tree & operator = (cLR1_items_sets_AVL_tree &) ;
} ;

//---------------------------------------------------------------------------*

cLR1_items_sets_AVL_tree::cLR1_items_sets_AVL_tree (const sint32 inInfo) :
mPtrToInf (NULL),
mPtrToSup (NULL),
mInfoIndex (inInfo),
mBalance (0) {
}

//---------------------------------------------------------------------------*

cLR1_items_sets_AVL_tree::~cLR1_items_sets_AVL_tree (void) {
  macroMyDelete (mPtrToInf, cLR1_items_sets_AVL_tree) ;
  macroMyDelete (mPtrToSup, cLR1_items_sets_AVL_tree) ;
}

//---------------------------------------------------------------------------*

sint32 cLR1_items_sets_AVL_tree::
compare (c_LR1_items_set & in_LR1_items_set,
         TC_UniqueArray <c_LR1_items_set> & in_LR1_items_sets_array) {
  return c_LR1_items_set::compare_LR1_items_sets (in_LR1_items_sets_array (mInfoIndex COMMA_HERE), in_LR1_items_set) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       Rotate left                                                         *
//                                                                           *
//---------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------*
//                                                                           *
//       Rotate right                                                        *
//                                                                           *
//---------------------------------------------------------------------------*

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
 
//---------------------------------------------------------------------------*

sint32 cLR1_items_sets_AVL_tree::
recursiveSearchOrInsert (cLR1_items_sets_AVL_tree * & ioRootPointer,
                         c_LR1_items_set & io_LR1_items_set,
                         TC_UniqueArray <c_LR1_items_set> & io_LR1_items_sets_array,
                         bool & outExtension) {
  sint32 result ;
  if (ioRootPointer == NULL) {
    result = io_LR1_items_sets_array.count () ;
    macroMyNew (ioRootPointer, cLR1_items_sets_AVL_tree (result)) ;
    io_LR1_items_sets_array.addObjectUsingSwap (io_LR1_items_set) ;
    outExtension = true ;
  }else{
    const sint32 comp = ioRootPointer->compare (io_LR1_items_set, io_LR1_items_sets_array) ;
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
 
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// C L A S S    F O R   L R 1    I T E M S    S E T S   C O L L E C T I O N  *
//                                                                           *
//---------------------------------------------------------------------------*

static const uint32 kSlotCount = 46489 ;

class c_LR1_items_sets_collection {
//--- Default constructor and destructor
  public : c_LR1_items_sets_collection (void) ;
  public : virtual ~c_LR1_items_sets_collection (void) ;

//--- No copy
  private : c_LR1_items_sets_collection (c_LR1_items_sets_collection &) ;
  private : c_LR1_items_sets_collection & operator = (c_LR1_items_sets_collection &) ;

//--- Search or insert a LR1 items set (return set index)
  public : sint32 searchOrInsert_LR1_itemSet (c_LR1_items_set & ioItemSet) ;

//--- States count
  public : sint32 getStateCount (void) ;

//--- Get transitions LR1 item set from a state for a symbol
  public : void getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                   const sint32 inStateIndex,
                                   const sint32 inSymbol,
                                   c_LR1_items_set & out_LR1_item_set) ;

//--- Display LR1 items set
  public : void display (const cPureBNFproductionsList & inProductionRules,
                         const cVocabulary & inVocabulary,
                         C_HTML_FileWrite & inHTMLfile) ;

//--- Search from a LR1 items set (used for building 'reduce' actions of SLR table)
  public : void getProductionsWhereLocationIsRight (const sint32 inStateIndex,
                                                    const cPureBNFproductionsList & inProductionRules,
                                                    TC_UniqueArray <sint32> & outProductionsSet,
                                                    TC_UniqueArray <sint32> & outTerminalArray,
                                                    bool & outAcceptCondition) ;

//--- Private data
  private : TC_UniqueArray <c_LR1_items_set> m_LR1_items_sets_array ;
  private : cLR1_items_sets_AVL_tree * _mRoot [kSlotCount] ;
} ;

//---------------------------------------------------------------------------*

c_LR1_items_sets_collection::c_LR1_items_sets_collection (void) :
m_LR1_items_sets_array () {
  m_LR1_items_sets_array.makeRoomUsingSwap (500) ;
  for (uint32 i=0 ; i<kSlotCount ; i++) {
    _mRoot [i] = (cLR1_items_sets_AVL_tree *) NULL ;
  }
}

//---------------------------------------------------------------------------*

c_LR1_items_sets_collection::
~c_LR1_items_sets_collection (void) {
  for (uint32 i=0 ; i<kSlotCount ; i++) {
    macroMyDelete (_mRoot [i], cLR1_items_sets_AVL_tree) ;
  }
}

//---------------------------------------------------------------------------*

sint32 c_LR1_items_sets_collection::
searchOrInsert_LR1_itemSet (c_LR1_items_set & ioItemSet) {
  bool extension = false ;
  const uint32 h = ioItemSet.hashCode () % kSlotCount ;
  return cLR1_items_sets_AVL_tree::recursiveSearchOrInsert (_mRoot [h], ioItemSet, m_LR1_items_sets_array, extension) ;
}

//---------------------------------------------------------------------------*

void c_LR1_items_sets_collection::
display (const cPureBNFproductionsList & inProductionRules,
         const cVocabulary & inVocabulary,
         C_HTML_FileWrite & inHTMLfile) {
  for (sint32 i=0 ; i<m_LR1_items_sets_array.count () ; i++) {
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile << "S" << i ;
    inHTMLfile.outputRawData ("</td><td><code>") ;
    m_LR1_items_sets_array (i COMMA_HERE).display (inProductionRules, inVocabulary, inHTMLfile) ;
    inHTMLfile.outputRawData ("</code></td></tr>") ;
  }
}

//---------------------------------------------------------------------------*

sint32 c_LR1_items_sets_collection::getStateCount (void) {
  return m_LR1_items_sets_array.count () ;
}

//---------------------------------------------------------------------------*

void c_LR1_items_sets_collection::getTransitionFrom (const cPureBNFproductionsList & inProductionRules,
                                                     const sint32 inStateIndex,
                                                     const sint32 inSymbol,
                                                     c_LR1_items_set & out_LR1_item_set) {
  m_LR1_items_sets_array (inStateIndex COMMA_HERE).getTransitionFrom (inProductionRules, inSymbol, out_LR1_item_set) ;
}

//---------------------------------------------------------------------------*

void c_LR1_items_sets_collection::getProductionsWhereLocationIsRight (const sint32 inStateIndex,
                                            const cPureBNFproductionsList & inProductionRules,
                                              TC_UniqueArray <sint32> & outProductionsSet,
                                              TC_UniqueArray <sint32> & outTerminalArray,
                                                                    bool & outAcceptCondition) {
  m_LR1_items_sets_array (inStateIndex COMMA_HERE)
       .getProductionsWhereLocationIsRight (inProductionRules,
                                            outProductionsSet,
                                            outTerminalArray,
                                            outAcceptCondition) ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// L R 1    A U T O M A T O N    T R A N S I T I O N                         *
//                                                                           *
//---------------------------------------------------------------------------*

class c_LR1_automaton_transition {
  public : const sint32 mSourceState ;
  public : const sint32 mAction ;
  public : const sint32 mTargetState ;
  public : inline c_LR1_automaton_transition (const sint32 inSourceState,
                                              const sint32 inAction,
                                              const sint32 inTargetState) :
    mSourceState (inSourceState),
    mAction (inAction),
    mTargetState (inTargetState) {
  }
} ;

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
// G E N E R A T E    L R ( 1 )    A N A L Y Z E R                           *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_LR1_grammar_cpp_file (C_Compiler & inLexique,
                               const cPureBNFproductionsList & inProductionRules,
                               const cVocabulary & inVocabulary,
                               const TC_UniqueArray2 <cDecisionTableElement> & inSLRdecisionTable,
                               const TC_FIFO <c_LR1_automaton_transition> & inTransitionList,
                               const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
                               const uint32 inOriginalGrammarStartSymbol,
                               const C_String & inLexiqueName,
                               const C_String & inTargetFileName) {
//--- Generate header file inclusion -----------------------------------------
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"utilities/MF_MemoryControl.h\"\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"" << inTargetFileName << ".h\"\n\n" ;

  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inLexique.sourceFileName ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;

//--- Print non-terminal symbols --------------------------------------
  generatedZone3.appendCppTitleComment ("N O N    T E R M I N A L    N A M E S") ;
  generatedZone3 << "static const char * gNonTerminalNames ["
                 << inVocabulary.getNonTerminalSymbolsCount () << "] = {\n" ;
  for (sint32 i=inVocabulary.getTerminalSymbolsCount () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    generatedZone3 << "  \"<" << inVocabulary.getSymbol (i COMMA_HERE) << ">\""
                   << (((i+1)<inVocabulary.getAllSymbolsCount ()) ? "," : "")
                   << "// Index " << (i - inVocabulary.getTerminalSymbolsCount ()) << "\n" ;
  }
  generatedZone3 << "} ;\n\n" ;

//--- Generate SLR analyze action table --------------------------------------
  generatedZone3.appendCppTitleComment ("L R ( 1 )    A N A L Y Z E R    A C T I O N    T A B L E") ;
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
      const sint32 parameter = inSLRdecisionTable (i, j COMMA_HERE).parameter () ;
      const cDecisionTableElement::enumDecision decision = inSLRdecisionTable (i, j COMMA_HERE).decision () ;
      if (decision != cDecisionTableElement::kUndefinedState) {
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
        if (decision == cDecisionTableElement::kDecisionReduce) { // Reduce action
          generatedZone3 << "REDUCE (" << parameter << ')' ;
        }else if (decision == cDecisionTableElement::kDecisionShift) { // Shift action
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
  { for (sint32 i=0 ; i<rowsCount ; i++) {
      generatedZone3 << '\n' ;
      if (first) {
        first = false ;
        generatedZone3 << "  " ;
      }else{
        generatedZone3 << ", " ;
      }
      generatedZone3 << startIndexArray (i COMMA_HERE) << "  // S" << i ;
    }
  }
  generatedZone3 << "\n} ;\n\n" ;
//--- Generate state successor table -----------------------------------------
  generatedZone3.appendCppTitleComment ("SLR states successors table") ;
//--- Get successor count, by state
  TC_UniqueArray <sint32> stateSuccessorsCount (rowsCount, 0 COMMA_HERE) ;
  const sint32 transitionsCount = inTransitionList.length () ;
  { for (sint32 i=0 ; i<transitionsCount ; i++) {
      if (inTransitionList (i COMMA_HERE).mAction >= columnsCount) {
        stateSuccessorsCount (inTransitionList (i COMMA_HERE).mSourceState COMMA_HERE) ++ ;
      }
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
  generatedZone3.appendCppTitleComment ("Production rules infos (left non terminal, size of right string)") ;
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
  GGS_M_nonTerminalSymbolsForGrammar::cEnumerator nonTerminal (inNonterminalSymbolsMapForGrammar) ;
  while (nonTerminal.hc ()) {
    generatedZone3.appendCppTitleComment (C_String ("'") + nonTerminal._key (HERE) + "' non terminal implementation") ;
    GGS_M_nonterminalSymbolAltsForGrammar::cEnumerator currentAltForNonTerminal (nonTerminal._mNonterminalSymbolParametersMap (HERE)) ;
    while (currentAltForNonTerminal.hc ()) {
      generatedZone3 << "void " ;
      generatedZone3 << inTargetFileName
                     << "::\n"
                     << "nt_" << nonTerminal._key (HERE) << '_' << currentAltForNonTerminal._key (HERE)
                     << " (" << inLexiqueName << " & _inLexique" ;
      const sint32 pureBNFleftNonterminalIndex = nonTerminal._mID (HERE) ;
      const sint32 first = inProductionRules.tableauIndicePremiereProduction (pureBNFleftNonterminalIndex COMMA_HERE) ;
      GGS_L_signature::cEnumerator parametre (currentAltForNonTerminal._mFormalParametersList (HERE), true) ;
      sint16 numeroParametre = 1 ;
      while (parametre.hc ()) {
        generatedZone3 << ",\n                                " ;
        generateFormalArgumentFromTypeName (parametre._mGalgasTypeName (HERE), parametre._mFormalArgumentPassingMode (HERE), generatedZone3) ;
        if (first >= 0) {
          generatedZone3 << " parameter_" << numeroParametre ;
        }
        parametre.next () ;
        numeroParametre ++ ;
      }
      generatedZone3 << ") {\n" ; 
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
                                                                      currentAltForNonTerminal._key (HERE),
                                                                      generatedZone3) ;
          generatedZone3 << "    break ;\n" ;
        }
      }
      generatedZone3 << "  default :\n"
                 "    _inLexique.internalBottomUpParserError (HERE) ;\n"
                        "  }\n" ;
      generatedZone3 << "}\n\n" ;
      currentAltForNonTerminal.next () ;
    }
    //--- Engendrer l'axiome ?
    if (nonTerminal._mID (HERE) == (sint32) inOriginalGrammarStartSymbol) {
      GGS_M_nonterminalSymbolAltsForGrammar::cEnumerator currentAltForNonTerminal (nonTerminal._mNonterminalSymbolParametersMap (HERE)) ;
      while (currentAltForNonTerminal.hc ()) {
        generatedZone3.appendCppTitleComment ("Grammar start symbol implementation") ;
      //--- Define file parsing static method
        generatedZone3.appendCppHyphenLineComment () ;
        generatedZone3 << "void " ;
        generatedZone3 << inTargetFileName
                       << "::_performSourceFileParsing_" << currentAltForNonTerminal._key (HERE)
                       << " (C_Compiler & _inCompiler"
                          ",\n                                "
                          "GGS_string * _inSentStringPtr"
                          ",\n                                "
                          "const GGS_lstring _inFileName" ;
        GGS_L_signature::cEnumerator parametre (currentAltForNonTerminal._mFormalParametersList (HERE), true) ;
        sint16 numeroParametre = 1 ;
        while (parametre.hc ()) {
          generatedZone3 << ",\n                                " ;
          generateFormalArgumentFromTypeName (parametre._mGalgasTypeName (HERE), parametre._mFormalArgumentPassingMode (HERE), generatedZone3) ;
          generatedZone3 << " parameter_" << numeroParametre ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "\n                                "
                          "COMMA_LOCATION_ARGS) {\n" ;
        generatedZone3 << "  const C_String sourceFileName = _inFileName.string ().isAbsolutePath ()\n"
                          "    ? _inFileName.string ()\n"
                          "    : _inCompiler.sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (_inFileName.string ()) ;\n"
                          "  if (sourceFileName.fileExists ()) {\n"
                          "    " << inLexiqueName << " * scanner_ = NULL ;\n"
                          "    macroMyNew (scanner_, " << inLexiqueName << " (_inCompiler.ioParametersPtr (), sourceFileName COMMA_HERE)) ;\n"
                          "    if (scanner_->sourceText () != NULL) {\n"
                          "      scanner_->mPerformGeneration = _inCompiler.mPerformGeneration ;\n" ;
        generatedZone3 << "      const bool ok = scanner_->performBottomUpParsing (gActionTable, gNonTerminalNames,\n"
                          "                                                        gActionTableIndex, gSuccessorTable,\n"
                          "                                                        gProductionsTable) ;\n"
                          "      if (ok && ! scanner_->mParseOnlyFlag) {\n"
                          "        " << inTargetFileName << " _grammar ;\n"
                          "        " ;
        generatedZone3 << "_grammar.nt_" << nonTerminal._key (HERE) << '_' << currentAltForNonTerminal._key (HERE)
                       << " (*scanner_" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hc ()) {
          generatedZone3 << ", parameter_" << numeroParametre ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << ") ;\n"
                          "        if (_inSentStringPtr != NULL) {\n"
                          "          _inSentStringPtr->_dotAssign_operation (scanner_->sentString ()) ;\n"
                          "        }\n"
                          "      }\n" ;
        generatedZone3 << "    }else{\n"
                          "      C_String message ;\n"
                          "      message << \"the '\" << sourceFileName << \"' file exits, but cannot be read\" ;\n"
                          "      _inFileName.signalSemanticError (_inCompiler, message COMMA_THERE) ;\n" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hc ()) {
          if (parametre._mFormalArgumentPassingMode (HERE).enumValue () == GGS_EXformalArgumentPassingMode::enum_argumentOut) {
            generatedZone3 << "      parameter_" << numeroParametre << "._drop () ;\n" ;
          }
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "    }\n"
                          "    macroDetachPointer (scanner_, " << inLexiqueName << ") ;\n"
                          "  }else{\n"
                          "    C_String message ;\n"
                          "    message << \"the '\" << sourceFileName << \"' file does not exist\" ;\n"
                          "    _inFileName.signalSemanticError (_inCompiler, message COMMA_THERE) ;\n" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hc ()) {
          if (parametre._mFormalArgumentPassingMode (HERE).enumValue () == GGS_EXformalArgumentPassingMode::enum_argumentOut) {
            generatedZone3 << "    parameter_" << numeroParametre << "._drop () ;\n" ;
          }
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "  }\n" ;
        generatedZone3 << "}\n\n" ;
      //--- Define string parsing static method
        generatedZone3 << "void " ;
        generatedZone3 << inTargetFileName
                       << "::_performSourceStringParsing_" << currentAltForNonTerminal._key (HERE)
                       << " (C_Compiler & _inCompiler"
                          ",\n                                "
                          "GGS_string * _inSentStringPtr"
                          ",\n                                "
                          "const GGS_string _inSourceString" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hc ()) {
          generatedZone3 << ",\n                                " ;
          generateFormalArgumentFromTypeName (parametre._mGalgasTypeName (HERE), parametre._mFormalArgumentPassingMode (HERE), generatedZone3) ;
          generatedZone3 << " parameter_" << numeroParametre ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << "\n                                "
                          "COMMA_UNUSED_LOCATION_ARGS) {\n" ;
        generatedZone3 << "  " << inLexiqueName << " * scanner_ = NULL ;\n"
                          "  macroMyNew (scanner_, " << inLexiqueName << " (_inCompiler.ioParametersPtr (), _inSourceString, \"Error when parsing dynamic string\" COMMA_HERE)) ;\n"
                          "  scanner_->mPerformGeneration = _inCompiler.mPerformGeneration ;\n" ;
        generatedZone3 << "  const bool ok = scanner_->performBottomUpParsing (gActionTable, gNonTerminalNames,\n"
                          "                                                    gActionTableIndex, gSuccessorTable,\n"
                          "                                                    gProductionsTable) ;\n"
                          "  if (ok && ! scanner_->mParseOnlyFlag) {\n"
                          "    " << inTargetFileName << " _grammar ;\n"
                          "    " ;
        generatedZone3 << "_grammar.nt_" << nonTerminal._key (HERE) << '_' << currentAltForNonTerminal._key (HERE)
                       << " (*scanner_" ;
        parametre.rewind () ;
        numeroParametre = 1 ;
        while (parametre.hc ()) {
          generatedZone3 << ", parameter_" << numeroParametre ;
          parametre.next () ;
          numeroParametre ++ ;
        }
        generatedZone3 << ") ;\n"
                          "    if (_inSentStringPtr != NULL) {\n"
                          "      _inSentStringPtr->_dotAssign_operation (scanner_->sentString ()) ;\n"
                          "    }\n"
                          "  }\n" ;
        generatedZone3 << "  macroDetachPointer (scanner_, " << inLexiqueName << ") ;\n" ;
        generatedZone3 << "}\n\n" ;
        currentAltForNonTerminal.next () ;
      }
    }
    nonTerminal.next () ;
  }
//--- Implement non terminal from 'select' and 'repeat' instructions ---------
  const sint32 terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  for (sint32 ts=terminalSymbolsCount ; ts<inVocabulary.getAllSymbolsCount () ; ts++) {
    if (inVocabulary.needToGenerateChoice (ts COMMA_HERE)) {
      generatedZone3.appendCppTitleComment (C_String ("'") + inVocabulary.getSymbol (ts COMMA_HERE) + "' non terminal implementation") ;
      generatedZone3 << "\nsint16 " << inTargetFileName
              << "::" << inVocabulary.getSymbol (ts COMMA_HERE) << " ("
              << inLexiqueName << " & _inLexique) {\n"
                 "// Productions numbers :" ;

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
  generatedZone3.appendCppHyphenLineComment () ;

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
// C O M P U T E    L R 1    A U T O M A T O N                               *
//                                                                           *
//---------------------------------------------------------------------------*

static void
compute_LR1_automation (const cPureBNFproductionsList & inProductionRules,
                        const cVocabulary & inVocabulary,
                        const TC_UniqueArray <TC_UniqueArray <sint32> > & inFIRSTarray,
                        c_LR1_items_sets_collection & outLR1_items_sets_collection,
                        const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                        TC_FIFO <c_LR1_automaton_transition> & outTransitionList) {
//--- Create initial LR1 items set (LR(1) automaton initial state I0)
  const sint32 vocabularyCount = inVocabulary.getAllSymbolsCount () ;
  c_LR1_items_set LR1_items_set ;
//--- Add last production, that is the added production <> -> <start_symbol>
  LR1_items_set.add_LR1_item (inProductionRules.length () - 1,
                              0,
                              inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  LR1_items_set.close_LR1_items_set (inProductionRules,
                                     inVocabulary.getTerminalSymbolsCount (),
                                     inFIRSTarray,
                                     inVocabularyDerivingToEmpty_Array) ;
  outLR1_items_sets_collection.searchOrInsert_LR1_itemSet (LR1_items_set) ;
//--- Calculate LR1 automaton
  // printf ("************** LR1 AUTOMATON BEGIN *****************\n") ; co.flush () ;
  for (sint32 explorationIndex=0 ; explorationIndex<outLR1_items_sets_collection.getStateCount () ; explorationIndex++) {
    for (sint32 s=0 ; s<vocabularyCount ; s++) {
      outLR1_items_sets_collection.getTransitionFrom (inProductionRules, explorationIndex, s, LR1_items_set) ;
      if (! LR1_items_set.isEmptySet ()) {
        LR1_items_set.close_LR1_items_set (inProductionRules,
                                           inVocabulary.getTerminalSymbolsCount (),
                                           inFIRSTarray,
                                           inVocabularyDerivingToEmpty_Array) ;
        const sint32 target = outLR1_items_sets_collection.searchOrInsert_LR1_itemSet (LR1_items_set) ;
        c_LR1_automaton_transition ts (explorationIndex, s, target) ;
        outTransitionList.insertByCopy (ts) ;
      }
    }
  }
  // printf ("************** LR1 AUTOMATON END *****************\n") ; co.flush () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
// L R ( 1 )    C O M P U T A T I O N S                                      *
//                                                                           *
//---------------------------------------------------------------------------*

void
LR1_computations (C_Compiler & inLexique,
                  const cPureBNFproductionsList & inProductionRules,
                  const cVocabulary & inVocabulary,
                  C_HTML_FileWrite * inHTMLfile,
                  const TC_UniqueArray <TC_UniqueArray <sint32> > & inFIRSTarray,
                  const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                  const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
                  const uint32 inOriginalGrammarStartSymbol,
                  const C_String & inTargetFileName,
                  const C_String & inLexiqueName,
                  bool & outOk,
                  const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Building LR(1) automaton... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p></p>") ;
    inHTMLfile->appendCppTitleComment ("Building LR(1) automaton", "title") ;
  }

//--- Compute LR1 automaton
  c_LR1_items_sets_collection * LR1_items_sets_collection = NULL ;
  macroMyNew (LR1_items_sets_collection, c_LR1_items_sets_collection) ;
  TC_FIFO <c_LR1_automaton_transition> transitionList ;
  compute_LR1_automation (inProductionRules,
                          inVocabulary,
                          inFIRSTarray,
                          * LR1_items_sets_collection,
                          inVocabularyDerivingToEmpty_Array,
                          transitionList) ;
  if (inVerboseOptionOn) {
    co << LR1_items_sets_collection->getStateCount () << " states, "
       << transitionList.length () << " transitions.\n" ;
    co.flush () ;
  }
//--- Display automaton states
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p></p><table class=\"result\">"
                              "<tr class=\"result_line\"><td  class=\"result_line\" colspan=\"2\">") ;
    *inHTMLfile << "LR1 automaton states" ;
    LR1_items_sets_collection->display (inProductionRules, inVocabulary, *inHTMLfile) ;
    inHTMLfile->outputRawData ("</table>") ;
  }
//--- Display automaton transitions
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    *inHTMLfile << "LR1 automaton transitions" ;
    inHTMLfile->outputRawData ("</td></tr>") ;
    for (sint32 i=0 ; i<transitionList.length () ; i++) {
      inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      *inHTMLfile << "S" << transitionList (i COMMA_HERE).mSourceState
                  << " |- " ;
      inVocabulary.printInFile (*inHTMLfile, transitionList (i COMMA_HERE).mAction COMMA_HERE) ;
      *inHTMLfile << " -> S"
                  << transitionList (i COMMA_HERE).mTargetState ;
      inHTMLfile->outputRawData ("</code></td></tr>") ;
    }
    inHTMLfile->outputRawData ("</table>") ;
  }
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Checking LR(1) condition... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p></p>") ;
    inHTMLfile->appendCppTitleComment ("Checking LR(1) condition", "title") ;
  }

//--- Build LR1 table... detect if grammar is not LR1
  const sint32 terminalSymbolsCount = inVocabulary.getTerminalSymbolsCount () ;
  TC_UniqueArray2 <cDecisionTableElement> SLRdecisionTable (LR1_items_sets_collection->getStateCount (), terminalSymbolsCount) ;
  sint32 shiftActions = 0 ;
  sint32 reduceActions = 0 ;
  sint32 successorEntries = 0 ;
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p></p><table class=\"result\"><tr><td class=\"result_title\">") ;
    *inHTMLfile << "LR (1) decision table" ;
    inHTMLfile->outputRawData ("</td></tr>") ;
  }
//--- Shift actions
  for (sint32 index=0 ; index<transitionList.length () ; index++) {
    if (transitionList (index COMMA_HERE).mAction < terminalSymbolsCount) {
      const sint32 sourceState = transitionList (index COMMA_HERE).mSourceState ;
      const sint32 targetState = transitionList (index COMMA_HERE).mTargetState ;
      const sint32 terminal = transitionList (index COMMA_HERE).mAction ;
      SLRdecisionTable (sourceState, terminal COMMA_HERE) = cDecisionTableElement::shiftDecision (targetState) ;
      shiftActions ++ ;
      if (inHTMLfile != NULL) {
        inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        *inHTMLfile << "Action [S" << sourceState << ", " ;
        inVocabulary.printInFile (*inHTMLfile, terminal COMMA_HERE) ;
        *inHTMLfile << "] : shift, goto S" << targetState ;
        inHTMLfile->outputRawData ("</code></td></tr>") ;
      }
    }
  }
//--- Reduce actions
  sint32 conflictCount = 0 ;
  TC_UniqueArray <sint32> productionsSet ;
  TC_UniqueArray <sint32> terminalArray ;
  for (sint32 state=0 ; state<LR1_items_sets_collection->getStateCount () ; state++) {
  //--- Accept condition
    bool acceptCondition = false ;
    LR1_items_sets_collection->getProductionsWhereLocationIsRight (state,
                                                                   inProductionRules,
                                                                   productionsSet,
                                                                   terminalArray,
                                                                   acceptCondition) ;
    if (acceptCondition) {
      const sint32 terminal = inVocabulary.getEmptyStringTerminalSymbolIndex () ;
      if (inHTMLfile != NULL) {
        inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        *inHTMLfile << "Action [S"
                    << state
                    << ", " ;
        inVocabulary.printInFile (*inHTMLfile, terminal COMMA_HERE) ;
        *inHTMLfile << "] : accept" ;
        inHTMLfile->outputRawData ("</code>") ;
        if (! SLRdecisionTable (state, terminal COMMA_HERE).isInUndefinedState ()) {
          inHTMLfile->outputRawData ("<span class=\"error\">") ;
          *inHTMLfile << " *** CONFLICT ***" ;
          inHTMLfile->outputRawData ("</span>") ;
          conflictCount ++ ;
        }
        inHTMLfile->outputRawData ("</td></tr>") ;
      }
      SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::acceptDecision () ;
    }
  //--- Reduce
    for (sint32 p=0 ; p<productionsSet.count () ; p++) {
      const sint32 productionIndex = productionsSet (p COMMA_HERE) ;
      const sint32 leftNonTerminal = inProductionRules (productionIndex COMMA_HERE).aNumeroNonTerminalGauche ;
      if (leftNonTerminal != (inVocabulary.getAllSymbolsCount () - 1)) {
        const sint32 terminal = terminalArray (p COMMA_HERE) ;
        reduceActions ++ ;
        if (inHTMLfile != NULL) {
          inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
          *inHTMLfile << "Action [S"
                      << state
                      << ", " ;
          inVocabulary.printInFile (*inHTMLfile, terminal COMMA_HERE) ;
          *inHTMLfile << "] : reduce by " ;
          inVocabulary.printInFile (*inHTMLfile, leftNonTerminal COMMA_HERE) ;
          inHTMLfile->outputRawData ("</code>") ;
          if (! SLRdecisionTable (state, terminal COMMA_HERE).isInUndefinedState ()) {
            inHTMLfile->outputRawData ("<span class=\"error\">") ;
            *inHTMLfile << " *** CONFLICT ***" ;
            inHTMLfile->outputRawData ("</span>") ;
            conflictCount ++ ;
          }
          inHTMLfile->outputRawData ("</td></tr>") ;
        }
        SLRdecisionTable (state, terminal COMMA_HERE) = cDecisionTableElement::reduceDecision (productionIndex) ;
      }
    }
  }
  if (inHTMLfile != NULL) {
    *inHTMLfile << '\n' ;
  }
//--- Successors
  for (sint32 tr=0 ; tr<transitionList.length () ; tr++) {
    if (transitionList (tr COMMA_HERE).mAction >= terminalSymbolsCount) {
      successorEntries ++ ;
      if (inHTMLfile != NULL) {
        inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        *inHTMLfile << "Successor [S"
                    << transitionList (tr COMMA_HERE).mSourceState
                    << ", " ;
        inVocabulary.printInFile (*inHTMLfile, transitionList (tr COMMA_HERE).mAction COMMA_HERE) ;
        *inHTMLfile << "] = S"
                    << transitionList (tr COMMA_HERE).mTargetState ;
        inHTMLfile->outputRawData ("</code></td></tr>") ;
      }
    }
  }
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("</table><p>") ;
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
    *inHTMLfile << "LR1 automaton has "
                << LR1_items_sets_collection->getStateCount ()
                << " states and "
                << transitionList.length ()
                << " transitions.\n\n"
                   "Analyze table has "
                << shiftActions << " shift actions, "
                << reduceActions << " reduce actions, and "
                << successorEntries << " state successor entries.\n\n" ;
    inHTMLfile->outputRawData ("</p><p>") ;
    if (conflictCount == 0) {
      inHTMLfile->outputRawData ("<span class=\"success\">") ;
      *inHTMLfile << "No conflict : grammar is LR (1)." ;
      inHTMLfile->outputRawData ("</span>") ;
    }else{
      inHTMLfile->outputRawData ("<span class=\"error\">") ;
      *inHTMLfile << conflictCount
                  << " conflict"
                  << ((conflictCount > 1) ? "s" : "")
                  << " : grammar is not LR (1)." ;
      inHTMLfile->outputRawData ("</span>") ;
    }
    inHTMLfile->outputRawData ("</p>") ;
  }
//--- Generate C++ file
  if (conflictCount == 0) {
    generate_LR1_grammar_cpp_file (inLexique,
                                   inProductionRules,
                                   inVocabulary,
                                   SLRdecisionTable,
                                   transitionList,
                                   inNonterminalSymbolsMapForGrammar,
                                   inOriginalGrammarStartSymbol,
                                   inLexiqueName,
                                   inTargetFileName) ;

  }
  macroMyDelete (LR1_items_sets_collection, c_LR1_items_sets_collection) ;
  outOk = conflictCount == 0 ;
}

//---------------------------------------------------------------------------*
