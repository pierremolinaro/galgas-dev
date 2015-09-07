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

#ifndef PM_BIG_INT_CLASS_DEFINED
#define PM_BIG_INT_CLASS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "strings/C_String.h"

//---------------------------------------------------------------------------------------------------------------------*

class C_BigInt {
//--- Constructors
  public : C_BigInt (void) ;
  public : explicit C_BigInt (const uint64_t inValue, const bool inNegate) ;
  public : explicit C_BigInt (const uint64_t inHighValue, const uint64_t inLowValue, const bool inNegate) ;
  public : explicit C_BigInt (const int64_t inValue) ;

//--- Destructor
  public : virtual ~ C_BigInt (void) ;

//--- Handle copy
  public : C_BigInt (const C_BigInt & inOperand) ;
  public : C_BigInt & operator = (const C_BigInt & inOperand) ;

//--- Set to value
  public : void setToZero (void) ;

//--- Sign
  public : bool isZero (void) const { return mSign == zero ; }
  public : bool isOne (void) const ;
  public : bool isMinusOne (void) const ;
  public : bool isPositive (void) const { return mSign == positive ; } // >0
  public : bool isNegative (void) const { return mSign == negative ; } // <0

//--- Comparison
  public : bool operator == (const C_BigInt & inValue) const ;
  public : bool operator != (const C_BigInt & inValue) const ;
  public : bool operator > (const C_BigInt & inOperand) const ;
  public : bool operator >= (const C_BigInt & inOperand) const ;
  public : bool operator < (const C_BigInt & inOperand) const ;
  public : bool operator <= (const C_BigInt & inOperand) const ;
  public : int32_t compare (const C_BigInt & inValue) const ;

//--- Incrementation, decrementation
  public : C_BigInt & operator ++ (void) ;
  public : C_BigInt & operator -- (void) ;

//--- Shift
  public : C_BigInt operator << (const uint32_t inValue) const ;
  public : void operator <<= (const uint32_t inValue) ;
  public : C_BigInt operator >> (const uint32_t inValue) const ;
  public : void operator >>= (const uint32_t inValue) ;

//--- String
  public : C_String hexString (void) const ;
  public : C_String decimalString (void) const ;

//--- Add, subtract
  public : void operator += (const C_BigInt inValue) ;
  public : C_BigInt operator + (const C_BigInt & inValue) const ;

  public : void operator -= (const C_BigInt inValue) ;
  public : C_BigInt operator - (const C_BigInt & inValue) const ;

  public : void operator += (const uint32_t inValue) ;
  public : C_BigInt operator + (const uint32_t inValue) const ;

  public : void operator -= (const uint32_t inValue) ;
  public : C_BigInt operator - (const uint32_t inValue) const ;

//--- Negate
  public : C_BigInt operator - (void) const ;
  public : void negateInPlace (void) ;

//--- Multiplication
  public : void operator *= (const uint32_t inMultiplicand) ;
  public : C_BigInt operator * (const uint32_t inMultiplicand) const ;

  public : void operator *= (const C_BigInt inMultiplicand) ;
  public : C_BigInt operator * (const C_BigInt & inMultiplicand) const ;

//--- Division
  public : void divideInPlace (const uint32_t inDivisor, uint32_t & outRemainder COMMA_LOCATION_ARGS) ;
  public : void divideBy (const uint32_t inDivisor, C_BigInt & outQuotient, uint32_t & outRemainder COMMA_LOCATION_ARGS) const ;

  public : void divideInPlace (const C_BigInt inDivisor, C_BigInt & outRemainder COMMA_LOCATION_ARGS) ;
  public : void divideBy (const C_BigInt inDivisor, C_BigInt & outQuotient, C_BigInt & outRemainder COMMA_LOCATION_ARGS) const ;

//--- Value access
  public : uint32_t absValue32AtIndex (const uint32_t inIndex) const ;
  public : uint64_t absValue64AtIndex (const uint32_t inIndex) const ;

//--- Testing value
  public : bool isUInt32 (void) const ;
  public : bool isUInt64 (void) const ;
  public : bool isSInt32 (void) const ;
  public : bool isSInt64 (void) const ;
  
//--- Utilities
  public : uint32_t requiredBitCountForSignedRepresentation (void) const ;

//--- Example
  public : static void example (void) ;

//--- Sign
  protected : typedef enum {negative, zero, positive} enumBigIntSign ;
  protected : enumBigIntSign mSign ;

//--- Value
  protected : class acPtr_bigUInt * mObjectPtr ;

//--- Private methods
  private : void insulate (LOCATION_ARGS) ;
  private : void normalize (void) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    private : void checkBigInt (LOCATION_ARGS) const ;
  #endif
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
