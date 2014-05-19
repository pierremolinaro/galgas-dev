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

#ifndef CLASS_TEMPLATE_PRIME_CACHE3_DEFINED
#define CLASS_TEMPLATE_PRIME_CACHE3_DEFINED

//-----------------------------------------------------------------------------*

#include "F_GetPrime.h"

//-----------------------------------------------------------------------------*

#include <math.h>

//-----------------------------------------------------------------------------*
//                                                                     *
//       Template for implementing three-operands cache                *
//                                                                     *
//-----------------------------------------------------------------------------*

template <class RESULT>
class TC_prime_cache3 {
//--- Constructor
  public : TC_prime_cache3 (const int32_t inCacheSize) ;

//--- Destructor
  public : virtual ~TC_prime_cache3 (void) ;

//--- Cache entry type
  protected : class cCacheEntry {
    public : int32_t mOperand1 ;
    public : int32_t mOperand2 ;
    public : int32_t mOperand3 ;
    public : RESULT mResult ;
  } ;

//--- Cache read
  public : inline void getCacheEntry (const int32_t inOperand1,
                                      const int32_t inOperand2,
                                      const int32_t inOperand3,
                                      bool & outCacheSuccess,
                                      int32_t & outHashCode,
                                      int32_t & outTag,
                                      RESULT & outResult) ;

//--- Cache write
  public : inline void writeCacheEntry (const int32_t inOperand1,
                                        const int32_t inOperand2,
                                        const int32_t inOperand3,
                                        const int32_t inHashCode,
                                        const int32_t inTag,
                                        const RESULT inResult) ;

//--- Clear all cache entries
  public : void clearAllCacheEntries (void) ;

//--- Realloc cache
  public : void reallocCache (const int32_t inCacheNewSize) ;

//--- Cache array pointer
  protected : cCacheEntry * mCache ;

//--- Cache size
  protected : int32_t mCacheSize ;

//--- Integer square root of cache size
  protected : int32_t mCacheSizeIntegerSquareRoot ;

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
      unusedEntriesCount += (mCache [i].mOperand1 == 0) ;
    }
    return unusedEntriesCount ;
  }


//--- No copy
  private : TC_prime_cache3 (TC_prime_cache3 <RESULT> &) ;
  private : TC_prime_cache3 <RESULT> & operator = (TC_prime_cache3 <RESULT> &) ;
} ;

//-----------------------------------------------------------------------------*

template <class RESULT>
TC_prime_cache3 <RESULT>::TC_prime_cache3 (const int32_t inCacheSize) {
  mCacheSize = getPrimeGreaterThan ((inCacheSize < 1) ? 1 : inCacheSize) ;
  mCacheSizeIntegerSquareRoot = ::lround (::sqrt (mCacheSize)) ;
  mCacheSuccessCount = 0 ;
  mCacheMissCount = 0 ;
  mCacheOverridesCount = 0 ;
  mCache = new cCacheEntry [mCacheSize] ;
  clearAllCacheEntries () ;
}

//-----------------------------------------------------------------------------*

template <class RESULT>
TC_prime_cache3 <RESULT>::~TC_prime_cache3 (void) {
  delete [] mCache ;
}

//-----------------------------------------------------------------------------*

template <class RESULT>
void TC_prime_cache3 <RESULT>::reallocCache (const int32_t inCacheSize) {
  const int32_t newCacheSize = getPrimeGreaterThan (inCacheSize) ;
  if (newCacheSize != mCacheSize) {
    cCacheEntry * newCache = new cCacheEntry [newCacheSize] ;
    if (newCache != NULL) {
      cCacheEntry * previousCache = mCache ;
      mCache = newCache ;
      const int32_t previousCacheSize = mCacheSize ;
      mCacheSize = newCacheSize ;
      mCacheSizeIntegerSquareRoot = ::lround (::sqrt (mCacheSize)) ;
      bool cacheSuccess ;
      int32_t hashCode ;
      RESULT cacheResult ;
      int32_t tag ; 
      for (int32_t i=0 ; i<previousCacheSize ; i++) {
        getCacheEntry (previousCache [i].mOperand1,
                       previousCache [i].mOperand2,
                       previousCache [i].mOperand3,
                       cacheSuccess,
                       hashCode,
                       tag,
                       cacheResult) ;
        if (! cacheSuccess) {
          writeCacheEntry (previousCache [i].mOperand1,
                           previousCache [i].mOperand2,
                           previousCache [i].mOperand3,
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
void TC_prime_cache3 <RESULT>::getCacheEntry (const int32_t inOperand1,
                                                       const int32_t inOperand2,
                                                       const int32_t inOperand3,
                                                       bool & outCacheSuccess,
                                                       int32_t & outHashCode,
                                                       int32_t & /* outTag */,
                                                       RESULT & outResult) {
//--- Compute hash code
  outHashCode = (int32_t) (((uint32_t) ((inOperand2 * mCacheSizeIntegerSquareRoot) + inOperand1)) % ((uint32_t) mCacheSize)) ;
//--- Cache success ?
  outCacheSuccess = (inOperand1 == mCache [outHashCode].mOperand1)
                 && (inOperand2 == mCache [outHashCode].mOperand2)
                 && (inOperand3 == mCache [outHashCode].mOperand3) ;
//--- Update counts
  mCacheSuccessCount +=   outCacheSuccess ;
  mCacheMissCount    += ! outCacheSuccess ;
//--- Get result
  outResult = mCache [outHashCode].mResult ;
}

//-----------------------------------------------------------------------------*

template <class RESULT>
void TC_prime_cache3 <RESULT>::writeCacheEntry (const int32_t inOperand1,
                                                         const int32_t inOperand2,
                                                         const int32_t inOperand3,
                                                         const int32_t inHashCode,
                                                         const int32_t /* inTag */,
                                                         const RESULT inResult) {
//--- Cache overrides ?
  mCacheOverridesCount += (mCache [inHashCode].mOperand1 != 0) ;
//--- Write Operands
  mCache [inHashCode].mOperand1 = inOperand1 ;
  mCache [inHashCode].mOperand2 = inOperand2 ;
  mCache [inHashCode].mOperand3 = inOperand3 ;
//--- Write result
  mCache [inHashCode].mResult = inResult ;
}

//-----------------------------------------------------------------------------*

template <class RESULT>
void TC_prime_cache3 <RESULT>::clearAllCacheEntries (void) {
  for (int32_t i=0 ; i<mCacheSize ; i++) {
    mCache [i].mOperand1 = 0 ;
  }
}

//-----------------------------------------------------------------------------*

#endif