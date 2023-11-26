
#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "utilities/MF_Assert.h"
#include "utilities/M_SourceLocation.h"
#include "utilities/TF_Swap.h"
#include "utilities/MF_MemoryControl.h"
#include "utilities/cpp-allocation.h"

//----------------------------------------------------------------------------------------------------------------------
//
//   Template class declaration
//
//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> class U64_UniqueArray final {
//--- Default Constructor
  public: U64_UniqueArray (void) :
  mArray (nullptr),
  mCount (0),
  mCapacity (0) {
  }

//--- Destructor
  public: ~U64_UniqueArray (void)  {
    macroMyDeleteArray (mArray) ;
  }

//--- No copy
  private: U64_UniqueArray (const U64_UniqueArray <TYPE> &) = delete ;
  private: U64_UniqueArray <TYPE> & operator = (const U64_UniqueArray <TYPE> &) = delete ;

//--- Copy
  public: void copyTo (U64_UniqueArray <TYPE> & outArray) const {
    outArray.removeAllKeepingCapacity () ;
    for (int32_t i=0 ; i<mCount ; i++) {
      outArray.appendObject (mArray [i]) ;
    }
  }

//--- Get Count
  public: inline int32_t count (void) const { return mCount ; }

//--- Remove all, keeping capacity
  public: void removeAllKeepingCapacity (void) {
    mCount = 0 ;
  }

//--- Remove all objects and deallocate
  public: void removeAll (void)  {
    mCount = 0 ;
    macroMyDeleteArray (mArray) ;
    mCapacity = 0 ;
  }

//--- Get capacity
  public: inline int32_t capacity (void) const { return mCapacity ; }

//--- Set capacity
  public: void setCapacity (const int32_t inNewCapacity)  {
    if (mCapacity < inNewCapacity) {
      int32_t newCapacity = (mCapacity > 32) ? mCapacity : 32 ;
      while (newCapacity < inNewCapacity) {
        newCapacity <<= 1 ;
      }
      TYPE * newArray = nullptr ;
      macroMyNewArray (newArray, TYPE, uint32_t (newCapacity)) ;
      for (int32_t i=0 ; i<mCount ; i++) {
        newArray [i] = mArray [i] ;
      }
      macroMyDeleteArray (mArray) ; mArray = newArray ;
      mCapacity = newCapacity ;
    }
  }

//--- Append objects at the end of the array
  public: void appendObject (const TYPE inValue) {
    if (mCount >= mCapacity) {
      setCapacity (mCount + 1 + mCount / 2) ;
    }
    mArray [mCount] = inValue ;
    mCount ++ ;
  }

  public: void appendObjects (const int32_t inCount, const TYPE inValue)  {
    if (inCount > 0) {
      const int32_t newCount = mCount + inCount ;
      setCapacity (newCount) ;
      for (int32_t i=mCount ; i<newCount ; i++) {
        mArray [i] = inValue ;
      }
      mCount = newCount ;
    }
  }

//--- Prepend object
  public: void prependObject (const TYPE inValue)  {
    setCapacity (mCount + 1) ;
    for (int32_t i = mCount ; i > 0 ; i--) {
      mArray [i] = mArray [i-1] ;
    }
    mArray [0] = inValue ;
    mCount ++ ;
  }

  public: void prependObjects (const int32_t inCount,
                               const TYPE inValue)  {
    if (inCount > 0) {
      setCapacity (mCount + inCount) ;
      for (int32_t i = mCount - 1 ; i >= 0 ; i--) {
        mArray [i + inCount] = mArray [i] ;
      }
      for (int32_t i=0 ; i<inCount ; i++) {
        mArray [i] = inValue ;
      }
      mCount += inCount ;
    }
  }

//--- Remove last object(s)
  public: void removeLastObject (LOCATION_ARGS)  {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (mCount-1 COMMA_THERE) ;
    #endif
    mCount -- ;
  }

//--- Element access (with index checking)
  public: TYPE lastObject (LOCATION_ARGS) const  {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (mCount-1 COMMA_THERE) ;
    #endif
    return mArray [mCount-1] ;
  }


  public: TYPE & lastObject (LOCATION_ARGS)  {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (mCount-1 COMMA_THERE) ;
    #endif
    return mArray [mCount-1] ;
  }

  public: TYPE operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const  {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (inIndex COMMA_THERE) ;
    #endif
    return mArray [inIndex] ;
  }

  public: TYPE & operator () (const int32_t inIndex COMMA_LOCATION_ARGS)  {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (inIndex COMMA_THERE) ;
    #endif
    return mArray [inIndex] ;
  }

//--- Index checking
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: void checkIndex (const int32_t inIndex COMMA_LOCATION_ARGS) const {
      MF_AssertThere (inIndex >= 0, "inIndex (%lld) < 0", inIndex, 0) ;
      MF_AssertThere (inIndex < mCount, "inIndex (%lld) >= mCount (%lld)", inIndex, mCount) ;
    }
  #endif

//--- Protected attributes
  protected: TYPE * mArray ;
  protected: int32_t mCount ;
  protected: int32_t mCapacity ;
} ;

//----------------------------------------------------------------------------------------------------------------------
