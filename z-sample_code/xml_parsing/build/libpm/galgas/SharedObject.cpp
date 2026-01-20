//--------------------------------------------------------------------------------------------------
//
//  SharedObject : Base class for GALGAS object handling                                       
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2009, ..., 2025 Pierre Molinaro.
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

#include "SharedObject.h"
#include "MF_MemoryControl.h"
#include "ConsoleOut.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Validity Checking (only in Debug Mode)
#endif

//--------------------------------------------------------------------------------------------------

//--- List of existing objects
#ifndef DO_NOT_GENERATE_CHECKINGS
  static uint32_t gCreationIndex ;
  static uint32_t gObjectCurrentCount ;
  static SharedObject * gFirstObject ;
  static SharedObject * gLastObject ;
#endif

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  SharedObject::SharedObject (LOCATION_ARGS) :
  mObjectIndex (gCreationIndex),
  mCreationFile (IN_SOURCE_FILE),
  mCreationLine (IN_SOURCE_LINE),
  mPtrToPreviousObject (nullptr),
  mPtrToNextObject (nullptr),
  mRetainCount (0) {
  //--- Enter current object in instance list
    gCreationIndex += 1 ;
    gObjectCurrentCount += 1 ;
    mPtrToNextObject = nullptr ;
    if (gLastObject == nullptr) {
      gFirstObject = this ;
      mPtrToPreviousObject = nullptr ;
    }else{
      gLastObject->mPtrToNextObject = this ;
      mPtrToPreviousObject = gLastObject ;
    }
    gLastObject = this ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  SharedObject::~ SharedObject (void) {
  //--- Remove object from instance list
    SharedObject * previousObject = mPtrToPreviousObject ;
    SharedObject * nextObject = mPtrToNextObject ;
    if (previousObject == nullptr) {
      gFirstObject = nextObject ;
    }else{
      previousObject->mPtrToNextObject = nextObject ;
    }
    if (nextObject == nullptr) {
      gLastObject = previousObject ;
    }else{
      nextObject->mPtrToPreviousObject = previousObject ;
    }
  //--- Decrement object count
    gObjectCurrentCount -= 1 ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//MARK: Collect unused Objects
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void SharedObject::checkAllObjectsHaveBeenReleased (void) {
    if (gObjectCurrentCount != 0) {
      gCout.appendCString ("Warning: ") ;
      gCout.appendUnsigned (gObjectCurrentCount) ;
      gCout.appendCString (" object") ;
      gCout.appendCString ((gObjectCurrentCount > 1) ? "s have" : " has") ;
      gCout.appendCString (" not been released:\n") ;
      SharedObject * p = gFirstObject ;
      while (p != nullptr) {
        gCout.appendCString ("- object declared in '") ;
        gCout.appendCString (p->mCreationFile) ;
        gCout.appendCString ("', line ") ;
        gCout.appendSigned (p->mCreationLine) ;
        gCout.appendCString (" (retain count: ") ;
        gCout.appendUnsigned (p->mRetainCount) ;
        gCout.appendCString (")\n") ;
        p = p->mPtrToNextObject ;
      }
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
//MARK: class SharedHeader
//--------------------------------------------------------------------------------------------------

SharedHeader::SharedHeader (LOCATION_ARGS) :
SharedObject (THERE),
mProxyPtr (nullptr) {
}

//--------------------------------------------------------------------------------------------------

SharedHeader::~SharedHeader (void) {
  if (mProxyPtr != nullptr) {
    mProxyPtr->mObjectPtr = nullptr ;
  }
}

//--------------------------------------------------------------------------------------------------
