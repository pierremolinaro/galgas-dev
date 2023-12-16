//--------------------------------------------------------------------------------------------------

#include "BigUnsigned.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Testing value
#endif

//--------------------------------------------------------------------------------------------------

bool BigUnsigned::isZero (void) const {
  return mSharedArray.chunkCount () == 0 ;
}

//--------------------------------------------------------------------------------------------------

bool BigUnsigned::isOne (void) const {
  return (mSharedArray.chunkCount () == 1) && (mSharedArray.chunkAtIndex (1 COMMA_HERE) == 1) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Compare
#endif

//--------------------------------------------------------------------------------------------------

int BigUnsigned::compare (const BigUnsigned & inOperand) const {
  int result = 0 ;
  if (mSharedArray.chunkCount () < inOperand.mSharedArray.chunkCount ()) {
    result = -1 ;
  }else if (mSharedArray.chunkCount () > inOperand.mSharedArray.chunkCount ()) {
    result = 1 ;
  }else if (mSharedArray.chunkCount () > 0) {
    for (size_t i = mSharedArray.chunkCount () ; (result == 0) && (i > 0) ; i--) {
      if (mSharedArray.chunkAtIndex (i COMMA_HERE) < inOperand.mSharedArray.chunkAtIndex (i COMMA_HERE)) {
        result = -1 ;
      }else if (mSharedArray.chunkAtIndex (i COMMA_HERE) > inOperand.mSharedArray.chunkAtIndex (i COMMA_HERE)) {
        result = 1 ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark u64Count, u64AtIndex, 64 bits chunks
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_64_BITS
  size_t BigUnsigned::u64Count (void) const {
    return mSharedArray.chunkCount () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_64_BITS
  uint64_t BigUnsigned::u64AtIndex (const size_t inU64Index) const { // 0-Based Indexing
    if (inU64Index < mSharedArray.chunkCount ()) {
      return mSharedArray.chunkAtIndex (inU64Index + 1 COMMA_HERE) ; // 1-Based Indexing
    }else{
      return 0 ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark u8Count, u8AtIndex, 64 bits chunks
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_64_BITS
  size_t BigUnsigned::u8Count (void) const {
    size_t n = mSharedArray.chunkCount () * 8 ;
    if (n > 0) {
      const uint64_t last = mSharedArray.lastChunk (HERE) ;
      const size_t s = countLeadingZeros (last) ;
      n -= s / 8 ;
    }
    return n ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_64_BITS
  uint8_t BigUnsigned::u8AtIndex (const size_t inU8Index) const { // 0-Based Indexing
    const size_t u64Idx = inU8Index / 8 ;
    const uint64_t v = u64AtIndex (u64Idx) ;
    const size_t byteIndex = inU8Index % 8 ;
    return uint8_t (v >> (byteIndex * 8)) ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark u64Count, u64AtIndex, 8 bits chunks
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_8_BITS
  size_t BigUnsigned::u64Count (void) const {
    return (7 + mSharedArray.chunkCount ()) / 8 ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_8_BITS
  uint64_t BigUnsigned::u64AtIndex (const size_t inU64Index) const { // 0-Based Indexing
    if (inU64Index < u64Count ()) {
      uint64_t v = 0 ;
      bool endReached = false ;
      for (size_t i = 0 ; (i < 8) && !endReached ; i++) {
        const size_t idx = inU64Index * 8 + i + 1 ;
        const uint64_t w = mSharedArray.chunkAtIndex (idx COMMA_HERE) ;
        v |= w << (8 * i) ;
        endReached = idx == chunkCount () ;
      }
      return v ;
    }else{
      return 0 ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark u8Count, u8AtIndex, 8 bits chunks
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_8_BITS
  size_t BigUnsigned::u8Count (void) const {
    return mSharedArray.chunkCount () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_8_BITS
  uint8_t BigUnsigned::u8AtIndex (const size_t inU8Index) const { // 0-Based Indexing
    if (inU8Index < mSharedArray.chunkCount ()) {
      return mSharedArray.chunkAtIndex (inU8Index + 1 COMMA_HERE) ; // 1-Based Indexing
    }else{
      return 0 ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark u64Count, u64AtIndex, 16 bits chunks
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_16_BITS
  size_t BigUnsigned::u64Count (void) const {
    return (3 + mSharedArray.chunkCount ()) / 4 ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_16_BITS
  uint64_t BigUnsigned::u64AtIndex (const size_t inU64Index) const { // 0-Based Indexing
    if (inU64Index < u64Count ()) {
      uint64_t v = 0 ;
      bool endReached = false ;
      for (size_t i = 0 ; (i < 4) && !endReached ; i++) {
        const size_t idx = inU64Index * 4 + i + 1 ;
        const uint64_t w = mSharedArray.chunkAtIndex (idx COMMA_HERE) ;
        v |= w << (16 * i) ;
        endReached = idx == chunkCount () ;
      }
      return v ;
    }else{
      return 0 ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark u8Count, u8AtIndex, 16 bits chunks
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_16_BITS
  size_t BigUnsigned::u8Count (void) const {
    size_t n = mSharedArray.chunkCount () * 2 ;
    if (n > 0) {
      const uint16_t last = chunkAtIndex (mSharedArray.chunkCount () - 1 COMMA_HERE) ;
      if (last <= UINT8_MAX) {
        n -= 1 ;
      }
    }
    return n ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_16_BITS
  uint8_t BigUnsigned::u8AtIndex (const size_t inU8Index) const { // 0-Based Indexing
    if (inU8Index < u8Count ()) {
      const uint16_t v = mSharedArray.chunkAtIndex (inU8Index / 2 + 1 COMMA_HERE) ; // 1-Based Indexing
      return ((inU8Index & 1) == 0) ? uint8_t (v) : uint8_t (v >> 8) ;
    }else{
      return 0 ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark u64Count, u64AtIndex, 32 bits chunks
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_32_BITS
  size_t BigUnsigned::u64Count (void) const {
    return (1 + mSharedArray.chunkCount ()) / 2 ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_32_BITS
  uint64_t BigUnsigned::u64AtIndex (const size_t inU64Index) const { // 0-Based Indexing
    if (inU64Index < u64Count ()) {
      uint64_t v = 0 ;
      bool endReached = false ;
      for (size_t i = 0 ; (i < 2) && !endReached ; i++) {
        const size_t idx = inU64Index * 2 + i + 1 ;
        const uint64_t w = mSharedArray.chunkAtIndex (idx COMMA_HERE) ;
        v |= w << (32 * i) ;
        endReached = idx == chunkCount () ;
      }
      return v ;
    }else{
      return 0 ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark u8Count, u8AtIndex, 32 bits chunks
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_32_BITS
  size_t BigUnsigned::u8Count (void) const {
    size_t n = mSharedArray.chunkCount () * 4 ;
    if (n > 0) {
      const uint32_t last = chunkAtIndex (mSharedArray.chunkCount () COMMA_HERE) ;
      if (last <= UINT8_MAX) {
        n -= 3 ;
      }else if (last < UINT16_MAX) {
        n -= 2 ;
      }else if (last < UINT32_MAX) {
        n -= 1 ;
      }
    }
    return n ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef CHUNK_32_BITS
  uint8_t BigUnsigned::u8AtIndex (const size_t inU8Index) const { // 0-Based Indexing
    if (inU8Index < u8Count ()) {
      const uint32_t v = mSharedArray.chunkAtIndex (inU8Index / 2 + 1 COMMA_HERE) ; // 1-Based Indexing
      switch (inU8Index & 3) {
      case 0 : return uint8_t (v) ;
      case 1 : return uint8_t (v >> 8) ;
      case 2 : return uint8_t (v >> 16) ;
      default : return uint8_t (v >> 24) ;
      }
    }else{
      return 0 ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
