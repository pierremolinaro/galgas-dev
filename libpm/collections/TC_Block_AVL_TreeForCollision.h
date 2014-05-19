//-----------------------------------------------------------------------------*
//                                                                             *
//  Declaration and implementation of the template class                       *
//                    'TC_Block_AVL_TreeForCollision'                          *
//                                                                             *
//  This class implements a generic ordered binary AVL tree for hash map       *
//   collisions.                                                               *
//                                                                             *
//  For heap efficiency, element are allocated by blocks.                      *
//                                                                             *
//  COPY OF ITS INSTANCES IS FORBIDDEN BY REDEFINITION OF COPY CONSTRUCTOR     *
//  AND ASSIGNMENT OPERATOR.                                                   *
//                                                                             *
//  This file is part of libpm library                                         *
//                                                                             *
//  Copyright (C) 2001 Pierre Molinaro.                                        *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                               *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes                                              *
//                                                                             *
//  This library is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU Lesser General Public License as published      *
//  by the Free Software Foundation; either version 2 of the License, or       *
//  (at your option) any later version.                                        *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#ifndef TEMPLATE_CLASS_BLOCK_AVLTREE_FOR_COLLISION_RESOLUTION_DEFINED
#define TEMPLATE_CLASS_BLOCK_AVLTREE_FOR_COLLISION_RESOLUTION_DEFINED

//-----------------------------------------------------------------------------*

#include "collections/TF_AVL_Tree.h"

//-----------------------------------------------------------------------------*

#include <stddef.h>

