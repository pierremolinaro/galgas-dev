//--------------------------------------------------------------------------------------------------
//
//  GALGAS Type Inspector (for introspection)
//
//  This file is part of libpm library
//
//  Copyright (C) 2010, ..., 2025 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "GALGAS_TypeDescriptor.h"
#include "String-class.h"
#include "galgas-input-output.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>

//--------------------------------------------------------------------------------------------------
//  GALGAS type reference (for type introspection)
//--------------------------------------------------------------------------------------------------

static GALGAS_TypeDescriptor * gGalgasTypeListRoot = nullptr ;
static int32_t gSlotID = 0 ;

//--------------------------------------------------------------------------------------------------

GALGAS_TypeDescriptor::GALGAS_TypeDescriptor (const char * inGalgasTypeName,
                                              const GALGAS_TypeDescriptor * inSuperClassDescriptor) :
mNextType (nullptr),
mPreviousType (nullptr),
mBalance (0),
mGalgasTypeName (inGalgasTypeName),
mSlotID (gSlotID),
mSuperclassDescriptor (inSuperClassDescriptor) {
  gSlotID += 1 ;
  bool extension = false ; // Unused here
  recursiveInsert (gGalgasTypeListRoot, this, extension) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_TypeDescriptor::recursiveGetSortedTypeList (GALGAS_TypeDescriptor * inRoot,
                                                        GenericUniqueArray <GALGAS_TypeDescriptor *> & ioTypeList) {
  if (nullptr != inRoot) {
    recursiveGetSortedTypeList (inRoot->mPreviousType, ioTypeList) ;
    ioTypeList.appendObject (inRoot) ;
    recursiveGetSortedTypeList (inRoot->mNextType, ioTypeList) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_TypeDescriptor::typeListRoot (GenericUniqueArray <GALGAS_TypeDescriptor *> & outTypeList) {
  recursiveGetSortedTypeList (gGalgasTypeListRoot, outTypeList) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insertion Implementation
#endif

//--------------------------------------------------------------------------------------------------

void GALGAS_TypeDescriptor::rotateLeft (GALGAS_TypeDescriptor * & ioRootPtr) {
  GALGAS_TypeDescriptor * b = ioRootPtr->mNextType ;
  ioRootPtr->mNextType = b->mPreviousType ;
  b->mPreviousType = ioRootPtr;

  if (b->mBalance >= 0) {
    ioRootPtr->mBalance++ ;
  }else{
    ioRootPtr->mBalance += 1 - b->mBalance ;
  }

  if (ioRootPtr->mBalance > 0) {
    b->mBalance += ioRootPtr->mBalance + 1 ;
  }else{
    b->mBalance++ ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_TypeDescriptor::rotateRight (GALGAS_TypeDescriptor * & ioRootPtr) {
  GALGAS_TypeDescriptor * b = ioRootPtr->mPreviousType ;
  ioRootPtr->mPreviousType = b->mNextType ;
  b->mNextType = ioRootPtr ;

  if (b->mBalance > 0) {
    ioRootPtr->mBalance += -b->mBalance - 1 ;
  }else{
    ioRootPtr->mBalance-- ;
  }
  if (ioRootPtr->mBalance >= 0) {
    b->mBalance-- ;
  }else{
    b->mBalance += ioRootPtr->mBalance - 1 ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_TypeDescriptor::recursiveInsert (GALGAS_TypeDescriptor * & ioRootPtr,
                                             GALGAS_TypeDescriptor * inDescriptor,
                                             bool & ioExtension) {
  if (ioRootPtr == nullptr) {
    ioExtension = true ;
    ioRootPtr = inDescriptor ;
  }else{
    const int32_t comparaison = strcmp (ioRootPtr->mGalgasTypeName, inDescriptor->mGalgasTypeName) ;
    if (comparaison > 0) {
      recursiveInsert (ioRootPtr->mPreviousType, inDescriptor, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance++;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false;
        }else if (ioRootPtr->mBalance == 2) {
          if (ioRootPtr->mPreviousType->mBalance == -1) {
            rotateLeft (ioRootPtr->mPreviousType) ;
          }
          rotateRight (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else if (comparaison < 0) {
      recursiveInsert (ioRootPtr->mNextType, inDescriptor, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance-- ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false ;
        }else if (ioRootPtr->mBalance == -2) {
          if (ioRootPtr->mNextType->mBalance == 1) {
            rotateRight (ioRootPtr->mNextType) ;
          }
          rotateLeft (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else{
      ioExtension = false;
      String errorMessage ;
      errorMessage.appendCString ("FATAL ERROR (type '@") ;
      errorMessage.appendString (inDescriptor->mGalgasTypeName) ;
      errorMessage.appendCString ("' already defined)") ;
      ggs_fatalError (errorMessage, __FILE__, __LINE__) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
