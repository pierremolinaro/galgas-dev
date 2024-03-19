//
//  BinaryDecisionDiagramRelation.cpp
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//--------------------------------------------------------------------------------------------------

#include "BinaryDecisionDiagramRelation.h"
#include "SharedObject.h"

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation::BinaryDecisionDiagramRelation (void) :
mConfiguration (),
mBDD () {
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation::BinaryDecisionDiagramRelation (const BinaryDecisionDiagramRelationConfiguration & inConfiguration,
                        const BinaryDecisionDiagram inBDD) :
mConfiguration (inConfiguration),
mBDD (inBDD) {
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation::BinaryDecisionDiagramRelation (const BinaryDecisionDiagramRelationConfiguration & inConfiguration,
                        const bool inIsFull) :
mConfiguration (inConfiguration),
mBDD () {
  if (inIsFull) {
    mBDD.setToTrue () ;
  }
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation::BinaryDecisionDiagramRelation (const String & inVariableName,
                        const BinaryDecisionDiagramRelationSingleType & inVariableType,
                        const bool inIsFull) :
mConfiguration (),
mBDD () {
  if (inIsFull) {
    mBDD.setToTrue () ;
  }
  mConfiguration.addVariable (inVariableName, inVariableType) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation::~BinaryDecisionDiagramRelation (void) {
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation::BinaryDecisionDiagramRelation (const BinaryDecisionDiagramRelation & inSource) :
mConfiguration (inSource.mConfiguration),
mBDD (inSource.mBDD) {
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation & BinaryDecisionDiagramRelation::operator = (const BinaryDecisionDiagramRelation & inSource) {
  if (this != & inSource) {
    mConfiguration = inSource.mConfiguration ;
    mBDD = inSource.mBDD ;
  }
  return *this ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelation::addVariable (const String & inVariableName,
                              const BinaryDecisionDiagramRelationSingleType & inType) {
  mConfiguration.addVariable (inVariableName, inType) ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelation::appendConfiguration (const BinaryDecisionDiagramRelationConfiguration & inConfiguration) {
  mConfiguration.appendConfiguration (inConfiguration) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationConfiguration BinaryDecisionDiagramRelation::configuration (void) const {
  return mConfiguration ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagram BinaryDecisionDiagramRelation::bdd (void) const {
  return mBDD ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelation::setToEmpty (void) {
  mBDD.setToFalse () ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelation::setToFull (void) {
  mBDD.setToTrue () ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation::BinaryDecisionDiagramRelation (const BinaryDecisionDiagramRelationConfiguration & inConfiguration,
                        const int32_t inVariableIndex,
                        const BinaryDecisionDiagram::compareEnum inComparaison,
                        const uint64_t inConstant
                        COMMA_LOCATION_ARGS) :
mConfiguration (inConfiguration),
mBDD () {
  mBDD = BinaryDecisionDiagram::varCompareConst (inConfiguration.bddStartBitIndexForVariable (inVariableIndex COMMA_THERE),
                                 inConfiguration.bddBitCountForVariable (inVariableIndex COMMA_THERE),
                                 inComparaison,
                                 inConstant) ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelation::andWith (const BinaryDecisionDiagramRelation & inRelation COMMA_LOCATION_ARGS) {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration COMMA_THERE) ;
  mBDD &= inRelation.mBDD ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelation::orWith (const BinaryDecisionDiagramRelation & inRelation COMMA_LOCATION_ARGS) {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration COMMA_THERE) ;
  mBDD |= inRelation.mBDD ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::andOp (const BinaryDecisionDiagramRelation & inRelation COMMA_LOCATION_ARGS) const {
  BinaryDecisionDiagramRelation result = *this ;
  result.andWith (inRelation COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::orOp (const BinaryDecisionDiagramRelation & inRelation COMMA_LOCATION_ARGS) const {
  BinaryDecisionDiagramRelation result = *this ;
  result.orWith (inRelation COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::operator ~ (void) const {
  BinaryDecisionDiagramRelation result = *this ;
  result.mBDD.negate () ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::accessibleStatesFrom (const BinaryDecisionDiagramRelation & inStartStates,
                                             int32_t * outIterationCount
                                             COMMA_LOCATION_ARGS) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    const int32_t startRelationVariableCount = inStartStates.variableCount () ;
    const int32_t accessibilityVariableCount = variableCount () ;
  #endif
  macroAssertThere ((startRelationVariableCount + startRelationVariableCount) == accessibilityVariableCount,
                  "BinaryDecisionDiagramRelation::accessibleStatesFrom error: start state has %lld variables, accessibility relation has %lld variables",
                  (int64_t) startRelationVariableCount,
                  (int64_t) accessibilityVariableCount) ;
  return BinaryDecisionDiagramRelation (
    inStartStates.configuration(),
    mBDD.accessibleStates (inStartStates.mBDD, inStartStates.bitCount (), outIterationCount)
  ) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::transitiveClosure (int32_t * outIterationCount) const {
  return BinaryDecisionDiagramRelation (
    mConfiguration,
    mBDD.transitiveClosure (bitCount () / 2, outIterationCount)
  ) ;
}

//--------------------------------------------------------------------------------------------------

bool BinaryDecisionDiagramRelation::containsValue (const int32_t inVariableIndex,
                                const uint64_t inValue
                                COMMA_LOCATION_ARGS) const {
  return mBDD.containsValue64 (inValue,
                               mConfiguration.bddStartBitIndexForVariable (inVariableIndex COMMA_THERE),
                               mConfiguration.bddBitCountForVariable (inVariableIndex COMMA_THERE)) ;
}

//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelation::getValueArray (TC_UniqueArray <uint64_t> & outArray) const {
  mBDD.buildValue64Array (outArray, mConfiguration.bitCount ()) ;
}

//--------------------------------------------------------------------------------------------------

uint64_t BinaryDecisionDiagramRelation::value64Count (void) const {
  return mBDD.valueCount64 (mConfiguration.bitCount ()) ;
}

//--------------------------------------------------------------------------------------------------
//   getArray
//--------------------------------------------------------------------------------------------------

void BinaryDecisionDiagramRelation::getArray (TC_UniqueArray <TC_UniqueArray <uint64_t> > & outArray
                           COMMA_LOCATION_ARGS) const {
  macroAssertThere (variableCount () == 2,
                  "BinaryDecisionDiagramRelation::getArray error: variableCount () == %lld != 2",
                  (int64_t) variableCount (),
                  0) ;

  const uint32_t bitCount0 = mConfiguration.bddBitCountForVariable (0 COMMA_THERE) ;
  const uint32_t bitCount1 = mConfiguration.bddBitCountForVariable (1 COMMA_THERE) ;
  const uint32_t size0 = mConfiguration.constantCountForVariable (0 COMMA_THERE) ;
  mBDD.getArray2 (outArray,
                  size0,
                  bitCount0,
                  bitCount1) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::relationByDeletingLastVariable (LOCATION_ARGS) const {
  BinaryDecisionDiagramRelation result = *this ;
  const int32_t lastVariableIndex = variableCount () - 1 ;
  result.mBDD = result.mBDD.existsOnBitRange (mConfiguration.bddStartBitIndexForVariable (lastVariableIndex COMMA_THERE),
                                              mConfiguration.bddBitCountForVariable (lastVariableIndex COMMA_THERE)) ;
  result.mConfiguration.deleteLastVariable (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::swap021 (LOCATION_ARGS) const {
  macroAssertThere (variableCount () == 3,
                  "BinaryDecisionDiagramRelation::swap021 error: variableCount () == %lld != 3",
                  (int64_t) variableCount (),
                  0) ;

  const uint32_t bitCount0 = mConfiguration.bddBitCountForVariable (0 COMMA_THERE) ;
  const uint32_t bitCount1 = mConfiguration.bddBitCountForVariable (1 COMMA_THERE) ;
  const uint32_t bitCount2 = mConfiguration.bddBitCountForVariable (2 COMMA_THERE) ;
  const BinaryDecisionDiagram result = mBDD.swap021 (bitCount0, bitCount1, bitCount2) ;
  const BinaryDecisionDiagramRelationConfiguration config = mConfiguration.swap021 (THERE) ;
  return BinaryDecisionDiagramRelation (config, result) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::swap102 (LOCATION_ARGS) const {
  macroAssertThere (variableCount () == 3,
                  "BinaryDecisionDiagramRelation::swap102 error: variableCount () == %lld != 3",
                  (int64_t) variableCount (),
                  0) ;

  const uint32_t bitCount0 = mConfiguration.bddBitCountForVariable (0 COMMA_THERE) ;
  const uint32_t bitCount1 = mConfiguration.bddBitCountForVariable (1 COMMA_THERE) ;
  const uint32_t bitCount2 = mConfiguration.bddBitCountForVariable (2 COMMA_THERE) ;
  const BinaryDecisionDiagram result = mBDD.swap102 (bitCount0, bitCount1, bitCount2) ;
  const BinaryDecisionDiagramRelationConfiguration config = mConfiguration.swap102 (THERE) ;
  return BinaryDecisionDiagramRelation (config, result) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::swap120 (LOCATION_ARGS) const {
  macroAssertThere (variableCount () == 3,
                  "BinaryDecisionDiagramRelation::swap120 error: variableCount () == %lld != 3",
                  (int64_t) variableCount (),
                  0) ;

  const uint32_t bitCount0 = mConfiguration.bddBitCountForVariable (0 COMMA_THERE) ;
  const uint32_t bitCount1 = mConfiguration.bddBitCountForVariable (1 COMMA_THERE) ;
  const uint32_t bitCount2 = mConfiguration.bddBitCountForVariable (2 COMMA_THERE) ;
  const BinaryDecisionDiagram result = mBDD.swap120 (bitCount0, bitCount1, bitCount2) ;
  const BinaryDecisionDiagramRelationConfiguration config = mConfiguration.swap120 (THERE) ;
  return BinaryDecisionDiagramRelation (config, result) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::swap201 (LOCATION_ARGS) const {
  macroAssertThere (variableCount () == 3,
                  "BinaryDecisionDiagramRelation::swap201 error: variableCount () == %lld != 3",
                  (int64_t) variableCount (),
                  0) ;

  const uint32_t bitCount0 = mConfiguration.bddBitCountForVariable (0 COMMA_THERE) ;
  const uint32_t bitCount1 = mConfiguration.bddBitCountForVariable (1 COMMA_THERE) ;
  const uint32_t bitCount2 = mConfiguration.bddBitCountForVariable (2 COMMA_THERE) ;
  const BinaryDecisionDiagram result = mBDD.swap201 (bitCount0, bitCount1, bitCount2) ;
  const BinaryDecisionDiagramRelationConfiguration config = mConfiguration.swap201 (THERE) ;
  return BinaryDecisionDiagramRelation (config, result) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::swap210 (LOCATION_ARGS) const {
  macroAssertThere (variableCount () == 3,
                  "BinaryDecisionDiagramRelation::swap210 error: variableCount () == %lld != 3",
                  (int64_t) variableCount (),
                  0) ;

  const uint32_t bitCount0 = mConfiguration.bddBitCountForVariable (0 COMMA_THERE) ;
  const uint32_t bitCount1 = mConfiguration.bddBitCountForVariable (1 COMMA_THERE) ;
  const uint32_t bitCount2 = mConfiguration.bddBitCountForVariable (2 COMMA_THERE) ;
  const BinaryDecisionDiagram result = mBDD.swap210 (bitCount0, bitCount1, bitCount2) ;
  const BinaryDecisionDiagramRelationConfiguration config = mConfiguration.swap210 (THERE) ;
  return BinaryDecisionDiagramRelation (config, result) ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::exitsOnVariable (const int32_t inVariableIndex
                                        COMMA_LOCATION_ARGS) const {
  BinaryDecisionDiagramRelation result = *this ;
  const uint32_t bitIndex = mConfiguration.bddStartBitIndexForVariable (inVariableIndex COMMA_THERE) ;
  const uint32_t bit_count = mConfiguration.bddBitCountForVariable (inVariableIndex COMMA_THERE) ;
  result.mBDD = result.mBDD.existsOnBitRange (bitIndex, bit_count) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool BinaryDecisionDiagramRelation::operator == (const BinaryDecisionDiagramRelation & inRelation) const {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration COMMA_HERE) ;
  return mBDD == inRelation.mBDD ;
}

//--------------------------------------------------------------------------------------------------

bool BinaryDecisionDiagramRelation::operator != (const BinaryDecisionDiagramRelation & inRelation) const {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration COMMA_HERE) ;
  return mBDD != inRelation.mBDD ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelation BinaryDecisionDiagramRelation::transposedRelation (LOCATION_ARGS) const {
  macroAssertThere (variableCount () == 2,
                  "BinaryDecisionDiagramRelation::transposedRelation error: variableCount () == %lld != 2",
                  (int64_t) variableCount (),
                  0) ;
  const uint32_t bitSize0 = mConfiguration.bddBitCountForVariable (0 COMMA_THERE) ;
  const uint32_t bitSize1 = mConfiguration.bddBitCountForVariable (1 COMMA_THERE) ;
  const uint32_t totalSize = (uint32_t) (bitSize0 + bitSize1) ;
  uint32_t * tab = nullptr ;
  macroMyNewArray (tab, uint32_t, totalSize) ;
  for (uint32_t i=0 ; i<bitSize0 ; i++) {
    tab [i] = (uint32_t) (i + bitSize1) ;
  }
  for (uint32_t j=0 ; j<bitSize1 ; j++) {
    tab [j + bitSize0] = j ;
  }
  const BinaryDecisionDiagram r = mBDD.substitution (tab, totalSize COMMA_HERE) ;
  macroMyDeleteArray (tab) ;
//---
  const String name0 = mConfiguration.nameForVariable (0 COMMA_HERE) ;
  const BinaryDecisionDiagramRelationSingleType type0 = mConfiguration.typeForVariable (0 COMMA_HERE) ;
  const String name1 = mConfiguration.nameForVariable (1 COMMA_HERE) ;
  const BinaryDecisionDiagramRelationSingleType type1 = mConfiguration.typeForVariable (1 COMMA_HERE) ;
  BinaryDecisionDiagramRelationConfiguration config ;
  config.addVariable (name1, type1) ;
  config.addVariable (name0, type0) ;
  return BinaryDecisionDiagramRelation (config, r) ;
}

//--------------------------------------------------------------------------------------------------
