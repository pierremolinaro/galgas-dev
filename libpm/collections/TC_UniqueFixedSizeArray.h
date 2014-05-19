//-----------------------------------------------------------------------------*
//                                                                             *
// Declaration and implementation of the template class 'TC_UniqueFixedSizeArray'*
//                                                                             *
//  It implements a generic fixed size vector.                                 *
//                                                                             *
//  COPY OF ITS INSTANCES IS NOT ALLOWED.                                      *
//                                                                             *
//  This file is part of libpm library                                         *
//                                                                             *
//  Copyright (C) 1997-2002 Pierre Molinaro.                                   *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                               *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes                                              *
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

#ifndef UNIQUE_FIXED_ARRAY_TEMPLATE_CLASS_DEFINED
#define UNIQUE_FIXED_ARRAY_TEMPLATE_CLASS_DEFINED

//-----------------------------------------------------------------------------*

#include "MF_Assert.h"
#include "TF_exchange.h"

//-----------------------------------------------------------------------------*

template <class TYPE, int32_t SIZE> class TC_UniqueFixedSizeArray {
//--- Destructor  
  public : virtual ~TC_UniqueFixedSizeArray (void) ;

//--- No Copy
  private : TC_UniqueFixedSizeArray (const TC_UniqueFixedSizeArray <TYPE, SIZE> &) ;
  private : TC_UniqueFixedSizeArray <TYPE, SIZE> & operator = (const TC_UniqueFixedSizeArray <TYPE, SIZE> &) ;

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
  #ifndef _MSC_VER
    friend void exchange <TYPE, SIZE> (TC_UniqueFixedSizeArray <TYPE, SIZE> & ioOperand1,
                                       TC_UniqueFixedSizeArray <TYPE, SIZE> & ioOperand2) ;
  #else
    friend void exchange (TC_UniqueFixedSizeArray <TYPE, SIZE> & ioOperand1,
                          TC_UniqueFixedSizeArray <TYPE, SIZE> & ioOperand2) ;
  #endif

//--- Data member
  private : TYPE mFixedArray [SIZE] ;
} ;

//-----------------------------------------------------------------------------*
//                                                                             *
//                 Implementation                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

template <class TYPE, int32_t SIZE>
TC_UniqueFixedSizeArray<TYPE, SIZE>::~TC_UniqueFixedSizeArray (void) {
}

//-----------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS 
  template <class TYPE, int32_t SIZE>
  TYPE & TC_UniqueFixedSizeArray<TYPE, SIZE>::operator () (const int32_t inIndex COMMA_LOCATION_ARGS) {
    MF_AssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    MF_AssertThere (inIndex < SIZE, "inIndex (%ld) >= SIZE (%ld)", inIndex, SIZE) ;
    return mFixedArray [inIndex] ;
  }
#endif

//-----------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  template <class TYPE, int32_t SIZE>
  const TYPE & TC_UniqueFixedSizeArray<TYPE, SIZE>::operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const {
    MF_AssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    MF_AssertThere (inIndex < SIZE, "inIndex (%ld) >= SIZE (%ld)", inIndex, SIZE) ;
    return mFixedArray [inIndex] ;
  }
#endif

//-----------------------------------------------------------------------------*

template <class TYPE, int32_t SIZE>
void TC_UniqueFixedSizeArray <TYPE, SIZE>::exchangeItemAtIndex (const int32_t inIndex,
                                                     TYPE & ioItem COMMA_LOCATION_ARGS) {
  MF_AssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  MF_AssertThere (inIndex < SIZE, "inIndex (%ld) >= SIZE (%ld)", inIndex, SIZE) ;
  exchange (mFixedArray [inIndex], ioItem) ;
}

//-----------------------------------------------------------------------------*

template <class TYPE, int32_t SIZE>
void exchange (TC_UniqueFixedSizeArray <TYPE, SIZE> & ioOperand1,
               TC_UniqueFixedSizeArray <TYPE, SIZE> & ioOperand2) {
  for (int32_t i=0 ; i<SIZE ; i++) {
    exchange (ioOperand1.mFixedArray [i], ioOperand2.mFixedArray [i]) ;
  }
}

//-----------------------------------------------------------------------------*

#endif