//-----------------------------------------------------------------------------*
//                                                                             *
//       Class of avl trees                                                    *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
class TC_Block_AVL_TreeForCollision {
//--- Constructor and destructor
  public : TC_Block_AVL_TreeForCollision (void) ;
  public : virtual ~TC_Block_AVL_TreeForCollision (void) ;

//--- Search or insert
  public : inline INFO * search_or_insert (const INFO & inInfo,
                                           bool & outInsertionPerformed) ;

//--- Search
  public : inline INFO * search (const INFO & inInfo) ;

//--- Get marked nodes count
  public : int32_t getMarkedNodesCount (void) const ;

//--- Sweep unmarked objects
  public : uint32_t sweepUnmarkedObjects (void) ;

//--- No copy
  private : TC_Block_AVL_TreeForCollision (const TC_Block_AVL_TreeForCollision <INFO, BLOCK_SIZE> &) ;
  private : TC_Block_AVL_TreeForCollision <INFO, BLOCK_SIZE> & operator = (const TC_Block_AVL_TreeForCollision <INFO, BLOCK_SIZE> &) ;

//--- Class of an element
  protected : class TC_blockavltree_element_for_collision {
    public : INFO mInfo ;
    public : TC_blockavltree_element_for_collision * mPtrToSup ;
    public : TC_blockavltree_element_for_collision * mPtrToInf ;
    public : int32_t mBalance ;
    public : TC_blockavltree_element_for_collision (const INFO & inInfo) : mInfo (inInfo) {
      mPtrToSup = (TC_blockavltree_element_for_collision *) NULL ;
      mPtrToInf = (TC_blockavltree_element_for_collision *) NULL ;
      mBalance = 0 ;
    }
    public : ~TC_blockavltree_element_for_collision (void) {
      delete mPtrToSup ;
      delete mPtrToInf ;
    }
    public : int32_t compare (const TC_blockavltree_element_for_collision & inElement) const {
      return mInfo.compare (inElement.mInfo) ;
    }
    public : void * operator new (const size_t inByteSize) ;
    public : void operator delete (void * inPtr) ;
    private : TC_blockavltree_element_for_collision (const TC_blockavltree_element_for_collision &) ;
    private : TC_blockavltree_element_for_collision & operator = (const TC_blockavltree_element_for_collision &) ;
  } ;
  
//--- Root
  protected : TC_blockavltree_element_for_collision * mRoot ;

//--- Class of allocation info
  protected : class cAllocInfo {
    public : char * * mAllocatedBlockList ;
    public : int32_t mAllocatedBlockListSize ;
    public : int32_t mAllocatedBlockCount ;
    public : TC_blockavltree_element_for_collision * mFreeList ;
    public : int32_t mAllocatedObjectsCount ;
    public : int32_t mCreatedObjectsCount ;
    public : cAllocInfo (void) {
      mAllocatedBlockList = (char * *)  NULL ;
      mFreeList = (TC_blockavltree_element_for_collision *) NULL ;
      mAllocatedObjectsCount = 0 ;
      mAllocatedBlockCount = 0 ;
      mAllocatedBlockListSize = 0 ;
      mCreatedObjectsCount = 0 ;
    }
  } ;

//--- Get node size (in bytes)
  public : static uint32_t getNodeSize (void) { return sizeof (TC_blockavltree_element_for_collision) ; }

//--- Allocation info (static variable)
  protected : static cAllocInfo smAllocInfo ;

//--- Get created element count
  public : static int32_t getCreatedObjectsCount (void) { return smAllocInfo.mCreatedObjectsCount ; }

//--- Get currently used element count
  public : static int32_t getCurrentObjectsCount (void) { return smAllocInfo.mAllocatedObjectsCount ; }

//--- Unmarked all objects
  public : void unmarkAllObjects (void) ;

//--- Allocation of a block
  public : static void allocBlock (void) ;

//--- Get allocated size (in bytes)
  public : static uint32_t getAllocatedSizeInBytes (void) ;

//--- Transfer object in a new map array
  public : void transfertElementsInNewMapArray (TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE> * inNewMapArray,
                                                const uint32_t inNewSize) ;

//--- Internal methods
  protected : int32_t internalMarkedNodeCount (const TC_blockavltree_element_for_collision * const inElement) const ;
  protected : uint32_t internalRecursiveSweep (TC_blockavltree_element_for_collision * inElement) ;
  protected : void internalRecursiveUnmark (TC_blockavltree_element_for_collision * inElement) ;
  protected : static void recursiveTransfertElementsInNewMapArray
                                             (TC_blockavltree_element_for_collision * inElementPointer,
                                              TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE> * inNewMapArray,
                                              const uint32_t inNewSize) ;
//--- Friend
  friend class TC_blockavltree_element_for_collision ;
} ;

//-----------------------------------------------------------------------------*
//                                                                             *
//       Constructor for avl tree                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
void * TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::TC_blockavltree_element_for_collision::operator new (const size_t /*inByteSize*/) {
  if (smAllocInfo.mFreeList == NULL) {
    allocBlock () ;
  }
  smAllocInfo.mAllocatedObjectsCount ++ ;
  TC_blockavltree_element_for_collision * result = smAllocInfo.mFreeList ;
  smAllocInfo.mFreeList = smAllocInfo.mFreeList->mPtrToSup ;
  return result ;
}

//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
void TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::TC_blockavltree_element_for_collision::operator delete (void * inPtr) {
  TC_blockavltree_element_for_collision * p = (TC_blockavltree_element_for_collision *) inPtr ;
  p->mPtrToSup = smAllocInfo.mFreeList ;
  smAllocInfo.mFreeList = p ;
  smAllocInfo.mAllocatedObjectsCount -- ;
  if (smAllocInfo.mAllocatedObjectsCount == 0) {
    for (int32_t i=0 ; i<smAllocInfo.mAllocatedBlockCount ; i++) {
      delete [] smAllocInfo.mAllocatedBlockList [i] ;
    }
    delete [] smAllocInfo.mAllocatedBlockList ;
    smAllocInfo.mAllocatedBlockList = (char * *) NULL ;
    smAllocInfo.mAllocatedBlockCount = 0 ;
    smAllocInfo.mAllocatedBlockListSize = 0 ;
    smAllocInfo.mFreeList = (TC_blockavltree_element_for_collision *) NULL ;
  }
}

