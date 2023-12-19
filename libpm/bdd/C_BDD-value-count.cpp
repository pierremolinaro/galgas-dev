//--------------------------------------------------------------------------------------------------
//
//     BDD package (implementation of ROBDD)
//
//  This file is part of libpm library
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
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

#include "bdd/C_BDD.h"
#include "bdd/C_BDD-node.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Value Count (64)
#endif

//--------------------------------------------------------------------------------------------------

static void internalValueCount64 (const uint32_t inValue,
                                  const uint32_t inVariableCount,
                                  uint64_t & nombreDirect,
                                  uint64_t & nombreComplement
                                  COMMA_LOCATION_ARGS) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_THERE) ;
  if (bothBranches (gNodeArray [nodeIndex]) == 0) {
    nombreDirect = 0 ;
    nombreComplement = 1 ;
    for (uint32_t i=0 ; i<inVariableCount ; i++) {
      nombreComplement += nombreComplement ;
    }
  }else{
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    uint64_t nd0, nc0, nd1, nc1 ;
    internalValueCount64 (gNodeArray [nodeIndex].mELSE, var, nd0, nc0 COMMA_THERE) ;
    internalValueCount64 (gNodeArray [nodeIndex].mTHEN, var, nd1, nc1 COMMA_THERE) ;
    nombreDirect = nd0 + nd1 ;
    nombreComplement = nc0 + nc1 ;
    for (uint32_t i=(uint32_t) (var+1) ; i<inVariableCount ; i++) {
      nombreDirect += nombreDirect ;
      nombreComplement += nombreComplement ;
    }
  }
  if ((inValue & 1) != 0) {
    const uint64_t tempo = nombreDirect ;
    nombreDirect = nombreComplement ;
    nombreComplement = tempo ;
  }
}

//--------------------------------------------------------------------------------------------------

uint64_t C_BDD::valueCount64 (const uint32_t inVariableCount) const {
  uint64_t nombreDirect = 0 ;
  uint64_t nombreComplement = 0 ;
  internalValueCount64 (mBDDvalue, inVariableCount, nombreDirect, nombreComplement COMMA_HERE) ;
  return nombreDirect ;
}

//--------------------------------------------------------------------------------------------------

static void internalValueCount64UsingCache (const uint32_t inValue,
                                            const uint32_t inVariableCount,
                                            uint64_t & nombreDirect,
                                            uint64_t & nombreComplement,
                                            TC_UniqueArray <uint64_t> & ioDirectCacheArray,
                                            TC_UniqueArray <uint64_t> & ioComplementCacheArray
                                            COMMA_LOCATION_ARGS) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_THERE) ;
  if (bothBranches (gNodeArray [nodeIndex]) == 0) {
    nombreDirect = 0 ;
    nombreComplement = 1 << inVariableCount ;
  }else if ((ioDirectCacheArray.count () > (int32_t) (inValue / 2))
      && ((ioDirectCacheArray (inValue / 2 COMMA_HERE) != 0) || (ioComplementCacheArray (inValue / 2 COMMA_HERE) != 0))) {
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    nombreDirect = ioDirectCacheArray (inValue / 2 COMMA_HERE) << (inVariableCount - var - 1) ;
    nombreComplement = ioComplementCacheArray (inValue / 2 COMMA_HERE) << (inVariableCount - var - 1) ;
  }else{
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    uint64_t nd0, nc0, nd1, nc1 ;
    internalValueCount64UsingCache (gNodeArray [nodeIndex].mELSE, var, nd0, nc0, ioDirectCacheArray, ioComplementCacheArray COMMA_THERE) ;
    internalValueCount64UsingCache (gNodeArray [nodeIndex].mTHEN, var, nd1, nc1, ioDirectCacheArray, ioComplementCacheArray COMMA_THERE) ;
    nombreDirect = nd0 + nd1 ;
    nombreComplement = nc0 + nc1 ;
    ioDirectCacheArray.forceObjectAtIndex (inValue / 2, nombreDirect, 0 COMMA_HERE) ;
    ioComplementCacheArray.forceObjectAtIndex (inValue / 2, nombreComplement, 0 COMMA_HERE) ;
    nombreDirect <<= (inVariableCount - var - 1) ;
    nombreComplement <<= (inVariableCount - var - 1) ;
  }
