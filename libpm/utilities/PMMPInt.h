//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Handing signed integer of arbitrary size                                                                           *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2015, ..., 2015 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef PM_MULTIPLE_PRECISION_INT_CLASS_DEFINED
#define PM_MULTIPLE_PRECISION_INT_CLASS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "strings/C_String.h"

//---------------------------------------------------------------------------------------------------------------------*

class PMMPInt {
//--- Constructors
  public : PMMPInt (void) ;
  public : PMMPInt (const uint64_t inValue) ;

//--- Destructor
  public : virtual ~ PMMPInt (void) ;

//--- Is Zero
  public : bool isZero (void) const ;

//--- Comparison
  public : bool operator == (const PMMPInt & inValue) const ;
  public : bool operator != (const PMMPInt & inValue) const ;
  public : bool operator > (const uint32_t inOperand) const ;

//--- Incrementation, decrmentation
  public : void increment (void) ;
  public : void decrement (void) ;
  
//--- Addition
  public : void operator += (const PMMPInt & inValue) ;
  public : PMMPInt operator + (const PMMPInt & inValue) const ;

//--- Multiplication
  public : void operator *= (const uint32_t inMultiplicand) ;

//--- Division
  public : void divideBy (const uint32_t inDivisor,
                          uint32_t & outRemainder) ;
  public : void operator /= (const uint32_t inMultiplicand) ;

//--- Bit access
  public : bool valueAtBitIndex (const uint32_t inIndex) const ;
  public : void setValueAtBitIndex (const bool inValue, const uint32_t inIndex) ;

//--- Example
  public : static void example (void) ;

//---
  public : uint32_t uint32AtIndex (const int32_t inIndex) const ;
  public : inline int32_t uint32WordCount (void) const { return mUnsignedValue.count () ; }

//--- Value as string
  public : C_String decimalString (void) const ;

//--- Attributes
  private : TC_UniqueArray <uint32_t> mUnsignedValue ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
