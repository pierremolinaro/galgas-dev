//---------------------------------------------------------------------------*
//                                                                           *
//   GALGAS_double                                                           *
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2002, ..., 2010 Pierre Molinaro.                           *
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

#include "predefined-types.h"
#include "galgas2/C_Compiler.h"

//---------------------------------------------------------------------------*

#include <math.h>

//---------------------------------------------------------------------------*

GALGAS_double::GALGAS_double (void) :
mIsValid (false),
mDoubleValue (0.0) {
}

//---------------------------------------------------------------------------*

GALGAS_double::GALGAS_double (const double inValue) :
mIsValid (true),
mDoubleValue (inValue) {
  if (traceIsEnabled ()) {
    appendTrace ("double", true, cStringWithDouble (inValue)) ;
  }
}

//---------------------------------------------------------------------------*

GALGAS_uint GALGAS_double::reader_uint (C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if ((mDoubleValue > (double) PMUINT32_MAX) || (mDoubleValue < 0.0)) {
    C_String s ;
    s << "Cannot convert @double (" ;
    s.appendDouble (mDoubleValue) ;
    s << ") to @uint" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GALGAS_uint ((PMUInt32) (lround (mDoubleValue) & PMUINT32_MAX)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_double::reader_uint_36__34_ (C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if ((mDoubleValue > (double) PMUINT64_MAX) || (mDoubleValue < 0.0)) {
    C_String s ;
    s << "Cannot convert @double (" ;
    s.appendDouble (mDoubleValue) ;
    s << ") to @uint64" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GALGAS_uint_36__34_ (lround (mDoubleValue)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GALGAS_sint GALGAS_double::reader_sint (C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GALGAS_sint result ;
  if ((mDoubleValue > (double) PMSINT32_MAX) || (mDoubleValue < (double) PMSINT32_MIN)) {
    C_String s ;
    s << "Cannot convert @double (" ;
    s.appendDouble (mDoubleValue) ;
    s << ") to @sint" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GALGAS_sint ((PMSInt32) (lround (mDoubleValue) & PMUINT32_MAX)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_double::reader_sint_36__34_ (C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_sint_36__34_ result ;
  if ((mDoubleValue > (double) PMSINT64_MAX) || (mDoubleValue < (double) PMSINT64_MIN)) {
    C_String s ;
    s << "Cannot convert @double (" ;
    s.appendDouble (mDoubleValue) ;
    s << ") to @sint64" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GALGAS_sint_36__34_ (lround (mDoubleValue)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

typeComparisonResult GALGAS_double::objectCompare (const GALGAS_double & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mDoubleValue < inOperand.mDoubleValue) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mDoubleValue > inOperand.mDoubleValue) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

void GALGAS_double::description (C_String & ioString,
                               const PMSInt32 /* inIndentation */) const {
  ioString << "<@double:" ;
  if (isValid ()) {
    ioString.appendDouble (mDoubleValue) ;
  }else{
    ioString << "not built" ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------*

GALGAS_string GALGAS_double::reader_string (UNUSED_LOCATION_ARGS) const {
  C_String s ;
  s.appendDouble (mDoubleValue) ;
  return GALGAS_string (s) ;
}

//---------------------------------------------------------------------------*

GALGAS_double GALGAS_double::add_operation (const GALGAS_double & inOperand2,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GALGAS_double (mDoubleValue + inOperand2.mDoubleValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GALGAS_double GALGAS_double::substract_operation (const GALGAS_double & inOperand2,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GALGAS_double (mDoubleValue - inOperand2.mDoubleValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GALGAS_double GALGAS_double::multiply_operation (const GALGAS_double & inOperand2,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GALGAS_double (mDoubleValue * inOperand2.mDoubleValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GALGAS_double GALGAS_double::divide_operation (const GALGAS_double & inOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (isValid () && inOperand2.isValid ()) {
    if (inOperand2.mDoubleValue == 0.0) {
      inCompiler->onTheFlyRunTimeError ("divide by zero" COMMA_THERE) ;
    }else{
      result = GALGAS_double (mDoubleValue / inOperand2.mDoubleValue) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

GALGAS_double GALGAS_double::operator_unary_minus (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (isValid ()) {
    result = GALGAS_double (- mDoubleValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*