//---
  if ((inValue & 1) != 0) {
    const uint64_t tempo = nombreDirect ;
    nombreDirect = nombreComplement ;
    nombreComplement = tempo ;
  }
}

//--------------------------------------------------------------------------------------------------

uint64_t C_BDD::valueCount64UsingCache (const uint32_t inVariableCount,
                                        TC_UniqueArray <uint64_t> & ioDirectCacheArray,
                                        TC_UniqueArray <uint64_t> & ioComplementCacheArray) const {
  uint64_t nombreDirect = 0 ;
  uint64_t nombreComplement = 0 ;
  internalValueCount64UsingCache (mBDDvalue, inVariableCount, nombreDirect, nombreComplement, ioDirectCacheArray, ioComplementCacheArray COMMA_HERE) ;
  return nombreDirect ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Value Count (128)
#endif

//--------------------------------------------------------------------------------------------------

static void internalValueCount128 (const uint32_t inValue,
                                   const uint32_t inVariableCount,
                                   PMUInt128 & nombreDirect,
                                   PMUInt128 & nombreComplement
                                   COMMA_LOCATION_ARGS) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_THERE) ;
  if (bothBranches (gNodeArray [nodeIndex]) == 0) {
    nombreDirect = 0 ;
    nombreComplement = 1 ;
    for (uint32_t i=0 ; i<inVariableCount ; i++) {
      nombreComplement += nombreComplement ;
    }
  }else{
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    PMUInt128 nd0, nc0, nd1, nc1 ;
    internalValueCount128 (gNodeArray [nodeIndex].mELSE, var, nd0, nc0 COMMA_THERE) ;
    internalValueCount128 (gNodeArray [nodeIndex].mTHEN, var, nd1, nc1 COMMA_THERE) ;
    nombreDirect = nd0 + nd1 ;
    nombreComplement = nc0 + nc1 ;
    for (uint32_t i=(uint32_t) (var+1) ; i<inVariableCount ; i++) {
      nombreDirect += nombreDirect ;
      nombreComplement += nombreComplement ;
    }
  }
  if ((inValue & 1) != 0) {
    const PMUInt128 tempo = nombreDirect ;
    nombreDirect = nombreComplement ;
    nombreComplement = tempo ;
  }
}

//--------------------------------------------------------------------------------------------------

PMUInt128 C_BDD::valueCount128 (const uint32_t inVariableCount) const {
  PMUInt128 nombreDirect = 0 ;
  PMUInt128 nombreComplement = 0 ;
  internalValueCount128 (mBDDvalue, inVariableCount, nombreDirect, nombreComplement COMMA_HERE) ;
  return nombreDirect ;
}

//--------------------------------------------------------------------------------------------------

static void internalValueCount128UsingCache (const uint32_t inValue,
                                             const uint32_t inVariableCount,
                                             PMUInt128 & nombreDirect,
                                             PMUInt128 & nombreComplement,
                                             TC_UniqueArray <PMUInt128> & ioDirectCacheArray,
                                             TC_UniqueArray <PMUInt128> & ioComplementCacheArray
                                             COMMA_LOCATION_ARGS) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_THERE) ;
  if (bothBranches (gNodeArray [nodeIndex]) == 0) {
    nombreDirect = 0 ;
    nombreComplement = 1 << inVariableCount ;
  }else if ((ioDirectCacheArray.count () > (int32_t) (inValue / 2))
    && (((ioDirectCacheArray (inValue / 2 COMMA_HERE) != 0) || (ioComplementCacheArray (inValue / 2 COMMA_HERE) != 0)))) {
    nombreDirect = ioDirectCacheArray (inValue / 2 COMMA_HERE) ;
    nombreComplement = ioComplementCacheArray (inValue / 2 COMMA_HERE) ;
  }else{
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    PMUInt128 nd0, nc0, nd1, nc1 ;
    internalValueCount128UsingCache (gNodeArray [nodeIndex].mELSE, var, nd0, nc0, ioDirectCacheArray, ioComplementCacheArray COMMA_THERE) ;
    internalValueCount128UsingCache (gNodeArray [nodeIndex].mTHEN, var, nd1, nc1, ioDirectCacheArray, ioComplementCacheArray COMMA_THERE) ;
    nombreDirect = nd0 + nd1 ;
    nombreComplement = nc0 + nc1 ;
    for (uint32_t i=(uint32_t) (var+1) ; i<inVariableCount ; i++) {
      nombreDirect += nombreDirect ;
      nombreComplement += nombreComplement ;
    }
    ioDirectCacheArray.forceObjectAtIndex (int32_t (inValue / 2), nombreDirect, 0 COMMA_HERE) ;
    ioComplementCacheArray.forceObjectAtIndex (int32_t (inValue / 2), nombreComplement, 0 COMMA_HERE) ;
  }
  if ((inValue & 1) != 0) {
    const PMUInt128 tempo = nombreDirect ;
    nombreDirect = nombreComplement ;
    nombreComplement = tempo ;
  }
}

