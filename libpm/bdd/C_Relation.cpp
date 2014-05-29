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

void C_Relation::operator &= (const C_Relation & inRelation) {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration) ;
  mBDD &= inRelation.mBDD ;
}

//-----------------------------------------------------------------------------*

void C_Relation::operator |= (const C_Relation & inRelation) {
  mConfiguration.checkIdenticalTo (inRelation.mConfiguration) ;
  mBDD |= inRelation.mBDD ;
}

//-----------------------------------------------------------------------------*

C_Relation C_Relation::operator & (const C_Relation & inRelation) const {
  C_Relation result = *this ;
  result &= inRelation ;
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
    const uint32_t startRelationVariableCount = inStartStates.variableCount () ;
    const uint32_t accessibilityVariableCount = variableCount () ;
  #endif
  MF_AssertThere ((startRelationVariableCount + startRelationVariableCount) == accessibilityVariableCount,
                  "C_Relation::accessibleStatesFrom error: start state has %lld variables, accessibility relation has %lld variables",
                  (int64_t) startRelationVariableCount,
                  (int64_t) accessibilityVariableCount) ;
  const uint32_t bitCount = inStartStates.bitCount () ;
//--- Current object is edge [x, y].
//    Accessible states set is computed by:
// accessible [x] += initial [x] | exists y (accessible [y] & edge [y, x]) ;
//
//--- Compute edge [y, x]
  const C_BDD edgeYX = mBDD.swap21 (bitCount, bitCount) ;
  C_BDD accessible = inStartStates.mBDD ;
  C_BDD v ;
  C_BDD accessibleY ;
  int32_t iterationCount = 0 ;
  do{
    v = accessible ;
    iterationCount ++ ;
    accessibleY = accessible.translate (bitCount, bitCount) ;
    accessible |= (accessibleY & edgeYX).existsOnBitsAfterNumber (bitCount) ;
  }while (v != accessible) ;
  if (outIterationCount != NULL) {
    * outIterationCount = iterationCount ;
  }
  return C_Relation (inStartStates.configuration(), accessible) ;

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
