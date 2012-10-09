//---------------------------------------------------------------------------*
//                                                                           *
//  Handing unsigned integer of arbitrary size                               *
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2012, ..., 2012 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef PM_BIG_UINT_CLASS_DEFINED
#define PM_BIG_UINT_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include "collections/TC_Array.h"
#include "strings/C_String.h"

//---------------------------------------------------------------------------*

class C_BigUInt {
//--- Constructors
  public : C_BigUInt (void) ;
  public : C_BigUInt (const PMUInt64 inValue) ;

//--- Destructor
  public : virtual ~ C_BigUInt (void) ;

//--- Is Zero
  public : bool isZero (void) const ;

//--- Comparison
  public : bool operator == (const C_BigUInt & inValue) const ;
  public : bool operator != (const C_BigUInt & inValue) const ;
  public : bool greaterThan (const PMUInt32 inOperand) const ;

//--- Addition
  public : void operator += (const C_BigUInt & inValue) ;
  public : C_BigUInt operator + (const C_BigUInt & inValue) const ;

//--- Multiplication
  public : void multiplyBy (const PMUInt32 inMultiplicand) ;

//--- Division
  public : void divideBy (const PMUInt32 inDivisor,
                          PMUInt32 & outRemainder) ;

//--- Bit access
  public : bool valueAtBitIndex (const PMUInt32 inIndex) const ;
  public : void setValueAtBitIndex (const bool inValue, const PMUInt32 inIndex) ;

//--- Value as string
  public : C_String decimalString (void) const ;

//--- Internal method
  private : void normalize (void) ;

//--- Attributes
  private : TC_Array <PMUInt32> mValueArray ;
} ;

//---------------------------------------------------------------------------*

#endif