//-----------------------------------------------------------------------------*
//                                                                             *
//       Constructor for avl tree                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
void TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::allocBlock (void) {
//--- Realloc block list ?
  if (smAllocInfo.mAllocatedBlockListSize <= smAllocInfo.mAllocatedBlockCount) {
    const int32_t newSize = smAllocInfo.mAllocatedBlockCount + 1024 ;
    char ** newBlockList = new char * [newSize] ;
    for (int32_t i=0 ; i<smAllocInfo.mAllocatedBlockCount ; i++) {
      newBlockList [i] = smAllocInfo.mAllocatedBlockList [i] ;
    }
    delete [] smAllocInfo.mAllocatedBlockList ;
    smAllocInfo.mAllocatedBlockList = newBlockList ;
    smAllocInfo.mAllocatedBlockListSize = newSize ;
  }
//--- Alloc block
  smAllocInfo.mAllocatedBlockList [smAllocInfo.mAllocatedBlockCount] = new char [BLOCK_SIZE] ;
  char * ptr = & (smAllocInfo.mAllocatedBlockList [smAllocInfo.mAllocatedBlockCount] [0]) ;
  smAllocInfo.mAllocatedBlockCount ++ ;
  int32_t blockSize = BLOCK_SIZE ;
  const int32_t ALIGNMENT = 32 ;
//--- Align pointer
  if ((((int32_t) ptr) % ALIGNMENT) != 0) {
    ptr = (char *) (((((int32_t) ptr) / ALIGNMENT) + 1) * ALIGNMENT) ;
    blockSize -= ALIGNMENT ;
  }
  const int32_t nbNewObjects = blockSize / ((int32_t) sizeof (TC_blockavltree_element_for_collision)) ;
  for (int32_t i=0 ; i<nbNewObjects ; i++) {
    TC_blockavltree_element_for_collision * newObjectPtr = (TC_blockavltree_element_for_collision *) ptr ;
    newObjectPtr->mPtrToSup = smAllocInfo.mFreeList ;
    smAllocInfo.mFreeList = newObjectPtr ;
    ptr += sizeof (TC_blockavltree_element_for_collision) ;
  }
  smAllocInfo.mCreatedObjectsCount += nbNewObjects ;
}

//-----------------------------------------------------------------------------*
//                                                                             *
//       Constructor for avl tree                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::TC_Block_AVL_TreeForCollision (void) {
  mRoot = (TC_blockavltree_element_for_collision *) NULL ;
}

//-----------------------------------------------------------------------------*
//                                                                             *
//       Destructor for avl tree                                               *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::~TC_Block_AVL_TreeForCollision (void) {
  delete mRoot ;
}

//-----------------------------------------------------------------------------*
//                                                                             *
//       Get allocated size (in bytes)                                         *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
uint32_t TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::getAllocatedSizeInBytes (void) {
  return (uint32_t) (BLOCK_SIZE * smAllocInfo.mAllocatedBlockCount) ;
}

//-----------------------------------------------------------------------------*
//                                                                             *
//       Search and insert if not found                                        *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
INFO * TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::
search_or_insert (const INFO & inInfo,
                  bool & outInsertionPerformed) {
  bool unused = false ;
  return recursiveSearchOrInsert (mRoot, inInfo, unused, outInsertionPerformed) ;
}

//-----------------------------------------------------------------------------*
//                                                                             *
//       Search only                                                           *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
INFO * TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::
search (const INFO & inInfo) {
  return TF_avltree_search (mRoot, inInfo) ;
}