//--------------------------------------------------------------------------------------------------

PMUInt128 C_BDD::valueCount128UsingCache (const uint32_t inVariableCount,
                                          TC_UniqueArray <PMUInt128> & ioDirectCacheArray,
                                          TC_UniqueArray <PMUInt128> & ioComplementCacheArray) const {
  PMUInt128 nombreDirect = 0 ;
  PMUInt128 nombreComplement = 0 ;
  internalValueCount128UsingCache (mBDDvalue, inVariableCount, nombreDirect, nombreComplement, ioDirectCacheArray, ioComplementCacheArray COMMA_HERE) ;
  return nombreDirect ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Value Count (Big ints)
#endif

//--------------------------------------------------------------------------------------------------

static void internalValueCount (const uint32_t inValue,
                                const uint32_t inVariableCount,
                                BigSigned & nombreDirect,
                                BigSigned & nombreComplement
                                COMMA_LOCATION_ARGS) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_THERE) ;
  if (bothBranches (gNodeArray [nodeIndex]) == 0) {
    nombreDirect = BigSigned () ; //.setToZero () ;
    nombreComplement = BigSigned (true, 1) ;
    nombreComplement <<= inVariableCount ;
  }else{
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    BigSigned nd0, nc0, nd1, nc1 ;
    internalValueCount (gNodeArray [nodeIndex].mELSE, var, nd0, nc0 COMMA_THERE) ;
    internalValueCount (gNodeArray [nodeIndex].mTHEN, var, nd1, nc1 COMMA_THERE) ;
    nombreDirect = nd0 + nd1 ;
    nombreComplement = nc0 + nc1 ;
    const int32_t shiftCount = ((int32_t) inVariableCount) - ((int32_t) var) - 1 ;
    if (shiftCount > 0) {
      nombreDirect <<= (uint32_t) shiftCount ;
      nombreComplement <<= (uint32_t) shiftCount ;
    }
  }
  if ((inValue & 1) != 0) {
    swap (nombreDirect, nombreComplement) ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned C_BDD::valueCount (const uint32_t inVariableCount) const {
  BigSigned nombreDirect ;
  BigSigned nombreComplement ;
  internalValueCount (mBDDvalue, inVariableCount, nombreDirect, nombreComplement COMMA_HERE) ;
  return nombreDirect ;
}

//--------------------------------------------------------------------------------------------------

static void internalValueCountUsingCache (const uint32_t inValue,
                                          const uint32_t inVariableCount,
                                          BigSigned & nombreDirect,
                                          BigSigned & nombreComplement,
                                          TC_UniqueArray <BigSigned> & ioDirectCacheArray,
                                          TC_UniqueArray <BigSigned> & ioComplementCacheArray
                                          COMMA_LOCATION_ARGS) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_THERE) ;
  if (bothBranches (gNodeArray [nodeIndex]) == 0) {
    nombreDirect = BigSigned () ; // .setToZero () ;
    nombreComplement = BigSigned (true, 1) ;
    nombreComplement <<= inVariableCount ;
  }else if ((ioDirectCacheArray.count () > (int32_t) (inValue / 2))
    && (((!ioDirectCacheArray (inValue / 2 COMMA_HERE).isZero ()) || (!ioComplementCacheArray (inValue / 2 COMMA_HERE).isZero())))) {
    nombreDirect = ioDirectCacheArray (inValue / 2 COMMA_HERE) ;
    nombreComplement = ioComplementCacheArray (inValue / 2 COMMA_HERE) ;
  }else{
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    BigSigned nd0, nc0, nd1, nc1 ;
    internalValueCountUsingCache (gNodeArray [nodeIndex].mELSE, var, nd0, nc0, ioDirectCacheArray, ioComplementCacheArray COMMA_THERE) ;
    internalValueCountUsingCache (gNodeArray [nodeIndex].mTHEN, var, nd1, nc1, ioDirectCacheArray, ioComplementCacheArray COMMA_THERE) ;
    nombreDirect = nd0 + nd1 ;
    nombreComplement = nc0 + nc1 ;
    const int32_t shiftCount = ((int32_t) inVariableCount) - ((int32_t) var) - 1 ;
    if (shiftCount > 0) {
      nombreDirect <<= (uint32_t) shiftCount ;
      nombreComplement <<= (uint32_t) shiftCount ;
    }
    ioDirectCacheArray.forceObjectAtIndex (inValue / 2, nombreDirect, BigSigned () COMMA_HERE) ;
    ioComplementCacheArray.forceObjectAtIndex (inValue / 2, nombreComplement, BigSigned () COMMA_HERE) ;
  }
  if ((inValue & 1) != 0) {
    swap (nombreDirect, nombreComplement) ;
  }
}

