#pragma once

//--------------------------------------------------------------------------------------------------

#include "ChunkSelectSize.h"
#include "utilities/MF_MemoryControl.h"
#include <iostream>

//--------------------------------------------------------------------------------------------------

class ChunkSharedArray final {

//--- Private attributes
  private: ChunkUInt * mChunkArray ; // Chunk 0 is reference count, data is 1-Based Indexing
  private: size_t mChunkCount ;
  private: size_t mChunkCapacity ;

//--- Default Constructor
  public: ChunkSharedArray (void) :
  mChunkArray (nullptr),
  mChunkCount (0),
  mChunkCapacity (0) {
  }

//--- Constructor
  public: ChunkSharedArray (const size_t inChunkCapacity) :
  mChunkArray (nullptr),
  mChunkCount (0),
  mChunkCapacity (0) {
    macroMyNewPODArray (mChunkArray, ChunkUInt, inChunkCapacity + 1) ;
    mChunkSharedArrayAllocationCount += 1 ;
    mChunkSharedArrayCurrentlyAllocatedCount += 1 ;
    mChunkArray [0] = 0 ; // Index 0: reference count (minus one)
    mChunkCapacity = inChunkCapacity ;
  }

//--- Destructor
  public: ~ChunkSharedArray (void)  {
    if (mChunkArray != nullptr) {
      if (mChunkArray [0] == 0) {
        macroMyDeletePODArray (mChunkArray) ;
        MF_Assert (mChunkSharedArrayCurrentlyAllocatedCount > 0, "Zero!", 0, 0) ;
        mChunkSharedArrayCurrentlyAllocatedCount -= 1 ;
      }else{
        mChunkArray [0] -= 1 ;
      }
    }
  }

//--- Copy constructor
  public: ChunkSharedArray (const ChunkSharedArray & inSource) :
  mChunkArray (inSource.mChunkArray),
  mChunkCount (inSource.mChunkCount),
  mChunkCapacity (inSource.mChunkCapacity) {
    if (mChunkArray != nullptr) {
      mChunkArray [0] += 1 ; // Retain
    }
  }

//--- Assignment operator
  public: ChunkSharedArray & operator = (const ChunkSharedArray & inSource) {
    if (inSource.mChunkArray != nullptr) {
      inSource.mChunkArray [0] += 1 ; // Retain
    }
  //--- Release
    if (mChunkArray != nullptr) {
      if (mChunkArray [0] == 0) {
        macroMyDeletePODArray (mChunkArray) ;
        MF_Assert (mChunkSharedArrayCurrentlyAllocatedCount > 0, "Zero!", 0, 0) ;
        mChunkSharedArrayCurrentlyAllocatedCount -= 1 ;
      }else{
        mChunkArray [0] -= 1 ; // Release
      }
    }
  //--- Copy
    mChunkArray = inSource.mChunkArray ;
    mChunkCount = inSource.mChunkCount ;
    mChunkCapacity = inSource.mChunkCapacity ;
  //---
    return *this ;
  }

//--- Get Count
  public: size_t chunkCount (void) const { return mChunkCount ; }

//--- Uniquely Referenced ?
  public: bool isUniquelyReferenced (void) const {
    return (mChunkArray == nullptr) || (mChunkArray [0] == 0) ;
  }

//--- Insulate
  public: void insulateWithChunkCapacity (const size_t inChunkCapacity) {
    const size_t newChunkCapacity = std::max (mChunkCapacity, inChunkCapacity) ;
    if (!isUniquelyReferenced ()) {
      if (mChunkArray != nullptr) {
        mChunkArray [0] -= 1 ;
      }
      ChunkUInt * newChunkArray = nullptr ;
      macroMyNewPODArray (newChunkArray, ChunkUInt, newChunkCapacity + 1) ;
      mChunkSharedArrayAllocationCount += 1 ;
      mChunkSharedArrayCurrentlyAllocatedCount += 1 ;
      newChunkArray [0] = 0 ; // Index 0: reference count (minus one)
      for (size_t i = 1 ; i <= mChunkCount ; i++) {
        newChunkArray [i] = mChunkArray [i] ;  // 1-Based Indexing
      }
      mChunkArray = newChunkArray ;
      mChunkCapacity = newChunkCapacity ;
    }else if (mChunkCapacity < newChunkCapacity) {
      mChunkSharedArrayAllocationCount += (mChunkArray == nullptr) ;
      mChunkSharedArrayCurrentlyAllocatedCount += (mChunkArray == nullptr) ;
      macroMyReallocPODArray (mChunkArray, ChunkUInt, newChunkCapacity + 1) ;
      mChunkCapacity = newChunkCapacity ;
    }
  }

//--- Append objects at the end of the array
  public: void appendChunk (const ChunkUInt inChunkValue COMMA_LOCATION_ARGS) {
    MF_AssertThere (isUniquelyReferenced (), "Uniquely referenced error", 0, 0) ;
    mChunkCount += 1 ;
    MF_AssertThere (mChunkCount <= mChunkCapacity, "append overflow", 0, 0) ;
    mChunkArray [mChunkCount] = inChunkValue ; // 1-Based Indexing
  }