//-----------------------------------------------------------------------------*
//                                                                             *
//       Sweep unmarked objects                                                *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
uint32_t TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::internalRecursiveSweep (TC_blockavltree_element_for_collision * inElement) {
  uint32_t sweepedNodes = 0 ;
  if (inElement != NULL) {
    sweepedNodes += internalRecursiveSweep (inElement->mPtrToInf) ;
    sweepedNodes += internalRecursiveSweep (inElement->mPtrToSup) ;
    inElement->mPtrToInf = (TC_blockavltree_element_for_collision *) NULL ;
    inElement->mPtrToSup = (TC_blockavltree_element_for_collision *) NULL ;
    inElement->mBalance = 0 ;
    if (inElement->mInfo.isMarked ()) {
      inElement->mInfo.unmark () ;
      bool extension ; // Unused
      bool insertionPerformed ; // Unused
      recursiveInsertElement (mRoot, inElement, extension, insertionPerformed) ;
    }else{
      delete inElement ;
      sweepedNodes ++ ;
    }
  }
  return sweepedNodes ;
}

//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
uint32_t TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::sweepUnmarkedObjects (void) {
  TC_blockavltree_element_for_collision * temporaryRoot = mRoot ;
  mRoot = (TC_blockavltree_element_for_collision *) NULL ;
  return internalRecursiveSweep (temporaryRoot) ;
}

//-----------------------------------------------------------------------------*
//                                                                             *
//       Tranfert objects in a new map array                                   *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
void TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::
recursiveTransfertElementsInNewMapArray (TC_blockavltree_element_for_collision * inElementPointer,
                                         TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE> * inNewMapArray,
                                         const uint32_t inNewSize) {
  if (inElementPointer != NULL) {
    recursiveTransfertElementsInNewMapArray (inElementPointer->mPtrToInf, inNewMapArray, inNewSize) ;
    recursiveTransfertElementsInNewMapArray (inElementPointer->mPtrToSup, inNewMapArray, inNewSize) ;
    inElementPointer->mPtrToInf = (TC_blockavltree_element_for_collision *) NULL ;
    inElementPointer->mPtrToSup = (TC_blockavltree_element_for_collision *) NULL ;
    inElementPointer->mBalance = 0 ;
    const uint32_t hash = inElementPointer->mInfo.getHashCodeForMap () % inNewSize ;
    bool extension ; // Unused
    bool insertionPerformed ; // Unused
    recursiveInsertElement (inNewMapArray [hash].mRoot, inElementPointer, extension, insertionPerformed) ;
  }
}

//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
void TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::
transfertElementsInNewMapArray (TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE> * inNewMapArray,
                                const uint32_t inNewSize) {
  recursiveTransfertElementsInNewMapArray (mRoot, inNewMapArray, inNewSize) ;
  mRoot = (TC_blockavltree_element_for_collision *) NULL ;
}

//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
void TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::
internalRecursiveUnmark (TC_blockavltree_element_for_collision * inElement) {
  if (inElement != NULL) {
    inElement->mInfo.unmark () ;
    internalRecursiveUnmark (inElement->mPtrToInf) ;
    internalRecursiveUnmark (inElement->mPtrToSup) ;
  }
}

//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
void TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::
unmarkAllObjects (void) {
  internalRecursiveUnmark (mRoot) ;
}

//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
int32_t TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::
internalMarkedNodeCount (const TC_blockavltree_element_for_collision * const inElement) const {
  int32_t result = 0 ;
  if (inElement != NULL) {
    if (inElement->mInfo.isMarked ()) {
      result ++ ;
    }
    result += internalMarkedNodeCount (inElement->mPtrToInf) ;
    result += internalMarkedNodeCount (inElement->mPtrToSup) ;
  }
  return result ;
}

//-----------------------------------------------------------------------------*

template <class INFO, int32_t BLOCK_SIZE>
int32_t TC_Block_AVL_TreeForCollision<INFO, BLOCK_SIZE>::
getMarkedNodesCount (void) const {
  return internalMarkedNodeCount (mRoot) ;
}

//-----------------------------------------------------------------------------*

#endif
