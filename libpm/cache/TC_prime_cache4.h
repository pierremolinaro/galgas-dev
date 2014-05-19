//-----------------------------------------------------------------------------*
//                                                                             *
//     C++ template class for implementing a software cache                  *
//                        (size : a prime integer)                           *
//                                                                             *
//  This file is part of libpm library                                         *
//                                                                             *
//  Copyright (C) 2001, ..., 2005 Pierre Molinaro.                             *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                               *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
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

#ifndef CLASS_TEMPLATE_PRIME_CACHE4_DEFINED
#define CLASS_TEMPLATE_PRIME_CACHE4_DEFINED

//-----------------------------------------------------------------------------*

#include "F_GetPrime.h"

//-----------------------------------------------------------------------------*

#include <math.h>
#include <cmath>

//-----------------------------------------------------------------------------*
//                                                                             *
//       Template for implementing three-operands cache                      *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class RESULT>
class TC_prime_cache4 {
//--- Constructor
  public : TC_prime_cache4 (const int32_t inDefaultValueForOperand1,
                                     const int32_t inOperand1NumberOfValues,
                                     const int32_t inCacheSize) ;

//--- Destructor
  public : virtual ~TC_prime_cache4 (void) ;

//--- Cache entry type
  protected : class cCacheEntry {
    public : int32_t mOperand1 ;
    public : int32_t mOperand2 ;
    public : int32_t mOperand3 ;
    public : int32_t mOperand4 ;
    public : RESULT mResult ;
  } ;

//--- Cache read
  public : inline void getCacheEntry (const int32_t inOperand1,
                                      const int32_t inOperand2,
                                      const int32_t inOperand3,
                                      const int32_t inOperand4,
                                      bool & outCacheSuccess,
                                      int32_t & outHashCode,
                                      int32_t & outTag,
                                      RESULT & outResult) ;

//--- Cache write
  public : inline void writeCacheEntry (const int32_t inOperand1,
                                        const int32_t inOperand2,
                                        const int32_t inOperand3,
                                        const int32_t inOperand4,
                                        const int32_t inHashCode,
                                        const int32_t inTag,
                                        const RESULT inResult) ;

//--- Clear all cache entries
  public : void clearAllCacheEntries (void) ;

//--- Realloc cache
  public : void reallocCache (const int32_t inCacheNewSize) ;

//--- Cache array pointer
  protected : cCacheEntry * mCache ;

//--- Number of value of operand 1
  public : int32_t cmOperand1NumberOfValues ;

//--- Cache size
  protected : int32_t mCacheSize ;

//--- Integer parameters for computing hashcode
  protected : int32_t mParameter3 ;
  protected : int32_t mParameter4 ;

//--- Default value for operand 1
  public : const int32_t cmDefaultValueForOperand1 ;

//--- Cache successes
  protected : int32_t mCacheSuccessCount ;
  public : int32_t getCacheSuccessCount (void) const { return mCacheSuccessCount ; }

//--- Cache missises
  protected : int32_t mCacheMissCount ;
  public : int32_t getCacheMissCount (void) const { return mCacheMissCount ; }

//--- Cache missises
  protected : int32_t mCacheOverridesCount ;
  public : int32_t getCacheOverrideCount (void) const { return mCacheOverridesCount ; }

//--- Get cache entries count
  public : int32_t getCacheEntriesCount (void) {
    return mCacheSize ;
  }

//--- Get unused entries count
  public : int32_t getUnusedCacheEntriesCount (void) const {
    int32_t unusedEntriesCount = 0 ;
    for (int32_t i=0 ; i<mCacheSize ; i++) {
      unusedEntriesCount += (mCache [i].mOperand1 == cmDefaultValueForOperand1) ;
    }
    return unusedEntriesCount ;
  }


//--- No copy
  private : TC_prime_cache4 (TC_prime_cache4 <RESULT> &) ;
  private : TC_prime_cache4 <RESULT> & operator = (TC_prime_cache4 <RESULT> &) ;
} ;

//-----------------------------------------------------------------------------*

template <class RESULT>
TC_prime_cache4 <RESULT>::TC_prime_cache4 (const int32_t inDefaultValueForOperand1,
                                           const int32_t inOperand1NumberOfValues,
                                           const int32_t inCacheSize) :
cmOperand1NumberOfValues ((inOperand1NumberOfValues < 1) ? 1 : inOperand1NumberOfValues),
cmDefaultValueForOperand1 (inDefaultValueForOperand1) {
  mCacheSize = getPrimeGreaterThan ((inCacheSize < 1) ? 1 : inCacheSize) ;
  mParameter3 = (int32_t) (::pow (mCacheSize / cmOperand1NumberOfValues, 1./3.)) ;
  mParameter4 = mParameter3 * mParameter3 ;
  mParameter3 *= cmOperand1NumberOfValues ;
  mParameter4 *= cmOperand1NumberOfValues ;
  mCacheSuccessCount = 0 ;
  mCacheMissCount = 0 ;
  mCacheOverridesCount = 0 ;
  mCache = new cCacheEntry [mCacheSize] ;
  clearAllCacheEntries () ;
}