//--------------------------------------------------------------------------------------------------

BigSigned C_BDD::valueCountUsingCache (const uint32_t inVariableCount,
                                      TC_UniqueArray <BigSigned> & ioDirectCacheArray,
                                      TC_UniqueArray <BigSigned> & ioComplementCacheArray) const {
  BigSigned nombreDirect ;
  BigSigned nombreComplement ;
  internalValueCountUsingCache (mBDDvalue, inVariableCount, nombreDirect, nombreComplement, ioDirectCacheArray, ioComplementCacheArray COMMA_HERE) ;
  return nombreDirect ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Get i-th value as BDD
#endif

//--------------------------------------------------------------------------------------------------

static C_BDD
obtenirIemeBDDinterne (const uint32_t inValue,
                       const uint64_t inNthBDDvalue,
                       const uint32_t inVariableCount) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_HERE) ;
  const uint32_t complement = inValue & 1 ;
  uint64_t iEme ;
  C_BDD result ;
  if (bothBranches (gNodeArray [nodeIndex]) == 0) {
    if (complement == 1) { // Decomposer inNthBDDvalue en binaire
      result = ~ result ;
      iEme = inNthBDDvalue ;
      for (uint32_t i=0 ; i<inVariableCount ; i++) {
        result = result & C_BDD (i, ((iEme & 1) == 0) ? false : true) ;
        iEme >>= 1 ;
      }
    }
  }else{
    result = ~ result ;
    const uint32_t var = gNodeArray [nodeIndex].mVariableIndex ;
    uint64_t nd0 = 0UL ;
    uint64_t nc0 = 0UL ; // Non utilise ici
    internalValueCount64 (gNodeArray [nodeIndex].mELSE ^ complement, inVariableCount - 1, nd0, nc0 COMMA_HERE) ;
    uint64_t nd1 = 0UL ;
    uint64_t nc1 = 0UL ; // Non utilise ici
    internalValueCount64 (gNodeArray [nodeIndex].mTHEN ^ complement, inVariableCount - 1, nd1, nc1 COMMA_HERE) ;
    uint64_t total = nd0 + nd1 ;
    for (uint32_t i = (uint32_t) (inVariableCount-1) ; i>var ; i--) {
      total >>= 1 ;
      nd0 >>= 1 ;
    }
    iEme = inNthBDDvalue % total ;
    uint64_t quotient = inNthBDDvalue / total ;
    for (uint32_t j = (uint32_t) (var+1) ; j<inVariableCount ; j++) {
      result = result & C_BDD (j, ((quotient & 1) == 0) ? false : true) ;
      quotient >>= 1 ;
    }
    if (iEme < nd0) {
      result = result & C_BDD (var, false) & obtenirIemeBDDinterne (gNodeArray [nodeIndex].mELSE ^ complement, iEme, var) ;
    }else if (iEme < total) {
      result = result & C_BDD (var, true) & obtenirIemeBDDinterne (gNodeArray [nodeIndex].mTHEN ^ complement, iEme - nd0, var) ;
    }else{
      result = C_BDD () ; // Vide
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

C_BDD C_BDD::getNthBDD (const uint64_t inNthBDDvalue,
                        const uint32_t inVariableCount) const {
  return obtenirIemeBDDinterne (mBDDvalue, inNthBDDvalue, inVariableCount) ;
}


//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark BDD range
#endif

//--------------------------------------------------------------------------------------------------

static uint64_t
rangBDDinterne (const uint32_t inValue,
                const uint32_t valeurTestee,
                const uint32_t inVariableCount) {
  const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_HERE) ;
  const uint32_t testedValueNodeIndex = nodeIndexForRoot (valeurTestee COMMA_HERE) ;
  const uint32_t complementValeurTestee = valeurTestee & 1 ;
  const uint32_t complement = inValue & 1 ;
  uint64_t rang = 0 ;
  uint64_t nc ; // non utilise
  if (bothBranches (gNodeArray [testedValueNodeIndex]) == 0) {
  }else if ((gNodeArray [testedValueNodeIndex].mELSE ^ complementValeurTestee) == 0) {
    if ((gNodeArray [nodeIndex].mTHEN == 0) && (gNodeArray [nodeIndex].mELSE == 0)) {
      rang = 1UL << gNodeArray [testedValueNodeIndex].mVariableIndex ;
      rang += rangBDDinterne (inValue, gNodeArray [testedValueNodeIndex].mTHEN ^ complementValeurTestee, inVariableCount - 1) ;
    }else if (gNodeArray [nodeIndex].mVariableIndex == gNodeArray [testedValueNodeIndex].mVariableIndex) {
      internalValueCount64 (gNodeArray [nodeIndex].mELSE ^ complement, inVariableCount - 1, rang, nc COMMA_HERE) ;
      rang += rangBDDinterne (gNodeArray [nodeIndex].mTHEN ^ complement, gNodeArray [testedValueNodeIndex].mTHEN ^ complementValeurTestee, inVariableCount - 1) ;
    }else{
      internalValueCount64 (inValue, inVariableCount - 1, rang, nc COMMA_HERE) ;
      rang += rangBDDinterne (inValue, gNodeArray [testedValueNodeIndex].mTHEN ^ complementValeurTestee, inVariableCount - 1) ;
    }
  }else{
    if ((gNodeArray [nodeIndex].mTHEN == 0) && (gNodeArray [nodeIndex].mELSE == 0)) {
      rang = rangBDDinterne (inValue, gNodeArray [testedValueNodeIndex].mELSE ^ complementValeurTestee, inVariableCount - 1) ;
    }else if (gNodeArray [nodeIndex].mVariableIndex == gNodeArray [testedValueNodeIndex].mVariableIndex) {
      rang = rangBDDinterne (gNodeArray [nodeIndex].mELSE ^ complement, gNodeArray [testedValueNodeIndex].mELSE ^ complementValeurTestee, inVariableCount - 1) ;
    }else{
      rang = rangBDDinterne (inValue, gNodeArray [testedValueNodeIndex].mELSE ^ complementValeurTestee, inVariableCount - 1) ;
    }
  }
  return rang ;
}

//--------------------------------------------------------------------------------------------------

uint64_t C_BDD::
getBDDrange (const C_BDD & inOperand,
             const uint32_t inVariableCount) const {
  uint64_t rang = 0 ;
  if (inOperand.valueCount64 (inVariableCount) == 1) {
    rang = rangBDDinterne (mBDDvalue, inOperand.mBDDvalue, inVariableCount) ;
  }
  return rang ;
}

//--------------------------------------------------------------------------------------------------
