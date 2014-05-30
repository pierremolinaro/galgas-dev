//
//  C_Relation.cpp
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//  Copyright (c) 2014 IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#include "bdd/C_Relation.h"
#include "utilities/C_SharedObject.h"

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (void) :
mConfiguration (),
mBDD () {
}

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (const C_RelationConfiguration & inConfiguration,
                        const C_BDD inBDD) :
mConfiguration (inConfiguration),
mBDD (inBDD) {
}

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (const C_RelationConfiguration & inConfiguration,
                        const bool isFull) :
mConfiguration (inConfiguration),
mBDD () {
  if (isFull) {
    mBDD.setToTrue () ;
  }
}

//-----------------------------------------------------------------------------*

C_Relation::~C_Relation (void) {
}

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (const C_Relation & inSource) :
mConfiguration (inSource.mConfiguration),
mBDD (inSource.mBDD) {
}

//-----------------------------------------------------------------------------*

C_Relation & C_Relation::operator = (const C_Relation & inSource) {
  if (this != & inSource) {
    mConfiguration = inSource.mConfiguration ;
    mBDD = inSource.mBDD ;
  }
  return *this ;
}

//-----------------------------------------------------------------------------*

void C_Relation::addVariable (const C_String & inVariableName,
                              const C_RelationSingleType & inType) {
  mConfiguration.addVariable (inVariableName, inType) ;
}

//-----------------------------------------------------------------------------*

void C_Relation::appendConfiguration (const C_RelationConfiguration & inConfiguration) {
  mConfiguration.appendConfiguration (inConfiguration) ;
}

//-----------------------------------------------------------------------------*

C_RelationConfiguration C_Relation::configuration (void) const {
  return mConfiguration ;
}

//-----------------------------------------------------------------------------*

C_BDD C_Relation::bdd (void) const {
  return mBDD ;
}

//-----------------------------------------------------------------------------*

void C_Relation::setToEmpty (void) {
  mBDD.setToFalse () ;
}

//-----------------------------------------------------------------------------*

void C_Relation::setToFull (void) {
  mBDD.setToTrue () ;
}

//-----------------------------------------------------------------------------*

C_Relation::C_Relation (const C_RelationConfiguration & inConfiguration,
                        const int32_t inVariableIndex,
                        const C_BDD::compareEnum inComparaison,
                        const uint64_t inConstant
                        COMMA_LOCATION_ARGS) :
mConfiguration (inConfiguration),
mBDD () {
  mBDD = C_BDD::varCompareConst (inConfiguration.bddStartBitIndexForVariable (inVariableIndex COMMA_THERE),
                                 inConfiguration.bddBitCountForVariable (inVariableIndex COMMA_THERE),
                                 inComparaison,
                                 inConstant) ;
}

//-----------------------------------------------------------------------------*

void C_Relation::andWith (const C_Relation & inRelation COMMA_LOCATION_ARGS) {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration COMMA_THERE) ;
  mBDD &= inRelation.mBDD ;
}

//-----------------------------------------------------------------------------*

void C_Relation::operator |= (const C_Relation & inRelation) {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration COMMA_HERE) ;
  mBDD |= inRelation.mBDD ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::andOp (const C_Relation & inRelation COMMA_LOCATION_ARGS) const {
  C_Relation result = *this ;
  result.andWith (inRelation COMMA_THERE) ;
  return result ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::operator | (const C_Relation & inRelation) const {
  C_Relation result = *this ;
  result |= inRelation ;
  return result ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::operator ~ (void) const {
  C_Relation result = *this ;
  result.mBDD.negate () ;
  return result ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::accessibleStatesFrom (const C_Relation & inStartStates,
                                             int32_t * outIterationCount
                                             COMMA_LOCATION_ARGS) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    const int32_t startRelationVariableCount = inStartStates.variableCount () ;
    const int32_t accessibilityVariableCount = variableCount () ;
  #endif
  MF_AssertThere ((startRelationVariableCount + startRelationVariableCount) == accessibilityVariableCount,
                  "C_Relation::accessibleStatesFrom error: start state has %lld variables, accessibility relation has %lld variables",
                  (int64_t) startRelationVariableCount,
                  (int64_t) accessibilityVariableCount) ;
  return C_Relation (
    inStartStates.configuration(),
    mBDD.accessibleStates (inStartStates.mBDD, inStartStates.bitCount (), outIterationCount)
  ) ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::transitiveClosure (int32_t * outIterationCount) const {
  return C_Relation (
    mConfiguration,
    mBDD.transitiveClosure (bitCount () / 2, outIterationCount)
  ) ;
}

//-----------------------------------------------------------------------------*

bool C_Relation::containsValue (const int32_t inVariableIndex,
                                const uint64_t inValue
                                COMMA_LOCATION_ARGS) const {
  return mBDD.containsValue64 (inValue,
                               mConfiguration.bddStartBitIndexForVariable (inVariableIndex COMMA_THERE),
                               mConfiguration.bddBitCountForVariable (inVariableIndex COMMA_THERE)) ;
}

//-----------------------------------------------------------------------------*

void C_Relation::getValueArray (TC_UniqueArray <uint64_t> & outArray) const {
  mBDD.buildValue64Array (outArray, mConfiguration.bitCount ()) ;
}

//-----------------------------------------------------------------------------*

uint64_t C_Relation::value64Count (void) const {
  return mBDD.valueCount64 (mConfiguration.bitCount ()) ;
}

//-----------------------------------------------------------------------------*
//   getArray                                                                  *
//-----------------------------------------------------------------------------*

void C_Relation::getArray (TC_UniqueArray <TC_UniqueArray <int32_t> > & outArray
                           COMMA_LOCATION_ARGS) const {
  MF_AssertThere (variableCount () == 2,
                  "C_Relation::getArray error: variableCount () == %lld != 2",
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

//-----------------------------------------------------------------------------*

C_Relation C_Relation::relationByDeletingLastVariable (LOCATION_ARGS) const {
  C_Relation result = *this ;
  const int32_t lastVariableIndex = variableCount () - 1 ;
  result.mBDD = result.mBDD.existsOnBitRange (mConfiguration.bddStartBitIndexForVariable (lastVariableIndex COMMA_THERE),
                                              mConfiguration.bddBitCountForVariable (lastVariableIndex COMMA_THERE)) ;
  result.mConfiguration.deleteLastVariable (THERE) ;
  return result ;
}

//-----------------------------------------------------------------------------*