//-----------------------------------------------------------------------------*

template <class RESULT>
TC_prime_cache4 <RESULT>::~TC_prime_cache4 (void) {
  delete [] mCache ;
}

//-----------------------------------------------------------------------------*

template <class RESULT>
void TC_prime_cache4 <RESULT>::reallocCache (const int32_t inCacheSize) {
  const int32_t newCacheSize = getPrimeGreaterThan (inCacheSize) ;
  if (newCacheSize != mCacheSize) {
    cCacheEntry * newCache = new cCacheEntry [newCacheSize] ;
    if (newCache != NULL) {
      cCacheEntry * previousCache = mCache ;
      mCache = newCache ;
      const int32_t previousCacheSize = mCacheSize ;
      mCacheSize = newCacheSize ;
      for (int32_t i=0 ; i<newCacheSize ; i++) {
        mCache [i].mOperand1 = cmDefaultValueForOperand1 ;
      }
      mParameter3 = (int32_t) (::pow (mCacheSize / cmOperand1NumberOfValues, 1./3.)) ;
      mParameter4 = mParameter3 * mParameter3 ;
      mParameter3 *= cmOperand1NumberOfValues ;
      mParameter4 *= cmOperand1NumberOfValues ;
      bool cacheSuccess ;
      int32_t hashCode ;
      RESULT cacheResult ;
      int32_t tag = 0 ; 
      for (int32_t i=0 ; i<previousCacheSize ; i++) {
        getCacheEntry (previousCache [i].mOperand1,
                       previousCache [i].mOperand2,
                       previousCache [i].mOperand3,
                       previousCache [i].mOperand4,
                       cacheSuccess,
                       hashCode,
                       tag,
                       cacheResult) ;
        if (! cacheSuccess) {
          writeCacheEntry (previousCache [i].mOperand1,
                           previousCache [i].mOperand2,
                           previousCache [i].mOperand3,
                           previousCache [i].mOperand4,
                           hashCode,
                           tag,
                           previousCache [i].mResult) ;
        }
      }
      delete [] previousCache ;
    }
  }
}

//-----------------------------------------------------------------------------*

template <class RESULT>
void TC_prime_cache4 <RESULT>::getCacheEntry (const int32_t inOperand1,
                                                       const int32_t inOperand2,
                                                       const int32_t inOperand3,
                                                       const int32_t inOperand4,
                                                       bool & outCacheSuccess,
                                                       int32_t & outHashCode,
                                                       int32_t & /* outTag */,
                                                       RESULT & outResult) {
//--- Compute hash code
  outHashCode = (int32_t) (((uint32_t) ((inOperand4 * mParameter4)
                                        + (inOperand3 * mParameter3)
                                        + (inOperand2 * cmOperand1NumberOfValues)
                                        + inOperand1)) % ((uint32_t) mCacheSize)) ;
//--- Cache success ?
  outCacheSuccess = (inOperand1 == mCache [outHashCode].mOperand1)
                 && (inOperand2 == mCache [outHashCode].mOperand2)
                 && (inOperand3 == mCache [outHashCode].mOperand3)
                 && (inOperand4 == mCache [outHashCode].mOperand4) ;
//--- Update counts
  mCacheSuccessCount +=   outCacheSuccess ;
  mCacheMissCount    += ! outCacheSuccess ;
//--- Get result
  outResult = mCache [outHashCode].mResult ;
}

//-----------------------------------------------------------------------------*

template <class RESULT>
void TC_prime_cache4 <RESULT>::writeCacheEntry (const int32_t inOperand1,
                                                         const int32_t inOperand2,
                                                         const int32_t inOperand3,
                                                         const int32_t inOperand4,
                                                         const int32_t inHashCode,
                                                         const int32_t /* inTag */,
                                                         const RESULT inResult) {
//--- Cache overrides ?
  mCacheOverridesCount += (mCache [inHashCode].mOperand1 != cmDefaultValueForOperand1) ;
//--- Write Operands
  mCache [inHashCode].mOperand1 = inOperand1 ;
  mCache [inHashCode].mOperand2 = inOperand2 ;
  mCache [inHashCode].mOperand3 = inOperand3 ;
  mCache [inHashCode].mOperand4 = inOperand4 ;
//--- Write result
  mCache [inHashCode].mResult = inResult ;
}

//-----------------------------------------------------------------------------*

template <class RESULT>
void TC_prime_cache4 <RESULT>::clearAllCacheEntries (void) {
  for (int32_t i=0 ; i<mCacheSize ; i++) {
    mCache [i].mOperand1 = cmDefaultValueForOperand1 ;
  }
}

//-----------------------------------------------------------------------------*

#endif
