//-----------------------------------------------------------------------------*
//                                                                             *
//  Declaration and implementation of the template class 'TC_FixedSizeArray'   *
//                                                                             *
//  It implements a generic fixed size vector.                                 *
//                                                                             *
//  COPY OF ITS INSTANCES IS ALLOWED.                                          *
//                                                                             *
//  This file is part of libpm library                                         *
//                                                                             *
//  Copyright (C) 1997-2002 Pierre Molinaro.                                   *
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

#ifndef FIXED_ARRAY_TEMPLATE_CLASS_DEFINED
#define FIXED_ARRAY_TEMPLATE_CLASS_DEFINED

//-----------------------------------------------------------------------------*

#include "utilities/MF_Assert.h"
#include "utilities/TF_Swap.h"

//-----------------------------------------------------------------------------*
//                                                                             *
//   Predeclarations                                                           *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class TYPE, int32_t SIZE> class TC_FixedSizeArray ;

template <class TYPE, int32_t SIZE>
void swap (TC_FixedSizeArray <TYPE, SIZE> & ioOperand1,
           TC_FixedSizeArray <TYPE, SIZE> & ioOperand2) ;

//-----------------------------------------------------------------------------*
//                                                                             *
//   Template class declaration                                                *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class TYPE, int32_t SIZE> class TC_FixedSizeArray {
//--- Destructor  
  public : virtual ~TC_FixedSizeArray (void) ;
  
//--- Item access (with index checking)
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : TYPE & operator () (const int32_t inIndex COMMA_LOCATION_ARGS) ;
    public : const TYPE & operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  #endif

//--- Item access (without index checking)
  #ifdef DO_NOT_GENERATE_CHECKINGS
    public : inline TYPE & operator () (const int32_t inIndex) { return mFixedArray [inIndex] ; }
    public : inline const TYPE & operator () (const int32_t inIndex) const { return mFixedArray [inIndex] ; }
  #endif

//--- Exchange item at index
  public : void exchangeItemAtIndex (const int32_t inIndex,
                                     TYPE & ioItem COMMA_LOCATION_ARGS) ;

//--- Exchange
  friend void swap <TYPE, SIZE> (TC_FixedSizeArray <TYPE, SIZE> & ioOperand1,
                                 TC_FixedSizeArray <TYPE, SIZE> & ioOperand2) ;

//--- Data member
  private : TYPE mFixedArray [SIZE] ;
} ;

//-----------------------------------------------------------------------------*
//                                                                             *
//                 Implementation                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class TYPE, int32_t SIZE>
TC_FixedSizeArray<TYPE, SIZE>::~TC_FixedSizeArray (void) {
}

//-----------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS 
  template <class TYPE, int32_t SIZE>
  TYPE & TC_FixedSizeArray<TYPE, SIZE>::operator () (const int32_t inIndex COMMA_LOCATION_ARGS) {
    M_assert_there (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    M_assert_there (inIndex < SIZE, "inIndex (%ld) >= SIZE (%ld)", inIndex, SIZE) ;
    return mFixedArray [inIndex] ;
  }
#endif

//-----------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  template <class TYPE, int32_t SIZE>
  const TYPE & TC_FixedSizeArray<TYPE, SIZE>::operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const {
    M_assert_there (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    M_assert_there (inIndex < SIZE, "inIndex (%ld) >= SIZE (%ld)", inIndex, SIZE) ;
    return mFixedArray [inIndex] ;
  }
#endif

//-----------------------------------------------------------------------------*

template <class TYPE, int32_t SIZE>
void TC_FixedSizeArray <TYPE, SIZE>::exchangeItemAtIndex (const int32_t inIndex,
                                                     TYPE & ioItem COMMA_LOCATION_ARGS) {
  M_assert_there (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  M_assert_there (inIndex < SIZE, "inIndex (%ld) >= SIZE (%ld)", inIndex, SIZE) ;
  swap (mFixedArray [inIndex], ioItem) ;
}

//-----------------------------------------------------------------------------*

template <class TYPE, int32_t SIZE>
void swap (TC_FixedSizeArray <TYPE, SIZE> & ioOperand1,
           TC_FixedSizeArray <TYPE, SIZE> & ioOperand2) {
  for (int32_t i=0 ; i<SIZE ; i++) {
    swap (ioOperand1.mFixedArray [i], ioOperand2.mFixedArray [i]) ;
  }
}

//-----------------------------------------------------------------------------*

#endif
