/*
 *  SmartString.cpp
 *  galgas
 *
 *  Created by Pierre Molinaro on 18/06/09.
 *  Copyright 2009 ECN / IRCCyN. All rights reserved.
 *
 */

//---------------------------------------------------------------------------*

#include "SmartString.h"

//---------------------------------------------------------------------------*

class cEmbeddedString {
  public : const char * const mString ;
  public : int mReferenceCount ;
  public : const bool mDeleteOnRelease ;
  
//--- Constructor
  public : cEmbeddedString (const char * inString, const bool inPerformCopy) ;

//---Destructor
  public : virtual ~cEmbeddedString (void) ;
  
//--- No copy
  private : cEmbeddedString (const cEmbeddedString &) ;
  private : cEmbeddedString & operator = (const cEmbeddedString &) ;
} ;

//---------------------------------------------------------------------------*

static const char * allocate (const char * inString, const bool inPerformCopy) {
  const char * result = inString ;
  if (inPerformCopy) {
    char * s = new char [strlen (inString) + 1] ;
    strcpy (s, inString) ;
    result = s ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

cEmbeddedString::cEmbeddedString (const char * inString, const bool inPerformCopy) :
mString (allocate (inString, inPerformCopy)),
mReferenceCount (1),
mDeleteOnRelease (inPerformCopy) {
}

//---------------------------------------------------------------------------*

cEmbeddedString::~cEmbeddedString (void) {
  if (mDeleteOnRelease) {
    delete [] mString ;
  }
}

//---------------------------------------------------------------------------*

SmartString::SmartString (const char * inCString, const bool inPerformCopy) :
mEmbeddedString (NULL) {
  mEmbeddedString = new cEmbeddedString (inCString, inPerformCopy) ;
}

//---------------------------------------------------------------------------*

SmartString::SmartString (void) :
mEmbeddedString (NULL) {
}

//---------------------------------------------------------------------------*

SmartString::~SmartString (void) {
  if (mEmbeddedString != NULL) {
    if (mEmbeddedString->mReferenceCount == 1) {
      delete mEmbeddedString ;
    }else{
      mEmbeddedString->mReferenceCount -- ;
    }
  }
}

//---------------------------------------------------------------------------*

SmartString::SmartString (const SmartString & inSource) :
mEmbeddedString (inSource.mEmbeddedString) {
  if (mEmbeddedString != NULL) {
    mEmbeddedString->mReferenceCount ++ ;
  }
}

//---------------------------------------------------------------------------*

SmartString & SmartString::operator = (const SmartString & inSource) {
  if (this != & inSource) {
  //--- Release old string
    if (mEmbeddedString != NULL) {
      if (mEmbeddedString->mReferenceCount == 1) {
        delete mEmbeddedString ;
      }else{
        mEmbeddedString->mReferenceCount -- ;
      }
    }
  //--- Perform assignment
    mEmbeddedString = inSource.mEmbeddedString ;
  //--- Retain assigned string
    if (mEmbeddedString != NULL) {
      mEmbeddedString->mReferenceCount ++ ;
    }
  }
  return * this ;
}

//---------------------------------------------------------------------------*

const char * SmartString::cString (void) const {
  const char * result = "" ;
  if (mEmbeddedString !=NULL) {
    result = mEmbeddedString->mString ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

