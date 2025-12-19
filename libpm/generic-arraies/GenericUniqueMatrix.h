//--------------------------------------------------------------------------------------------------
//
//  Declaration and implementation of the template class 'GenericUniqueMatrix'
//
//  It implements a generic two dimensions dynamic sized array.
//
//  COPY OF ITS INSTANCES IS NOT ALLOWED.
//
//  This file is part of libpm library
//
//  Copyright (C) 2008, ..., 2025 Pierre Molinaro.
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

#pragma once

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "TF_Swap.h"

//--------------------------------------------------------------------------------------------------

#include <stddef.h>

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> class GenericUniqueMatrix ;

template <typename ELEMENT> void swap (GenericUniqueMatrix <ELEMENT> & ioOperand1,
                                       GenericUniqueMatrix <ELEMENT> & ioOperand2) ;

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> class GenericUniqueMatrix final {
  protected: ELEMENT * mArray ;
  protected: int32_t mCurrentRowCount ;
  protected: int32_t mCurrentColumnCount ;

//--- Constructor
  public: GenericUniqueMatrix (const int32_t inRowCount,
                               const int32_t inColumnCount) ;

//--- Destructor
  public: ~GenericUniqueMatrix (void) ;

//--- No copy
  private: GenericUniqueMatrix (GenericUniqueMatrix <ELEMENT> & inSource) = delete ;
  private: GenericUniqueMatrix <ELEMENT> & operator = (GenericUniqueMatrix <ELEMENT> & inSource) = delete ;

//--- Get Row and Column count
  public: inline int32_t rowCount (void) const { return mCurrentRowCount ; }
  public: inline int32_t columnCount (void) const { return mCurrentColumnCount ; }

//--- Access
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: ELEMENT & operator () (const int32_t inRowIndex, const int32_t inColumnIndex COMMA_LOCATION_ARGS) ;
    public: const ELEMENT & operator () (const int32_t inRowIndex, const int32_t inColumnIndex COMMA_LOCATION_ARGS) const ;
  #endif

  #ifdef DO_NOT_GENERATE_CHECKINGS
    public: inline ELEMENT & operator () (const int32_t inRowIndex,
                                          const int32_t inColumnIndex) {
      return mArray [size_t (inRowIndex * mCurrentColumnCount + inColumnIndex)] ;
    }
    public: inline const ELEMENT & operator () (const int32_t inRowIndex,
                                                const int32_t inColumnIndex) const {
      return mArray [size_t (inRowIndex * mCurrentColumnCount + inColumnIndex)] ;
    }
  #endif

  protected: size_t long2size_t (const int32_t inRowIndex, const int32_t inColumnIndex COMMA_LOCATION_ARGS) const {
    macroAssertThere (inRowIndex >= 0, "indice ligne (%ld) < 0", inRowIndex, 0) ;
    macroAssertThere (inRowIndex < mCurrentRowCount, "indice ligne (%ld) >= nombre de lignes (%ld)", inRowIndex, mCurrentRowCount) ;
    macroAssertThere (inColumnIndex >= 0, "indice colonne (%ld) < 0", inColumnIndex, 0) ;
    macroAssertThere (inColumnIndex < mCurrentColumnCount, "indice ligne (%ld) >= nombre de colonnes (%ld)", inColumnIndex, mCurrentColumnCount) ;
    return size_t (inRowIndex * mCurrentColumnCount + inColumnIndex) ;
  }

  public: void setObjectAtIndexes (const ELEMENT & inObject,
                                   const int32_t inRowIndex,
                                   const int32_t inColumnIndex
                                   COMMA_LOCATION_ARGS) ;

//--- Exchange
  friend void swap <ELEMENT> (GenericUniqueMatrix <ELEMENT> & ioOperand1,
                              GenericUniqueMatrix <ELEMENT> & ioOperand2) ;
} ;

//--------------------------------------------------------------------------------------------------
//                         Implementation
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericUniqueMatrix <ELEMENT>::GenericUniqueMatrix (const int32_t inRowCount,
                                                    const int32_t inColumnCount) :
mArray (nullptr),
mCurrentRowCount (0),
mCurrentColumnCount (0) {
  if ((inRowCount > 0) && (inColumnCount > 0)) {
    macroMyNewArray (mArray, ELEMENT, (size_t) (inRowCount * inColumnCount)) ;
    mCurrentRowCount = inRowCount ;
    mCurrentColumnCount = inColumnCount ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> GenericUniqueMatrix <ELEMENT>::~GenericUniqueMatrix (void) {
  macroMyDeleteArray (mArray) ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  template <typename ELEMENT>
  ELEMENT & GenericUniqueMatrix <ELEMENT>::operator () (const int32_t inRowIndex,
                                                        const int32_t inColumnIndex
                                                        COMMA_LOCATION_ARGS) {
    return mArray [long2size_t (inRowIndex, inColumnIndex COMMA_THERE)] ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  template <typename ELEMENT>
  const ELEMENT & GenericUniqueMatrix <ELEMENT>::operator () (const int32_t inRowIndex,
                                                              const int32_t inColumnIndex
                                                              COMMA_LOCATION_ARGS) const {
    return mArray [long2size_t (inRowIndex, inColumnIndex COMMA_THERE)] ;
  }
#endif

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void swap (GenericUniqueMatrix <ELEMENT> & ioOperand1,
           GenericUniqueMatrix <ELEMENT> & ioOperand2) {
  swap (ioOperand1.mArray, ioOperand2.mArray) ;
  swap (ioOperand1.mCurrentRowCount, ioOperand2.mCurrentRowCount) ;
  swap (ioOperand1.mCurrentColumnCount, ioOperand2.mCurrentColumnCount) ;
  swap (ioOperand1.mCapacity, ioOperand2.mCapacity) ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueMatrix <ELEMENT>::setObjectAtIndexes (const ELEMENT & inObject,
                                                        const int32_t inRowIndex,
                                                        const int32_t inColumnIndex
                                                        COMMA_LOCATION_ARGS) {
  const size_t idx = long2size_t (inRowIndex, inColumnIndex COMMA_THERE) ;
  if (nullptr != mArray) {
    mArray [idx] = inObject ;
  }
}

//--------------------------------------------------------------------------------------------------