  public: void appendChunks (const size_t inChunkCount,
                             const ChunkUInt inChunkValue
                             COMMA_LOCATION_ARGS) {
    MF_AssertThere (isUniquelyReferenced (), "Uniquely referenced error", 0, 0) ;
    if (inChunkCount > 0) {
      const size_t newChunkCount = mChunkCount + inChunkCount ;
      MF_AssertThere (newChunkCount <= mChunkCapacity, "append overflow", 0, 0) ;
      for (size_t i = mChunkCount + 1 ; i <= newChunkCount ; i++) {
        mChunkArray [i] = inChunkValue ; // 1-Based Indexing
      }
      mChunkCount = newChunkCount ;
    }
  }

  public: void appendRandomChunks (const size_t inChunkCount COMMA_LOCATION_ARGS) {
    MF_AssertThere (isUniquelyReferenced (), "Uniquely referenced error", 0, 0) ;
    if (inChunkCount > 0) {
      const size_t newChunkCount = mChunkCount + inChunkCount ;
      MF_AssertThere (newChunkCount <= mChunkCapacity, "append overflow", 0, 0) ;
      for (size_t i = mChunkCount + 1 ; i <= newChunkCount ; i++) {
        mChunkArray [i] = 0 ;
      }
      mChunkCount = newChunkCount ;
    }
  }

//--- Remove leading zeros
  public: void removeLeadingZeroChunks (LOCATION_ARGS) {
    MF_AssertThere (isUniquelyReferenced (), "Uniquely referenced error", 0, 0) ;
    while ((mChunkCount > 0) && (mChunkArray [mChunkCount] == 0)) { // 1-Based Indexing
      mChunkCount -= 1 ;
    }
  }

//--- Last chunk (with index checking)
  public: ChunkUInt lastChunk (LOCATION_ARGS) const {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkChunkIndex (mChunkCount COMMA_THERE) ;
    #endif
    return mChunkArray [mChunkCount] ; // 1-Based Indexing
  }

  public: ChunkUInt chunkAtIndex (const size_t inChunkIndex COMMA_LOCATION_ARGS) const {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkChunkIndex (inChunkIndex COMMA_THERE) ;
    #endif
    return mChunkArray [inChunkIndex] ; // 1-Based Indexing
  }

  public: void setChunkAtIndex (const ChunkUInt inChunkValue,
                                const size_t inChunkIndex
                                COMMA_LOCATION_ARGS) {
    MF_AssertThere (isUniquelyReferenced (), "Uniquely referenced error", 0, 0) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkChunkIndex (inChunkIndex COMMA_THERE) ;
    #endif
    mChunkArray [inChunkIndex] = inChunkValue ; // 1-Based Indexing
  }

  public: void subtractFromChunkAtIndex (const ChunkUInt inChunkValue,
                                         const size_t inChunkIndex
                                         COMMA_LOCATION_ARGS) {
    MF_AssertThere (isUniquelyReferenced (), "Uniquely referenced error", 0, 0) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkChunkIndex (inChunkIndex COMMA_THERE) ;
    #endif
    mChunkArray [inChunkIndex] -= inChunkValue ; // 1-Based Indexing
  }

//--- Index checking
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: void checkChunkIndex (const size_t inChunkIndex COMMA_LOCATION_ARGS) const {
      MF_AssertThere (inChunkIndex > 0, "inChunkIndex (%llu) < 0", int64_t (inChunkIndex), 0) ;
      MF_AssertThere (inChunkIndex <= mChunkCount, "inChunkIndex (%llu) >= mChunkCount (%llu)", int64_t (inChunkIndex), int64_t (mChunkCount)) ;
    }
  #endif

//--- Private static attributes
  private: static size_t mChunkSharedArrayAllocationCount ;
  private: static size_t mChunkSharedArrayCurrentlyAllocatedCount ;

  public: static size_t chunkSharedArrayAllocationCount (void) {
    return mChunkSharedArrayAllocationCount ;
  }

  public: static size_t chunkSharedArrayCurrentlyAllocatedCount (void) {
    return mChunkSharedArrayCurrentlyAllocatedCount ;
  }

} ;

//--------------------------------------------------------------------------------------------------
