//--------------------------------------------------------------------------------------------------
//
//  GGS_binaryset
//
//  This file is part of libpm library
//
//  Created january 22, 2007.
//
//  Copyright (C) 2007, ..., 2024 Pierre Molinaro.
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

#include "all-predefined-types.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

GGS_binaryset::GGS_binaryset (void) :
mIsValid (false),
mBDD () {
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset::GGS_binaryset (const BinaryDecisionDiagram & inOperand_mBDD) :
mIsValid (true),
mBDD (inOperand_mBDD) {
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_binaryset (BinaryDecisionDiagram ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_emptyBinarySet (UNUSED_LOCATION_ARGS) {
  return GGS_binaryset (BinaryDecisionDiagram ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_fullBinarySet (UNUSED_LOCATION_ARGS) {
  BinaryDecisionDiagram bdd ;
  bdd.setToTrue () ;
  return GGS_binaryset (bdd) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithBit (const GGS_uint & inBitIndex,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_binaryset result ;
  if (inBitIndex.isValid ()) {
    const uint32_t bitIndex = inBitIndex.uintValue () ;
    const BinaryDecisionDiagram bdd (bitIndex, true) ;
    result = GGS_binaryset (bdd) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithPredicateString (const GGS_string & inBitString,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_binaryset result ;
  if (inBitString.isValid ()) {
    const String bitString = inBitString.stringValue () ;
    const int32_t stringLength = bitString.length () ;
    int32_t stringIndex = 0 ;
    bool ok = true ;
    BinaryDecisionDiagram resultBDD ;
    while ((stringIndex < stringLength) && ok) {
      utf32 cc = bitString.charAtIndex (stringIndex COMMA_HERE) ;
      String s ;
      while ((stringIndex < stringLength) && ((UNICODE_VALUE (cc) == '0') || (UNICODE_VALUE (cc) == '1') || (UNICODE_VALUE (cc) == 'X') || (UNICODE_VALUE (cc) == ' '))) {
        s.appendChar (cc) ;
        stringIndex ++ ;
        if (stringIndex < stringLength) {
          cc = bitString.charAtIndex (stringIndex COMMA_HERE) ;
        }
      }
      if (s.length () > 0) {
        BinaryDecisionDiagram v ; v.setToTrue () ;
        uint32_t bitIndex = 0 ;
        for (int32_t i=s.length () - 1 ; i>=0 ; i--) {
          const utf32 c = s.charAtIndex (i COMMA_HERE) ;
          if (UNICODE_VALUE (c) == '0') {
            v &= BinaryDecisionDiagram (bitIndex, false) ;
            bitIndex ++ ;
          }else if (UNICODE_VALUE (c) == '1') {
            v &= BinaryDecisionDiagram (bitIndex, true) ;
            bitIndex ++ ;
          }else if (UNICODE_VALUE (c) == 'X') {
            bitIndex ++ ;
          }
        }
        resultBDD |= v ;
      }
      if (stringIndex < stringLength) {
        ok = UNICODE_VALUE (cc) == '|' ;
        stringIndex ++ ;
      }
    }
    if (ok) {
      result = GGS_binaryset (resultBDD) ;
    }else{
      String message ("invalid query string near index ") ;
      message.appendSigned (stringIndex) ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static GGS_binaryset binarySetWithComparison (Compiler * inCompiler,
                                                 const GGS_uint & inLeftFirstIndex,
                                                 const GGS_uint & inBitCount,
                                                 const BinaryDecisionDiagram::compareEnum inComparison,
                                                 const GGS_uint & inRightFirstIndex
                                                 COMMA_LOCATION_ARGS) {
  GGS_binaryset result ;
  if ((inLeftFirstIndex.isValid ()) && inBitCount.isValid () && (inRightFirstIndex.isValid ())) {
    const uint64_t maxLeft = ((uint64_t) inLeftFirstIndex.uintValue ()) + inBitCount.uintValue () ;
    const uint64_t maxRight = ((uint64_t) inRightFirstIndex.uintValue ()) + inBitCount.uintValue () ;
    if (maxLeft > UINT32_MAX) {
      inCompiler->onTheFlyRunTimeError ("left operand upper bit is greater than 2**31-1" COMMA_THERE) ;
    }else if (maxRight > UINT32_MAX) {
      inCompiler->onTheFlyRunTimeError ("right operand upper bit is greater than 2**31-1" COMMA_THERE) ;
    }else {
      result = GGS_binaryset (BinaryDecisionDiagram::varCompareVar (inLeftFirstIndex.uintValue (),
                                 inBitCount.uintValue (),
                                 inComparison,
                                 inRightFirstIndex.uintValue ())) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithEqualComparison (const GGS_uint & inLeftFirstIndex,
                                                                             const GGS_uint & inBitCount,
                                                                             const GGS_uint & inRightFirstIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  return binarySetWithComparison (inCompiler,
                                  inLeftFirstIndex,
                                  inBitCount,
                                  BinaryDecisionDiagram::kEqual,
                                  inRightFirstIndex
                                  COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithNotEqualComparison (const GGS_uint & inLeftFirstIndex,
                                                                                const GGS_uint & inBitCount,
                                                                                const GGS_uint & inRightFirstIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  return binarySetWithComparison (inCompiler,
                                  inLeftFirstIndex,
                                  inBitCount,
                                  BinaryDecisionDiagram::kNotEqual,
                                  inRightFirstIndex
                                  COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithLowerOrEqualComparison (const GGS_uint & inLeftFirstIndex,
                                                                                    const GGS_uint & inBitCount,
                                                                                    const GGS_uint & inRightFirstIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  return binarySetWithComparison (inCompiler,
                                  inLeftFirstIndex,
                                  inBitCount,
                                  BinaryDecisionDiagram::kLowerOrEqual,
                                  inRightFirstIndex
                                  COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithGreaterOrEqualComparison (const GGS_uint & inLeftFirstIndex,
                                                                                      const GGS_uint & inBitCount,
                                                                                      const GGS_uint & inRightFirstIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  return binarySetWithComparison (inCompiler,
                                  inLeftFirstIndex,
                                  inBitCount,
                                  BinaryDecisionDiagram::kGreaterOrEqual,
                                  inRightFirstIndex
                                  COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithStrictLowerComparison (const GGS_uint & inLeftFirstIndex,
                                                                                   const GGS_uint & inBitCount,
                                                                                   const GGS_uint & inRightFirstIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  return binarySetWithComparison (inCompiler,
                                  inLeftFirstIndex,
                                  inBitCount,
                                  BinaryDecisionDiagram::kStrictLower,
                                  inRightFirstIndex
                                  COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithStrictGreaterComparison (const GGS_uint & inLeftFirstIndex,
                                                                                     const GGS_uint & inBitCount,
                                                                                     const GGS_uint & inRightFirstIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  return binarySetWithComparison (inCompiler,
                                  inLeftFirstIndex,
                                  inBitCount,
                                  BinaryDecisionDiagram::kStrictGreater,
                                  inRightFirstIndex
                                  COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static GGS_binaryset binarySetWithComparisonWithConstant (Compiler * inCompiler,
                                                             const GGS_uint & inBitIndex,
                                                             const GGS_uint & inBitCount,
                                                             const BinaryDecisionDiagram::compareEnum inComparison,
                                                             const GGS_uint_36__34_ & inConstant
                                                             COMMA_LOCATION_ARGS) {
  GGS_binaryset result ;
  if ((inBitIndex.isValid ()) && inBitCount.isValid () && (inConstant.isValid ())) {
    const uint64_t maxLeft = ((uint64_t) inBitIndex.uintValue ()) + inBitCount.uintValue () ;
    if (maxLeft > UINT32_MAX) {
      inCompiler->onTheFlyRunTimeError ("left operand upper bit is greater than 2**31-1" COMMA_THERE) ;
    }else {
      result = GGS_binaryset (BinaryDecisionDiagram::varCompareConst (inBitIndex.uintValue (),
                                 inBitCount.uintValue (),
                                 inComparison,
                                 inConstant.uint64Value ())) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithEqualToConstant (const GGS_uint & inBitIndex,
                                                                             const GGS_uint & inBitCount,
                                                                             const GGS_uint_36__34_ & inConstant,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  return binarySetWithComparisonWithConstant (inCompiler,
                                              inBitIndex,
                                              inBitCount,
                                              BinaryDecisionDiagram::kEqual,
                                              inConstant
                                              COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithNotEqualToConstant (const GGS_uint & inBitIndex,
                                                                                const GGS_uint & inBitCount,
                                                                                const GGS_uint_36__34_ & inConstant,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  return binarySetWithComparisonWithConstant (inCompiler,
                                              inBitIndex,
                                              inBitCount,
                                              BinaryDecisionDiagram::kNotEqual,
                                              inConstant
                                              COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithLowerOrEqualToConstant (const GGS_uint & inBitIndex,
                                                                                    const GGS_uint & inBitCount,
                                                                                    const GGS_uint_36__34_ & inConstant,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  return binarySetWithComparisonWithConstant (inCompiler,
                                              inBitIndex,
                                              inBitCount,
                                              BinaryDecisionDiagram::kLowerOrEqual,
                                              inConstant
                                              COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithStrictLowerThanConstant (const GGS_uint & inBitIndex,
                                                                                     const GGS_uint & inBitCount,
                                                                                     const GGS_uint_36__34_ & inConstant,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  return binarySetWithComparisonWithConstant (inCompiler,
                                              inBitIndex,
                                              inBitCount,
                                              BinaryDecisionDiagram::kStrictLower,
                                              inConstant
                                              COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithGreaterOrEqualToConstant (const GGS_uint & inBitIndex,
                                                                                      const GGS_uint & inBitCount,
                                                                                      const GGS_uint_36__34_ & inConstant,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  return binarySetWithComparisonWithConstant (inCompiler,
                                              inBitIndex,
                                              inBitCount,
                                              BinaryDecisionDiagram::kGreaterOrEqual,
                                              inConstant
                                              COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::class_func_binarySetWithStrictGreaterThanConstant (const GGS_uint & inBitIndex,
                                                                                       const GGS_uint & inBitCount,
                                                                                       const GGS_uint_36__34_ & inConstant,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  return binarySetWithComparisonWithConstant (inCompiler,
                                              inBitIndex,
                                              inBitCount,
                                              BinaryDecisionDiagram::kStrictGreater,
                                              inConstant
                                              COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Operators
#endif

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::operator_xor (const GGS_binaryset & inOperand2
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_binaryset (mBDD.notEqualTo (inOperand2.mBDD)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::operator_and (const GGS_binaryset & inOperand2
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_binaryset (mBDD & inOperand2.mBDD) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::operator_or (const GGS_binaryset & inOperand2
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_binaryset (mBDD | inOperand2.mBDD) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid ()) {
    result = GGS_binaryset (~ mBDD) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryset::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@binaryset: ") ;
  if (isValid ()) {
    if (mBDD.isFalse ()){
      ioString.appendCString ("false") ;
    }else if (mBDD.isTrue ()){
      ioString.appendCString ("true") ;
    }else{
      TC_UniqueArray <String> stringArray ;
      mBDD.buildCompressedBigEndianStringValueArray (stringArray COMMA_HERE) ;
      for (int32_t i=0 ; i<stringArray.count () ; i++) {
        if (i != 0) {
          ioString.appendCString (", ") ;
        }
        ioString.appendString (stringArray (i COMMA_HERE)) ;
      }
    }
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryset::getter_containsValue (const GGS_uint_36__34_ & inValue,
                                                    const GGS_uint & inFirstBit,
                                                    const GGS_uint & inBitCount
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inValue.isValid () && inFirstBit.isValid () && inBitCount.isValid ()) {
     const uint64_t value = inValue.uint64Value () ;
     const uint32_t firstBit = inFirstBit.uintValue () ;
     const uint32_t bitCount = inBitCount.uintValue () ;
     result = GGS_bool (mBDD.containsValue64 (value, firstBit, bitCount)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_ITE (const GGS_binaryset & inTHENoperand,
                                               const GGS_binaryset & inELSEoperand
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inTHENoperand.isValid () && inELSEoperand.isValid ()) {
    result = GGS_binaryset (BinaryDecisionDiagram::ite (mBDD, inTHENoperand.mBDD, inELSEoperand.mBDD)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_implies (const GGS_binaryset & inOperand
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_binaryset ((~ mBDD) | inOperand.mBDD) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_equalTo (const GGS_binaryset & inOperand
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_binaryset (mBDD.equalTo (inOperand.mBDD)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_notEqualTo (const GGS_binaryset & inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_binaryset (mBDD.notEqualTo (inOperand.mBDD)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_lowerOrEqualTo (const GGS_binaryset & inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_binaryset (mBDD.lowerOrEqual (inOperand.mBDD)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_greaterOrEqualTo (const GGS_binaryset & inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_binaryset (mBDD.greaterOrEqual (inOperand.mBDD)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_strictLowerThan (const GGS_binaryset & inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_binaryset (mBDD.lowerThan (inOperand.mBDD)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_strictGreaterThan (const GGS_binaryset & inOperand
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_binaryset (mBDD.greaterThan (inOperand.mBDD)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryset::getter_isFull (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mBDD.isTrue ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryset::getter_isEmpty (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mBDD.isFalse ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_binaryset::getter_significantVariableCount (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mBDD.significantVariableCount ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_binaryset::getter_valueCount (const GGS_uint & inVariableCount,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inVariableCount.isValid ()) {
    if (mBDD.significantVariableCount () > inVariableCount.uintValue ()) {
      inCompiler->onTheFlyRunTimeError ("needed variable count is greater than variable count argument" COMMA_THERE) ;
    }else{
      result = GGS_uint_36__34_ (mBDD.valueCount64 (inVariableCount.uintValue ())) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_binaryset::getter_bigValueCount (const GGS_uint & inVariableCount,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inVariableCount.isValid ()) {
    if (mBDD.significantVariableCount () > inVariableCount.uintValue ()) {
      inCompiler->onTheFlyRunTimeError ("needed variable count is greater than variable count argument" COMMA_THERE) ;
    }else{
      const UInt128 r = mBDD.valueCount128 (inVariableCount.uintValue ()) ;
      const uint64_t u64Array [2] = {r.high (), r.low ()} ;
      result = GGS_bigint (BigSigned (true, 2, u64Array)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_binaryset::getter_compressedValueCount (UNUSED_LOCATION_ARGS) const {
  TC_UniqueArray <String> valuesArray ;
  mBDD.buildCompressedLittleEndianStringValueArray (valuesArray COMMA_HERE) ;
  return GGS_uint_36__34_ ((uint32_t) valuesArray.count ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_binaryset::getter_uint_36__34_ValueList (const GGS_uint & inVariableCount
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_list result ;
  if (isValid () && inVariableCount.isValid ()) {
    TC_UniqueArray <uint64_t> valuesArray ;
    mBDD.buildValue64Array (valuesArray, inVariableCount.uintValue ()) ;
    result = GGS_uint_36__34_list::class_func_emptyList (THERE) ;
    for (int32_t i=0 ; i<valuesArray.count () ; i++) {
      const uint64_t v = valuesArray (i COMMA_HERE) ;
      result.addAssign_operation (GGS_uint_36__34_ (v) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_binaryset::getter_stringValueListWithNameList (const GGS_uint & inVariableCount,
                                                                        const GGS_stringlist & inStringList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inVariableCount.isValid () && inStringList.isValid ()) {
    TC_UniqueArray <uint64_t> valuesArray ;
    mBDD.buildValue64Array (valuesArray, inVariableCount.uintValue ()) ;
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    for (int32_t i=0 ; i<valuesArray.count () ; i++) {
      const uint32_t v = (uint32_t) (valuesArray (i COMMA_HERE) & UINT32_MAX) ;
      GGS_uint object = GGS_uint (v) ;
      result.addAssign_operation (inStringList.getter_mValueAtIndex (object, inCompiler COMMA_HERE) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_binaryset::getter_compressedStringValueList (const GGS_uint & inVariableCount,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inVariableCount.isValid ()) {
    const uint32_t variableCount = inVariableCount.uintValue () ;
    const uint32_t actualVariableCount = mBDD.significantVariableCount () ;
    if (actualVariableCount > variableCount) {
      String message ;
      message.appendCString ("variable count argument (") ;
      message.appendSigned (variableCount) ;
      message.appendCString (") is lower than actual variable count (") ;
      message.appendSigned (actualVariableCount) ;
      message.appendCString ("); it should be greater or equal") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      TC_UniqueArray <String> valuesArray ;
      mBDD.buildCompressedBigEndianStringValueArray (valuesArray, variableCount COMMA_THERE) ;
      result = GGS_stringlist::class_func_emptyList (THERE) ;
      for (int32_t i=0 ; i<valuesArray.count () ; i++) {
        const String v = valuesArray (i COMMA_HERE) ;
        result.addAssign_operation (GGS_string (v) COMMA_HERE) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_binaryset::getter_stringValueList (const GGS_uint & inVariableCount
                                                            COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inVariableCount.isValid ()) {
    TC_UniqueArray <String> valuesArray ;
    mBDD.buildBigEndianStringValueArray (valuesArray, inVariableCount.uintValue ()) ;
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    for (int32_t i=0 ; i<valuesArray.count () ; i++) {
      const String v = valuesArray (i COMMA_HERE) ;
      result.addAssign_operation (GGS_string (v) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_binaryset::getter_predicateStringValue (LOCATION_ARGS) const {
  return GGS_string (mBDD.queryStringValue (THERE)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_forAllOnBitIndex (const GGS_uint & inVariableIndex
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid()) {
    result = GGS_binaryset (mBDD.forallOnBitNumber (inVariableIndex.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_forAllOnBitIndexAndBeyond (const GGS_uint & inVariableIndex
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid ()) {
    result = GGS_binaryset (mBDD.forallOnBitsAfterNumber (inVariableIndex.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_existOnBitIndex (const GGS_uint & inVariableIndex
                                                           COMMA_UNUSED_LOCATION_ARGS)const  {
  GGS_binaryset result ;
  if (isValid ()) {
    result = GGS_binaryset (mBDD.existsOnBitNumber (inVariableIndex.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_existOnBitIndexAndBeyond (const GGS_uint & inVariableIndex
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inVariableIndex.isValid ()) {
    result = GGS_binaryset (mBDD.existsOnBitsAfterNumber (inVariableIndex.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_binaryset::getter_print (const GGS_stringlist & inVariableList,
                                              const GGS_uintlist & inBDDCount
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inVariableList.isValid () && inBDDCount.isValid ()) {
    TC_UniqueArray <String> variablesNames ;
    TC_UniqueArray <int32_t> bitCounts ;
    cEnumerator_stringlist variableEnumerator (inVariableList, EnumerationOrder::up) ;
    cEnumerator_uintlist bddCountEnumerator (inBDDCount, EnumerationOrder::up) ;
    while (variableEnumerator.hasCurrentObject () && bddCountEnumerator.hasCurrentObject ()) {
      const String name = variableEnumerator.current_mValue (HERE).stringValue () ;
      variablesNames.appendObject (name) ;
      const uint32_t bddCount = bddCountEnumerator.current_mValue (HERE).uintValue () ;
      bitCounts.appendObject ((int32_t) bddCount) ;
      variableEnumerator.gotoNextObject () ;
      bddCountEnumerator.gotoNextObject () ;
    }
    String s ;
    mBDD.print (s, variablesNames, bitCounts) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_transformedBy (const GGS_uintlist & inTransformationArray
                                                         COMMA_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inTransformationArray.isValid ()) {
    uint32_t * substitutionArray = nullptr ;
    macroMyNewPODArray (substitutionArray, uint32_t, inTransformationArray.count ()) ;
    cEnumerator_uintlist enumerator (inTransformationArray, EnumerationOrder::up) ;
    uint32_t idx = 0 ;
    while (enumerator.hasCurrentObject ()) {
      const uint32_t value = enumerator.current_mValue (HERE).uintValue () ;
      substitutionArray [idx] = value ;
      idx ++ ;
      enumerator.gotoNextObject () ;
    }
    result = GGS_binaryset (mBDD.substitution (substitutionArray, idx COMMA_THERE)) ;
    macroMyDeletePODArray (substitutionArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_binaryset::getter_nodeCount (UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid ()) {
    result = GGS_uint_36__34_ (mBDD.getBDDnodesCount ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_binaryset::getter_graphviz (const GGS_stringlist & inBitNameList
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inBitNameList.isValid ()) {
    TC_UniqueArray <String> bitNameArray ;
    cEnumerator_stringlist variableEnumerator (inBitNameList, EnumerationOrder::up) ;
    while (variableEnumerator.hasCurrentObject ()) {
      const String name = variableEnumerator.current_mValue (HERE).stringValue () ;
      bitNameArray.appendObject (name) ;
      variableEnumerator.gotoNextObject () ;
    }
    result = GGS_string (mBDD.graphvizRepresentationWithNames (bitNameArray)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_binaryset::getter_graphvizDump (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mBDD.graphvizRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_swap_31__30_ (const GGS_uint & inBitCount1,
                                                        const GGS_uint & inBitCount2
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inBitCount1.isValid () && inBitCount2.isValid ()) {
    const uint32_t bitSize1 = inBitCount1.uintValue () ;
    const uint32_t bitSize2 = inBitCount2.uintValue () ;
    result = GGS_binaryset (mBDD.swap10 (bitSize1, bitSize2)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_swap_30__32__31_ (const GGS_uint & inBitCount1,
                                                            const GGS_uint & inBitCount2,
                                                            const GGS_uint & inBitCount3
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inBitCount1.isValid () && inBitCount2.isValid () && inBitCount3.isValid ()) {
    const uint32_t bitSize1 = inBitCount1.uintValue () ;
    const uint32_t bitSize2 = inBitCount2.uintValue () ;
    const uint32_t bitSize3 = inBitCount3.uintValue () ;
    result = GGS_binaryset (mBDD.swap021  (bitSize1, bitSize2, bitSize3)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_swap_31__30__32_ (const GGS_uint & inBitCount1,
                                                            const GGS_uint & inBitCount2,
                                                            const GGS_uint & inBitCount3
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inBitCount1.isValid () && inBitCount2.isValid () && inBitCount3.isValid ()) {
    const uint32_t bitSize1 = inBitCount1.uintValue () ;
    const uint32_t bitSize2 = inBitCount2.uintValue () ;
    const uint32_t bitSize3 = inBitCount3.uintValue () ;
    result = GGS_binaryset (mBDD.swap102 (bitSize1, bitSize2, bitSize3)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_swap_31__32__30_ (const GGS_uint & inBitCount1,
                                                            const GGS_uint & inBitCount2,
                                                            const GGS_uint & inBitCount3
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inBitCount1.isValid () && inBitCount2.isValid () && inBitCount3.isValid ()) {
    const uint32_t bitSize1 = inBitCount1.uintValue () ;
    const uint32_t bitSize2 = inBitCount2.uintValue () ;
    const uint32_t bitSize3 = inBitCount3.uintValue () ;
    result = GGS_binaryset (mBDD.swap120 (bitSize1, bitSize2, bitSize3)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_swap_32__30__31_ (const GGS_uint & inBitCount1,
                                                            const GGS_uint & inBitCount2,
                                                            const GGS_uint & inBitCount3
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inBitCount1.isValid () && inBitCount2.isValid () && inBitCount3.isValid ()) {
    const uint32_t bitSize1 = inBitCount1.uintValue () ;
    const uint32_t bitSize2 = inBitCount2.uintValue () ;
    const uint32_t bitSize3 = inBitCount3.uintValue () ;
    result = GGS_binaryset (mBDD.swap210 (bitSize1, bitSize2, bitSize3)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_swap_32__31__30_ (const GGS_uint & inBitCount1,
                                                            const GGS_uint & inBitCount2,
                                                            const GGS_uint & inBitCount3
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inBitCount1.isValid () && inBitCount2.isValid () && inBitCount3.isValid ()) {
    const uint32_t bitSize1 = inBitCount1.uintValue () ;
    const uint32_t bitSize2 = inBitCount2.uintValue () ;
    const uint32_t bitSize3 = inBitCount3.uintValue () ;
    result = GGS_binaryset (mBDD.swap210 (bitSize1, bitSize2, bitSize3)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_transitiveClosure (const GGS_uint & inBitCount
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inBitCount.isValid ()) {
    const uint32_t bitCount = inBitCount.uintValue () ;
    result = GGS_binaryset (mBDD.transitiveClosure (bitCount, nullptr)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_accessibleStates (const GGS_binaryset & inInitialStateSet,
                                                            const GGS_uint & inBitCount
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
//--- Current object is edge [x, y].
//    Accessible states set is computed by:
// accessible [x] += initial [x] | exists y (accessible [y] & edge [y, x]) ;
  GGS_binaryset result ;
  if (isValid () && inInitialStateSet.isValid () && inBitCount.isValid ()) {
    result = GGS_binaryset (mBDD.accessibleStates (inInitialStateSet.mBDD,
                               inBitCount.uintValue (),
                               nullptr)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_binarySetByTranslatingFromIndex (const GGS_uint & inFirstIndexToTranslate,
                                                                           const GGS_uint & inTranslation
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inFirstIndexToTranslate.isValid () && (inTranslation.isValid ())) {
    const uint32_t varCount = mBDD.significantVariableCount () ;
    const uint32_t translation = inTranslation.uintValue () ;
    if ((varCount == 0) || (translation == 0)) {
      result = *this ;
    }else{
      const uint32_t firstIndex = inFirstIndexToTranslate.uintValue () ;
      uint32_t * substitionArray = nullptr ;
      macroMyNewArray (substitionArray, uint32_t, varCount) ;
      for (uint32_t i=0 ; i<varCount ; i++) {
        substitionArray [i] = i ;
      }
      for (uint32_t i=firstIndex ; i<varCount ; i++) {
        substitionArray [i] = (uint32_t) (substitionArray [i] + translation) ;
      }
      result = GGS_binaryset (mBDD.substitution (substitionArray, varCount COMMA_THERE)) ;
      macroMyDeleteArray (substitionArray) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_existsOnBitRange (const GGS_uint & inFirstIndex,
                                                            const GGS_uint & inCount
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inFirstIndex.isValid () && inCount.isValid ()) {
    const uint32_t varCount = mBDD.significantVariableCount () ;
    const uint32_t count = inCount.uintValue () ;
    if ((varCount == 0) || (count == 0)) {
      result = *this ;
    }else{
      const uint32_t firstIndex = inFirstIndex.uintValue () ;
      result = GGS_binaryset (mBDD.existsOnBitRange (firstIndex, count)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::getter_transposedBy (const class GGS_uintlist & inVector,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inVector.isValid ()) {
    const uint32_t varCount = inVector.count() ;
    uint32_t * substitionArray = nullptr ;
    macroMyNewArray (substitionArray, uint32_t, varCount) ;
    for (uint32_t i=0 ; i<varCount ; i++) {
      const GGS_uint v = inVector.getter_mValueAtIndex (GGS_uint (i), inCompiler COMMA_THERE) ;
      substitionArray [i] = v.uintValue () ;
    }
    result = GGS_binaryset (mBDD.substitution (substitionArray, varCount COMMA_THERE)) ;
    macroMyDeleteArray (substitionArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::left_shift_operation (const GGS_uint inLeftShiftCount,
                                                         class Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inLeftShiftCount.isValid ()) {
    result = GGS_binaryset (mBDD.bddByLeftShifting (inLeftShiftCount.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::left_shift_operation (const GGS_bigint inLeftShiftCount,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inLeftShiftCount.isValid ()) {
    if (inLeftShiftCount.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@binaryset left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_binaryset (mBDD.bddByLeftShifting (inLeftShiftCount.bigintValue().uint32 ())) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::right_shift_operation (const GGS_uint inRightShiftCount,
                                                          class Compiler * /* inCompiler*/
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inRightShiftCount.isValid ()) {
    result = GGS_binaryset (mBDD.bddByRightShifting (inRightShiftCount.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_binaryset::right_shift_operation (const GGS_bigint inRightShiftCount,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inRightShiftCount.isValid ()) {
    if (inRightShiftCount.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@binaryset right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_binaryset (mBDD.bddByRightShifting (inRightShiftCount.bigintValue ().uint32 ())) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binaryset::objectCompare (const GGS_binaryset & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mBDD.integerValue () < inOperand.mBDD.integerValue ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mBDD.integerValue () > inOperand.mBDD.integerValue ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryset::class_method_setNodeTableSize (class GGS_uint inTableSize
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (inTableSize.isValid ()) {
    BinaryDecisionDiagram::setHashMapMaxSize (inTableSize.uintValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryset::class_method_setAndTableSize (class GGS_uint inTableSize
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (inTableSize.isValid ()) {
    BinaryDecisionDiagram::setANDOperationCacheMaxSize (inTableSize.uintValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------
